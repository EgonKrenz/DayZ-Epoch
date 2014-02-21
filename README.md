**ECS Egon's Custom Servermod**
================

Modded Epoch Server
Forked from https://github.com/vbawol/DayZ-Epoch

<b>IP:</b><br/>
85.131.183.62:2302<br/>
<b>Name:</b><br/>
[NEW] Highly Customized/balanced |active Admins|unique Sectors|Missions|AI|Events|Elevator etc<br/>
<b>Testserver1:</b><br/>
Test1 [NEW] Highly Customized/balanced |active Admins|unique Sectors|Missions|AI|Events|Elevator etc<br/>
<b>Testserver2:</b><br/>
5.62.115.87:2302

Scoreboard:
http://ehcepoch.bplaced.net/stats/<br/>
Trader Prices:
http://ehcepoch.bplaced.net/price/<br/>
Changelog:
https://github.com/EgonKrenz/DayZ-Epoch/commits/master<br/>
Towing/Lifting/Cargo/Weight List:
https://github.com/EgonKrenz/DayZ-Epoch/blob/master/Server%20Files/MPMissions/DayZ_Epoch_24.Napf/R3F_ARTY_AND_LOG/R3F_LOG/addons_config/arma2_CO_objects.sqf


Philosophy
============
<b>more features/realism/balance/places/survival/teamplay</b>


Unique Features:
============

<b>Missions</b>
* available in 3 Tiers Blue/Red/Black.
* 2-4 appear randomly spread through Chernarus.
* marked on the map.
* advertized Graphicaly through Debug Window Press:F10.
* randomized loot.

<b>unique Locations</b>
* available in 4 Tiers Green/Blue/Red/Black.
* created only for this Server.
* spread through Chernarus and Napf.
* marked on the map.
* are defended by DZAI.
* getting harder the further u are away from spawn places.
* randomized and customized loot after every restart.

<b>AI</b>
* spawns at points of interest like bigger citys and Millitary Bases.
* spawns randomly near players be on the watch even if u r just Choppin Wood. (will be removed if server is populated enough)
* has random loot and gets better with higher ai levels.
* also always take a Radio with u! u can be warned of pursuing ai by placing a radio on the toolbelt.

<b>Events</b>
* events will be held by the admins if playercount is over 10.
* there will be a special Target like: Break into a Admin Base.
* winners will be rewarded with loot that can be very rare or only obtainable through those events.

<b>Balancing</b>
* closer to the DayZ Experience.
* less Vehicle Spawns but more value --> more exitement.
* Vendor Prices tweaked.
* added more Vehicles.
* removed stary sobor tents.
* removed some too modern looking and unecessary Vehicles.

<b>Enhanced Crafting and Building System</b>
* lighttower with great Area.
* more sandbag Buildings.
* Mg's, SPG and Granade Launcher on Tripods.
* Searchlight.

<b>Environment</b>
* moving Objects around and putting them into Vehicles, Storage Containers etc.
* Graphical Player Debug Window with Temperature Values Mission Info and lots more: Press F10
* snow and cold weather periodically, go find some warm clothes.
* faster Night means no need for Timezones and all this stuff.
* fog in some valleys.
* greatly increased building limit.
* Building Lifetime without Maintance is set to 360days.
* deployed Generators will kill zombies in a 40meter radius. (can be used to build Bases in Zombie infested Areas)
* fastrope use ur imagination.
* harder enemys and better loot the farther u are away from spawnzones.
* no selfbloodbag or similar gamebreaker to encourage teamplay and use of food.

<b>Items</b>
* new Items never seen before in dayz, like:
* Mg, SPG, Granadelauncher on Tripod.
* Mortars.
* custom Vehicles.
* rare Loot.
* randomized Loot after every restart.

<b>other addons</b>
* Elevator that can be build and used to transport players/cars/helis/some objects.	http://epochmod.com/forum/index.php?/topic/3635-elevator-script-for-players-and-vehicles-wipprototype/
* Towing for towing vehicles on to a Truck.
* Lifting for lifting vehicles and Objects that are not player owned and locked or under a roof.
* Logistics for storing Vehicles and Objects inside Cargospace all with realistic weight-table.
* and more to come...

