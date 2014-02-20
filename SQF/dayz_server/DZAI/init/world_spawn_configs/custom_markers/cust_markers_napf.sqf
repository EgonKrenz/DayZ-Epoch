/*
	Custom Marker Requirements:
	
	Spawn markers: The area covered by the marker will be used as the patrol and spawning area.
	
		1. Marker shape must be Ellipse (Could be rectangular but the function will consider the marker as elliptical regardless)
		2. Marker should have identical x and y dimensions. If they are different, the smaller dimension will be used instead.
	
	Blacklist markers: If a player is within this area, they will not be selected as a target for dynamic AI spawns.
	
		1. Marker shape may be Ellipse or Rectangle
		2. Marker dimensions should cover the area to be blacklisted.
	
	Example Marker (Note: the marker name must be unique! In this example, it's named "dzaicustomspawntest"):
	
	_this = createMarker ["dzaicustomspawntest", [6650.9883, 9411.541, -6.1035156e-005]];
	_this setMarkerShape "ELLIPSE";
	_this setMarkerType "Flag";
	_this setMarkerBrush "Solid";
	_this setMarkerSize [200, 200];
	_this setMarkerAlpha 0;
	_dzaicustomspawntest = _this;		//_dzaicustomspawntest must be a unique name
	
	Note: This marker is used in the example found in the custom_spawns config files.
*/

//----------------------------Add your custom markers below this line ----------------------------

// TierITrueb - Main Group
_this = createMarker ["DZAI_marker_tier1trueb_main", [7731.877, 14836.684]];
_this setMarkerShape "ELLIPSE";
_this setMarkeralpha 0;
_this setMarkerType "Flag";
_this setMarkerBrush "Solid";
_this setMarkerSize [10, 10];
_this setMarkerDir 120.050;
DZAI_marker_tier1trueb_main = _this;

// TierITrueb - veh1 Group
_this = createMarker ["DZAI_marker_tier1trueb_veh1", [7708.9053, 14880.892]];
_this setMarkerShape "ELLIPSE";
_this setMarkeralpha 0;
_this setMarkerType "Flag";
_this setMarkerBrush "Solid";
_this setMarkerSize [10, 10];
_this setMarkerDir 270.050;
DZAI_marker_tier1trueb_veh1 = _this;

// TierITrueb - build1 Group
_this = createMarker ["DZAI_marker_tier1trueb_build1", [7712.6772, 14857.973]];
_this setMarkerShape "ELLIPSE";
_this setMarkeralpha 0;
_this setMarkerType "Flag";
_this setMarkerBrush "Solid";
_this setMarkerSize [10, 10];
_this setMarkerDir 270.050;
DZAI_marker_tier1trueb_build1 = _this;

// TierITrueb - medic1 Group
_this = createMarker ["DZAI_marker_tier1trueb_medic1", [7750.5059, 14817.715]];
_this setMarkerShape "ELLIPSE";
_this setMarkeralpha 0;
_this setMarkerType "Flag";
_this setMarkerBrush "Solid";
_this setMarkerSize [10, 10];
_this setMarkerDir 270.050;
DZAI_marker_tier1trueb_medic1 = _this;

// TierIHasle - Main Group
_this = createMarker ["DZAI_marker_tier1hasle_main", [4290.4248, 9708.4951]];
_this setMarkerShape "ELLIPSE";
_this setMarkeralpha 0;
_this setMarkerType "Flag";
_this setMarkerBrush "Solid";
_this setMarkerSize [10, 10];
_this setMarkerDir 120.050;
DZAI_marker_tier1hasle_main = _this;

// TierIHasle - veh1 Group
_this = createMarker ["DZAI_marker_tier1hasle_veh1", [4278.5596, 9697.7969]];
_this setMarkerShape "ELLIPSE";
_this setMarkeralpha 0;
_this setMarkerType "Flag";
_this setMarkerBrush "Solid";
_this setMarkerSize [10, 10];
_this setMarkerDir 270.050;
DZAI_marker_tier1hasle_veh1 = _this;

// TierIHasle - build1 Group
_this = createMarker ["DZAI_marker_tier1hasle_build1", [4268.3979, 9725.4023]];
_this setMarkerShape "ELLIPSE";
_this setMarkeralpha 0;
_this setMarkerType "Flag";
_this setMarkerBrush "Solid";
_this setMarkerSize [10, 10];
_this setMarkerDir 270.050;
DZAI_marker_tier1hasle_build1 = _this;

