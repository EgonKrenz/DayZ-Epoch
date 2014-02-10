class datsun1_civil_1_open;
class datsun1_civil_1_open_DZE_Base: datsun1_civil_1_open {
	scope = private;
};
class datsun1_civil_2_covered;
class datsun1_civil_2_covered_DZE_Base: datsun1_civil_2_covered {
	scope = private;
};
class datsun1_civil_3_open;
class datsun1_civil_3_open_DZE_Base: datsun1_civil_3_open {
	scope = private;
};

// 0 
class datsun1_civil_1_open_DZE0: datsun1_civil_1_open_DZE_Base {
	scope = public;

	class Upgrades {
		Arm[] = {"Pickup_PK_GUE",{{"PK",1}},{{"ItemARM",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Maintain[] = {"datsun1_civil_1_open_DZE1",{},{{"ItemAVE",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Performance[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
		Cargo[] = {"datsun1_civil_1_open_DZE3",{},{{"ItemLRK",1},{"ItemTent",1}}};
		Fuel[] = {"datsun1_civil_1_open_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
};
class datsun1_civil_2_covered_DZE0: datsun1_civil_2_covered_DZE_Base {
	scope = public;

	class Upgrades {
		Arm[] = {"Pickup_PK_GUE",{{"PK",1}},{{"ItemARM",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Maintain[] = {"datsun1_civil_2_covered_DZE1",{},{{"ItemAVE",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Performance[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
		Cargo[] = {"datsun1_civil_1_open_DZE3",{},{{"ItemLRK",1},{"ItemTent",1}}};
		Fuel[] = {"datsun1_civil_1_open_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
};
class datsun1_civil_3_open_DZE0: datsun1_civil_3_open_DZE_Base {
	scope = public;

	class Upgrades {
		Arm[] = {"Pickup_PK_GUE",{{"PK",1}},{{"ItemARM",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Maintain[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemAVE",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Performance[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
		Cargo[] = {"datsun1_civil_1_open_DZE3",{},{{"ItemLRK",1},{"ItemTent",1}}};
		Fuel[] = {"datsun1_civil_1_open_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
};

// 1 Armor
class datsun1_civil_1_open_DZE1: datsun1_civil_1_open_DZE_Base {
	scope = public;

	class Upgrades {
		Arm[] = {"Pickup_PK_GUE",{{"PK",1}},{{"ItemARM",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Maintain[] = {"datsun1_civil_1_open_DZE1",{},{{"ItemAVE",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Performance[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
		Cargo[] = {"datsun1_civil_1_open_DZE3",{},{{"ItemLRK",1},{"ItemTent",1}}};
		Fuel[] = {"datsun1_civil_1_open_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.3;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.3;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.3;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.3;
		};
		class HitFuel {
			armor = 0.28;
			material = -1;
			name = "palivo";
			visual = "";
			passThrough = 1;
		};
		class HitEngine {
			armor = 1;
			material = -1;
			name = "motor";
			visual = "";
			passThrough = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.1;
		};
		class HitGlass2: HitGlass2 {
			armor = 0.1;
		};
		class HitGlass3: HitGlass3 {
			armor = 0.1;
		};
		class HitGlass4: HitGlass4 {
			armor = 0.1;
		};
	};
};
class datsun1_civil_2_covered_DZE1: datsun1_civil_2_covered_DZE_Base {
	scope = public;

	class Upgrades {
		Arm[] = {"Pickup_PK_GUE",{{"PK",1}},{{"ItemARM",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Maintain[] = {"datsun1_civil_2_covered_DZE1",{},{{"ItemAVE",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Performance[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
		Cargo[] = {"datsun1_civil_1_open_DZE3",{},{{"ItemLRK",1},{"ItemTent",1}}};
		Fuel[] = {"datsun1_civil_1_open_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.3;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.3;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.3;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.3;
		};
		class HitFuel {
			armor = 0.28;
			material = -1;
			name = "palivo";
			visual = "";
			passThrough = 1;
		};
		class HitEngine {
			armor = 1;
			material = -1;
			name = "motor";
			visual = "";
			passThrough = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.1;
		};
		class HitGlass2: HitGlass2 {
			armor = 0.1;
		};
		class HitGlass3: HitGlass3 {
			armor = 0.1;
		};
		class HitGlass4: HitGlass4 {
			armor = 0.1;
		};
	};
};
class datsun1_civil_3_open_DZE1: datsun1_civil_3_open_DZE_Base {
	scope = public;

	class Upgrades {
		Arm[] = {"Pickup_PK_GUE",{{"PK",1}},{{"ItemARM",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Maintain[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemAVE",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Performance[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
		Cargo[] = {"datsun1_civil_1_open_DZE3",{},{{"ItemLRK",1},{"ItemTent",1}}};
		Fuel[] = {"datsun1_civil_1_open_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.3;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.3;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.3;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.3;
		};
		class HitFuel {
			armor = 0.28;
			material = -1;
			name = "palivo";
			visual = "";
			passThrough = 1;
		};
		class HitEngine {
			armor = 1;
			material = -1;
			name = "motor";
			visual = "";
			passThrough = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.1;
		};
		class HitGlass2: HitGlass2 {
			armor = 0.1;
		};
		class HitGlass3: HitGlass3 {
			armor = 0.1;
		};
		class HitGlass4: HitGlass4 {
			armor = 0.1;
		};
	};
};

// 2 Performance
class datsun1_civil_1_open_DZE2: datsun1_civil_1_open_DZE_Base {
	scope = public;

	class Upgrades {
		Arm[] = {"Pickup_PK_GUE",{{"PK",1}},{{"ItemARM",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Maintain[] = {"datsun1_civil_1_open_DZE1",{},{{"ItemAVE",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Performance[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
		Cargo[] = {"datsun1_civil_1_open_DZE3",{},{{"ItemLRK",1},{"ItemTent",1}}};
		Fuel[] = {"datsun1_civil_1_open_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
	maxspeed = 150; // car 100
	terrainCoef = 2.5;
};
class datsun1_civil_2_covered_DZE2: datsun1_civil_2_covered_DZE_Base {
	scope = public;

	class Upgrades {
		Arm[] = {"Pickup_PK_GUE",{{"PK",1}},{{"ItemARM",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Maintain[] = {"datsun1_civil_2_covered_DZE1",{},{{"ItemAVE",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Performance[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
		Cargo[] = {"datsun1_civil_1_open_DZE3",{},{{"ItemLRK",1},{"ItemTent",1}}};
		Fuel[] = {"datsun1_civil_1_open_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
	maxspeed = 150; // car 100
	terrainCoef = 2.5;
};
class datsun1_civil_3_open_DZE2: datsun1_civil_3_open_DZE_Base {
	scope = public;

	class Upgrades {
		Arm[] = {"Pickup_PK_GUE",{{"PK",1}},{{"ItemARM",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Maintain[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemAVE",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Performance[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
		Cargo[] = {"datsun1_civil_1_open_DZE3",{},{{"ItemLRK",1},{"ItemTent",1}}};
		Fuel[] = {"datsun1_civil_1_open_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
	maxspeed = 150; // car 100
	terrainCoef = 2.5;
};

// 3 Performance Armor
class datsun1_civil_1_open_DZE3: datsun1_civil_1_open_DZE_Base {
	scope = public;

	class Upgrades {
		Arm[] = {"Pickup_PK_GUE",{{"PK",1}},{{"ItemARM",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Maintain[] = {"datsun1_civil_1_open_DZE1",{},{{"ItemAVE",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Performance[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
		Cargo[] = {"datsun1_civil_1_open_DZE3",{},{{"ItemLRK",1},{"ItemTent",1}}};
		Fuel[] = {"datsun1_civil_1_open_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
	maxspeed = 150; // car 100
	terrainCoef = 2.5;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.3;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.3;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.3;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.3;
		};
		class HitFuel {
			armor = 0.28;
			material = -1;
			name = "palivo";
			visual = "";
			passThrough = 1;
		};
		class HitEngine {
			armor = 1;
			material = -1;
			name = "motor";
			visual = "";
			passThrough = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.1;
		};
		class HitGlass2: HitGlass2 {
			armor = 0.1;
		};
		class HitGlass3: HitGlass3 {
			armor = 0.1;
		};
		class HitGlass4: HitGlass4 {
			armor = 0.1;
		};
	};
};
class datsun1_civil_2_covered_DZE3: datsun1_civil_2_covered_DZE_Base {
	scope = public;

	class Upgrades {
		Arm[] = {"Pickup_PK_GUE",{{"PK",1}},{{"ItemARM",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Maintain[] = {"datsun1_civil_2_covered_DZE1",{},{{"ItemAVE",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Performance[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
		Cargo[] = {"datsun1_civil_1_open_DZE3",{},{{"ItemLRK",1},{"ItemTent",1}}};
		Fuel[] = {"datsun1_civil_1_open_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
	maxspeed = 150; // car 100
	terrainCoef = 2.5;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.3;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.3;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.3;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.3;
		};
		class HitFuel {
			armor = 0.28;
			material = -1;
			name = "palivo";
			visual = "";
			passThrough = 1;
		};
		class HitEngine {
			armor = 1;
			material = -1;
			name = "motor";
			visual = "";
			passThrough = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.1;
		};
		class HitGlass2: HitGlass2 {
			armor = 0.1;
		};
		class HitGlass3: HitGlass3 {
			armor = 0.1;
		};
		class HitGlass4: HitGlass4 {
			armor = 0.1;
		};
	};
};
class datsun1_civil_3_open_DZE3: datsun1_civil_3_open_DZE_Base {
	scope = public;

	class Upgrades {
		Arm[] = {"Pickup_PK_GUE",{{"PK",1}},{{"ItemARM",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Maintain[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemAVE",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Performance[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
		Cargo[] = {"datsun1_civil_1_open_DZE3",{},{{"ItemLRK",1},{"ItemTent",1}}};
		Fuel[] = {"datsun1_civil_1_open_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
	maxspeed = 150; // car 100
	terrainCoef = 2.5;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.3;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.3;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.3;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.3;
		};
		class HitFuel {
			armor = 0.28;
			material = -1;
			name = "palivo";
			visual = "";
			passThrough = 1;
		};
		class HitEngine {
			armor = 1;
			material = -1;
			name = "motor";
			visual = "";
			passThrough = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.1;
		};
		class HitGlass2: HitGlass2 {
			armor = 0.1;
		};
		class HitGlass3: HitGlass3 {
			armor = 0.1;
		};
		class HitGlass4: HitGlass4 {
			armor = 0.1;
		};
	};
};

// 4 Cargo
class datsun1_civil_1_open_DZE4: datsun1_civil_1_open_DZE_Base {
	scope = public;

	class Upgrades {
		Arm[] = {"Pickup_PK_GUE",{{"PK",1}},{{"ItemARM",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Maintain[] = {"datsun1_civil_1_open_DZE1",{},{{"ItemAVE",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Performance[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
		Cargo[] = {"datsun1_civil_1_open_DZE3",{},{{"ItemLRK",1},{"ItemTent",1}}};
		Fuel[] = {"datsun1_civil_1_open_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2
};
class datsun1_civil_2_covered_DZE4: datsun1_civil_2_covered_DZE_Base {
	scope = public;

	class Upgrades {
		Arm[] = {"Pickup_PK_GUE",{{"PK",1}},{{"ItemARM",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Maintain[] = {"datsun1_civil_2_covered_DZE1",{},{{"ItemAVE",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Performance[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
		Cargo[] = {"datsun1_civil_1_open_DZE3",{},{{"ItemLRK",1},{"ItemTent",1}}};
		Fuel[] = {"datsun1_civil_1_open_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2
};
class datsun1_civil_3_open_DZE4: datsun1_civil_3_open_DZE_Base {
	scope = public;

	class Upgrades {
		Arm[] = {"Pickup_PK_GUE",{{"PK",1}},{{"ItemARM",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Maintain[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemAVE",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Performance[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
		Cargo[] = {"datsun1_civil_1_open_DZE3",{},{{"ItemLRK",1},{"ItemTent",1}}};
		Fuel[] = {"datsun1_civil_1_open_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2
};

// 5 Cargo Armor
class datsun1_civil_1_open_DZE5: datsun1_civil_1_open_DZE_Base {
	scope = public;

	class Upgrades {
		Arm[] = {"Pickup_PK_GUE",{{"PK",1}},{{"ItemARM",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Maintain[] = {"datsun1_civil_1_open_DZE1",{},{{"ItemAVE",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Performance[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
		Cargo[] = {"datsun1_civil_1_open_DZE3",{},{{"ItemLRK",1},{"ItemTent",1}}};
		Fuel[] = {"datsun1_civil_1_open_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.3;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.3;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.3;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.3;
		};
		class HitFuel {
			armor = 0.28;
			material = -1;
			name = "palivo";
			visual = "";
			passThrough = 1;
		};
		class HitEngine {
			armor = 1;
			material = -1;
			name = "motor";
			visual = "";
			passThrough = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.1;
		};
		class HitGlass2: HitGlass2 {
			armor = 0.1;
		};
		class HitGlass3: HitGlass3 {
			armor = 0.1;
		};
		class HitGlass4: HitGlass4 {
			armor = 0.1;
		};
	};
};
class datsun1_civil_2_covered_DZE5: datsun1_civil_2_covered_DZE_Base {
	scope = public;

	class Upgrades {
		Arm[] = {"Pickup_PK_GUE",{{"PK",1}},{{"ItemARM",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Maintain[] = {"datsun1_civil_2_covered_DZE1",{},{{"ItemAVE",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Performance[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
		Cargo[] = {"datsun1_civil_1_open_DZE3",{},{{"ItemLRK",1},{"ItemTent",1}}};
		Fuel[] = {"datsun1_civil_1_open_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.3;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.3;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.3;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.3;
		};
		class HitFuel {
			armor = 0.28;
			material = -1;
			name = "palivo";
			visual = "";
			passThrough = 1;
		};
		class HitEngine {
			armor = 1;
			material = -1;
			name = "motor";
			visual = "";
			passThrough = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.1;
		};
		class HitGlass2: HitGlass2 {
			armor = 0.1;
		};
		class HitGlass3: HitGlass3 {
			armor = 0.1;
		};
		class HitGlass4: HitGlass4 {
			armor = 0.1;
		};
	};
};
class datsun1_civil_3_open_DZE5: datsun1_civil_3_open_DZE_Base {
	scope = public;

	class Upgrades {
		Arm[] = {"Pickup_PK_GUE",{{"PK",1}},{{"ItemARM",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Maintain[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemAVE",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Performance[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
		Cargo[] = {"datsun1_civil_1_open_DZE3",{},{{"ItemLRK",1},{"ItemTent",1}}};
		Fuel[] = {"datsun1_civil_1_open_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.3;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.3;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.3;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.3;
		};
		class HitFuel {
			armor = 0.28;
			material = -1;
			name = "palivo";
			visual = "";
			passThrough = 1;
		};
		class HitEngine {
			armor = 1;
			material = -1;
			name = "motor";
			visual = "";
			passThrough = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.1;
		};
		class HitGlass2: HitGlass2 {
			armor = 0.1;
		};
		class HitGlass3: HitGlass3 {
			armor = 0.1;
		};
		class HitGlass4: HitGlass4 {
			armor = 0.1;
		};
	};
};

// 6 Cargo Performance
class datsun1_civil_1_open_DZE6: datsun1_civil_1_open_DZE_Base {
	scope = public;

	class Upgrades {
		Arm[] = {"Pickup_PK_GUE",{{"PK",1}},{{"ItemARM",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Maintain[] = {"datsun1_civil_1_open_DZE1",{},{{"ItemAVE",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Performance[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
		Cargo[] = {"datsun1_civil_1_open_DZE3",{},{{"ItemLRK",1},{"ItemTent",1}}};
		Fuel[] = {"datsun1_civil_1_open_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2
	maxspeed = 150; // car 100
	terrainCoef = 2.5;
};
class datsun1_civil_2_covered_DZE6: datsun1_civil_2_covered_DZE_Base {
	scope = public;

	class Upgrades {
		Arm[] = {"Pickup_PK_GUE",{{"PK",1}},{{"ItemARM",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Maintain[] = {"datsun1_civil_2_covered_DZE1",{},{{"ItemAVE",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Performance[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
		Cargo[] = {"datsun1_civil_1_open_DZE3",{},{{"ItemLRK",1},{"ItemTent",1}}};
		Fuel[] = {"datsun1_civil_1_open_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2
	maxspeed = 150; // car 100
	terrainCoef = 2.5;
};
class datsun1_civil_3_open_DZE6: datsun1_civil_3_open_DZE_Base {
	scope = public;

	class Upgrades {
		Arm[] = {"Pickup_PK_GUE",{{"PK",1}},{{"ItemARM",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Maintain[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemAVE",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Performance[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
		Cargo[] = {"datsun1_civil_1_open_DZE3",{},{{"ItemLRK",1},{"ItemTent",1}}};
		Fuel[] = {"datsun1_civil_1_open_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2
	maxspeed = 150; // car 100
	terrainCoef = 2.5;
};

// 7 Cargo Performance Armor
class datsun1_civil_1_open_DZE7: datsun1_civil_1_open_DZE_Base {
	scope = public;

	class Upgrades {
		Arm[] = {"Pickup_PK_GUE",{{"PK",1}},{{"ItemARM",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Maintain[] = {"datsun1_civil_1_open_DZE1",{},{{"ItemAVE",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Performance[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
		Cargo[] = {"datsun1_civil_1_open_DZE3",{},{{"ItemLRK",1},{"ItemTent",1}}};
		Fuel[] = {"datsun1_civil_1_open_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2
	maxspeed = 150; // car 100
	terrainCoef = 2.5;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.3;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.3;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.3;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.3;
		};
		class HitFuel {
			armor = 0.28;
			material = -1;
			name = "palivo";
			visual = "";
			passThrough = 1;
		};
		class HitEngine {
			armor = 1;
			material = -1;
			name = "motor";
			visual = "";
			passThrough = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.1;
		};
		class HitGlass2: HitGlass2 {
			armor = 0.1;
		};
		class HitGlass3: HitGlass3 {
			armor = 0.1;
		};
		class HitGlass4: HitGlass4 {
			armor = 0.1;
		};
	};
};
class datsun1_civil_2_covered_DZE7: datsun1_civil_2_covered_DZE_Base {
	scope = public;

	class Upgrades {
		Arm[] = {"Pickup_PK_GUE",{{"PK",1}},{{"ItemARM",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Maintain[] = {"datsun1_civil_2_covered_DZE1",{},{{"ItemAVE",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Performance[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
		Cargo[] = {"datsun1_civil_1_open_DZE3",{},{{"ItemLRK",1},{"ItemTent",1}}};
		Fuel[] = {"datsun1_civil_1_open_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2
	maxspeed = 150; // car 100
	terrainCoef = 2.5;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.3;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.3;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.3;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.3;
		};
		class HitFuel {
			armor = 0.28;
			material = -1;
			name = "palivo";
			visual = "";
			passThrough = 1;
		};
		class HitEngine {
			armor = 1;
			material = -1;
			name = "motor";
			visual = "";
			passThrough = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.1;
		};
		class HitGlass2: HitGlass2 {
			armor = 0.1;
		};
		class HitGlass3: HitGlass3 {
			armor = 0.1;
		};
		class HitGlass4: HitGlass4 {
			armor = 0.1;
		};
	};
};
class datsun1_civil_3_open_DZE7: datsun1_civil_3_open_DZE_Base {
	scope = public;

	class Upgrades {
		Arm[] = {"Pickup_PK_GUE",{{"PK",1}},{{"ItemARM",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Maintain[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemAVE",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Performance[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
		Cargo[] = {"datsun1_civil_1_open_DZE3",{},{{"ItemLRK",1},{"ItemTent",1}}};
		Fuel[] = {"datsun1_civil_1_open_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2
	maxspeed = 150; // car 100
	terrainCoef = 2.5;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.3;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.3;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.3;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.3;
		};
		class HitFuel {
			armor = 0.28;
			material = -1;
			name = "palivo";
			visual = "";
			passThrough = 1;
		};
		class HitEngine {
			armor = 1;
			material = -1;
			name = "motor";
			visual = "";
			passThrough = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.1;
		};
		class HitGlass2: HitGlass2 {
			armor = 0.1;
		};
		class HitGlass3: HitGlass3 {
			armor = 0.1;
		};
		class HitGlass4: HitGlass4 {
			armor = 0.1;
		};
	};
};

// 8 Fuel
class datsun1_civil_1_open_DZE8: datsun1_civil_1_open_DZE_Base {
	scope = public;

	class Upgrades {
		Arm[] = {"Pickup_PK_GUE",{{"PK",1}},{{"ItemARM",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Maintain[] = {"datsun1_civil_1_open_DZE1",{},{{"ItemAVE",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Performance[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
		Cargo[] = {"datsun1_civil_1_open_DZE3",{},{{"ItemLRK",1},{"ItemTent",1}}};
		Fuel[] = {"datsun1_civil_1_open_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
	fuelCapacity = 210; // car 100
};
class datsun1_civil_2_covered_DZE8: datsun1_civil_2_covered_DZE_Base {
	scope = public;

	class Upgrades {
		Arm[] = {"Pickup_PK_GUE",{{"PK",1}},{{"ItemARM",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Maintain[] = {"datsun1_civil_2_covered_DZE1",{},{{"ItemAVE",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Performance[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
		Cargo[] = {"datsun1_civil_1_open_DZE3",{},{{"ItemLRK",1},{"ItemTent",1}}};
		Fuel[] = {"datsun1_civil_1_open_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
	fuelCapacity = 210; // car 100
};
class datsun1_civil_3_open_DZE8: datsun1_civil_3_open_DZE_Base {
	scope = public;

	class Upgrades {
		Arm[] = {"Pickup_PK_GUE",{{"PK",1}},{{"ItemARM",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Maintain[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemAVE",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Performance[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
		Cargo[] = {"datsun1_civil_1_open_DZE3",{},{{"ItemLRK",1},{"ItemTent",1}}};
		Fuel[] = {"datsun1_civil_1_open_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
	fuelCapacity = 210; // car 100
};

// 9 Fuel Armor
class datsun1_civil_1_open_DZE9: datsun1_civil_1_open_DZE_Base {
	scope = public;

	class Upgrades {
		Arm[] = {"Pickup_PK_GUE",{{"PK",1}},{{"ItemARM",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Maintain[] = {"datsun1_civil_1_open_DZE1",{},{{"ItemAVE",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Performance[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
		Cargo[] = {"datsun1_civil_1_open_DZE3",{},{{"ItemLRK",1},{"ItemTent",1}}};
		Fuel[] = {"datsun1_civil_1_open_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
	fuelCapacity = 210; // car 100
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.3;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.3;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.3;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.3;
		};
		class HitFuel {
			armor = 0.28;
			material = -1;
			name = "palivo";
			visual = "";
			passThrough = 1;
		};
		class HitEngine {
			armor = 1;
			material = -1;
			name = "motor";
			visual = "";
			passThrough = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.1;
		};
		class HitGlass2: HitGlass2 {
			armor = 0.1;
		};
		class HitGlass3: HitGlass3 {
			armor = 0.1;
		};
		class HitGlass4: HitGlass4 {
			armor = 0.1;
		};
	};
};
class datsun1_civil_2_covered_DZE9: datsun1_civil_2_covered_DZE_Base {
	scope = public;

	class Upgrades {
		Arm[] = {"Pickup_PK_GUE",{{"PK",1}},{{"ItemARM",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Maintain[] = {"datsun1_civil_2_covered_DZE1",{},{{"ItemAVE",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Performance[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
		Cargo[] = {"datsun1_civil_1_open_DZE3",{},{{"ItemLRK",1},{"ItemTent",1}}};
		Fuel[] = {"datsun1_civil_1_open_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
	fuelCapacity = 210; // car 100
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.3;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.3;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.3;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.3;
		};
		class HitFuel {
			armor = 0.28;
			material = -1;
			name = "palivo";
			visual = "";
			passThrough = 1;
		};
		class HitEngine {
			armor = 1;
			material = -1;
			name = "motor";
			visual = "";
			passThrough = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.1;
		};
		class HitGlass2: HitGlass2 {
			armor = 0.1;
		};
		class HitGlass3: HitGlass3 {
			armor = 0.1;
		};
		class HitGlass4: HitGlass4 {
			armor = 0.1;
		};
	};
};
class datsun1_civil_3_open_DZE9: datsun1_civil_3_open_DZE_Base {
	scope = public;

	class Upgrades {
		Arm[] = {"Pickup_PK_GUE",{{"PK",1}},{{"ItemARM",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Maintain[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemAVE",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Performance[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
		Cargo[] = {"datsun1_civil_1_open_DZE3",{},{{"ItemLRK",1},{"ItemTent",1}}};
		Fuel[] = {"datsun1_civil_1_open_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
	fuelCapacity = 210; // car 100
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.3;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.3;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.3;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.3;
		};
		class HitFuel {
			armor = 0.28;
			material = -1;
			name = "palivo";
			visual = "";
			passThrough = 1;
		};
		class HitEngine {
			armor = 1;
			material = -1;
			name = "motor";
			visual = "";
			passThrough = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.1;
		};
		class HitGlass2: HitGlass2 {
			armor = 0.1;
		};
		class HitGlass3: HitGlass3 {
			armor = 0.1;
		};
		class HitGlass4: HitGlass4 {
			armor = 0.1;
		};
	};
};

// 10 Fuel Performance
class datsun1_civil_1_open_DZE10: datsun1_civil_1_open_DZE_Base {
	scope = public;

	class Upgrades {
		Arm[] = {"Pickup_PK_GUE",{{"PK",1}},{{"ItemARM",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Maintain[] = {"datsun1_civil_1_open_DZE1",{},{{"ItemAVE",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Performance[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
		Cargo[] = {"datsun1_civil_1_open_DZE3",{},{{"ItemLRK",1},{"ItemTent",1}}};
		Fuel[] = {"datsun1_civil_1_open_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
	fuelCapacity = 210; // car 100
	maxspeed = 150; // car 100
	terrainCoef = 2.5;
};
class datsun1_civil_2_covered_DZE10: datsun1_civil_2_covered_DZE_Base {
	scope = public;

	class Upgrades {
		Arm[] = {"Pickup_PK_GUE",{{"PK",1}},{{"ItemARM",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Maintain[] = {"datsun1_civil_2_covered_DZE1",{},{{"ItemAVE",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Performance[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
		Cargo[] = {"datsun1_civil_1_open_DZE3",{},{{"ItemLRK",1},{"ItemTent",1}}};
		Fuel[] = {"datsun1_civil_1_open_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
	fuelCapacity = 210; // car 100
	maxspeed = 150; // car 100
	terrainCoef = 2.5;
};
class datsun1_civil_3_open_DZE10: datsun1_civil_3_open_DZE_Base {
	scope = public;

	class Upgrades {
		Arm[] = {"Pickup_PK_GUE",{{"PK",1}},{{"ItemARM",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Maintain[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemAVE",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Performance[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
		Cargo[] = {"datsun1_civil_1_open_DZE3",{},{{"ItemLRK",1},{"ItemTent",1}}};
		Fuel[] = {"datsun1_civil_1_open_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
	fuelCapacity = 210; // car 100
	maxspeed = 150; // car 100
	terrainCoef = 2.5;
};

// 11 Fuel Performance Armor
class datsun1_civil_1_open_DZE11: datsun1_civil_1_open_DZE_Base {
	scope = public;

	class Upgrades {
		Arm[] = {"Pickup_PK_GUE",{{"PK",1}},{{"ItemARM",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Maintain[] = {"datsun1_civil_1_open_DZE1",{},{{"ItemAVE",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Performance[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
		Cargo[] = {"datsun1_civil_1_open_DZE3",{},{{"ItemLRK",1},{"ItemTent",1}}};
		Fuel[] = {"datsun1_civil_1_open_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
	fuelCapacity = 210; // car 100
	maxspeed = 150; // car 100
	terrainCoef = 2.5;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.3;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.3;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.3;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.3;
		};
		class HitFuel {
			armor = 0.28;
			material = -1;
			name = "palivo";
			visual = "";
			passThrough = 1;
		};
		class HitEngine {
			armor = 1;
			material = -1;
			name = "motor";
			visual = "";
			passThrough = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.1;
		};
		class HitGlass2: HitGlass2 {
			armor = 0.1;
		};
		class HitGlass3: HitGlass3 {
			armor = 0.1;
		};
		class HitGlass4: HitGlass4 {
			armor = 0.1;
		};
	};
};
class datsun1_civil_2_covered_DZE11: datsun1_civil_2_covered_DZE_Base {
	scope = public;

	class Upgrades {
		Arm[] = {"Pickup_PK_GUE",{{"PK",1}},{{"ItemARM",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Maintain[] = {"datsun1_civil_2_covered_DZE1",{},{{"ItemAVE",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Performance[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
		Cargo[] = {"datsun1_civil_1_open_DZE3",{},{{"ItemLRK",1},{"ItemTent",1}}};
		Fuel[] = {"datsun1_civil_1_open_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
	fuelCapacity = 210; // car 100
	maxspeed = 150; // car 100
	terrainCoef = 2.5;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.3;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.3;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.3;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.3;
		};
		class HitFuel {
			armor = 0.28;
			material = -1;
			name = "palivo";
			visual = "";
			passThrough = 1;
		};
		class HitEngine {
			armor = 1;
			material = -1;
			name = "motor";
			visual = "";
			passThrough = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.1;
		};
		class HitGlass2: HitGlass2 {
			armor = 0.1;
		};
		class HitGlass3: HitGlass3 {
			armor = 0.1;
		};
		class HitGlass4: HitGlass4 {
			armor = 0.1;
		};
	};
};
class datsun1_civil_3_open_DZE11: datsun1_civil_3_open_DZE_Base {
	scope = public;

	class Upgrades {
		Arm[] = {"Pickup_PK_GUE",{{"PK",1}},{{"ItemARM",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Maintain[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemAVE",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Performance[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
		Cargo[] = {"datsun1_civil_1_open_DZE3",{},{{"ItemLRK",1},{"ItemTent",1}}};
		Fuel[] = {"datsun1_civil_1_open_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
	fuelCapacity = 210; // car 100
	maxspeed = 150; // car 100
	terrainCoef = 2.5;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.3;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.3;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.3;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.3;
		};
		class HitFuel {
			armor = 0.28;
			material = -1;
			name = "palivo";
			visual = "";
			passThrough = 1;
		};
		class HitEngine {
			armor = 1;
			material = -1;
			name = "motor";
			visual = "";
			passThrough = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.1;
		};
		class HitGlass2: HitGlass2 {
			armor = 0.1;
		};
		class HitGlass3: HitGlass3 {
			armor = 0.1;
		};
		class HitGlass4: HitGlass4 {
			armor = 0.1;
		};
	};
};

// 12 Fuel Cargo
class datsun1_civil_1_open_DZE12: datsun1_civil_1_open_DZE_Base {
	scope = public;

	class Upgrades {
		Arm[] = {"Pickup_PK_GUE",{{"PK",1}},{{"ItemARM",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Maintain[] = {"datsun1_civil_1_open_DZE1",{},{{"ItemAVE",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Performance[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
		Cargo[] = {"datsun1_civil_1_open_DZE3",{},{{"ItemLRK",1},{"ItemTent",1}}};
		Fuel[] = {"datsun1_civil_1_open_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
	fuelCapacity = 210; // car 100
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2
};
class datsun1_civil_2_covered_DZE12: datsun1_civil_2_covered_DZE_Base {
	scope = public;

	class Upgrades {
		Arm[] = {"Pickup_PK_GUE",{{"PK",1}},{{"ItemARM",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Maintain[] = {"datsun1_civil_2_covered_DZE1",{},{{"ItemAVE",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Performance[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
		Cargo[] = {"datsun1_civil_1_open_DZE3",{},{{"ItemLRK",1},{"ItemTent",1}}};
		Fuel[] = {"datsun1_civil_1_open_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
	fuelCapacity = 210; // car 100
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2
};
class datsun1_civil_3_open_DZE12: datsun1_civil_3_open_DZE_Base {
	scope = public;

	class Upgrades {
		Arm[] = {"Pickup_PK_GUE",{{"PK",1}},{{"ItemARM",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Maintain[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemAVE",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Performance[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
		Cargo[] = {"datsun1_civil_1_open_DZE3",{},{{"ItemLRK",1},{"ItemTent",1}}};
		Fuel[] = {"datsun1_civil_1_open_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
	fuelCapacity = 210; // car 100
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2
};

// 13 Fuel Cargo Armor
class datsun1_civil_1_open_DZE13: datsun1_civil_1_open_DZE_Base {
	scope = public;

	class Upgrades {
		Arm[] = {"Pickup_PK_GUE",{{"PK",1}},{{"ItemARM",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Maintain[] = {"datsun1_civil_1_open_DZE1",{},{{"ItemAVE",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Performance[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
		Cargo[] = {"datsun1_civil_1_open_DZE3",{},{{"ItemLRK",1},{"ItemTent",1}}};
		Fuel[] = {"datsun1_civil_1_open_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
	fuelCapacity = 210; // car 100
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.3;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.3;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.3;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.3;
		};
		class HitFuel {
			armor = 0.28;
			material = -1;
			name = "palivo";
			visual = "";
			passThrough = 1;
		};
		class HitEngine {
			armor = 1;
			material = -1;
			name = "motor";
			visual = "";
			passThrough = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.1;
		};
		class HitGlass2: HitGlass2 {
			armor = 0.1;
		};
		class HitGlass3: HitGlass3 {
			armor = 0.1;
		};
		class HitGlass4: HitGlass4 {
			armor = 0.1;
		};
	};
};
class datsun1_civil_2_covered_DZE13: datsun1_civil_2_covered_DZE_Base {
	scope = public;

	class Upgrades {
		Arm[] = {"Pickup_PK_GUE",{{"PK",1}},{{"ItemARM",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Maintain[] = {"datsun1_civil_2_covered_DZE1",{},{{"ItemAVE",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Performance[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
		Cargo[] = {"datsun1_civil_1_open_DZE3",{},{{"ItemLRK",1},{"ItemTent",1}}};
		Fuel[] = {"datsun1_civil_1_open_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
	fuelCapacity = 210; // car 100
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.3;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.3;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.3;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.3;
		};
		class HitFuel {
			armor = 0.28;
			material = -1;
			name = "palivo";
			visual = "";
			passThrough = 1;
		};
		class HitEngine {
			armor = 1;
			material = -1;
			name = "motor";
			visual = "";
			passThrough = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.1;
		};
		class HitGlass2: HitGlass2 {
			armor = 0.1;
		};
		class HitGlass3: HitGlass3 {
			armor = 0.1;
		};
		class HitGlass4: HitGlass4 {
			armor = 0.1;
		};
	};
};
class datsun1_civil_3_open_DZE13: datsun1_civil_3_open_DZE_Base {
	scope = public;

	class Upgrades {
		Arm[] = {"Pickup_PK_GUE",{{"PK",1}},{{"ItemARM",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Maintain[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemAVE",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Performance[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
		Cargo[] = {"datsun1_civil_1_open_DZE3",{},{{"ItemLRK",1},{"ItemTent",1}}};
		Fuel[] = {"datsun1_civil_1_open_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
	fuelCapacity = 210; // car 100
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.3;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.3;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.3;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.3;
		};
		class HitFuel {
			armor = 0.28;
			material = -1;
			name = "palivo";
			visual = "";
			passThrough = 1;
		};
		class HitEngine {
			armor = 1;
			material = -1;
			name = "motor";
			visual = "";
			passThrough = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.1;
		};
		class HitGlass2: HitGlass2 {
			armor = 0.1;
		};
		class HitGlass3: HitGlass3 {
			armor = 0.1;
		};
		class HitGlass4: HitGlass4 {
			armor = 0.1;
		};
	};
};

// 14 Fuel Cargo Performance
class datsun1_civil_1_open_DZE14: datsun1_civil_1_open_DZE_Base {
	scope = public;

	class Upgrades {
		Arm[] = {"Pickup_PK_GUE",{{"PK",1}},{{"ItemARM",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Maintain[] = {"datsun1_civil_1_open_DZE1",{},{{"ItemAVE",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Performance[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
		Cargo[] = {"datsun1_civil_1_open_DZE3",{},{{"ItemLRK",1},{"ItemTent",1}}};
		Fuel[] = {"datsun1_civil_1_open_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
	fuelCapacity = 210; // car 100
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2
	maxspeed = 150; // car 100
	terrainCoef = 2.5;
};
class datsun1_civil_2_covered_DZE14: datsun1_civil_2_covered_DZE_Base {
	scope = public;

	class Upgrades {
		Arm[] = {"Pickup_PK_GUE",{{"PK",1}},{{"ItemARM",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Maintain[] = {"datsun1_civil_2_covered_DZE1",{},{{"ItemAVE",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Performance[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
		Cargo[] = {"datsun1_civil_1_open_DZE3",{},{{"ItemLRK",1},{"ItemTent",1}}};
		Fuel[] = {"datsun1_civil_1_open_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
	fuelCapacity = 210; // car 100
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2
	maxspeed = 150; // car 100
	terrainCoef = 2.5;
};
class datsun1_civil_3_open_DZE14: datsun1_civil_3_open_DZE_Base {
	scope = public;

	class Upgrades {
		Arm[] = {"Pickup_PK_GUE",{{"PK",1}},{{"ItemARM",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Maintain[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemAVE",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Performance[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
		Cargo[] = {"datsun1_civil_1_open_DZE3",{},{{"ItemLRK",1},{"ItemTent",1}}};
		Fuel[] = {"datsun1_civil_1_open_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
	fuelCapacity = 210; // car 100
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2
	maxspeed = 150; // car 100
	terrainCoef = 2.5;
};

// 15 Fuel Cargo Performance Armor
class datsun1_civil_1_open_DZE15: datsun1_civil_1_open_DZE_Base {
	scope = public;

	class Upgrades {
		Arm[] = {"Pickup_PK_GUE",{{"PK",1}},{{"ItemARM",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Maintain[] = {"datsun1_civil_1_open_DZE1",{},{{"ItemAVE",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Performance[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
		Cargo[] = {"datsun1_civil_1_open_DZE3",{},{{"ItemLRK",1},{"ItemTent",1}}};
		Fuel[] = {"datsun1_civil_1_open_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
	fuelCapacity = 210; // car 100
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2
	maxspeed = 150; // car 100
	terrainCoef = 2.5;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.3;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.3;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.3;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.3;
		};
		class HitFuel {
			armor = 0.28;
			material = -1;
			name = "palivo";
			visual = "";
			passThrough = 1;
		};
		class HitEngine {
			armor = 1;
			material = -1;
			name = "motor";
			visual = "";
			passThrough = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.1;
		};
		class HitGlass2: HitGlass2 {
			armor = 0.1;
		};
		class HitGlass3: HitGlass3 {
			armor = 0.1;
		};
		class HitGlass4: HitGlass4 {
			armor = 0.1;
		};
	};
};
class datsun1_civil_2_covered_DZE15: datsun1_civil_2_covered_DZE_Base {
	scope = public;

	class Upgrades {
		Arm[] = {"Pickup_PK_GUE",{{"PK",1}},{{"ItemARM",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Maintain[] = {"datsun1_civil_2_covered_DZE1",{},{{"ItemAVE",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Performance[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
		Cargo[] = {"datsun1_civil_1_open_DZE3",{},{{"ItemLRK",1},{"ItemTent",1}}};
		Fuel[] = {"datsun1_civil_1_open_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
	fuelCapacity = 210; // car 100
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2
	maxspeed = 150; // car 100
	terrainCoef = 2.5;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.3;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.3;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.3;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.3;
		};
		class HitFuel {
			armor = 0.28;
			material = -1;
			name = "palivo";
			visual = "";
			passThrough = 1;
		};
		class HitEngine {
			armor = 1;
			material = -1;
			name = "motor";
			visual = "";
			passThrough = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.1;
		};
		class HitGlass2: HitGlass2 {
			armor = 0.1;
		};
		class HitGlass3: HitGlass3 {
			armor = 0.1;
		};
		class HitGlass4: HitGlass4 {
			armor = 0.1;
		};
	};
};
class datsun1_civil_3_open_DZE15: datsun1_civil_3_open_DZE_Base {
	scope = public;

	class Upgrades {
		Arm[] = {"Pickup_PK_GUE",{{"PK",1}},{{"ItemARM",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Maintain[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemAVE",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Performance[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
		Cargo[] = {"datsun1_civil_1_open_DZE3",{},{{"ItemLRK",1},{"ItemTent",1}}};
		Fuel[] = {"datsun1_civil_1_open_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};
	fuelCapacity = 210; // car 100
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2
	maxspeed = 150; // car 100
	terrainCoef = 2.5;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.3;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.3;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.3;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.3;
		};
		class HitFuel {
			armor = 0.28;
			material = -1;
			name = "palivo";
			visual = "";
			passThrough = 1;
		};
		class HitEngine {
			armor = 1;
			material = -1;
			name = "motor";
			visual = "";
			passThrough = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.1;
		};
		class HitGlass2: HitGlass2 {
			armor = 0.1;
		};
		class HitGlass3: HitGlass3 {
			armor = 0.1;
		};
		class HitGlass4: HitGlass4 {
			armor = 0.1;
		};
	};
};

