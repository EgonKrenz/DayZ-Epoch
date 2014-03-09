/*	
	For DayZ Epoch
	Addons Credits: Jetski Yanahui by Kol9yN, Zakat, Gerasimow9, YuraPetrov, zGuba, A.Karagod, IceBreakr, Sahbazz
*/
startLoadingScreen ["","RscDisplayLoadCustom"];
cutText ["","BLACK OUT"];
enableSaving [false, false];

//REALLY IMPORTANT VALUES
dayZ_instance =	24;				//The instance
dayzHiveRequest = [];
initialized = false;
dayz_previousID = 0;

//disable greeting menu 
player setVariable ["BIS_noCoreConversations", true];
//disable radio messages to be heard and shown in the left lower corner of the screen
enableRadio false;
// May prevent "how are you civillian?" messages from NPC
enableSentences false;

// DayZ Epochconfig
spawnShoremode = 1; // Default = 1 (on shore)
spawnArea= 1500; // Default = 1500
// 
MaxVehicleLimit = 166; // Default = 50
MaxDynamicDebris = 500; // Default = 100
dayz_MapArea = 18000; // Default = 10000

dayz_minpos = -1000; 
dayz_maxpos = 26000;

dayz_paraSpawn = true;

dayz_sellDistance_vehicle = 10;
dayz_sellDistance_boat = 30;
dayz_sellDistance_air = 40;

dayz_maxAnimals = 5; // Default: 8
dayz_tameDogs = true;
dayz_poleSafeArea = 40; // Generator Zedkillrange
DynamicVehicleDamageLow = 10; // Default: 0
DynamicVehicleDamageHigh = 90; // Default: 100

DZE_BuildOnRoads = true; // Default: False
DZE_requireplot = 0;
DZE_BuildingLimit = 600;
DZE_HeliLift = true;
DZE_ConfigTrader = false;

ELE_MaxRange = 100; // maximum range the elevator can travel / stop points can be built (in meter)
ELE_Speed = 2; // speed of the elevator (meters per second)
ELE_StopWaitTime = 0; // disable the wait time if you call the elevator

EpochEvents = [["any","any","any","any",30,"crash_spawner"],["any","any","any","any",0,"crash_spawner"],["any","any","any","any",15,"supply_drop"]];
dayz_fullMoonNights = true;

//Load in compiled functions
call compile preprocessFileLineNumbers "fixes\variables.sqf";				//Initilize the Variables (IMPORTANT: Must happen very early)
progressLoadingScreen 0.1;
call compile preprocessFileLineNumbers "\z\addons\dayz_code\init\publicEH.sqf";				//Initilize the publicVariable event handlers
progressLoadingScreen 0.2;
call compile preprocessFileLineNumbers "\z\addons\dayz_code\medical\setup_functions_med.sqf";	//Functions used by CLIENT for medical
progressLoadingScreen 0.4;
call compile preprocessFileLineNumbers "fixes\compiles.sqf";				//Compile regular functions
call compile preprocessFileLineNumbers "custom\snap_build\compiles.sqf";
progressLoadingScreen 0.5;
fnc_usec_selfActions = compile preprocessFileLineNumbers "fixes\fn_selfActions.sqf";
call compile preprocessFileLineNumbers "server_traders.sqf";				//Compile trader configs
progressLoadingScreen 1.0;

"filmic" setToneMappingParams [0.153, 0.357, 0.231, 0.1573, 0.011, 3.750, 6, 4]; setToneMapping "Filmic";

// Missions
dayz_spaceInterrupt = compile preprocessFileLineNumbers "extras\debug_monitor\dayz_spaceInterrupt.sqf";
execVM "addons\Missions\init.sqf";

if (isServer) then {
	//Compile vehicle configs
	call compile preprocessFileLineNumbers "\z\addons\dayz_server\missions\DayZ_Epoch_24.Napf\dynamic_vehicle.sqf";				
	// Add trader citys
	_nil = [] execVM "\z\addons\dayz_server\missions\DayZ_Epoch_24.Napf\mission.sqf";

	_serverMonitor = 	[] execVM "\z\addons\dayz_code\system\server_monitor.sqf";
};

if (!isDedicated) then {
	//Conduct map operations
	0 fadeSound 0;
	waitUntil {!isNil "dayz_loadScreenMsg"};
	dayz_loadScreenMsg = (localize "STR_AUTHENTICATING");
	
	//Run the player monitor
	_id = player addEventHandler ["Respawn", {_id = [] spawn player_death;}];
	_playerMonitor = 	[] execVM "\z\addons\dayz_code\system\player_monitor.sqf";	

	//Lights
	//[false,12] execVM "\z\addons\dayz_code\compile\local_lights_init.sqf";
	
	//Elevator
	["elevator"] execVM "elevator\elevator_init.sqf";

	//DZAI Radio
	_nul = [] execVM "DZAI_Client\dzai_initclient.sqf";
};
//#include "\z\addons\dayz_code\system\REsec.sqf"
//Start Dynamic Weather
execVM "\z\addons\dayz_code\external\DynamicWeatherEffects.sqf";

#include "\z\addons\dayz_code\system\BIS_Effects\init.sqf"

// Epoch Admin Tools
AdminList = [
"519170", // <Admin In-Game Name>
"9999999" // <Admin In-Game Name>
];
ModList = [
"266626AX", // <Admin In-Game Name>
"5635330" // <Admin In-Game Name>
];
[] execVM "admintools\Activate.sqf";
[] execVM "ECL\ECLinit.sqf";
[] execVM "Scripts\safearea\base_SafeArea.sqf";
[] execVM "Scripts\safezone\safezoneposition.sqf";
[] execVM "Scripts\safezone\safezone.sqf";
[] execVM "extras\debug_monitor\debug_monitor.sqf";
[] execVM "extras\debug_monitor1\debug_monitor1.sqf";
[] execVM "R3F_ARTY_AND_LOG\init.sqf";