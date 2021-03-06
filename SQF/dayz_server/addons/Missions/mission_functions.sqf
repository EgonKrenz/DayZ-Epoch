mission_heli_call = {
	_wpSelect 			= _this select 0;
	_heli 				= (_this select 0) select 0;
	_unitGroup 			= (_this select 0) select 1;
	
	// Code From DZAI DZAI_heliRandomPatrol
	_wpSelect = [_wpSelect,50+(random 300),(random 360),true] call SHK_pos;
	[_unitGroup,0] setWPPos _wpSelect; 
	[_unitGroup,1] setWPPos _wpSelect;
	if ((waypointType [_unitGroup,1]) == "MOVE") then {
		if ((random 1) < 0.275) then {
			[_unitGroup,1] setWaypointType "SAD";
			[_unitGroup,1] setWaypointTimeout [20,25,30];
			_unitGroup setVariable ["DetectPlayersWide",true];
		};
	} else {
		[_unitGroup,1] setWaypointType "MOVE";
		[_unitGroup,1] setWaypointTimeout [3,6,9];
	};
	//[_unitGroup,0] setWaypointCompletionRadius 150;
	_unitGroup setCurrentWaypoint [_unitGroup,0];
	(vehicle (leader _unitGroup)) flyInHeight (100 + (random 40));
};


mission_heli_array_clean = {
	// Remove Dead Helis from Array
	while {true} do {
		_x = 0;
		_last_index = count(mission_dzai_heli_array);
		while {(_x < _last_index)} do {
			if (!alive((mission_dzai_heli_array select _x) select 0)) then {
				mission_dzai_heli_array set [_x, "Delete Me"];
				mission_dzai_heli_array = mission_dzai_heli_array - ["Delete Me"];
				_last_index = _last_index - 1;
			} else {
				_x = _x + 1;
			};
		};
		sleep 1800;
	};
};


mission_heli_call_check = {
	_pos = _this select 0;
	_x = 0;
	_last_index = count(mission_dzai_heli_array);
	
	while {(_x < _last_index)} do {
		if (alive((mission_dzai_heli_array select _x) select 0)) then {
			// Check Last Time Heli Was Called <= 15 mins
			_last_time_call = (mission_dzai_heli_array select _x) select 2;
			if ((_last_time_call + 900) <= time) then {
				// Call Heli + Update Last Called Time
				_array = mission_dzai_heli_array select _x;
				[_pos, _array] call mission_heli_call_check;
				//(mission_dzai_heli_array select _x) select 2 = time;
				mission_dzai_heli_array set [_x, [_array select 0, _array select 1, time]];
				_x = _last_index;
			};
		};
		_x = _x + 1;
	};
};

mission_add_hunter = {

	//RYD_Hunter_FSM_handle = [hunter1,mission_hunter_smell,mission_hunter_eyes,(units (group hunted1)),200,1] execFSM "\z\addons\dayz_server\addons\Missions\ai\RYD_Hunter\RYD_Hunter.fsm";
	//RYD_Hunter_FSM_handle ["_hunted", (units (group hunted1))];
};


mission_add_marker = {
	private ["_marker_name","_position","_color","_marker"];
    
    _marker_name = _this select 0;
	_position = _this select 1;
	_color = _this select 2;
	if ((count _this) > 3) then {
		mission_markers = mission_markers + [[_marker_name, _position, _color]];
	};
	
	_marker = createMarker [_marker_name, _position];
	_marker setMarkerColor _color;
	_marker setMarkerShape "ELLIPSE";
	_marker setMarkerBrush "Grid";
	_marker setMarkerSize [300,300];
};


mission_delete_marker = {
	private ["_index","_marker","_last_index","_marker_name"];

    _marker_name = _this select 0;	
	deletemarker _marker_name;
	if ((count _this) > 1) then {
		_last_index = count mission_markers;
		_index = 0;
		while {(_index < _last_index)} do
		{
			_marker = mission_markers select _index;
			if ((_marker select 0) == _marker_name) then {
				mission_markers set [_index, "delete me"];
				mission_markers = mission_markers - ["delete me"];
				_index = _last_index;  // Map Markers Names are unique
			};
			_index = _index + 1;
		};
	};
};


mission_sync_markers = {
	{
		[_x select 0] call mission_delete_marker;
		_x call mission_add_marker;
	} forEach mission_markers;
};


mission_find_buildings = {
	private ["_list","_type"];
    
	_type = _this select 0;
	_list = (getMarkerpos "center") nearObjects [_type,20000];
	_list
};


mission_timer = {
    private["_low_value","_high_value","_rand","_return"];
    _low_value = _this select 0;
    _high_value = _this select 1;
    
    _rand = round(random (_high_value - _low_value));
    _return = _low_value + _rand;
    
    _return
};


