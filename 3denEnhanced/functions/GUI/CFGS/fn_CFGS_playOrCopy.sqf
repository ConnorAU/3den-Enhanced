params ["_mode"];

_tv = uiNamespace getVariable ["ENH_CFGS_ActiveList",controlNull];
_selectionpath = tvCurSel _tv;
if (_selectionPath isEqualTo [] || {_tv tvData _selectionPath == ""}) exitWith {false}; // Make sure something is selected and if so, make sure data is available
private _data = (_tv tvData _selectionPath) call ENH_fnc_CFGS_getSentenceDataFromConfig;
private _soundPath = _data param [4];
private _text = _tv tvText _selectionPath;
if (_soundPath == "") exitWith {false};

if (_mode == "play") then
{
	
	
	playSound3D [_soundPath,get3DENCamera];
	[
		["SPEAKER",_text,0]
	] spawn BIS_fnc_EXP_camp_playSubtitles;
}
else
{
	_data = (str _data) + endl + endl + "Example:" + endl + endl + format ["playSound3D ['%1', player];",_data select 4] + endl + endl + 
	"[['SPEAKER', " + str _text + ", 0]] "  + "spawn BIS_fnc_EXP_camp_playSubtitles;";
	
	uinamespace setVariable ["Display3DENCopy_data",["",_data]];
	(uiNamespace getVariable "ENH_CFGS_Display") createdisplay "Display3DENCopy";
};

true