<b>up to date</b>
* always up to date.
* frequently updated changelog and featurelist.

<b>active Admins</b>
* just ask Admins ingame if u:
* have a problem.
* have a proposal for a new Feature.
* found a bug.
* found a cheater.
* Admins can read the Chat even if they are not Ingame.

<b>Rules</b>
* Languages used in the Chat are English and German.
* Admin Support will only be in English, German and Russian.
* items lost to bugs can be restored if the cause is traceable.
* no Adminabuse.
* no Easymode.

<b>teamspeak and forum</b>
* Teamspeak IP/URL: new-wotclan.de
* Forum URL is: http://www.dayz-epoch.forumo.de


things marked with (*) are not fully enabled but soon to be implemented.


<b>Changelog:</b>(old pre 1.1.0)

v0.1	11.12.13
-vehicles.sqf tuning of spawnvalues/removed vw golf from spawnlist
-implemented sar-config.sqf from fnsector
-int/serverfunctions.sqf lootcleanup workauround for mission loot disappearing

v0.2	12.12.13
-set gmt+4
-added sectorfng
-added sectorfng sarge ai
-sarge ai spawngrid reworked (more bandits)
-init.sqf
-dayz minpos -1
-fnc_usec_selfActions = compile preprocessFileLineNumbers "scripts\fn_selfActions.sqf";
-added FastRope/TakeClothes/R3FLogistics
-added Temp, Location and Restart time in Debug window
-clean sql database
-reworked trader prices(helix3,armedcarsx5)/stock (armed0)
-lowered spawnrate of vehicles(/10) and air(/5)
-set vehicle spawnmax to 66

v0.3	13/14.12.13
-set gmt -3
-further trader balancing
-disabled ai marker on map
-removed .paa picture 3484kb -> 1468kb
-reworked ai spawn probability (added Soldier,lowered Survivor)
-added flares to spawngear
-dayz minpos -16000
-removed golf from trade stock
-missions fork test:
-no ai spawn 100m around plotpole
-New Sarge Group "Bandit Missions", this will allow server admins to make mission ai wear different skins or have different loadouts from wandering AI.
-random epoch loot

v0.4 15.12.13
-removed sarge ai map marker
-fixed custom monitor servertime / online players
-added custom monitor temp / dayz survived
-further trader balancing (almost done)
-added combo lock to trader Kelm(60g)

v0.5 16.12.13
-updated epoch to 1.0.3.1
-updatet missions to 1.0.3.1 (incl. new missions)
-added fog
-?fixed custom monitor servertime / dayz survived
-?disabled r3f lifting
-added BTC Logistics
-added login logo back
-mission.pbo cleanup 1468 -> 892kb
-removed junk code in serverfunctions.sqf

v0.6 17.12.13
-fixed start gear +RoadFlare (again)
-fixed BTC Logistics
-fixed server restart timer in debug window(again)
-fixed fog
-set fog from 2100 to 1100
-set nightime from 0200 to 0700
-readded admin debug window
-added admin tools (phoenix175)
-added Base Destruction Script to admin tools
-removed Plot requirement(DZE_requireplot = 0;) needs testing!!!
-disabled r3f lifting (adain)
-removed CEG leftovers in desription.ext

v0.7 18/19.12.13
-added elevator  	http://dayzepoch.com/forum/index.php?/topic/3635-elevator-script-for-players-and-vehicles-wipprototype/
-generator repells zombies now (30m)
-removed fog was async
-set servertime +1
-finetuning admin debug window
-added generate key script to admin tools
-added	dayz_dawn = 6;
		dayz_dusk = 23;
-workaround for DZE_requireplot = 0; tested
-loading variables from mpmissions/fixes
-fixed handroadflare (again)
-added Cargo Drop for ch47 and mv-22

v0.8 20-25.12.13
-fixed hmmv prices
-updated: missions
-added DZAI
-removed sarge ai grid spawns