mission_nearbyPlayers = {
    private ["_pos", "_isNearList", "_isNear"];
    _pos = _this select 0;
    
    _isNearList = _pos nearEntities ["CAManBase", mission_blacklist_players_range];
    _isNear = false;
    
    // Check for Players & Ignore SARGE AI
    if ((count(_isNearList)) > 0) then {
        {
            if (isPlayer _x) then {
                _isNear = true;
            };
        } forEach _isNearList;
    };
    
    if !(_isNear) then {
        _isNearList = _pos nearEntities [["LandVehicle", "Air"], mission_blacklist_players_range];
        {
            {
                if (isPlayer _x) then {
                    _isNear = true;
                };
            } forEach (crew _x);
        } forEach _isNearList;
    };
    _isNear
};


mission_nearbyBlackspot = {
    private ["_position", "_isNear", "_nearby"];
    _position = _this select 0;
    _isNear = false;
    
    _nearby = nearestObjects [_position, ["Plastic_Pole_EP1_DZ", "Info_Board_EP1"], mission_blacklist_range];
    
    if ((count _nearby) > 0) then {
        _isNear = true;
    };
    _isNear
};


mission_vehicle_pool = {
    private ["_veh_pool", "_vehicle", "_velimit", "_qty", "_veh_pool"];
    _veh_pool = [];
    {
        _vehicle = _x select 0;
        _velimit = _x select 1;
        _qty = {_x == _vehicle} count serverVehicleCounter;
        if (isNil {_qty}) then {
            _qty = 0;
        };
        if (_qty <= _velimit) then {
			_veh_pool set [count _veh_pool,[_vehicle, _velimit]];
        };
    } forEach mission_dynamic_ai_vehicles;
    _veh_pool
};


mission_spawn_ai = {
    private ["_position","_group","_marker_name","_type","_range","_num_of_ai","_weapongrade","_trigger"];
    
	_marker_name = "Mission_" + (_this select 0);
	_type = _this select 1;
    _position = _this select 2;
	_range = _this select 3;
    _num_of_ai = _this select 4;
    _weapongrade = _this select 5;

	_group = objNull;
	
	_trigger = createTrigger ["EmptyDetector", _position];
	_trigger setTriggerArea [_range, _range, 0, false];
	_trigger setVariable ["respawn", false];
    missionNamespace setVariable [_marker_name, _trigger];  
	
	_group = [_num_of_ai, "", _range, _trigger, _weapongrade, ""] call fnc_spawnBandits_custom;
	/*
	switch (_type) do {
		case ("AI") :
		{
			_group = [_num_of_ai, "", _range, _trigger, _weapongrade, ""] call fnc_spawnBandits_custom;
		};
		case ("AI_HELI"):
		{
			_group = [_num_of_ai, "", _range, _trigger, _weapongrade, ""] call fnc_spawnBandits_custom;
		};
		case ("AI_LAND"):
		{
			_group = [_num_of_ai, "", _range, _trigger, _weapongrade, ""] call fnc_spawnBandits_custom;
		};
	};
	*/
	[_trigger, _group]
};
	

mission_spawn_crates = {
    private ["_position","_type","_crate"];
    
    _position = _this select 0;
    _type = _this select 1;
    
    _crate = createVehicle [_type, _position, [], 0, "CAN_COLLIDE"];
    clearWeaponCargoGlobal _crate;
    clearMagazineCargoGlobal _crate;
	_crate setVariable ["permaLoot", true];  // Stop Server Cleanup Killing Box
	// Dont Spawn Loot till Player Nearby.. Help prevent AI from Looting Crates
    _crate
};


mission_spawn_vehicle = {
    private ["_vehicle_class", "_position", "_spawnDMG", "_dir", "_vehicle", "_objPosition", "_num", "_allCfgLoots", "_iClass", "_itemTypes", "_index", "_weights", "_cntWeights", "_index", "_itemType"];
    
    
    _vehicle_class = _this select 0;
    _position = _this select 1;
    _spawnDMG = _this select 2;
      
    _dir = round(random 180);
    
    _vehicle = createVehicle [_vehicle_class, _position, [], 0, "CAN_COLLIDE"];
	clearWeaponCargoGlobal _vehicle;
	clearMagazineCargoGlobal _vehicle;
	[_vehicle_class,_vehicle] execVM "\z\addons\dayz_server\compile\remove_ammo.sqf";
    _vehicle setdir _dir;
    _vehicle setpos _position;	
    _objPosition = getPosATL _vehicle;
    
    // Add 0-4 loots to vehicle using random cfgloots 
    _num = floor(random 4);
    _allCfgLoots = ["trash","civilian","food","generic","medical","military","policeman","hunter","worker","clothes","militaryclothes","specialclothes","trash"];
    
    for "_x" from 1 to _num do {
        _iClass = _allCfgLoots call BIS_fnc_selectRandom;
        
        _itemTypes = [] + ((getArray (configFile >> "cfgLoot" >> _iClass)) select 0);
        _index = dayz_CLBase find _iClass;
        _weights = dayz_CLChances select _index;
        _cntWeights = count _weights;
        
        _index = floor(random _cntWeights);
        _index = _weights select _index;
        _itemType = _itemTypes select _index;
        _vehicle addMagazineCargoGlobal [_itemType,1];
    };
    [_vehicle, [_dir, _objPosition], _vehicle_class, _spawnDMG, "0"] call server_publishVeh;
    [_vehicle, mission_despawn_timer_min] spawn mission_kill_vehicle;
    serverVehicleCounter set [count serverVehicleCounter, _vehicle_class];
};


