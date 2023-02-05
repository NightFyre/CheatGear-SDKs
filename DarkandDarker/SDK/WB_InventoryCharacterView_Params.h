#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * Function WB_InventoryCharacterView.WB_InventoryCharacterView_C.OnDragOver
	 */
	struct UWB_InventoryCharacterView_C_OnDragOver_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0040(0x0090)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x00D0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x00D8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WQMU[0x7];                                   // 0x00D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WB_InventoryCharacterView.WB_InventoryCharacterView_C.OnDragDetected
	 */
	struct UWB_InventoryCharacterView_C_OnDragDetected_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0040(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UDragDropOperation*                                  Operation;                                               // 0x00D0(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_InventoryCharacterView.WB_InventoryCharacterView_C.OnMouseButtonDown
	 */
	struct UWB_InventoryCharacterView_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0040(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00D0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WB_InventoryCharacterView.WB_InventoryCharacterView_C.OnMessageReceived_BF97A2C3489131A2BC38E88191C57DAB
	 */
	struct UWB_InventoryCharacterView_C_OnMessageReceived_BF97A2C3489131A2BC38E88191C57DAB_Params
	{
	public:
		class UMsgBaseNode*                                        ProxyObject;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_InventoryCharacterView.WB_InventoryCharacterView_C.OnMessageReceived_07357DD44D2129E2FDD1919BD54F4315
	 */
	struct UWB_InventoryCharacterView_C_OnMessageReceived_07357DD44D2129E2FDD1919BD54F4315_Params
	{
	public:
		class UMsgBaseNode*                                        ProxyObject;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_InventoryCharacterView.WB_InventoryCharacterView_C.OnMessageReceived_74BA04EF40F176665ED355986B31663E
	 */
	struct UWB_InventoryCharacterView_C_OnMessageReceived_74BA04EF40F176665ED355986B31663E_Params
	{
	public:
		class UMsgBaseNode*                                        ProxyObject;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_InventoryCharacterView.WB_InventoryCharacterView_C.OnMessageReceived_A739E95247894304EBCBAF9F4ADFEED2
	 */
	struct UWB_InventoryCharacterView_C_OnMessageReceived_A739E95247894304EBCBAF9F4ADFEED2_Params
	{
	public:
		class UMsgBaseNode*                                        ProxyObject;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_InventoryCharacterView.WB_InventoryCharacterView_C.Construct
	 */
	struct UWB_InventoryCharacterView_C_Construct_Params
	{	};

	/**
	 * Function WB_InventoryCharacterView.WB_InventoryCharacterView_C.EventFMsgWidgetGameGroupToggleNotify
	 */
	struct UWB_InventoryCharacterView_C_EventFMsgWidgetGameGroupToggleNotify_Params
	{
	public:
		struct FMsgWidgetGameGroupToggleNotify                     Msg;                                                     // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WB_InventoryCharacterView.WB_InventoryCharacterView_C.ResetPreviewRotationOnToggle
	 */
	struct UWB_InventoryCharacterView_C_ResetPreviewRotationOnToggle_Params
	{
	public:
		ESlateVisibility                                           NewVisibility;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_InventoryCharacterView.WB_InventoryCharacterView_C.EventFMsgSetCheckTargetPlayerEquipment
	 */
	struct UWB_InventoryCharacterView_C_EventFMsgSetCheckTargetPlayerEquipment_Params
	{
	public:
		struct FMsgSetCheckTargetPlayerEquipment                   Msg;                                                     // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WB_InventoryCharacterView.WB_InventoryCharacterView_C.EventFMsgRemoveCheckTargetPlayerEquipment
	 */
	struct UWB_InventoryCharacterView_C_EventFMsgRemoveCheckTargetPlayerEquipment_Params
	{
	public:
		struct FMsgRemoveCheckTargetPlayerEquipment                Msg;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WB_InventoryCharacterView.WB_InventoryCharacterView_C.OnFMsgWidgetLobbyGroupToggleNotify
	 */
	struct UWB_InventoryCharacterView_C_OnFMsgWidgetLobbyGroupToggleNotify_Params
	{
	public:
		struct FMsgWidgetLobbyGroupToggleNotify                    Msg;                                                     // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WB_InventoryCharacterView.WB_InventoryCharacterView_C.ExecuteUbergraph_WB_InventoryCharacterView
	 */
	struct UWB_InventoryCharacterView_C_ExecuteUbergraph_WB_InventoryCharacterView_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CJS2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
