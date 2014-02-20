if ((getPlayerUID player) in ["519170","266626AX"]) then { 
private ["_warning", "_rtime"];
//Let Zeds know
[player,4,true,(getPosATL player)] spawn player_alertZombies;

_warning = false;

customMission = "";
customMissionImage = "";
customStudyBody = "";
debugMonitor1 = false;

/*
Change the UID's below to match those of you and your admin(s)
Your admins will get the advanced version of your debug monitor,
while your regular users will get the cut down version. 
*/

while {true} do {
	_rtime = round(18000 - serverTime);
	
	if ((_rtime < 300) && (!_warning)) then {
		_warning = true;
		cutText [(localize "STR_custom_5minRestart"),"PLAIN"];
	};

	if (debugMonitor1) then
	{
		_nearestCity = nearestLocations [getPos player, ["NameCityCapital","NameCity","NameVillage","NameLocal"],750];
		_textCity = "Wilderness";
		if (count _nearestCity > 0) then {_textCity = text (_nearestCity select 0)};

		_timeleft = _combattimeout-time;

          hintSilent parseText format ["
		<t size='0.95' font='Bitstream' align='left' >Loc: %26</t><t size='0.95' font='Bitstream' align='right'>Sur: %7 Days</t><br/>
        <t size='0.95' font='Bitstream' align='left' >Players: %8</t><t size='0.95' font='Bitstream' align='right'>Within 500m:%11</t><br/>
        <t size='0.95' font='Bitstream' align='left' >Zombies (alive/total): </t><t size='0.95' font='Bitstream' align='right'>%20(%19)</t><br/>
        <t size='0.95' font='Bitstream' align='left' >[%18]</t><t size='0.95' font='Bitstream' align='right'>Temp: %25</t><br/>
        <t size='0.95' font='Bitstream' align='left' >R: %27min</t><t size='0.95' font='Bitstream' align='right'>Vehicles %13(%14)</t><br/>
        <t size='0.95' font='Bitstream' align='left' >Air: %16</t><t size='0.95' font='Bitstream'align='right'>Sea: %23</t><br/>
        <t size='0.95' font='Bitstream' align='left' >Bikes: %15</t><t size='0.95' font='Bitstream'align='right'>Cars: %17</t><br/>
        <t size='0.95' font='Bitstream' align='left' color='#FFBF00'>Zombies Killed: </t><t size='0.95' font='Bitstream' align='right'>%2</t><br/>
        <t size='0.95' font='Bitstream' align='left' color='#FFBF00'>Headshots: </t><t size='0.95' font='Bitstream' align='right'>%3</t><br/>
        <t size='0.95' font='Bitstream' align='left' color='#FFBF00'>Murders: </t><t size='0.95' font='Bitstream' align='right'>%4</t><br/>
        <t size='0.95' font='Bitstream' align='left' color='#FFBF00'>Bandits Killed: </t><t size='0.95' font='Bitstream' align='right'>%5</t><br/>
        <t size='0.95' font='Bitstream' align='left' color='#FFBF00'>Humanity: </t><t size='0.95' font='Bitstream' align='right'>%6</t><br/>
        <t size='0.95' font='Bitstream' align='left' color='#FFBF00'>Blood: </t><t size='0.95' font='Bitstream' align='right'>%9</t><br/>
        <t size='0.95' font='Bitstream' align='left' >GPS: %22</t><t size='0.95' font='Bitstream' align='right'>DIR: %24</t><br/>
        <t size='0.95' font='Bitstream' align='left' >WSP: %21</t><br/>",
        (name player),
        (player getVariable['zombieKills', 0]), 
        (player getVariable['headShots', 0]),
        (player getVariable['humanKills', 0]),
        (player getVariable['banditKills', 0]),
        (player getVariable['humanity', 0]),
        (dayz_Survived),
        (count playableUnits),
        r_player_blood,
        (round diag_fps),
        (({isPlayer _x} count (getPos vehicle player nearEntities [["AllVehicles"], 500]))-1),
        viewdistance,
        (count([6800, 9200, 0] nearEntities [["StaticWeapon","Car","Motorcycle","Tank","Air","Ship"],25000])),
        count vehicles,
        (count([6800, 9200, 0] nearEntities [["Motorcycle"],25000])),
        (count([6800, 9200, 0] nearEntities [["Air"],25000])),
        (count([6800, 9200, 0] nearEntities [["Car"],25000])),
        (gettext (configFile >> 'CfgVehicles' >> (typeof vehicle player) >> 'displayName')),
        (count entities "zZombie_Base"),
        ({alive _x} count entities "zZombie_Base"),
        (getPosASL player),
        (mapGridPosition getPos player),
        (count([6800, 9200, 0] nearEntities [["Ship"],25000])),
        (round(getDir player)),
         round(dayz_temperatur),
        _textCity,
        (300-(round(serverTime/60)))
		];
	};
	sleep 1;
};
};