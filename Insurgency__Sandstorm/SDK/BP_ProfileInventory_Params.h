#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * Function BP_ProfileInventory.BP_ProfileInventory_C.HandleSuccess
	 */
	struct UBP_ProfileInventory_C_HandleSuccess_Params
	{	};

	/**
	 * Function BP_ProfileInventory.BP_ProfileInventory_C.HandleError
	 */
	struct UBP_ProfileInventory_C_HandleError_Params
	{
	public:
		struct FConsumeItemResponse                                ConsumeItemResponse;                                     // 0x0000(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_ProfileInventory.BP_ProfileInventory_C.OnKeyUp
	 */
	struct UBP_ProfileInventory_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_ProfileInventory.BP_ProfileInventory_C.OnItemSelected
	 */
	struct UBP_ProfileInventory_C_OnItemSelected_Params
	{
	public:
		struct FOnlineInventoryOwnedItem                           Item;                                                    // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_ProfileInventory.BP_ProfileInventory_C.OnGamepadPressed
	 */
	struct UBP_ProfileInventory_C_OnGamepadPressed_Params
	{	};

	/**
	 * Function BP_ProfileInventory.BP_ProfileInventory_C.OnNewItemsLoaded
	 */
	struct UBP_ProfileInventory_C_OnNewItemsLoaded_Params
	{	};

	/**
	 * Function BP_ProfileInventory.BP_ProfileInventory_C.ScrollIntoView
	 */
	struct UBP_ProfileInventory_C_ScrollIntoView_Params
	{
	public:
		class UBP_ProfileInventoryItem_C*                          WidgetToFind;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileInventory.BP_ProfileInventory_C.CreateItemsForGrid
	 */
	struct UBP_ProfileInventory_C_CreateItemsForGrid_Params
	{	};

	/**
	 * Function BP_ProfileInventory.BP_ProfileInventory_C.OnFocusReceived
	 */
	struct UBP_ProfileInventory_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_ProfileInventory.BP_ProfileInventory_C.OnItemConsumeError_20C3430646113F937C0EDB8D03CBC4B7
	 */
	struct UBP_ProfileInventory_C_OnItemConsumeError_20C3430646113F937C0EDB8D03CBC4B7_Params
	{
	public:
		struct FConsumeItemResponse                                Response;                                                // 0x0000(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_ProfileInventory.BP_ProfileInventory_C.OnItemConsumed_20C3430646113F937C0EDB8D03CBC4B7
	 */
	struct UBP_ProfileInventory_C_OnItemConsumed_20C3430646113F937C0EDB8D03CBC4B7_Params
	{
	public:
		struct FConsumeItemResponse                                Response;                                                // 0x0000(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_ProfileInventory.BP_ProfileInventory_C.Construct
	 */
	struct UBP_ProfileInventory_C_Construct_Params
	{	};

	/**
	 * Function BP_ProfileInventory.BP_ProfileInventory_C.BndEvt__EquipBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UBP_ProfileInventory_C_BndEvt__EquipBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ProfileInventory.BP_ProfileInventory_C.OnEquipUsePressed
	 */
	struct UBP_ProfileInventory_C_OnEquipUsePressed_Params
	{	};

	/**
	 * Function BP_ProfileInventory.BP_ProfileInventory_C.ExecuteUbergraph_BP_ProfileInventory
	 */
	struct UBP_ProfileInventory_C_ExecuteUbergraph_BP_ProfileInventory_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4L1G[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
