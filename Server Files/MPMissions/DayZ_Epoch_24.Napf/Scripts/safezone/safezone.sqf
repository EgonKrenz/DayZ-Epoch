/*
 Name: Safezone
 Date: 17/7/2013
 Mod: Dayz Epoch
*/

Private ["_EH_Fired"];
 
if (isNil "inSafezone") then {
    inSafezone = false;
};
 
while {true} do {
    waitUntil { inSafeZone };
    titleText [format["Entering Safe Zone! Weapons off, and shooting wastes ammo."],"PLAIN DOWN"]; titleFadeOut 4;
 
    waitUntil { player == vehicle player };

	theCar = vehicle LandVehicle;	
    thePlayer = vehicle player;
    _EH_Fired = thePlayer addEventHandler ["Fired", {
        titleText ["You can not fire your weapon in a safe zone.","PLAIN DOWN"]; titleFadeOut 4;
        NearestObject [_this select 0,_this select 4] setPos[0,0,0];
    }];
 
    player_zombieCheck = {};
    player_fired = {};
    fnc_usec_damageHandler = {};
//   fnc_usec_unconscious  = {}; //wenn aktiviert kommt die Sanduhr nicht in der Trader Zone.
    thePlayer removeAllEventHandlers "handleDamage";
    thePlayer addEventHandler ["handleDamage", {false}];
    thePlayer allowDamage false;

	theCar removeAllEventHandlers "handleDamage";
	theCar addEventHandler ["handleDamage", {false}];
	theCar allowDamage false;
 
    waitUntil { !inSafeZone };
 
    titleText [format["Exiting Safe Zone!"],"PLAIN DOWN"]; titleFadeOut 4;
    thePlayer removeEventHandler ["Fired", _EH_Fired];
 
    player_zombieCheck = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_zombieCheck.sqf";
    player_fired = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_fired.sqf";
    fnc_usec_damageHandler = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_damageHandler.sqf";
//    fnc_usec_unconscious = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_unconscious.sqf"; //wenn aktiviert kommt die Sanduhr nicht in der Trader Zone.
    thePlayer addEventHandler ["handleDamage", {true}];
    thePlayer removeAllEventHandlers "handleDamage";
    thePlayer allowDamage true;	
    theCar addEventHandler ["handleDamage", {true}];
    theCar removeAllEventHandlers "handleDamage";
    theCar allowDamage true;
};