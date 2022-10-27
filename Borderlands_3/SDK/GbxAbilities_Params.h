#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * Function GbxAbilities.GbxAbility.OnUnregistered
	 */
	struct UGbxAbility_OnUnregistered_Params
	{	};

	/**
	 * Function GbxAbilities.GbxAbility.OnResumed
	 */
	struct UGbxAbility_OnResumed_Params
	{	};

	/**
	 * Function GbxAbilities.GbxAbility.OnRep_Manager
	 */
	struct UGbxAbility_OnRep_Manager_Params
	{	};

	/**
	 * Function GbxAbilities.GbxAbility.OnRep_AbilityState
	 */
	struct UGbxAbility_OnRep_AbilityState_Params
	{	};

	/**
	 * Function GbxAbilities.GbxAbility.OnRegistered
	 */
	struct UGbxAbility_OnRegistered_Params
	{	};

	/**
	 * Function GbxAbilities.GbxAbility.OnPaused
	 */
	struct UGbxAbility_OnPaused_Params
	{	};

	/**
	 * Function GbxAbilities.GbxAbility.OnForcedRefresh
	 */
	struct UGbxAbility_OnForcedRefresh_Params
	{	};

	/**
	 * Function GbxAbilities.GbxAbility.OnDeactivated
	 */
	struct UGbxAbility_OnDeactivated_Params
	{	};

	/**
	 * Function GbxAbilities.GbxAbility.OnActivated
	 */
	struct UGbxAbility_OnActivated_Params
	{	};

	/**
	 * Function GbxAbilities.GbxAbility.IsReplicated
	 */
	struct UGbxAbility_IsReplicated_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAbilities.GbxAbility.GetAbilityOwner
	 */
	struct UGbxAbility_GetAbilityOwner_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAbilities.GbxAbility.Client_Deactivate
	 */
	struct UGbxAbility_Client_Deactivate_Params
	{	};

	/**
	 * Function GbxAbilities.GbxAbility.CalculateAbilityState
	 */
	struct UGbxAbility_CalculateAbilityState_Params
	{
	public:
		EGbxAbilityState                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAbilities.GbxAbilityManagerComponent.RemoveAbility
	 */
	struct UGbxAbilityManagerComponent_RemoveAbility_Params
	{
	public:
		class UClass*                                              AbilityClass;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAbilities.GbxAbilityManagerComponent.HasAbility
	 */
	struct UGbxAbilityManagerComponent_HasAbility_Params
	{
	public:
		class UClass*                                              AbilityClass;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAbilities.GbxAbilityManagerComponent.FindAbility
	 */
	struct UGbxAbilityManagerComponent_FindAbility_Params
	{
	public:
		class UClass*                                              AbilityClass;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGbxAbility*                                         ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAbilities.GbxAbilityManagerComponent.AddAbility
	 */
	struct UGbxAbilityManagerComponent_AddAbility_Params
	{
	public:
		struct FGbxAbilitySpec                                     Spec;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class UGbxAbility*                                         ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAbilities.GbxAbilityResourceControllerBlueprintFunctionLibrary.UnregisterResourcePoolDelegate
	 */
	struct UGbxAbilityResourceControllerBlueprintFunctionLibrary_UnregisterResourcePoolDelegate_Params
	{
	public:
		struct FGbxAbilityResourceController_ResourcePoolDelegate  Controller;                                              // 0x0000(0x0028)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGbxAbilityResourceSpec_ResourcePoolDelegate        Spec;                                                    // 0x0028(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAbilities.GbxAbilityResourceControllerBlueprintFunctionLibrary.UnregisterConditionalDamageModifier
	 */
	struct UGbxAbilityResourceControllerBlueprintFunctionLibrary_UnregisterConditionalDamageModifier_Params
	{
	public:
		struct FGbxAbilityResourceController_ConditionalDamageModifier Controller;                                              // 0x0000(0x0028)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGbxAbilityResourceSpec_ConditionalDamageModifier   Spec;                                                    // 0x0028(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAbilities.GbxAbilityResourceControllerBlueprintFunctionLibrary.UnregisterAbilityDelegate
	 */
	struct UGbxAbilityResourceControllerBlueprintFunctionLibrary_UnregisterAbilityDelegate_Params
	{
	public:
		struct FGbxAbilityResourceController_ScriptDelegate        Controller;                                              // 0x0000(0x0028)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGbxAbilityResourceSpec_ScriptDelegate              Spec;                                                    // 0x0028(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAbilities.GbxAbilityResourceControllerBlueprintFunctionLibrary.RegisterResourcePoolDelegate
	 */
	struct UGbxAbilityResourceControllerBlueprintFunctionLibrary_RegisterResourcePoolDelegate_Params
	{
	public:
		struct FGbxAbilityResourceController_ResourcePoolDelegate  Controller;                                              // 0x0000(0x0028)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGbxAbilityResourceSpec_ResourcePoolDelegate        Spec;                                                    // 0x0028(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAbilities.GbxAbilityResourceControllerBlueprintFunctionLibrary.RegisterConditionalDamageModifier
	 */
	struct UGbxAbilityResourceControllerBlueprintFunctionLibrary_RegisterConditionalDamageModifier_Params
	{
	public:
		struct FGbxAbilityResourceController_ConditionalDamageModifier Controller;                                              // 0x0000(0x0028)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGbxAbilityResourceSpec_ConditionalDamageModifier   Spec;                                                    // 0x0028(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAbilities.GbxAbilityResourceControllerBlueprintFunctionLibrary.RegisterAbilityDelegate
	 */
	struct UGbxAbilityResourceControllerBlueprintFunctionLibrary_RegisterAbilityDelegate_Params
	{
	public:
		struct FGbxAbilityResourceController_ScriptDelegate        Controller;                                              // 0x0000(0x0028)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGbxAbilityResourceSpec_ScriptDelegate              Spec;                                                    // 0x0028(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
