/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
params["_unit",["_rank","PRIVATE",[""]]];
if(_rank isEqualTo "") exitWith {};

_unit setRank _rank;

if(HG_XP_ENABLED) then
{
    HG_CLIENT = [[_rank,0],(getPlayerUID player),0];
	if(isServer AND hasInterface) then
	{
	    [HG_CLIENT] call HG_fnc_pvarLocal;
	} else {
	    publicVariableServer "HG_CLIENT";
	};
	HG_CLIENT = nil;
	HG_XP = [_rank,0];
};

if(HG_HUD_ENABLED) then
{
    [2] call HG_fnc_HUD;
	[3] call HG_fnc_HUD;
};

true;