mission_kill_vehicle_group = {
    private ["_units", "_vehicle"];
    _units = units (_this select 0);
    _vehicle = objNull;
    
    {
        if ((vehicle _x) != _x) exitWith {
            _vehicle = (vehicle _x);
        };
    } forEach _units;
    
    if ((_vehicle isKindOf "LandVehicle") || (_vehicle isKindOf "Air") || (_vehicle isKindOf "StaticWeapon")) then {
        [_vehicle, mission_despawn_timer_min] spawn mission_kill_vehicle;		
    } else {
        diag_log format ["DEBUG: MISSIONS: Kill Vehicle Group: Unknown: _vehicle: %1", _vehicle];
    };
};


mission_kill_vehicle = {
    private ["_vehicle","_timer","_blowup","_exit"];
    
    _vehicle = _this select 0;
    _timer = time + (_this select 1);
    _blowup = true;
    _exit = false;
    
    waitUntil{
        sleep 1;
        if (alive _vehicle) then {
            {
                if ((isPlayer _x) && (_x distance _vehicle <= 10)) then {
                    _blowup = false;
                    _exit = true;
                };
            } forEach playableUnits;
        } else {
            _blowup = true;
            _exit = true;
        };
        if (time > _timer) then {
            _blowup = true;
            _exit = true;
        };
        _exit
    };
    
    [_vehicle, "all"] spawn server_updateObject;
    sleep 5;
    if (_blowup) then {
        _vehicle setDamage 1;
        [_vehicle, "DAYZ MISSION SYSTEM"] call vehicle_handleServerKilled;
    };
};


mission_spawn = {
    private ["_chance","_position","_mission_type","_isNearPlayer","_isNearBlackspot","_x","_mission_id"];
    diag_log ("DEBUG: Mission Code: Starting New Mission");
    
	_mission_id = _this select 0;
	
    // Spawn around buildings and 50% near roads
    _position = [];
    _mission_type = "";
    _chance = floor(random 100);
    
    // Try 10 Times to Find a Mission Spot
	_x = 1;
	while {(_x <= 20)} do {
		call 
			{
				if (_chance <= 25) exitWith {
					_mission_type = "Road";
					_position = RoadList call BIS_fnc_selectRandom;
					_position = _position modelToWorld [0,0,0];
					_position = [_position,0,100,5,0,200,0] call BIS_fnc_findSafePos;
				};
				if (_chance <= 60) exitWith {
					_mission_type = "Building";		
					_position = BuildingList call BIS_fnc_selectRandom;
					_position = _position modelToWorld [0,0,0];
					_position = [_position,0,100,5,0,200,0] call BIS_fnc_findSafePos;
				};
				if (_chance <= 80) exitWith {
					_mission_type = "Open Area";	
					_position = [getMarkerPos "center",0,5500,100,0,200,0] call BIS_fnc_findSafePos;
				};
/*				if (_chance <= 100) exitWith {
					_mission_type = "Crash Site";	  
					_position = RoadList call BIS_fnc_selectRandom;
					_position = _position modelToWorld [0,0,0];
					_position = [_position,0,200,20,0,200,0] call BIS_fnc_findSafePos;
				};
*/			};

		if ((count _position) == 2) then {			
			_isNearPlayer = [_position] call mission_nearbyPlayers;
			_isNearBlackspot = [_position] call mission_nearbyBlackspot;
			if ((!_isNearPlayer) && (!_isNearBlackspot)) then {
				_x = 20;
			} else {
				_position = [];
			};
		} else {
			_position = [];
		};
		_x = _x + 1;
		sleep 1;
    };
    
    // only proceed if two params otherwise BIS_fnc_findSafePos failed and may spawn in air
    if ((count _position) == 2) then {
        diag_log ("DEBUG: Mission Code: Position Good");
		switch (_mission_type) do 
		{
			case "Crash Site":
			{
//				[_mission_id, _position] call mission_spawn_crash;
			};
			default
			{
				[_mission_id, _position, _mission_type] call mission_spawn_standard;
			};
		};
    } else {
        diag_log ("DEBUG: Mission Code: BIS fnc findsafepos failed giving up on mission");
    };
};