v0.9 05-06.01.14
-removed ch47 from mission loot
-added more armed vehicles to patrol
-fixed pipebomb price (B:6 S:3)
-added Jackal and Bell UH13 to dynamic_vehicle.sqf
-added Jackal to hero and Bandit vendor (B:6 S:3)
-added Bell UH13 transport to hero bandit and air vendor
-added Bell UH13 amvibious air vendor
-added Jackal and Bell to dynamic_vehicle.sqf
-lowered sandsack price
-AN2 moved to medium capacity cargo (cargodrop)
-price tuning: vodnik, armoredSUV
-fixed admin monitor (again)
-temporarly disabled sector fng
-tuned vehicle spawnchance
-updated DZAI to 1.9.3
-added new mission system
-fixed f10 keypress

v1.0 08-16.01.14
-removed static npc spawn near spawn areas
-removed dynamic npc spawn around players
-patrols rpg and demount fix
-updated DZAI to 1.9.4
-fixed AI Ground Patrols
-fixed typos/changed Sever description from:German [NEW] DayZ Epoch Chern.(v.1.0.3.1 /103718) Sektor FNG | Sarge AI | MIssion | Zeit:-5 und mehr
 to DayZ Epoch(1.0.3.1) Chernarus [NEW] Highly Customized/balanced |active Admins|Sektor FNG|Sarge+DZAI|Missions|Elevator|etc (1.0.3.1 /103718)[GMT-5] 
-downgraded sector FNG to working state
-changed MotD
-set MaxVehicleLimit = 166;
-reworked dynamic_vehicle.sgf
-removed mission vehicle spawns
-added heli patrols (2)
-inreased land patrols to 5
-changed dead ai cleanup from 5 to 10 minutes

v1.0.1 17.01.14
-added Merlin to AircraftTrader	["BAF_Merlin_HC3_w",2],
-added BRDM HQ to BanditTrader	["BRDM2_HQ_TK_GUE_EP1",2],
-added BTR40 to BanditTrader	["BTR40_MG_TK_INS_EP1",4],
-price balancing

v1.0.2	18-20.01.14
-created Feature/Rules/ToDo/KnownBugsList
-removed merlin
-removed air patrols
-reversed npc cleanup delay 600s -> 300s
-updated DZAI to 1.9.5
-added back dynamic and static ai spawn
-removed ai location spawns around spawn zones
-removed sarge ai
-added dzai spawns for sector fng to replace sarge (tested)
-added first custom Buildings to map

v1.0.3 21.01.14
-removed sarge ai leftover files
-created first custom location TierIZele (low difficulty/loot)
-added color code green|blue|red|black (tier 1 to 4)
-added/changed location marker
-added DZAI tier 0 ai to TierIZele
-updated DZAI to 1.9.5.1 hotfix
-added 1 heli patrol
-balanced sector fng loot

v1.0.4 22.01.14
-added loot to TierIZele
-TierIZele finetuning (added 2 tier 1 units/marker/objects etc)
-removed clutter
-fixed sector fng loot boxes disapearing
-changed dayz_fullMoonNights = true;
-added new TierI location TierIFactory
-updated Featurelist/Rules
-added wood/cinder/mortar to building loot (ECL and Sector FNG)
-more loot balancing (ECL and Sector FNG)
-removed stary tents
-added back some vehicle spawns to missions
-changed DZAI_respawnTimeMin = 1800;DZAI_respawnTimeMax = 3600; (from 300;600)

v1.0.5 23-24.01.14
-added new Tier I Location TierIPusta
-added first Tier II Location TierIIPulkowo
-added generators to TierIFactory
-changed Admin UIDs for Admin tools/debug window
-loot balancing

v1.0.6 25-26.01.14
-some location updates

v1.0.7 31.01-01.02.14
-updated to epoch 1.0.4
-started working on napf
-updated DZAI to 1.9.6.1
-linked player data from both server
-fixed some errors from log file
napf:
-removed air patrol
-reduced vehicle patrol from 5 to 4
-changed napf server description
-cleaned map of too much spawns
-added dynamic_vehicle.sgf from chernarus
-removed ECL/Cargo/Lift

v1.0.8 02-03.02.14
-moved projects to Github https://github.com/EgonKrenz
napf:
-added BAF_Merlin_DZE to aircraft trader and spawnlist (B:6 S:3)
-price tuning
-fixed private hive tools
-fixed server restart
-fixed missions not spawning
-fixed Sheduler.xml/server.cfg
-fixed lifting: CH47 only, can now lift air!
-lowered pipebomb price
-this setVectorUp [0,0,1];

