use strict;
use warnings;
use Data::Dumper;

my $upgrade = {

	Performance => q~
	maxspeed = 150; // car 100
	terrainCoef = 2.5;~

	,Armor => q~
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
	};~

	,Cargo => q~
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportmaxbackpacks = 4; // car 2~

	,Fuel => q~
	fuelCapacity = 210; // car 100~
};
my @upgrades = (
	"Armor"
	,"Performance"
	,"Cargo"
	,"Fuel"
);

my $cfg = q~class datsun1_civil_1_open;
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

~;

for (my $i=0; $i<(scalar(@upgrades) * scalar(@upgrades)); $i++) {
	# get upgrades
	my @currentUpgrades;
	my $configupgrades = '';
	for (my $l=(scalar(@upgrades)); $l>=0; $l--) {
		my $bit = 2 ** $l;
		if (($i & $bit) != 0) {
			#print $l." ";
			push(@currentUpgrades, $upgrades[$l]);
		}
	}
	foreach (@currentUpgrades) {
		$configupgrades .= $upgrade->{$_};
	}

	$cfg .= q~// ~.$i.' '.join(' ',@currentUpgrades).q~
class datsun1_civil_1_open_DZE~.$i.q~: datsun1_civil_1_open_DZE_Base {
	scope = public;

	class Upgrades {
		Arm[] = {"Pickup_PK_GUE",{{"PK",1}},{{"ItemARM",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Maintain[] = {"datsun1_civil_1_open_DZE1",{},{{"ItemAVE",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Performance[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
		Cargo[] = {"datsun1_civil_1_open_DZE3",{},{{"ItemLRK",1},{"ItemTent",1}}};
		Fuel[] = {"datsun1_civil_1_open_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};~.$configupgrades.q~
};
class datsun1_civil_2_covered_DZE~.$i.q~: datsun1_civil_2_covered_DZE_Base {
	scope = public;

	class Upgrades {
		Arm[] = {"Pickup_PK_GUE",{{"PK",1}},{{"ItemARM",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Maintain[] = {"datsun1_civil_2_covered_DZE1",{},{{"ItemAVE",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Performance[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
		Cargo[] = {"datsun1_civil_1_open_DZE3",{},{{"ItemLRK",1},{"ItemTent",1}}};
		Fuel[] = {"datsun1_civil_1_open_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};~.$configupgrades.q~
};
class datsun1_civil_3_open_DZE~.$i.q~: datsun1_civil_3_open_DZE_Base {
	scope = public;

	class Upgrades {
		Arm[] = {"Pickup_PK_GUE",{{"PK",1}},{{"ItemARM",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Maintain[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemAVE",1},{"PartGeneric",1},{"ItemTankTrap",1}}};
		Performance[] = {"datsun1_civil_3_open_DZE1",{},{{"ItemORP",1},{"PartEngine",2}}};
		Cargo[] = {"datsun1_civil_1_open_DZE3",{},{{"ItemLRK",1},{"ItemTent",1}}};
		Fuel[] = {"datsun1_civil_1_open_DZE4",{},{{"ItemTNK",1},{"PartFueltank",2}}};
	};~.$configupgrades.q~
};

~;
}

open(CFG, '>', 'config.hpp') or die $!;
print CFG $cfg;
close(CFG);
