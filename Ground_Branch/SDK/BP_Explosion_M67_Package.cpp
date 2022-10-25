/**
 * Name: Ground_Branch
 * Version: 1032
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Explosion_M67.BP_Explosion_M67_C.DamageCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBCharacter*                                InGBCharacter                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Explosion_M67_C::DamageCharacter(class AGBCharacter* InGBCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Explosion_M67.BP_Explosion_M67_C.DamageCharacter");
		
		ABP_Explosion_M67_C_DamageCharacter_Params params {};
		params.InGBCharacter = InGBCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Explosion_M67.BP_Explosion_M67_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Explosion_M67_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Explosion_M67.BP_Explosion_M67_C.ReceiveBeginPlay");
		
		ABP_Explosion_M67_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Explosion_M67.BP_Explosion_M67_C.CauseRadialDamage
	 * 		Flags  -> ()
	 */
	void ABP_Explosion_M67_C::CauseRadialDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Explosion_M67.BP_Explosion_M67_C.CauseRadialDamage");
		
		ABP_Explosion_M67_C_CauseRadialDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Explosion_M67.BP_Explosion_M67_C.SpawnFX
	 * 		Flags  -> ()
	 */
	void ABP_Explosion_M67_C::SpawnFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Explosion_M67.BP_Explosion_M67_C.SpawnFX");
		
		ABP_Explosion_M67_C_SpawnFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Explosion_M67.BP_Explosion_M67_C.DamageActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      DamagedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Explosion_M67_C::DamageActor(class AActor* DamagedActor, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Explosion_M67.BP_Explosion_M67_C.DamageActor");
		
		ABP_Explosion_M67_C_DamageActor_Params params {};
		params.DamagedActor = DamagedActor;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Explosion_M67.BP_Explosion_M67_C.ExecuteUbergraph_BP_Explosion_M67
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Explosion_M67_C::ExecuteUbergraph_BP_Explosion_M67(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Explosion_M67.BP_Explosion_M67_C.ExecuteUbergraph_BP_Explosion_M67");
		
		ABP_Explosion_M67_C_ExecuteUbergraph_BP_Explosion_M67_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Explosion_M67_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Explosion_M67_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Explosion_M67.BP_Explosion_M67_C");
		return ptr;
	}

}