// TierIHasle - medic1 Group
_this = createMarker ["DZAI_marker_tier1hasle_medic1", [4296.3438, 9692.21]];
_this setMarkerShape "ELLIPSE";
_this setMarkeralpha 0;
_this setMarkerType "Flag";
_this setMarkerBrush "Solid";
_this setMarkerSize [10, 10];
_this setMarkerDir 270.050;
DZAI_marker_tier1hasle_medic1 = _this;

// TierIISachs - Main Group
_this = createMarker ["DZAI_marker_tier2sachs_main", [14606.069, 10984.297]];
_this setMarkerShape "ELLIPSE";
_this setMarkeralpha 0;
_this setMarkerType "Flag";
_this setMarkerBrush "Solid";
_this setMarkerSize [10, 10];
_this setMarkerDir 120.050;
DZAI_marker_tier2sachs_main = _this;

// TierIISachs - veh1 Group
_this = createMarker ["DZAI_marker_tier2sachs_veh1", [14633.383, 10979.559]];
_this setMarkerShape "ELLIPSE";
_this setMarkeralpha 0;
_this setMarkerType "Flag";
_this setMarkerBrush "Solid";
_this setMarkerSize [10, 10];
_this setMarkerDir 270.050;
DZAI_marker_tier2sachs_veh1 = _this;

// TierIISachs - build1 Group
_this = createMarker ["DZAI_marker_tier2sachs_build1", [14606.122, 10961.135]];
_this setMarkerShape "ELLIPSE";
_this setMarkeralpha 0;
_this setMarkerType "Flag";
_this setMarkerBrush "Solid";
_this setMarkerSize [10, 10];
_this setMarkerDir 270.050;
DZAI_marker_tier2sachs_build1 = _this;

// TierIISachs - medic1 Group
_this = createMarker ["DZAI_marker_tier2sachs_medic1", [14599.307, 11021.985]];
_this setMarkerShape "ELLIPSE";
_this setMarkeralpha 0;
_this setMarkerType "Flag";
_this setMarkerBrush "Solid";
_this setMarkerSize [10, 10];
_this setMarkerDir 270.050;
DZAI_marker_tier2sachs_medic1 = _this;

// TierIII NE Isle - Main Group
_this = createMarker ["DZAI_marker_tier3neisle_main1", [16373.291, 18362.449]];
_this setMarkerShape "ELLIPSE";
_this setMarkeralpha 0;
_this setMarkerType "Flag";
_this setMarkerBrush "Solid";
_this setMarkerSize [10, 10];
_this setMarkerDir 120.050;
DZAI_marker_tier3neisle_main1 = _this;

// TierIII NE Isle - Main Group
_this = createMarker ["DZAI_marker_tier3neisle_main2", [16439.373, 18306.666]];
_this setMarkerShape "ELLIPSE";
_this setMarkeralpha 0;
_this setMarkerType "Flag";
_this setMarkerBrush "Solid";
_this setMarkerSize [10, 10];
_this setMarkerDir 120.050;
DZAI_marker_tier3neisle_main2 = _this;

// TierIII NE Isle - veh1 Group
_this = createMarker ["DZAI_marker_tier3neisle_veh1", [16729.299, 18117.098]];
_this setMarkerShape "ELLIPSE";
_this setMarkeralpha 0;
_this setMarkerType "Flag";
_this setMarkerBrush "Solid";
_this setMarkerSize [10, 10];
_this setMarkerDir 270.050;
DZAI_marker_tier3neisle_veh1 = _this;

// TierIII NE Isle - build1 Group
_this = createMarker ["DZAI_marker_tier3neisle_veh2", [16571.672, 18565.742]];
_this setMarkerShape "ELLIPSE";
_this setMarkeralpha 0;
_this setMarkerType "Flag";
_this setMarkerBrush "Solid";
_this setMarkerSize [10, 10];
_this setMarkerDir 270.050;
DZAI_marker_tier3neisle_veh2 = _this;

// TierIII NE Isle - medic1 Group
_this = createMarker ["DZAI_marker_tier3neisle_build1", [16685.904, 18125.426]];
_this setMarkerShape "ELLIPSE";
_this setMarkeralpha 0;
_this setMarkerType "Flag";
_this setMarkerBrush "Solid";
_this setMarkerSize [10, 10];
_this setMarkerDir 270.050;
DZAI_marker_tier3neisle_build1 = _this;

// TierIII NE Isle - medic1 Group
_this = createMarker ["DZAI_marker_tier3neisle_build2", [16659.855, 18108.91]];
_this setMarkerShape "ELLIPSE";
_this setMarkeralpha 0;
_this setMarkerType "Flag";
_this setMarkerBrush "Solid";
_this setMarkerSize [10, 10];
_this setMarkerDir 270.050;
DZAI_marker_tier3neisle_build2 = _this;

