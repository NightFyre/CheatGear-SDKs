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
	 * 		Name   -> Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.GetPhaseFlareSpawnLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     res                                                        (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPSirenCharacterComponent_C::GetPhaseFlareSpawnLocation(struct FVector* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.GetPhaseFlareSpawnLocation");
		
		UBPSirenCharacterComponent_C_GetPhaseFlareSpawnLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.SetPhaseFlareSpawnLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Loc                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPSirenCharacterComponent_C::SetPhaseFlareSpawnLocation(const struct FVector& Loc, bool* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.SetPhaseFlareSpawnLocation");
		
		UBPSirenCharacterComponent_C_SetPhaseFlareSpawnLocation_Params params {};
		params.Loc = Loc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.Start3rdPersonArmFade
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInstant                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPSirenCharacterComponent_C::Start3rdPersonArmFade(bool bVisible, bool bInstant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.Start3rdPersonArmFade");
		
		UBPSirenCharacterComponent_C_Start3rdPersonArmFade_Params params {};
		params.bVisible = bVisible;
		params.bInstant = bInstant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.StartTattoFade
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPSirenCharacterComponent_C::StartTattoFade(bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.StartTattoFade");
		
		UBPSirenCharacterComponent_C_StartTattoFade_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.SetArmElement
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EPhaseTranceElementalType                          NewElement                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPSirenCharacterComponent_C::SetArmElement(EPhaseTranceElementalType NewElement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.SetArmElement");
		
		UBPSirenCharacterComponent_C_SetArmElement_Params params {};
		params.NewElement = NewElement;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.StartArmMaterialInstanceFade
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UMaterialInstance*                           NewInstance                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPSirenCharacterComponent_C::StartArmMaterialInstanceFade(class UMaterialInstance* NewInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.StartArmMaterialInstanceFade");
		
		UBPSirenCharacterComponent_C_StartArmMaterialInstanceFade_Params params {};
		params.NewInstance = NewInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPSirenCharacterComponent_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.ReceiveBeginPlay");
		
		UBPSirenCharacterComponent_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.OnActionSkillActivated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOakActionAbility*                           ActionAbility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPSirenCharacterComponent_C::OnActionSkillActivated(class UOakActionAbility* ActionAbility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.OnActionSkillActivated");
		
		UBPSirenCharacterComponent_C_OnActionSkillActivated_Params params {};
		params.ActionAbility = ActionAbility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.OnRushEventHappened
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPSirenCharacterComponent_C::OnRushEventHappened()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.OnRushEventHappened");
		
		UBPSirenCharacterComponent_C_OnRushEventHappened_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.SetPhaseCastMeshActive
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bActive                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPSirenCharacterComponent_C::SetPhaseCastMeshActive(bool bActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.SetPhaseCastMeshActive");
		
		UBPSirenCharacterComponent_C_SetPhaseCastMeshActive_Params params {};
		params.bActive = bActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.ExecuteUbergraph_BPSirenCharacterComponent
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPSirenCharacterComponent_C::ExecuteUbergraph_BPSirenCharacterComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.ExecuteUbergraph_BPSirenCharacterComponent");
		
		UBPSirenCharacterComponent_C_ExecuteUbergraph_BPSirenCharacterComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPSirenCharacterComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPSirenCharacterComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPSirenCharacterComponent.BPSirenCharacterComponent_C");
		return ptr;
	}

}


