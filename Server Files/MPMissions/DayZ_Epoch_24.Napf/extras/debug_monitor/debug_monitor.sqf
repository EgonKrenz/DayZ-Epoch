private ["_warning", "_rtime", "_humanity", "_pic", "_info_player"];
_warning = false;

customMission = "";
customMissionImage = "";
customStudyBody = "";
debugMonitor = false;

while {true} do {
	_rtime = round(18000 - serverTime);
	
	if ((_rtime < 300) && (!_warning)) then {
		_warning = true;
		cutText [(localize "STR_custom_5minRestart"),"PLAIN"];
	};

	if (debugMonitor) then {
		
		//Debug Info
		_humanity =	player getVariable["humanity",0];
		
		if (player == vehicle player) then {
			_pic = (gettext (configFile >> 'cfgWeapons' >> (currentWeapon player) >> 'picture'));
		} else {
			_pic = (gettext (configFile >> 'CfgVehicles' >> (typeof vehicle player) >> 'picture'));
		};
		
		_info_player = 
			"<t size='1' font='Bitstream' align='Center' >%5</t><br/>
			<img size='4.75' image='%8'/><br/>
			<t size='1' font='Bitstream' align='left' color='#CC0000'>Survived:</t><t size='1' font='Bitstream' align='right'>%10 Days</t><br/>
			<t size='1' font='Bitstream' align='left' color='#CC0000'>Temp:</t><t size='1' font='Bitstream' align='right'>%11 C°</t><br/>
			<t size='1' font='Bitstream' align='left' color='#CC0000'>" + (localize "STR_custom_blood") + ": </t><t size='1' font='Bitstream' align='right'>%6</t><br/>
			<t size='1' font='Bitstream' align='left' color='#0066CC'>" + (localize "STR_custom_humanity") + ": </t><t size='1' font='Bitstream' align='right'>%7</t><br/>
			<br/>
			<t size='1' font='Bitstream' align='left' color='#FFBF00'>"+ (localize "STR_custom_serverrestart") + ": </t><t size='1' font='Bitstream' align='right'>%12min</t><br/>
			<t size='1' font='Bitstream' align='left' color='#FFBF00'>"+ (localize "STR_custom_playersalive") + ": </t><t size='1' font='Bitstream' align='right'>%4</t><br/>
			<t size='1' font='Bitstream' align='left' color='#FFBF00'>FPS: </t><t size='1' font='Bitstream' align='right'>%9</t><br/>"
			+ customMission + customStudyBody +
			"<t size='1'font='Bitstream'align='center' color='#104E8B' >"+ (localize "STR_custom_f5toggle") + "</t><br/>
			<t size='1'font='Bitstream'align='center' color='#104E8B' >"+ (localize "STR_custom_f10toggle") + "</t><br/>
			<t size='1.15' font='Bitstream' color='#5882FA'>tinyurl.com/owjgsot</t><br/>";

		hintSilent parseText format 
			[_info_player,
			customMissionImage,
			"extras\debug_monitor\pirates.paa",
			"extras\debug_monitor\warning.paa",
			(count playableUnits),
			('' + (gettext (configFile >> 'CfgVehicles' >> (typeof vehicle player) >> 'displayName'))),
			round (r_player_blood),
			round (player getVariable['humanity', 0]),
			_pic,
			round(diag_fps),
			(dayz_Survived),
			round(dayz_temperatur),
			(180-(round(serverTime/60)))
			];
	};
	sleep 1;	
};