changelog from now on:
https://github.com/EgonKrenz/DayZ-Epoch/commits/master


--------------------------
Included Custom Mods and Plugins
--------------------------
* R3F Artillery and Logistics - http://www.armaholic.com/page.php?id=9285
* Take Clothes by Churchie - http://opendayz.net/threads/remove-clothes-from-dead-bodies.12291/
* Elevator by Axe Cop - https://github.com/vos/dayz
* DZAI by Buttface - https://github.com/dayzai/DayZBanditAI
* Missions by Torndeco - https://github.com/Torndeco/Epoch-Missions
* ECL Egon's Custom Location's - https://github.com/EgonKrenz/ECL

--------------------------
Included Custom Islands
--------------------------
* Sauerland by Falconsan - http://www.s6computer.de/
* Napf Island by #momo# - http://forums.bistudio.com/showthread.php?136469-Napf-Island-beta
* | MBG Killhouses http://www.armaholic.com/page.php?id=15180
* | MBG Buildings 3 - European Theatre http://www.armaholic.com/page.php?id=14828
* | MBG Generic African Buildings http://www.armaholic.com/page.php?id=17817
* | German Town - and waysigns http://www.armaholic.com/page.php?id=9658
>>>>>>> upstream/master

--------------------------
Developers
--------------------------
* [VB]AWOL - Lead Developer - http://www.twitch.tv/vbawol
* Axle - Beta Tester, Lead Trader City Designer, Ideas. - http://www.twitch.tv/axles
* Paul Tomany - Models, Textures, Ideas, Beta Tester. - ptomany@gmail.com
* Axeman - Developer - Light system - axeman@thefreezer.co.uk
* Harlan (dayz10k) - Developer - https://github.com/dayz10k
* Skaronator - Developer - Help with many things https://github.com/Skaronator
* [VB]GREEN - Graphics, Beta Tester, Ideas. http://www.twitch.tv/vbgreen
* Zabn - Locked gear on vehicles when locked, reworked loot position code to support small items.  https://github.com/Zabn

--------------------------
Contributors
--------------------------
* facoptere - Extra Security - https://github.com/facoptere
* Torndeco - Fixes - https://github.com/Torndeco
* Armifer - Humanity changes. - https://github.com/Armifer
* AVendettaForYou - Trader City Tavi - https://github.com/AVendettaForYou
* Skaronator, krazey - German Localization - https://github.com/Skaronator https://github.com/krazey
* VeryBigBro - Russian Localization - https://github.com/VeryBigBro
* th4z - French Localization - https://github.com/th4z
* JoSchaap - Dutch Localization and some typo's - https://github.com/JoSchaap
* Maca134 - Improved Trader Menus, Death Message menu, Experimental hive 999 support - maca134@gmail.com
* Tansien - Hive Update to visual studio 2013, added 396 and 397 CHILD for Maintain - https://github.com/Tansien
* aeinstein - Crafting now supports all can types. - https://github.com/aeinstein
* vos / Axe Cop - Area Maintenance and ideas - https://github.com/vos
* GeodarCZ - Czech Localization, correction - https://github.com/Geodar
* Brovns - Czech Localization - https://github.com/Brovns
* Doomscythe - Czech Localization, correction - https://github.com/Doomscythe

--------------------------
Special thanks
--------------------------
* BIS for a incredible and versatile game and engine. http://www.bistudio.com/
* Rocket - DAYZ! http://dayzmod.com | http://dayzgame.com 
* DayZ Community Developers - https://github.com/DayZMod
* ziellos2k - Tag Friendly code. https://github.com/ziellos2k
* Dayz Hive DLL - https://github.com/rajkosto/hive
* Munchiefest - Beta Tester, Wiki Editor, Ideas - http://www.twitch.tv/munchiefest
* Chelsey - Beta Tester, New female textures.
* OrangeSherbet - Beta Tester - http://www.twitch.tv/orangesherbet
* QMGSaint - Beta Tester - http://www.twitch.tv/qmgsaint
* Twitch.tv Streamers - http://www.twitch.tv/directory/game/DayZ
* Thanks to all the other beta testers, you know who you are!