// TierIII NE Isle - medic1 Group
_this = createMarker ["DZAI_marker_tier3neisle_medic1", [16580.889, 18209.723]];
_this setMarkerShape "ELLIPSE";
_this setMarkeralpha 0;
_this setMarkerType "Flag";
_this setMarkerBrush "Solid";
_this setMarkerSize [10, 10];
_this setMarkerDir 270.050;
DZAI_marker_tier3neisle_medic1 = _this;

// TierIII Pilatus - main1 Group
_this = createMarker ["DZAI_marker_tier3pilatus_main1", [18787.072, 10722.698]];
_this setMarkerShape "ELLIPSE";
_this setMarkeralpha 0;
_this setMarkerType "Flag";
_this setMarkerBrush "Solid";
_this setMarkerSize [10, 10];
_this setMarkerDir 270.050;
DZAI_marker_tier3pilatus_main1 = _this;

// TierIII Pilatus - veh1 Group
_this = createMarker ["DZAI_marker_tier3pilatus_veh1", [18783.361, 10738.027]];
_this setMarkerShape "ELLIPSE";
_this setMarkeralpha 0;
_this setMarkerType "Flag";
_this setMarkerBrush "Solid";
_this setMarkerSize [10, 10];
_this setMarkerDir 270.050;
DZAI_marker_tier3pilatus_veh1 = _this;

// TierIII Pilatus - build1 Group
_this = createMarker ["DZAI_marker_tier3pilatus_build1", [18761.787, 10719.894]];
_this setMarkerShape "ELLIPSE";
_this setMarkeralpha 0;
_this setMarkerType "Flag";
_this setMarkerBrush "Solid";
_this setMarkerSize [10, 10];
_this setMarkerDir 270.050;
DZAI_marker_tier3pilatus_build1 = _this;

// TierIII Pilatus - medic1 Group
_this = createMarker ["DZAI_marker_tier3pilatus_medic1", [18798.236, 10734.215]];
_this setMarkerShape "ELLIPSE";
_this setMarkeralpha 0;
_this setMarkerType "Flag";
_this setMarkerBrush "Solid";
_this setMarkerSize [10, 10];
_this setMarkerDir 270.050;
DZAI_marker_tier3pilatus_medic1 = _this;

// TierIII Milan - main1 Group
_this = createMarker ["DZAI_marker_tier3milan_main1", [10098.909, 7548.5298]];
_this setMarkerShape "ELLIPSE";
_this setMarkeralpha 0;
_this setMarkerType "Flag";
_this setMarkerBrush "Solid";
_this setMarkerSize [10, 10];
_this setMarkerDir 270.050;
DZAI_marker_tier3milan_main1 = _this;

// TierIII Milan - veh1 Group
_this = createMarker ["DZAI_marker_tier3milan_veh1", [9990.9932, 7447.751]];
_this setMarkerShape "ELLIPSE";
_this setMarkeralpha 0;
_this setMarkerType "Flag";
_this setMarkerBrush "Solid";
_this setMarkerSize [10, 10];
_this setMarkerDir 270.050;
DZAI_marker_tier3milan_veh1 = _this;

// TierIII Milan - build1 Group
_this = createMarker ["DZAI_marker_tier3milan_build1", [10170.719, 7377.501]];
_this setMarkerShape "ELLIPSE";
_this setMarkeralpha 0;
_this setMarkerType "Flag";
_this setMarkerBrush "Solid";
_this setMarkerSize [10, 10];
_this setMarkerDir 270.050;
DZAI_marker_tier3milan_build1 = _this;

// TierIII Milan - prox1 Group
_this = createMarker ["DZAI_marker_tier3milan_prox1", [9911.9746, 7682.9497]];
_this setMarkerShape "ELLIPSE";
_this setMarkeralpha 0;
_this setMarkerType "Flag";
_this setMarkerBrush "Solid";
_this setMarkerSize [10, 10];
_this setMarkerDir 270.050;
DZAI_marker_tier3milan_prox1 = _this;

// TierIII Milan - prox2 Group
_this = createMarker ["DZAI_marker_tier3milan_prox2", [10145.696, 7453.4546]];
_this setMarkerShape "ELLIPSE";
_this setMarkeralpha 0;
_this setMarkerType "Flag";
_this setMarkerBrush "Solid";
_this setMarkerSize [10, 10];
_this setMarkerDir 270.050;
DZAI_marker_tier3milan_prox2 = _this;