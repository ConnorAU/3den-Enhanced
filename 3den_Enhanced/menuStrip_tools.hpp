class Tools
{
	items[] +=
	{
		"Enh_Folder_Utilities",
		"Enh_Folder_Placement",
		"Enh_Folder_Debug",
		"Enh_Folder_Loadout",
		"Enh_Folder_GUI"
	};
};
class Enh_Folder_Placement
{
	text = $STR_ENH_folder_placementTools;
	picture = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\open_ca.paa";
	items[] +=
	{
		"Enh_PatternTools",
		"Separator",
		"Enh_SetRandomDir",
		"Enh_ReverseDirection",
		"Separator",
		"Enh_OrientateNorth",
		"Enh_OrientateEast",
		"Enh_OrientateSouth",
		"Enh_OrientateWest"
	};
};
class Enh_Folder_Debug
{
	text = $STR_ENH_folder_debugTools;
	picture = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\open_ca.paa";
	items[] +=
	{
		"Enh_ProductInfo",
		"Enh_RecompileFunctions",
		"Enh_ToggleMapIDs",
		"Enh_ClearChat"
	};
};
class Enh_Folder_Loadout
{
	text = $STR_ENH_folder_loadoutTools;
	picture = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\open_ca.paa";
	items[] +=
	{
		"Enh_CopyLoadout",
		"Enh_ApplyLoadout",
		"Enh_ExportLoadoutConfig",
		"Enh_RemoveNVGs",
		"Enh_RemoveVests",
		"Enh_RemoveGoggles",
		"Enh_RemoveHeadgear",
		"Enh_RemoveWeapons"
	};
};
class Enh_Folder_GUI
{
	text = $STR_ENH_folder_GUI;
	picture = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\open_ca.paa";
	items[] +=
	{
		"Enh_ExportGUIBaseClassesAll",
		"Enh_ExportGUIBaseClassesDefault",
		"Enh_ExportGUIBaseClasses3den",
		"Enh_GUITestGrids"
	};
};
class Enh_Folder_Utilities
{
	text = $STR_ENH_folder_utilities;
	picture = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\open_ca.paa";
	items[] +=
	{
		"Enh_CfgDisabledCommands",
		"Enh_Jukebox",
		"Enh_MoonPhases",
		"Enh_PrintConfig",
		"Separator",
		"Enh_3denRadio",
		"Enh_ActionCreator",
		"Enh_BatchReplace",
		"Enh_BriefingEditor",
		"Enh_ColourPicker",
		"Enh_NameObjects",
		"Enh_TextureFinder",
		"Separator",
		"Enh_DeleteEmptyLayers",
		"Enh_LogMissionAttributes",
		"Enh_ImportMissionAttributes",
		"Enh_GenerateSteamMissionDescription",
		"Enh_SwitchTime",
		"Enh_ToggleSimpleObject",
		"Enh_ToggleGrass"
	};
};
//Utilities
class Enh_MoonPhases
{
	text = $STR_ENH_tools_moonPhases;
	action = "_nil = [] execVM 'A3\Functions_F\Debug\Utilities\utility_moonPhases.sqf'";
	opensNewWindow = 1;
};
class Enh_Jukebox
{
	text = $STR_ENH_tools_jukebox;
	action = "_nil = [] execVM 'A3\Functions_F\Debug\Utilities\utility_jukebox.sqf'";
	opensNewWindow = 1;
};
class Enh_PrintConfig
{
	text = $STR_ENH_tools_printConfig;
	action = "_nil = [] execVM 'A3\Functions_F\Debug\Utilities\utility_printConfig.sqf'";
	opensNewWindow = 1;
};
class Enh_CfgDisabledCommands
{
	text = $STR_ENH_tools_CfgDisabledCommands;
	action = "_nil = [] execVM 'A3\Functions_F\Debug\Utilities\utility_cfgDisabledCommands.sqf'";
	opensNewWindow = 1;
};
class Enh_BriefingEditor
{
	text = $STR_ENH_tools_briefingEditor;
	picture = "\A3\ui_f\data\igui\cfg\simpleTasks\types\whiteboard_ca.paa";
	action = "(findDisplay 313) createDisplay 'Enh_briefingEditor'";
	shortcuts[] = {INPUT_ALT_OFFSET + DIK_B};
	opensNewWindow = 1;
};
class Enh_3denRadio
{
	text = "3den Radio...";
	picture = "\A3\ui_f\data\igui\cfg\simpleTasks\types\radio_ca.paa";
	action = "(findDisplay 313) createDisplay 'Enh_3denRadio'";
	shortcuts[] = {INPUT_ALT_OFFSET + DIK_M};
	opensNewWindow = 1;
};
class Enh_SwitchTime
{
	text = $STR_ENH_tools_switchTime;
	picture = "\A3\ui_f\data\igui\cfg\actions\settimer_ca.paa";
	action = "call Enh_fnc_switchTime";
	shortcuts[] = {INPUT_ALT_OFFSET + DIK_UP};
};
class Enh_NameObjects
{
	text = $STR_ENH_tools_batchNaming;
	action = "(findDisplay 313) createDisplay 'Enh_NameObjects'";
	shortcuts[] = {INPUT_ALT_OFFSET + DIK_N};
	opensNewWindow = 1;
};
class Enh_ColourPicker
{
	text = $STR_ENH_tools_colourPicker;
	action = "(findDisplay 313) createDisplay 'Enh_ColourPicker'";
	shortcuts[] = {INPUT_ALT_OFFSET + DIK_C};
	opensNewWindow = 1;
};
class Enh_TextureFinder
{
	text = $STR_ENH_tools_textureFinder;
	picture = "\A3\ui_f\data\igui\cfg\simpleTasks\types\search_ca.paa";
	action = "(findDisplay 313) createDisplay 'Enh_TextureFinder'";
	shortcuts[] = {INPUT_ALT_OFFSET + DIK_T};
	opensNewWindow = 1;
};
class Enh_ToggleGrass
{
	text = $STR_ENH_tools_toggleGrass;
	action = "[] spawn Enh_fnc_toggleGrass";
	shortcuts[] = {INPUT_ALT_OFFSET + DIK_DOWN};
};
class Enh_ExportGUIBaseClassesAll
{
	text = $STR_ENH_tools_exportGUIBaseClasses;
	action = "'' call BIS_fnc_exportGUIBaseClasses; ['Enh_DataCopied'] call BIS_fnc_3DENNotification";
};
class Enh_ExportGUIBaseClassesDefault
{
	text = $STR_ENH_tools_exportGUIBaseClasses_default;
	action = "'Default' call BIS_fnc_exportGUIBaseClasses; ['Enh_DataCopied'] call BIS_fnc_3DENNotification";
};
class Enh_ExportGUIBaseClasses3den
{
	text = $STR_ENH_tools_exportGUIBaseClasses_3den;
	action = "'3DEN' call BIS_fnc_exportGUIBaseClasses; ['Enh_DataCopied'] call BIS_fnc_3DENNotification";
};
class Enh_GUITestGrids
{
	text = $STR_ENH_tools_GUITestGrids;
	action = "(findDisplay 313) createDisplay 'RscTestGrids'";
	opensNewWindow = 1;
};
class Enh_BatchReplace
{
	text = $STR_ENH_tools_batchReplace;
	action = "(findDisplay 313) createDisplay 'Enh_BatchReplace'";
	shortcuts[] = {INPUT_ALT_OFFSET + DIK_R};
	opensNewWindow = 1;
};
class Enh_DeleteEmptyLayers
{
	text = $STR_ENH_tools_deleteEmptyLayers;
	picture = "\a3\3DEN\Data\Displays\Display3DEN\PanelLeft\entityList_delete_ca.paa";
	action = "call Enh_fnc_deleteEmptyLayers";
};
class Enh_ToggleSimpleObject
{
	text = $STR_ENH_tools_toggleSimpleObject;
	picture = "";
	action = "call Enh_fnc_makeObjectSimple";
	shortcuts[] = {INPUT_ALT_OFFSET + DIK_S};
};
class FunctionsViewer//Overwrites the default function viewer
{
	action = "(findDisplay 313) createDisplay 'Enh_FunctionsViewer'";
	data = "";
	opensNewWindow = 1;
};
class Enh_ActionCreator
{
	text = "Action Creator...";
	action = "(findDisplay 313) createDisplay 'Enh_ActionCreator'";
	opensNewWindow = 1;
};
class Enh_LogMissionAttributes
{
	Text = $STR_ENH_contextMenu_logMissionAttributes;
	action = "call Enh_fnc_logMissionAttributes";
};
class Enh_ImportMissionAttributes
{
	text = $STR_ENH_tools_importMissionAttributes;
	action = "call Enh_fnc_importMissionAttributes";
};
class Enh_GenerateSteamMissionDescription
{
	text = $STR_ENH_tools_generateSteamMissionDescription;
	action = "[] spawn Enh_fnc_generateSteamMissionDescription";
	opensNewWindow = 1;
};
//Loadout Tools
class Enh_CopyLoadout
{
	text = $STR_ENH_tools_copyLoadouts;
	action = "'copy' call Enh_fnc_loadoutTool";
	shortcuts[] = {INPUT_CTRL_OFFSET + INPUT_SHIFT_OFFSET + DIK_C};
};
class Enh_ApplyLoadout: Enh_copyLoadout
{
	text = $STR_ENH_tools_applyLoadouts;
	action = "'apply' call Enh_fnc_loadoutTool";
	shortcuts[] = {INPUT_CTRL_OFFSET + INPUT_SHIFT_OFFSET + DIK_A};
};
class Enh_ExportLoadoutConfig
{
	text = $STR_ENH_tools_exportLoadoutConfig;
	action = "(findDisplay 313) createDisplay 'Enh_ExportInventory'";
	shortcuts[] = {INPUT_CTRL_OFFSET + INPUT_SHIFT_OFFSET + DIK_E};
	opensNewWindow = 1;
};
class Enh_RemoveNVGs
{
	text = $STR_ENH_tools_removeNVGs;
	action = "call Enh_fnc_removeNVGs";
	shortcuts[] = {INPUT_CTRL_OFFSET + INPUT_SHIFT_OFFSET + DIK_N};
};
class Enh_RemoveVests
{
	text = $STR_ENH_tools_removeVests;
	action = "call Enh_fnc_removeVests";
	shortcuts[] = {INPUT_CTRL_OFFSET + INPUT_SHIFT_OFFSET + DIK_V};
};
class Enh_RemoveGoggles
{
	text = $STR_ENH_tools_removeGoggles;
	action = "call Enh_fnc_removeGoggles";
	shortcuts[] = {INPUT_CTRL_OFFSET + INPUT_SHIFT_OFFSET + DIK_G};
};
class Enh_RemoveHeadgear
{
	text = $STR_ENH_tools_removeHeadgear;
	action = "call Enh_fnc_removeHeadgear";
	shortcuts[] = {INPUT_CTRL_OFFSET + INPUT_SHIFT_OFFSET + DIK_H};
};
class Enh_RemoveWeapons
{
	text = $STR_ENH_tools_removeWeapons;
	action = "call Enh_fnc_removeWeapons";
	shortcuts[] = {INPUT_CTRL_OFFSET + INPUT_SHIFT_OFFSET + DIK_W};
};
//Placement Tools
class Enh_PatternTools
{
	text = $STR_ENH_tools_placementTools;
	action = "(findDisplay 313) createDisplay 'Enh_PlacementTools'";
	shortcuts[] = {INPUT_CTRL_OFFSET + DIK_L};
	opensNewWindow = 1;
};
class Enh_SetRandomDir
{
	Text = $STR_ENH_tools_randomDir;
	picture = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_rotation_off_ca.paa";
	action = "call Enh_fnc_setRandomDir";
	conditionShow = "selectedObject + selectedWaypoint + selectedLogic + selectedMarker";
	shortcuts[] = {INPUT_CTRL_OFFSET + DIK_NUMPAD3};
};
class Enh_ReverseDirection
{
	text = $STR_ENH_tools_reverseDirection;
	picture = "\A3\ui_f\data\igui\rsctitles\mpprogress\respawn_ca.paa";
	action = "call Enh_fnc_reverseDirection";
	shortcuts[] = {INPUT_CTRL_OFFSET + DIK_NUMPAD7};
};
class Enh_OrientateNorth
{
	text = $STR_ENH_tools_orientateNorth;
	picture = "\A3\ui_f\data\igui\cfg\simpleTasks\letters\N_ca.paa";
	action = "0 call Enh_fnc_setOrientation";
	shortcuts[] = {INPUT_CTRL_OFFSET + DIK_NUMPAD8};
};
class Enh_OrientateEast: Enh_OrientateNorth
{
	text = $STR_ENH_tools_orientateEast;
	picture = "\A3\ui_f\data\igui\cfg\simpleTasks\letters\E_ca.paa";
	action = "90 call Enh_fnc_setOrientation";
	shortcuts[] = {INPUT_CTRL_OFFSET + DIK_NUMPAD6};
};
class Enh_OrientateSouth: Enh_OrientateNorth
{
	text = $STR_ENH_tools_orientateSouth;
	picture = "\A3\ui_f\data\igui\cfg\simpleTasks\letters\S_ca.paa";
	action = "180 call Enh_fnc_setOrientation";
	shortcuts[] = {INPUT_CTRL_OFFSET + DIK_NUMPAD2};
};
class Enh_OrientateWest: Enh_OrientateNorth
{
	text = $STR_ENH_tools_orientateWest;
	picture = "\A3\ui_f\data\igui\cfg\simpleTasks\letters\W_ca.paa";
	action = "270 call Enh_fnc_setOrientation";
	shortcuts[] = {INPUT_CTRL_OFFSET + DIK_NUMPAD4};
};
//Debug Tools
class Enh_ToggleMapIDs
{
	text = $STR_ENH_tools_showMapIDs;
	picture = "\3denEnhanced\data\Enh_icon_id.paa";
	action = "call Enh_fnc_toggleMapIDs";
	shortcuts[] = {INPUT_CTRL_OFFSET + INPUT_ALT_OFFSET + DIK_I};
};
class Enh_ProductInfo
{
	text = $STR_ENH_tools_productInfo;
	picture = "\A3\ui_f\data\igui\cfg\simpleTasks\types\intel_ca.paa";
	action = "call Enh_fnc_productInfo";
	shortcuts[] = {INPUT_CTRL_OFFSET + INPUT_ALT_OFFSET + DIK_P};
};
class Enh_RecompileFunctions
{
	text = $STR_ENH_tools_recompileFunctions;
	picture = "\a3\3DEN\Data\Displays\Display3DEN\EntityMenu\functions_ca.paa";
	action = "1 call BIS_fnc_recompile; ['Enh_actionPerformed'] call BIS_fnc_3DENNotification";
	shortcuts[] = {INPUT_CTRL_OFFSET + INPUT_ALT_OFFSET + DIK_R};
};
class Enh_ClearChat
{
	text = $STR_ENH_tools_clearChat;
	action = "clearRadio";
	shortcuts[] = {INPUT_CTRL_OFFSET + INPUT_ALT_OFFSET + DIK_C};
};