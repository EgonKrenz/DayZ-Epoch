if (isServer) then {

call compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_updateObject.sqf";

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
};
};