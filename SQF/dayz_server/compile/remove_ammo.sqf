private ["_classname","_vehicle"];

_classname = _this select 0;
_vehicle = _this select 1;

if(_classname == "AGS_Ins") then {
	_vehicle removeMagazinesTurret ["29Rnd_30mm_AGS30",[-1]];
};

if(_classname == "MK19_TriPod") then {
	_vehicle removeMagazinesTurret ["48Rnd_40mm_MK19",[-1]];
};

if(_classname == "DSHkM_Mini_TriPod") then {
	_vehicle removeMagazinesTurret ["50Rnd_127x107_DSHKM",[-1]];
};

if(_classname == "M2HD_mini_TriPod") then {
	_vehicle removeMagazinesTurret ["100Rnd_762x51_M240",[-1]];
};

if(_classname == "BTR90_HQ_DZE") then {
	_vehicle removeMagazinesTurret ["100Rnd_762x54_PK",[0]];
};

if(_classname == "BTR40_MG_TK_INS_EP1") then {
	_vehicle removeMagazinesTurret ["100Rnd_762x54_PK",[0]];
};

if(_classname == "BRDM2_HQ_TK_GUE_EP1") then {
	_vehicle removeMagazinesTurret ["100Rnd_762x54_PK",[0]];
};

if(_classname == "M113_TK_EP1_DZE") then {
	_vehicle removeMagazinesTurret ["100Rnd_762x51_M240",[0]];
};

if(_classname == "BAF_Jackal2_L2A1_w") then {
	_vehicle removeMagazinesTurret ["200Rnd_762x51_M240",[0]];
	_vehicle removeMagazinesTurret ["100Rnd_127x99_M2",[1]];
};

if(_classname == "SPG9_Ins") then {
	_vehicle removeMagazinesTurret ["OG9_HE",[-1]];
	_vehicle removeMagazinesTurret ["PG9_AT",[-1]];
};