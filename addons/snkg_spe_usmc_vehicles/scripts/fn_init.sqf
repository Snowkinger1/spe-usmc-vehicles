params ["_object"];

if (!local _object) exitWith {};

private _customization =  ([_object] call bis_fnc_getVehicleCustomization);
private _textureName = _customization # 0 # 0;
private _configs = if ((!(isNil "_textureName")) && {isClass(configFile >> "CfgVehicles" >> (typeOf _Object) >> "textureSources" >> _textureName >> "SPE_OverrideDecals")}) then
{
	configProperties [(configFile >> "CfgVehicles" >> (typeOf _Object) >> "textureSources" >> _textureName >> "SPE_OverrideDecals"), "true", true];
}
else
{
	configProperties [(configFile >> "CfgVehicles" >> (typeOf _Object) >> "Decals"), "true", true];
};

{
	private _Decal_Config = _x;
	private _Decals_Type = (getText(_Decal_Config >> "SPE_Decals"));
	if (_Decals_Type isEqualTo "" || !(isClass (configFile >> "SPE_Decals" >> _Decals_Type))) exitWith {};

	private _variable = getText(configFile >> "SPE_Decals" >> _Decals_Type >> "VariableName");
	private _AvailableStrings = (getArray(configFile >> "SPE_Decals" >> _Decals_Type >> "AvailableStrings")) apply {toLower _x};
	private _PrefixStrings = (getArray(configFile >> "SPE_Decals" >> _Decals_Type >> "PrefixStrings")) apply {toLower _x};
	private _CustomStrings = (getArray(configFile >> "SPE_Decals" >> _Decals_Type >> "CustomStrings")) apply {toLower _x};

	if (count _PrefixStrings isEqualTo 0) then {_PrefixStrings = _AvailableStrings};
	private _sections = getArray(_Decal_Config >> "SPE_Sections");
  private _default_Format = (getText(_Decal_Config >> "SPE_Default_Format"));
  private _savedString = (_Object getVariable [_variable, "-1"]);
	private _index = 0;

	private _Number = if (_Object getVariable [_variable, "-1"] isEqualType "999") then //If it's a string already like "420" (ha ha) lets just split it and use it.
	{
		if (_savedString == "-1" && _default_Format isEqualTo "") then //Is the string the default?
		{
			_sections apply {if (_index isEqualTo 0) then {_index = _index + 1; selectRandom _PrefixStrings} else {_index = _index + 1; selectRandom _AvailableStrings};};
		}
		else
		{
       if (_savedString == "-1") then {_savedString = _default_Format};
			(_savedString splitString "") apply
			{
				if (_x isEqualTo "#") then
				{
					if (_index isEqualTo 0) then {_index = _index + 1; selectRandom _PrefixStrings} else {selectRandom _AvailableStrings}
				}
				else
				{
					_index = _index + 1;
					(toLower _x)
				};
			};
		};
	}
	else
	{
		if (_savedString isEqualType 1) then //Is it a number as it used to be? turn it into a string
		{
			if ((_savedString) < 0) then //Is the number less than 0 or the default? make a random number
			{
				_object setVariable [_variable,"-1"];
        _savedString = "-1";
				_sections apply {if (_index isEqualTo 0) then {_index = _index + 1; selectRandom _PrefixStrings} else {selectRandom _AvailableStrings};};
			}
			else //Convert it to a string and split it.
			{
				private _Numberscalar = str(_savedString);
        _savedString = _Numberscalar;
				_object setVariable [_variable,_Numberscalar];
				_Numberscalar splitString ""
			};
		}
		else //if it's anything else just give a number
		{
			_sections apply {if (_index isEqualTo 0) then {_index = _index + 1; selectRandom _PrefixStrings} else {_index = _index + 1; selectRandom _AvailableStrings};};
		};

	};
	if ((count _number) < (count _sections)) then //Is the number shorter than the number of selections? add a blank string to the front of the array
	{
		private _diff = (count _sections) - (count _number);
		for "_i" from 1 to _diff do
		{
			_number = [_number, ""] call BIS_fnc_arrayUnShift;
		};
	};
	_number resize (count _sections);
	private _StrNumber = _Number joinString "";

	if (_savedString != _StrNumber) then
	{
		_Object setVariable [_variable, _StrNumber, true];
	};

	//Set Texture
	private _HiddenSelections = getArray(configFile >> "CfgVehicles" >> typeOf _object >> "hiddenSelections");
	private _directory = "\snkg_spe_usmc_vehicles\data\_num_0";
	private _texturePrefix = getText(configFile >> "SPE_Decals" >> _Decals_Type >> "Prefix");
	_AvailableStrings = _AvailableStrings + _CustomStrings;
	{
		private _textureName = if ((_forEachIndex isEqualTo 0 && _number select _forEachIndex in _PrefixStrings) || {_number select _ForEachIndex in _AvailableStrings && (_number select _ForEachIndex) != ""}) then
		{
			(format ["%1\%2.paa", _directory, (_texturePrefix + (_number select _forEachIndex))]);
		}
		else
		{
			"";
		};
		_object setObjectTextureGlobal [_HiddenSelections find _x, _textureName];

	} forEach _sections;


} forEach _configs;
