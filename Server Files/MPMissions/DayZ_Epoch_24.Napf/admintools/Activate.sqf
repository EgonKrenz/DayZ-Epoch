waituntil {!alive player ; !isnull (finddisplay 46)};
if ((getPlayerUID player) in ["519170","77364870"]) then {
	sleep 30;
	player addaction [("<t color=""#0074E8"">" + ("Tools Menu") +"</t>"),"admintools\Eexcute.sqf","",5,false,true,"",""];
};