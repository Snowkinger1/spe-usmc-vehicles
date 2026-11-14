params ["_object","_value","_variable"];

_object setVariable [_variable,_value, true];

[_object] spawn compile preprocessFileLineNumbers '\snkg_spe_usmc_vehicles\scripts\fn_init.sqf';
