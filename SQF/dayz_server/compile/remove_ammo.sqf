private ["_classname","_vehicle"];

_classname = _this select 0;
_vehicle = _this select 1;

if(_classname == "AGS_TK_INS_EP1") then {
	_vehicle removeMagazinesTurret ["29Rnd_30mm_AGS30",[0]];
};

if(_classname == "MK19_TriPod_US_EP1") then {
	_vehicle removeMagazinesTurret ["48Rnd_40mm_MK19",[0]];
};

if(_classname == "DSHKM_TK_INS_EP1") then {
	_vehicle removeMagazinesTurret ["50Rnd_127x107_DSHKM",[0]];
};

if(_classname == "M2StaticMG_US_EP1") then {
	_vehicle removeMagazinesTurret ["100Rnd_127x99_M2",[0]];
};

if(_classname == "KORD_high_TK_EP1") then {
	_vehicle removeMagazinesTurret ["50Rnd_127x108_KORD",[0]];
};

if(_classname == "BAF_L2A1_ACOG_Tripod_W") then {
	_vehicle removeMagazinesTurret ["100Rnd_127x99_M2",[0]];
};

if(_classname == "SPG9_TK_INS_EP1") then {
	_vehicle removeMagazinesTurret ["OG9_HE",[0]];
	_vehicle removeMagazinesTurret ["PG9_AT",[0]];
};

if(_classname == "2b14_82mm_TK_INS_EP1") then {
	_vehicle removeMagazinesTurret ["8Rnd_82mmHE_2B14",[0]];
	_vehicle removeMagazinesTurret ["8Rnd_82mmILLUM_2B14",[0]];
	_vehicle removeMagazinesTurret ["8Rnd_82mmWP_2B14",[0]];
};

if(_classname == "M252_US_EP1") then {
	_vehicle removeMagazinesTurret ["8Rnd_81mmHE_M252",[0]];
	_vehicle removeMagazinesTurret ["8Rnd_81mmILLUM_M252",[0]];
	_vehicle removeMagazinesTurret ["8Rnd_81mmWP_M252",[0]];
};

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