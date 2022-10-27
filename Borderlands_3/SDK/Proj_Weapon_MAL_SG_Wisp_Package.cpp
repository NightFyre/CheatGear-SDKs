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
	 * 		Name   -> Function Proj_Weapon_MAL_SG_Wisp.Proj_Weapon_MAL_SG_Wisp_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_Weapon_MAL_SG_Wisp_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Weapon_MAL_SG_Wisp.Proj_Weapon_MAL_SG_Wisp_C.UserConstructionScript");
		
		AProj_Weapon_MAL_SG_Wisp_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Weapon_MAL_SG_Wisp.Proj_Weapon_MAL_SG_Wisp_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AProj_Weapon_MAL_SG_Wisp_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Weapon_MAL_SG_Wisp.Proj_Weapon_MAL_SG_Wisp_C.ReceiveDestroyed");
		
		AProj_Weapon_MAL_SG_Wisp_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Weapon_MAL_SG_Wisp.Proj_Weapon_MAL_SG_Wisp_C.BndEvt__TriggerCollision_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Proj_Weapon_MAL_SG_Wisp
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AProj_Weapon_MAL_SG_Wisp_C::BndEvt__TriggerCollision_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Proj_Weapon_MAL_SG_Wisp(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Weapon_MAL_SG_Wisp.Proj_Weapon_MAL_SG_Wisp_C.BndEvt__TriggerCollision_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Proj_Weapon_MAL_SG_Wisp");
		
		AProj_Weapon_MAL_SG_Wisp_C_BndEvt__TriggerCollision_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Proj_Weapon_MAL_SG_Wisp_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Weapon_MAL_SG_Wisp.Proj_Weapon_MAL_SG_Wisp_C.BndEvt__TriggerCollision_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Proj_Weapon_MAL_SG_Wisp
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProj_Weapon_MAL_SG_Wisp_C::BndEvt__TriggerCollision_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Proj_Weapon_MAL_SG_Wisp(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Weapon_MAL_SG_Wisp.Proj_Weapon_MAL_SG_Wisp_C.BndEvt__TriggerCollision_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Proj_Weapon_MAL_SG_Wisp");
		
		AProj_Weapon_MAL_SG_Wisp_C_BndEvt__TriggerCollision_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Proj_Weapon_MAL_SG_Wisp_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Weapon_MAL_SG_Wisp.Proj_Weapon_MAL_SG_Wisp_C.ExecuteUbergraph_Proj_Weapon_MAL_SG_Wisp
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProj_Weapon_MAL_SG_Wisp_C::ExecuteUbergraph_Proj_Weapon_MAL_SG_Wisp(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Weapon_MAL_SG_Wisp.Proj_Weapon_MAL_SG_Wisp_C.ExecuteUbergraph_Proj_Weapon_MAL_SG_Wisp");
		
		AProj_Weapon_MAL_SG_Wisp_C_ExecuteUbergraph_Proj_Weapon_MAL_SG_Wisp_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProj_Weapon_MAL_SG_Wisp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProj_Weapon_MAL_SG_Wisp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Proj_Weapon_MAL_SG_Wisp.Proj_Weapon_MAL_SG_Wisp_C");
		return ptr;
	}

}


