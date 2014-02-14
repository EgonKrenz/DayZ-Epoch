private ["_classname","_vehicle"];

_classname = _this select 0;
_vehicle = _this select 1;

//if(_classname == "AAAA") then {
//	_vehicle removeMagazinesTurret ["BBBB",[CCCC]];
//};

if(_classname == "AGS_Ins") then {
	_vehicle removeMagazinesTurret ["29Rnd_30mm_AGS30",[-1]];
};