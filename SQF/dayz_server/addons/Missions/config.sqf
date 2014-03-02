/* ********************************************************************************* */
/* ********************************************************************************* */
// Settings
/* ********************************************************************************* */

// Mission System won't start a mission if server fps < mission_fps_check
mission_fps_check = 5;
// Min Number of Players before mission will spawn
mission_player_check = 1;

// Mission Debug Monitor
// 	  To use your own debug monitor add the variables customMission to your debug monitor formated text
//    		Your first variable =  customMissionImage
//			Your second variable = "extras\debug_monitor\pirates.paa"
//		Look @ the supplied debug monitor to see how its done.
//
//	  If u dont like the debug monitor  set to false, it will display text warnings in the middle of the screen.
mission_warning_debug = true;


// Number of Missions
mission_min_number = 2;
mission_max_number = 4;

// Min / Max values for Timer, when to check to spawn a mission
mission_spawn_timer_min = 650;
mission_spawn_timer_max = 1500;

// Note Vehicles are destroyed at min timer value... 
// Its on my todo list to code it to kill vehicles @ actual end of mission
mission_despawn_timer_min = 2700;
mission_despawn_timer_max = 3600;

// Distance around Plotpoles + Info Boards (i.e trader cities)
// To blacklist from spawning missions at
mission_blacklist_range = 300;

// Distance around Players
// To blacklist from spawning missions at
mission_blacklist_players_range = 800;



/* ********************************************************************************* */
/* ********************************************************************************* */
// Mission Buildings
/* ********************************************************************************* */

mission_buildings = [
					["Land_Tovarna2",[]],
					["Land_Panelak2",[]],
					["Land_Panelak",[]],
					["Land_HouseV2_02_Interier",[]],
					["Land_A_Office01",[]],
					["Land_A_BuildingWIP",[]]
					];


/* ********************************************************************************* */
/* ********************************************************************************* */
// RYD Hunter AI
// 		This is just placeholder atm... Code is not yet working... Dont change the values
/* ********************************************************************************* */

mission_hunter_fps_check = 10;

mission_hunter_chance = 10;  // 1-100 Chance of Hunter Spawning @ Mission Site

mission_hunter_smell = 3;
mission_hunter_eyes = [1.5,1.5]; // light factor,movement factor

mission_hunter = false;  // Random Hunter on Map that will wander + try to ill players
mission_hunter_random = false;  // Random Hunter on Map that will wander + try to ill players


/* ********************************************************************************* */
/* ********************************************************************************* */
// LOOT
/* ********************************************************************************* */

// Type of Crates to Spawn with Loot
mission_crates = ["GuerillaCacheBox","RUVehicleBox","UNBasicWeapons_EP1","USVehicleBox"];

mission_loot_tables = ["Military", "MilitaryIndustrial", "MilitarySpecial", "Supermarket", "Industrial", "HeliCrash_No50s", "SupplyDrop", "Farm"];

// Number of Crates to Spawn
mission_num_of_crates = 5;

// Number of Crates to Spawn, when there is a vehicle spawn aswell
mission_num_of_crates_plus_vehicle = 2;

/* ********************************************************************************* */
/* ********************************************************************************* */
// VEHICLES
/* ********************************************************************************* */

// Type of Land Vehicles to AI
mission_patrol_land_vehicles = [
"HMMWV_M1035_DES_EP1",
"HMMWV_M1151_M2_CZ_DES_EP1_DZE",
"HMMWV_M998A2_SOV_DES_EP1_DZE",
"LandRover_MG_TK_EP1_DZE",
"LandRover_Special_CZ_EP1_DZE",
"Pickup_PK_GUE_DZE",
"Pickup_PK_INS_DZE",
"Pickup_PK_TK_GUE_EP1_DZE",
"UAZ_MG_TK_EP1_DZE"
];

// Type of Vehicles to Spawn @ Missions to Loot
mission_dynamic_ai_vehicles = [
["DSHKM_TK_INS_EP1",5],
["M2StaticMG_US_EP1",5],
["AGS_TK_INS_EP1",1],
["MK19_TriPod_US_EP1",1],
["SPG9_TK_INS_EP1",1],
["KORD_high_TK_EP1",1],
["BAF_L2A1_ACOG_Tripod_W",1],
["SearchLight",12],
//["AH6X_DZ",1],
//["AN2_DZ",1],
//["ArmoredSUV_PMC_DZE",1],
["car_hatchback",3],
["car_sedan",3],
//["CH_47F_EP1_DZE",1],
["CSJ_GyroC",4],
//["CSJ_GyroCover",1],
["CSJ_GyroP",4],
["datsun1_civil_1_open",3],
["datsun1_civil_2_covered",3],
["datsun1_civil_3_open",3],
["GLT_M300_LT",1],
["GLT_M300_ST",1],
["HMMWV_Ambulance",2],
["HMMWV_Ambulance_CZ_DES_EP1",2],
["HMMWV_DES_EP1",3],
["HMMWV_DZ",3],
["HMMWV_M1035_DES_EP1",2],
["HMMWV_M1151_M2_CZ_DES_EP1_DZE",2],
["HMMWV_M998A2_SOV_DES_EP1_DZE",2],
["Kamaz",3],
["KamazRefuel_DZ",4],
["Lada1",2],
["Lada1_TK_CIV_EP1",2],
["Lada2",2],
["Lada2_TK_CIV_EP1",2],
["LadaLM",2],
["LandRover_MG_TK_EP1_DZE",3],
["LandRover_Special_CZ_EP1_DZE",2],
//["MH6J_DZ",1],
//["Mi17_Civilian_DZ",1],
//["Mi17_DZE",1],
//["MtvrRefuel_DES_EP1_DZ",1],
["Offroad_DSHKM_Gue_DZE",2],
["Pickup_PK_GUE_DZE",2],
["Pickup_PK_INS_DZE",2],
["Pickup_PK_TK_GUE_EP1_DZE",2],
["pook_H13_transport_GUE",2],
["UAZ_MG_TK_EP1_DZE",2],
//["UH1H_DZE",1],
//["UH1Y_DZE",1],
//["UH60M_EP1_DZE",1],
["Ural_CDF",3],
["Ural_TK_CIV_EP1",3],
["Ural_UN_EP1",3],
["UAZ_CDF",2],
["UAZ_INS",2],
["UAZ_MG_TK_EP1_DZE",2],
["UAZ_RU",2],
["UAZ_Unarmed_TK_CIV_EP1",2],
["UAZ_Unarmed_TK_EP1",2],
["UAZ_Unarmed_UN_EP1",2],
["VolhaLimo_TK_CIV_EP1",3],
["Volha_1_TK_CIV_EP1",3],
["Volha_2_TK_CIV_EP1",3],
["V3S_Open_TK_CIV_EP1",3],
["V3S_Open_TK_EP1",3],
["V3S_Refuel_TK_GUE_EP1_DZ",2],
["S1203_ambulance_EP1",2],
["S1203_TK_CIV_EP1",2],
["Skoda",2],
["SkodaBlue",2],
["SkodaGreen",2],
["SkodaRed",2],
["TT650_Civ",2],
["TT650_Ins",2],
["TT650_TK_CIV_EP1",2]
];
