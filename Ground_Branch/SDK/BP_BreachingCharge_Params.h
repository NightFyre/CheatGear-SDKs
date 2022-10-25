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
	 * Function BP_BreachingCharge.BP_BreachingCharge_C.AIQuestion
	 */
	struct ABP_BreachingCharge_C_AIQuestion_Params
	{
	public:
		class AController*                                         Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                UseType;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BreachingCharge.BP_BreachingCharge_C.AIQuestionWithParams
	 */
	struct ABP_BreachingCharge_C_AIQuestionWithParams_Params
	{
	public:
		class AController*                                         Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                UseType;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              Params;                                                  // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FName                                                ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BreachingCharge.BP_BreachingCharge_C.GetEquipInfo
	 */
	struct ABP_BreachingCharge_C_GetEquipInfo_Params
	{
	public:
		EHand                                                      TargetHand;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GI62[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGBSwitchItemInfo                                   OutEquipInfo;                                            // 0x0010(0x0070)  (Parm, OutParm, ContainsInstancedReference)
		bool                                                       ReturnValue;                                             // 0x0080(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ICCN[0xF];                                   // 0x0081(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_BreachingCharge.BP_BreachingCharge_C.DamageCharacter
	 */
	struct ABP_BreachingCharge_C_DamageCharacter_Params
	{
	public:
		class AGBCharacter*                                        InGBCharacter;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BreachingCharge.BP_BreachingCharge_C.DecodeKit
	 */
	struct ABP_BreachingCharge_C_DecodeKit_Params
	{
	public:
		class UVaRestJsonObject*                                   ItemAsJson;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DecodedOwner;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AGBItem*                                             DecodedParentItem;                                       // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_BreachingCharge.BP_BreachingCharge_C.OnRep_bCanBeArmed
	 */
	struct ABP_BreachingCharge_C_OnRep_bCanBeArmed_Params
	{	};

	/**
	 * Function BP_BreachingCharge.BP_BreachingCharge_C.K2_OnReset
	 */
	struct ABP_BreachingCharge_C_K2_OnReset_Params
	{	};

	/**
	 * Function BP_BreachingCharge.BP_BreachingCharge_C.UseMainHandPressed
	 */
	struct ABP_BreachingCharge_C_UseMainHandPressed_Params
	{	};

	/**
	 * Function BP_BreachingCharge.BP_BreachingCharge_C.ServerAttach
	 */
	struct ABP_BreachingCharge_C_ServerAttach_Params
	{	};

	/**
	 * Function BP_BreachingCharge.BP_BreachingCharge_C.MulticastSetCanBeArmed
	 */
	struct ABP_BreachingCharge_C_MulticastSetCanBeArmed_Params
	{
	public:
		bool                                                       bCanBe;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_BreachingCharge.BP_BreachingCharge_C.BndEvt__BreachinCharge0_K2Node_ComponentBoundEvent_0_ComponentBeginCursorOverSignature__DelegateSignature
	 */
	struct ABP_BreachingCharge_C_BndEvt__BreachinCharge0_K2Node_ComponentBoundEvent_0_ComponentBeginCursorOverSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 TouchedComponent;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BreachingCharge.BP_BreachingCharge_C.BndEvt__BreachinCharge0_K2Node_ComponentBoundEvent_1_ComponentEndCursorOverSignature__DelegateSignature
	 */
	struct ABP_BreachingCharge_C_BndEvt__BreachinCharge0_K2Node_ComponentBoundEvent_1_ComponentEndCursorOverSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 TouchedComponent;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BreachingCharge.BP_BreachingCharge_C.SpawnFX
	 */
	struct ABP_BreachingCharge_C_SpawnFX_Params
	{	};

	/**
	 * Function BP_BreachingCharge.BP_BreachingCharge_C.MakeInteractive
	 */
	struct ABP_BreachingCharge_C_MakeInteractive_Params
	{	};

	/**
	 * Function BP_BreachingCharge.BP_BreachingCharge_C.ServerUseWithParams
	 */
	struct ABP_BreachingCharge_C_ServerUseWithParams_Params
	{
	public:
		class AController*                                         Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                UseType;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              Params;                                                  // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BreachingCharge.BP_BreachingCharge_C.ClientUseWithParams
	 */
	struct ABP_BreachingCharge_C_ClientUseWithParams_Params
	{
	public:
		class AController*                                         Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                UseType;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              Params;                                                  // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BreachingCharge.BP_BreachingCharge_C.ClientUse
	 */
	struct ABP_BreachingCharge_C_ClientUse_Params
	{
	public:
		class AController*                                         Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                UseType;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BreachingCharge.BP_BreachingCharge_C.Detonate
	 */
	struct ABP_BreachingCharge_C_Detonate_Params
	{	};

	/**
	 * Function BP_BreachingCharge.BP_BreachingCharge_C.DisableInteraction
	 */
	struct ABP_BreachingCharge_C_DisableInteraction_Params
	{	};

	/**
	 * Function BP_BreachingCharge.BP_BreachingCharge_C.ServerUse
	 */
	struct ABP_BreachingCharge_C_ServerUse_Params
	{
	public:
		class AController*                                         Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                UseType;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BreachingCharge.BP_BreachingCharge_C.InputArm
	 */
	struct ABP_BreachingCharge_C_InputArm_Params
	{	};

	/**
	 * Function BP_BreachingCharge.BP_BreachingCharge_C.AIUseWithParams
	 */
	struct ABP_BreachingCharge_C_AIUseWithParams_Params
	{
	public:
		class AController*                                         Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                UseType;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              Params;                                                  // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BreachingCharge.BP_BreachingCharge_C.AIUse
	 */
	struct ABP_BreachingCharge_C_AIUse_Params
	{
	public:
		class AController*                                         Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                UseType;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BreachingCharge.BP_BreachingCharge_C.OnDetonatorUse_Event_1
	 */
	struct ABP_BreachingCharge_C_OnDetonatorUse_Event_1_Params
	{
	public:
		class ABP_Detonator_C*                                     Detonator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BreachingCharge.BP_BreachingCharge_C.OnBeingEquipped
	 */
	struct ABP_BreachingCharge_C_OnBeingEquipped_Params
	{	};

	/**
	 * Function BP_BreachingCharge.BP_BreachingCharge_C.OnBeingUnequipped
	 */
	struct ABP_BreachingCharge_C_OnBeingUnequipped_Params
	{	};

	/**
	 * Function BP_BreachingCharge.BP_BreachingCharge_C.ExecuteUbergraph_BP_BreachingCharge
	 */
	struct ABP_BreachingCharge_C_ExecuteUbergraph_BP_BreachingCharge_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
