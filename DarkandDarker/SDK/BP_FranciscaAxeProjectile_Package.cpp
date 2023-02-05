/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_FranciscaAxeProjectile.BP_FranciscaAxeProjectile_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FranciscaAxeProjectile_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FranciscaAxeProjectile.BP_FranciscaAxeProjectile_C.UserConstructionScript");
		
		ABP_FranciscaAxeProjectile_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_FranciscaAxeProjectile.BP_FranciscaAxeProjectile_C.ProjectileHit
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               bIsAttached                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  ActorPrevTickTransform                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void ABP_FranciscaAxeProjectile_C::ProjectileHit(const struct FHitResult& Hit, bool bIsAttached, const struct FTransform& ActorPrevTickTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FranciscaAxeProjectile.BP_FranciscaAxeProjectile_C.ProjectileHit");
		
		ABP_FranciscaAxeProjectile_C_ProjectileHit_Params params {};
		params.Hit = Hit;
		params.bIsAttached = bIsAttached;
		params.ActorPrevTickTransform = ActorPrevTickTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_FranciscaAxeProjectile.BP_FranciscaAxeProjectile_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_FranciscaAxeProjectile_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FranciscaAxeProjectile.BP_FranciscaAxeProjectile_C.ReceiveBeginPlay");
		
		ABP_FranciscaAxeProjectile_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_FranciscaAxeProjectile.BP_FranciscaAxeProjectile_C.ExecuteUbergraph_BP_FranciscaAxeProjectile
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FranciscaAxeProjectile_C::ExecuteUbergraph_BP_FranciscaAxeProjectile(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FranciscaAxeProjectile.BP_FranciscaAxeProjectile_C.ExecuteUbergraph_BP_FranciscaAxeProjectile");
		
		ABP_FranciscaAxeProjectile_C_ExecuteUbergraph_BP_FranciscaAxeProjectile_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_FranciscaAxeProjectile_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_FranciscaAxeProjectile_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_FranciscaAxeProjectile.BP_FranciscaAxeProjectile_C");
		return ptr;
	}

}


