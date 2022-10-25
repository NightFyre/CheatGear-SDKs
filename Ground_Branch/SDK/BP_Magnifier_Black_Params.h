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
	 * Function BP_Magnifier_Black.BP_Magnifier_Black_C.OnRep_bFlippedUp
	 */
	struct ABP_Magnifier_Black_C_OnRep_bFlippedUp_Params
	{	};

	/**
	 * Function BP_Magnifier_Black.BP_Magnifier_Black_C.OnRep_Alpha
	 */
	struct ABP_Magnifier_Black_C_OnRep_Alpha_Params
	{	};

	/**
	 * Function BP_Magnifier_Black.BP_Magnifier_Black_C.AllowUsageWhileAttached
	 */
	struct ABP_Magnifier_Black_C_AllowUsageWhileAttached_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Magnifier_Black.BP_Magnifier_Black_C.UserConstructionScript
	 */
	struct ABP_Magnifier_Black_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Magnifier_Black.BP_Magnifier_Black_C.Timeline_0__FinishedFunc
	 */
	struct ABP_Magnifier_Black_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Magnifier_Black.BP_Magnifier_Black_C.Timeline_0__UpdateFunc
	 */
	struct ABP_Magnifier_Black_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Magnifier_Black.BP_Magnifier_Black_C.InpActEvt_IncreaseSightMagnification_K2Node_InputActionEvent_2
	 */
	struct ABP_Magnifier_Black_C_InpActEvt_IncreaseSightMagnification_K2Node_InputActionEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Magnifier_Black.BP_Magnifier_Black_C.InpActEvt_DecreaseSightMagnification_K2Node_InputActionEvent_1
	 */
	struct ABP_Magnifier_Black_C_InpActEvt_DecreaseSightMagnification_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Magnifier_Black.BP_Magnifier_Black_C.OnStartUsing
	 */
	struct ABP_Magnifier_Black_C_OnStartUsing_Params
	{
	public:
		int32_t                                                    UseType;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Magnifier_Black.BP_Magnifier_Black_C.UpdateActiveSightStatus
	 */
	struct ABP_Magnifier_Black_C_UpdateActiveSightStatus_Params
	{	};

	/**
	 * Function BP_Magnifier_Black.BP_Magnifier_Black_C.AddAttachedUseMenuEntries
	 */
	struct ABP_Magnifier_Black_C_AddAttachedUseMenuEntries_Params
	{
	public:
		class UUserWidget*                                         UsageMenu;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Magnifier_Black.BP_Magnifier_Black_C.AddMagnifierEntry
	 */
	struct ABP_Magnifier_Black_C_AddMagnifierEntry_Params
	{
	public:
		class UWBP_RadialMenu_C*                                   UsageMenu;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Magnifier_Black.BP_Magnifier_Black_C.OnSelected_Magnifier
	 */
	struct ABP_Magnifier_Black_C_OnSelected_Magnifier_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Magnifier_Black.BP_Magnifier_Black_C.OnBeingUnequipped
	 */
	struct ABP_Magnifier_Black_C_OnBeingUnequipped_Params
	{	};

	/**
	 * Function BP_Magnifier_Black.BP_Magnifier_Black_C.UpdateBoneRotation
	 */
	struct ABP_Magnifier_Black_C_UpdateBoneRotation_Params
	{	};

	/**
	 * Function BP_Magnifier_Black.BP_Magnifier_Black_C.ReceiveBeginPlay
	 */
	struct ABP_Magnifier_Black_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Magnifier_Black.BP_Magnifier_Black_C.MulticastFlipUp
	 */
	struct ABP_Magnifier_Black_C_MulticastFlipUp_Params
	{	};

	/**
	 * Function BP_Magnifier_Black.BP_Magnifier_Black_C.MulticastFlipDown
	 */
	struct ABP_Magnifier_Black_C_MulticastFlipDown_Params
	{	};

	/**
	 * Function BP_Magnifier_Black.BP_Magnifier_Black_C.EditItemSetup
	 */
	struct ABP_Magnifier_Black_C_EditItemSetup_Params
	{
	public:
		class AGBCharacter*                                        UICharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Magnifier_Black.BP_Magnifier_Black_C.OnBeingEquipped
	 */
	struct ABP_Magnifier_Black_C_OnBeingEquipped_Params
	{	};

	/**
	 * Function BP_Magnifier_Black.BP_Magnifier_Black_C.ExecuteUbergraph_BP_Magnifier_Black
	 */
	struct ABP_Magnifier_Black_C_ExecuteUbergraph_BP_Magnifier_Black_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
