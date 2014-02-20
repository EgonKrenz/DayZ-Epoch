//[] execVM "ECL\marker.sqf";
//[] execVM "ECL\crates.sqf";
//[] execVM "ECL\napfsz.sqf";
//[] execVM "ECL\t2sachs.sqf";
//[] execVM "ECL\t1trueb.sqf";
//[] execVM "ECL\t3neisle.sqf";
if (isServer) then {
call compile preprocessFileLineNumbers "\z\addons\dayz_server\addons\ECL\crates.sqf";
//call compile preprocessFileLineNumbers "\z\addons\dayz_server\addons\ECL\napfsz.sqf";
call compile preprocessFileLineNumbers "\z\addons\dayz_server\addons\ECL\t1trueb.sqf";
call compile preprocessFileLineNumbers "\z\addons\dayz_server\addons\ECL\t1hasle.sqf";
call compile preprocessFileLineNumbers "\z\addons\dayz_server\addons\ECL\t2sachs.sqf";
call compile preprocessFileLineNumbers "\z\addons\dayz_server\addons\ECL\t3milan.sqf";
call compile preprocessFileLineNumbers "\z\addons\dayz_server\addons\ECL\t4neisle.sqf";
};