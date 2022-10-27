#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * Function BP_TacLight_Master.BP_TacLight_Master_C.OnRep_bLightActive
	 */
	struct ABP_TacLight_Master_C_OnRep_bLightActive_Params
	{	};

	/**
	 * Function BP_TacLight_Master.BP_TacLight_Master_C.AllowUsageWhileAttached
	 */
	struct ABP_TacLight_Master_C_AllowUsageWhileAttached_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_TacLight_Master.BP_TacLight_Master_C.InpActEvt_ToggleLightSource_K2Node_InputActionEvent_2
	 */
	struct ABP_TacLight_Master_C_InpActEvt_ToggleLightSource_K2Node_InputActionEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TacLight_Master.BP_TacLight_Master_C.InpActEvt_ToggleLightSource_K2Node_InputActionEvent_1
	 */
	struct ABP_TacLight_Master_C_InpActEvt_ToggleLightSource_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TacLight_Master.BP_TacLight_Master_C.OnStartUsing
	 */
	struct ABP_TacLight_Master_C_OnStartUsing_Params
	{
	public:
		int32_t                                                    UseType;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TacLight_Master.BP_TacLight_Master_C.OnSelected_Event_1
	 */
	struct ABP_TacLight_Master_C_OnSelected_Event_1_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TacLight_Master.BP_TacLight_Master_C.AddAttachedUseMenuEntries
	 */
	struct ABP_TacLight_Master_C_AddAttachedUseMenuEntries_Params
	{
	public:
		class UUserWidget*                                         UsageMenu;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TacLight_Master.BP_TacLight_Master_C.ReceiveBeginPlay
	 */
	struct ABP_TacLight_Master_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_TacLight_Master.BP_TacLight_Master_C.OnLocalPlayerTagsUpdated_Event_1
	 */
	struct ABP_TacLight_Master_C_OnLocalPlayerTagsUpdated_Event_1_Params
	{
	public:
		class AGBPlayerController*                                 PlayerController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TacLight_Master.BP_TacLight_Master_C.InternalUpdateLight
	 */
	struct ABP_TacLight_Master_C_InternalUpdateLight_Params
	{	};

	/**
	 * Function BP_TacLight_Master.BP_TacLight_Master_C.OnStopUsing
	 */
	struct ABP_TacLight_Master_C_OnStopUsing_Params
	{
	public:
		int32_t                                                    UseType;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TacLight_Master.BP_TacLight_Master_C.CharacterPlayDying_Event_1
	 */
	struct ABP_TacLight_Master_C_CharacterPlayDying_Event_1_Params
	{
	public:
		class AGBCharacter*                                        Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TacLight_Master.BP_TacLight_Master_C.OnBeingEquipped
	 */
	struct ABP_TacLight_Master_C_OnBeingEquipped_Params
	{	};

	/**
	 * Function BP_TacLight_Master.BP_TacLight_Master_C.OnBeingUnequipped
	 */
	struct ABP_TacLight_Master_C_OnBeingUnequipped_Params
	{	};

	/**
	 * Function BP_TacLight_Master.BP_TacLight_Master_C.MulticastSetLightActive
	 */
	struct ABP_TacLight_Master_C_MulticastSetLightActive_Params
	{
	public:
		bool                                                       bLightActive;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_TacLight_Master.BP_TacLight_Master_C.OnAddedToInventoryEvent
	 */
	struct ABP_TacLight_Master_C_OnAddedToInventoryEvent_Params
	{	};

	/**
	 * Function BP_TacLight_Master.BP_TacLight_Master_C.OnRemovedFromInventoryEvent
	 */
	struct ABP_TacLight_Master_C_OnRemovedFromInventoryEvent_Params
	{	};

	/**
	 * Function BP_TacLight_Master.BP_TacLight_Master_C.ExecuteUbergraph_BP_TacLight_Master
	 */
	struct ABP_TacLight_Master_C_ExecuteUbergraph_BP_TacLight_Master_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7I44[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
