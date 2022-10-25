#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.GetDropdownVisibility
	 */
	struct UUI_GameEventPanelWidget_C_GetDropdownVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7JG5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.RestoreSelected
	 */
	struct UUI_GameEventPanelWidget_C_RestoreSelected_Params
	{	};

	/**
	 * Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.UpdateSelection
	 */
	struct UUI_GameEventPanelWidget_C_UpdateSelection_Params
	{
	public:
		class UComboBoxString*                                     Dropdown;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class AGameEventBase*>                              GameEvents;                                              // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FString                                              Selected;                                                // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.GetSelectedEvent
	 */
	struct UUI_GameEventPanelWidget_C_GetSelectedEvent_Params
	{
	public:
		class AGameEventBase*                                      gameEvent;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.GetGameEventOptionString
	 */
	struct UUI_GameEventPanelWidget_C_GetGameEventOptionString_Params
	{
	public:
		class AGameEventBase*                                      gameEvent;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              OptionString;                                            // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.SelectEvent
	 */
	struct UUI_GameEventPanelWidget_C_SelectEvent_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Current;                                                 // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_N5B7[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.AddCurrentEvent
	 */
	struct UUI_GameEventPanelWidget_C_AddCurrentEvent_Params
	{
	public:
		class AGameEventBase*                                      gameEvent;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.EmptyLists
	 */
	struct UUI_GameEventPanelWidget_C_EmptyLists_Params
	{	};

	/**
	 * Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.AddAnnouncedEvent
	 */
	struct UUI_GameEventPanelWidget_C_AddAnnouncedEvent_Params
	{
	public:
		class AGameEventBase*                                      gameEvent;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.OnUpdate
	 */
	struct UUI_GameEventPanelWidget_C_OnUpdate_Params
	{	};

	/**
	 * Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.Construct
	 */
	struct UUI_GameEventPanelWidget_C_Construct_Params
	{	};

	/**
	 * Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.OnOpened
	 */
	struct UUI_GameEventPanelWidget_C_OnOpened_Params
	{	};

	/**
	 * Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.OnClosed
	 */
	struct UUI_GameEventPanelWidget_C_OnClosed_Params
	{	};

	/**
	 * Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.OnEventComboBoxSelectionChanged
	 */
	struct UUI_GameEventPanelWidget_C_OnEventComboBoxSelectionChanged_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.ExecuteUbergraph_UI_GameEventPanelWidget
	 */
	struct UUI_GameEventPanelWidget_C_ExecuteUbergraph_UI_GameEventPanelWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
