[] execVM "ECL\marker.sqf";

if (isServer) then {
//[] execVM "\z\addons\dayz_server\addons\ECL\initecl.sqf";
call compile preprocessFileLineNumbers "\z\addons\dayz_server\addons\ECL\initecl.sqf";
};