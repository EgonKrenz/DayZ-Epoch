// Hero Trader
_this = createTrigger ["EmptyDetector", [5151.1, 4855.1, 71.6]];
_this setTriggerArea [50, 50, 0, false];
_this setTriggerActivation ["NONE", "PRESENT", true];
_this setTriggerStatements ["(player distance trading_post1) < 50;", "inSafeZone = true; canbuild = false;", "inSafeZone = false; canbuild = true;"];
trading_post1 = _this;
_trigger_0 = _this;
//[[6325.6772, 7807.7412, 0],100] execVM "safezone\SAR_nuke_zeds.sqf";

// Air Trader
_this = createTrigger ["EmptyDetector", [15148.1, 16403.1, 16.4]];
_this setTriggerArea [50, 50, 0, false];
_this setTriggerActivation ["NONE", "PRESENT", true];
_this setTriggerStatements ["(player distance trading_post2) < 50;", "inSafeZone = true; canbuild = false;", "inSafeZone = false; canbuild = true;"];
trading_post2 = _this;
_trigger_1 = _this;

// Trader City Schratten
_this = createTrigger ["EmptyDetector", [12405.1, 5063.1, 216.6]];
_this setTriggerArea [66, 66, 0, false];
_this setTriggerActivation ["NONE", "PRESENT", true];
_this setTriggerStatements ["(player distance trading_post3) < 66;", "inSafeZone = true; canbuild = false;", "inSafeZone = false; canbuild = true;"];
trading_post3 = _this;
_trigger_2 = _this;

// Trader City Emmen
_this = createTrigger ["EmptyDetector", [15513.1, 13241.1, 5.6]];
_this setTriggerArea [50, 50, 0, false];
_this setTriggerActivation ["NONE", "PRESENT", true];
_this setTriggerStatements ["(player distance trading_post4) < 50;", "inSafeZone = true; canbuild = false;", "inSafeZone = false; canbuild = true;"];
trading_post4 = _this;
_trigger_3 = _this;

// Trader City Lenzburg
_this = createTrigger ["EmptyDetector", [8246.1, 15494.1, 5.1]];
_this setTriggerArea [50, 50, 0, false];
_this setTriggerActivation ["NONE", "PRESENT", true];
_this setTriggerStatements ["(player distance trading_post5) < 50;", "inSafeZone = true; canbuild = false;", "inSafeZone = false; canbuild = true;"];
trading_post5 = _this;
_trigger_4 = _this;

// Wholesaler North
_this = createTrigger ["EmptyDetector", [5367.1, 16103.1, 2.1]];
_this setTriggerArea [30, 30, 0, false];
_this setTriggerActivation ["NONE", "PRESENT", true];
_this setTriggerStatements ["(player distance trading_post6) < 30;", "inSafeZone = true; canbuild = false;", "inSafeZone = false; canbuild = true;"];
trading_post6 = _this;
_trigger_5 = _this;

// Wholesaler West
_this = createTrigger ["EmptyDetector", [2121.0183, 7806.2915, 0]];
_this setTriggerArea [30, 30, 0, false];
_this setTriggerActivation ["NONE", "PRESENT", true];
_this setTriggerStatements ["(player distance trading_post7) < 30;", "inSafeZone = true; canbuild = false;", "inSafeZone = false; canbuild = true;"];
trading_post7 = _this;
_trigger_6 = _this;