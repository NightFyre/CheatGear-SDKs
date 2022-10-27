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
	 * 		Name   -> Function Proj_WhiskeyTangoFoxtrotIED.Proj_WhiskeyTangoFoxtrotIED_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_WhiskeyTangoFoxtrotIED_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_WhiskeyTangoFoxtrotIED.Proj_WhiskeyTangoFoxtrotIED_C.UserConstructionScript");
		
		AProj_WhiskeyTangoFoxtrotIED_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_WhiskeyTangoFoxtrotIED.Proj_WhiskeyTangoFoxtrotIED_C.OnExplode
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AProj_WhiskeyTangoFoxtrotIED_C::OnExplode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_WhiskeyTangoFoxtrotIED.Proj_WhiskeyTangoFoxtrotIED_C.OnExplode");
		
		AProj_WhiskeyTangoFoxtrotIED_C_OnExplode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_WhiskeyTangoFoxtrotIED.Proj_WhiskeyTangoFoxtrotIED_C.OnHitWorld
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AProj_WhiskeyTangoFoxtrotIED_C::OnHitWorld(const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_WhiskeyTangoFoxtrotIED.Proj_WhiskeyTangoFoxtrotIED_C.OnHitWorld");
		
		AProj_WhiskeyTangoFoxtrotIED_C_OnHitWorld_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_WhiskeyTangoFoxtrotIED.Proj_WhiskeyTangoFoxtrotIED_C.OnHitEnemy
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AProj_WhiskeyTangoFoxtrotIED_C::OnHitEnemy(const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_WhiskeyTangoFoxtrotIED.Proj_WhiskeyTangoFoxtrotIED_C.OnHitEnemy");
		
		AProj_WhiskeyTangoFoxtrotIED_C_OnHitEnemy_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_WhiskeyTangoFoxtrotIED.Proj_WhiskeyTangoFoxtrotIED_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AProj_WhiskeyTangoFoxtrotIED_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_WhiskeyTangoFoxtrotIED.Proj_WhiskeyTangoFoxtrotIED_C.ReceiveBeginPlay");
		
		AProj_WhiskeyTangoFoxtrotIED_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_WhiskeyTangoFoxtrotIED.Proj_WhiskeyTangoFoxtrotIED_C.BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_2_OakTouchedTriggerDelegate__DelegateSignature_Proj_WhiskeyTangoFoxtrotIED
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      TouchingActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UActorComponent*                             ComponentTouched                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProj_WhiskeyTangoFoxtrotIED_C::BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_2_OakTouchedTriggerDelegate__DelegateSignature_Proj_WhiskeyTangoFoxtrotIED(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_WhiskeyTangoFoxtrotIED.Proj_WhiskeyTangoFoxtrotIED_C.BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_2_OakTouchedTriggerDelegate__DelegateSignature_Proj_WhiskeyTangoFoxtrotIED");
		
		AProj_WhiskeyTangoFoxtrotIED_C_BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_2_OakTouchedTriggerDelegate__DelegateSignature_Proj_WhiskeyTangoFoxtrotIED_Params params {};
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
	 * 		Name   -> Function Proj_WhiskeyTangoFoxtrotIED.Proj_WhiskeyTangoFoxtrotIED_C.ExecuteUbergraph_Proj_WhiskeyTangoFoxtrotIED
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProj_WhiskeyTangoFoxtrotIED_C::ExecuteUbergraph_Proj_WhiskeyTangoFoxtrotIED(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_WhiskeyTangoFoxtrotIED.Proj_WhiskeyTangoFoxtrotIED_C.ExecuteUbergraph_Proj_WhiskeyTangoFoxtrotIED");
		
		AProj_WhiskeyTangoFoxtrotIED_C_ExecuteUbergraph_Proj_WhiskeyTangoFoxtrotIED_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProj_WhiskeyTangoFoxtrotIED_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProj_WhiskeyTangoFoxtrotIED_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Proj_WhiskeyTangoFoxtrotIED.Proj_WhiskeyTangoFoxtrotIED_C");
		return ptr;
	}

}


