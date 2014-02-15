private ["_classname","_vehicle"];

_classname = _this select 0;
_vehicle = _this select 1;

if(_classname == "AGS_Ins") then {
	_vehicle removeMagazinesTurret ["29Rnd_30mm_AGS30",[0]];
};

if(_classname == "MK19_TriPod") then {
	_vehicle removeMagazinesTurret ["48Rnd_40mm_MK19",[0]];
};

if(_classname == "DSHkM_Mini_TriPod") then {
	_vehicle removeMagazinesTurret ["50Rnd_127x107_DSHKM",[0]];
};

if(_classname == "M2HD_mini_TriPod") then {
	_vehicle removeMagazinesTurret ["100Rnd_127x99_M2",[0]];
};

if(_classname == "KORD") then {
	_vehicle removeMagazinesTurret ["50Rnd_127x108_KORD",[0]];
};

if(_classname == "BAF_L2A1_Minitripod_W") then {
	_vehicle removeMagazinesTurret ["100Rnd_127x99_M2",[0]];
};

//if(_classname == "BTR90_HQ_DZE") then {
//	_vehicle removeMagazinesTurret ["100Rnd_762x54_PK",[0]];
//};

if(_classname == "BTR40_MG_TK_INS_EP1") then {
	_vehicle removeMagazinesTurret ["50Rnd_127x107_DSHKM",[0]];
};

if(_classname == "BRDM2_HQ_TK_GUE_EP1") then {
	_vehicle removeMagazinesTurret ["100Rnd_762x54_PK",[0]];
};

if(_classname == "M113_TK_EP1_DZE") then {
	_vehicle removeMagazinesTurret ["100Rnd_127x99_M2",[0]];
};

if(_classname == "BAF_Jackal2_L2A1_w") then {
	_vehicle removeMagazinesTurret ["200Rnd_762x51_M240",[0]];
	_vehicle removeMagazinesTurret ["100Rnd_127x99_M2",[1]];
};

if(_classname == "SPG9_Ins") then {
	_vehicle removeMagazinesTurret ["OG9_HE",[0]];
	_vehicle removeMagazinesTurret ["PG9_AT",[0]];
};

if(_classname == "pook_H13_transport_Gue") then {
	_vehicle removeMagazinesTurret ["250Rnd_762x51_M240",[0]];
};