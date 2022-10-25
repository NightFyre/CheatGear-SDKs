/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Siren_DLCSkill_WalkingPotato_Attack_3.Proj_Siren_DLCSkill_WalkingPotato_Attack_2_C.DamageScalar
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProj_Siren_DLCSkill_WalkingPotato_Attack_2_C::DamageScalar(float* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Siren_DLCSkill_WalkingPotato_Attack_3.Proj_Siren_DLCSkill_WalkingPotato_Attack_2_C.DamageScalar");
		
		AProj_Siren_DLCSkill_WalkingPotato_Attack_2_C_DamageScalar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Siren_DLCSkill_WalkingPotato_Attack_3.Proj_Siren_DLCSkill_WalkingPotato_Attack_2_C.GetOrbAreaDamageType
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UClass*                                      res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProj_Siren_DLCSkill_WalkingPotato_Attack_2_C::GetOrbAreaDamageType(class UClass** res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Siren_DLCSkill_WalkingPotato_Attack_3.Proj_Siren_DLCSkill_WalkingPotato_Attack_2_C.GetOrbAreaDamageType");
		
		AProj_Siren_DLCSkill_WalkingPotato_Attack_2_C_GetOrbAreaDamageType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Siren_DLCSkill_WalkingPotato_Attack_3.Proj_Siren_DLCSkill_WalkingPotato_Attack_2_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_Siren_DLCSkill_WalkingPotato_Attack_2_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Siren_DLCSkill_WalkingPotato_Attack_3.Proj_Siren_DLCSkill_WalkingPotato_Attack_2_C.UserConstructionScript");
		
		AProj_Siren_DLCSkill_WalkingPotato_Attack_2_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Siren_DLCSkill_WalkingPotato_Attack_3.Proj_Siren_DLCSkill_WalkingPotato_Attack_2_C.OnOrbStateSending
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_Siren_DLCSkill_WalkingPotato_Attack_2_C::OnOrbStateSending()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Siren_DLCSkill_WalkingPotato_Attack_3.Proj_Siren_DLCSkill_WalkingPotato_Attack_2_C.OnOrbStateSending");
		
		AProj_Siren_DLCSkill_WalkingPotato_Attack_2_C_OnOrbStateSending_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Siren_DLCSkill_WalkingPotato_Attack_3.Proj_Siren_DLCSkill_WalkingPotato_Attack_2_C.BndEvt__FFYLTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_Proj_Siren_DLCSkill_WalkingPotato_Attack_3
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      TouchingActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UActorComponent*                             ComponentTouched                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProj_Siren_DLCSkill_WalkingPotato_Attack_2_C::BndEvt__FFYLTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_Proj_Siren_DLCSkill_WalkingPotato_Attack_3(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Siren_DLCSkill_WalkingPotato_Attack_3.Proj_Siren_DLCSkill_WalkingPotato_Attack_2_C.BndEvt__FFYLTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_Proj_Siren_DLCSkill_WalkingPotato_Attack_3");
		
		AProj_Siren_DLCSkill_WalkingPotato_Attack_2_C_BndEvt__FFYLTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_Proj_Siren_DLCSkill_WalkingPotato_Attack_3_Params params {};
		params.TouchingActor = TouchingActor;
		params.bIsPlayer = bIsPlayer;
		params.ComponentTouched = ComponentTouched;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Siren_DLCSkill_WalkingPotato_Attack_3.Proj_Siren_DLCSkill_WalkingPotato_Attack_2_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AProj_Siren_DLCSkill_WalkingPotato_Attack_2_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Siren_DLCSkill_WalkingPotato_Attack_3.Proj_Siren_DLCSkill_WalkingPotato_Attack_2_C.ReceiveBeginPlay");
		
		AProj_Siren_DLCSkill_WalkingPotato_Attack_2_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Siren_DLCSkill_WalkingPotato_Attack_3.Proj_Siren_DLCSkill_WalkingPotato_Attack_2_C.ExecuteUbergraph_Proj_Siren_DLCSkill_WalkingPotato_Attack_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProj_Siren_DLCSkill_WalkingPotato_Attack_2_C::ExecuteUbergraph_Proj_Siren_DLCSkill_WalkingPotato_Attack_3(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Siren_DLCSkill_WalkingPotato_Attack_3.Proj_Siren_DLCSkill_WalkingPotato_Attack_2_C.ExecuteUbergraph_Proj_Siren_DLCSkill_WalkingPotato_Attack_3");
		
		AProj_Siren_DLCSkill_WalkingPotato_Attack_2_C_ExecuteUbergraph_Proj_Siren_DLCSkill_WalkingPotato_Attack_3_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProj_Siren_DLCSkill_WalkingPotato_Attack_2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProj_Siren_DLCSkill_WalkingPotato_Attack_2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Proj_Siren_DLCSkill_WalkingPotato_Attack_3.Proj_Siren_DLCSkill_WalkingPotato_Attack_2_C");
		return ptr;
	}

}


