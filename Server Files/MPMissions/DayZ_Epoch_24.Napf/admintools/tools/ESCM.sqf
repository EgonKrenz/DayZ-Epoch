if (isServer) then {

server_updateObject =		call compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_updateObject.sqf";
server_deleteObj =			call compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_deleteObj.sqf";

private ["_ct","_option"];

_ct = cursorTarget;

_option = _this select 0;
switch (_option) do {
	case "update": {
		[_ct, "all"] call server_updateObject;
	};
	case "kill": {
		[_ct, "killed"] call server_updateObject;
	};
	case "del": {
		[_ct, ""] call server_deleteObj;
	};
	case "del2": {
		[_ct] call server_deleteObj;
	};
	case "del3": {
		cursorTarget = call server_deleteObj;
	};
	case "del4": {
		_ct = call server_deleteObj;
	};
};
};