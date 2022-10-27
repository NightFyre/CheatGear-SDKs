/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_ViewPunchRecoilHandler.BP_ViewPunchRecoilHandler_C.GetController
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AController*                                 Controller                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ViewPunchRecoilHandler_C::GetController(class AController** Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ViewPunchRecoilHandler.BP_ViewPunchRecoilHandler_C.GetController");
		
		UBP_ViewPunchRecoilHandler_C_GetController_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Controller != nullptr)
			*Controller = params.Controller;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_ViewPunchRecoilHandler.BP_ViewPunchRecoilHandler_C.GetControlRotation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FRotator                                    ViewRotation                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_ViewPunchRecoilHandler_C::GetControlRotation(struct FRotator* ViewRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ViewPunchRecoilHandler.BP_ViewPunchRecoilHandler_C.GetControlRotation");
		
		UBP_ViewPunchRecoilHandler_C_GetControlRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ViewRotation != nullptr)
			*ViewRotation = params.ViewRotation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_ViewPunchRecoilHandler.BP_ViewPunchRecoilHandler_C.GetConeOfFireOffset
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	struct FVector UBP_ViewPunchRecoilHandler_C::GetConeOfFireOffset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ViewPunchRecoilHandler.BP_ViewPunchRecoilHandler_C.GetConeOfFireOffset");
		
		UBP_ViewPunchRecoilHandler_C_GetConeOfFireOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_ViewPunchRecoilHandler.BP_ViewPunchRecoilHandler_C.OnWeaponFire
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_ViewPunchRecoilHandler_C::OnWeaponFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ViewPunchRecoilHandler.BP_ViewPunchRecoilHandler_C.OnWeaponFire");
		
		UBP_ViewPunchRecoilHandler_C_OnWeaponFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_ViewPunchRecoilHandler.BP_ViewPunchRecoilHandler_C.ViewPunch
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ViewPunchRecoilHandler_C::ViewPunch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ViewPunchRecoilHandler.BP_ViewPunchRecoilHandler_C.ViewPunch");
		
		UBP_ViewPunchRecoilHandler_C_ViewPunch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_ViewPunchRecoilHandler.BP_ViewPunchRecoilHandler_C.OnTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ViewPunchRecoilHandler_C::OnTick(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ViewPunchRecoilHandler.BP_ViewPunchRecoilHandler_C.OnTick");
		
		UBP_ViewPunchRecoilHandler_C_OnTick_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_ViewPunchRecoilHandler.BP_ViewPunchRecoilHandler_C.ComputeConeOfFire
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DT                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ViewPunchRecoilHandler_C::ComputeConeOfFire(float DT)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ViewPunchRecoilHandler.BP_ViewPunchRecoilHandler_C.ComputeConeOfFire");
		
		UBP_ViewPunchRecoilHandler_C_ComputeConeOfFire_Params params {};
		params.DT = DT;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_ViewPunchRecoilHandler.BP_ViewPunchRecoilHandler_C.ComputeRecoil
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DT                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ViewPunchRecoilHandler_C::ComputeRecoil(float DT)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ViewPunchRecoilHandler.BP_ViewPunchRecoilHandler_C.ComputeRecoil");
		
		UBP_ViewPunchRecoilHandler_C_ComputeRecoil_Params params {};
		params.DT = DT;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_ViewPunchRecoilHandler.BP_ViewPunchRecoilHandler_C.OnWeaponStopFire
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_ViewPunchRecoilHandler_C::OnWeaponStopFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ViewPunchRecoilHandler.BP_ViewPunchRecoilHandler_C.OnWeaponStopFire");
		
		UBP_ViewPunchRecoilHandler_C_OnWeaponStopFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_ViewPunchRecoilHandler.BP_ViewPunchRecoilHandler_C.OnWeaponStartFire
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_ViewPunchRecoilHandler_C::OnWeaponStartFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ViewPunchRecoilHandler.BP_ViewPunchRecoilHandler_C.OnWeaponStartFire");
		
		UBP_ViewPunchRecoilHandler_C_OnWeaponStartFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_ViewPunchRecoilHandler.BP_ViewPunchRecoilHandler_C.ExecuteUbergraph_BP_ViewPunchRecoilHandler
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ViewPunchRecoilHandler_C::ExecuteUbergraph_BP_ViewPunchRecoilHandler(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ViewPunchRecoilHandler.BP_ViewPunchRecoilHandler_C.ExecuteUbergraph_BP_ViewPunchRecoilHandler");
		
		UBP_ViewPunchRecoilHandler_C_ExecuteUbergraph_BP_ViewPunchRecoilHandler_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_ViewPunchRecoilHandler_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_ViewPunchRecoilHandler_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ViewPunchRecoilHandler.BP_ViewPunchRecoilHandler_C");
		return ptr;
	}

}


