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
	 * 		Name   -> Function Interface_Operative_DeployBarrier.Interface_Operative_DeployBarrier_C.IsHoldingBarrier
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInterface_Operative_DeployBarrier_C::IsHoldingBarrier(bool* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Operative_DeployBarrier.Interface_Operative_DeployBarrier_C.IsHoldingBarrier");
		
		UInterface_Operative_DeployBarrier_C_IsHoldingBarrier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Interface_Operative_DeployBarrier.Interface_Operative_DeployBarrier_C.RefillBarrierHealth
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInterface_Operative_DeployBarrier_C::RefillBarrierHealth(bool* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Operative_DeployBarrier.Interface_Operative_DeployBarrier_C.RefillBarrierHealth");
		
		UInterface_Operative_DeployBarrier_C_RefillBarrierHealth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Interface_Operative_DeployBarrier.Interface_Operative_DeployBarrier_C.GiveBarrierHealth
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Health                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              New_Health                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInterface_Operative_DeployBarrier_C::GiveBarrierHealth(float Health, float* New_Health)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Operative_DeployBarrier.Interface_Operative_DeployBarrier_C.GiveBarrierHealth");
		
		UInterface_Operative_DeployBarrier_C_GiveBarrierHealth_Params params {};
		params.Health = Health;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (New_Health != nullptr)
			*New_Health = params.New_Health;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Interface_Operative_DeployBarrier.Interface_Operative_DeployBarrier_C.GetBarrierReference
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Barrier                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInterface_Operative_DeployBarrier_C::GetBarrierReference(class AActor** Barrier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Operative_DeployBarrier.Interface_Operative_DeployBarrier_C.GetBarrierReference");
		
		UInterface_Operative_DeployBarrier_C_GetBarrierReference_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Barrier != nullptr)
			*Barrier = params.Barrier;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Interface_Operative_DeployBarrier.Interface_Operative_DeployBarrier_C.ActivateHighlyUnstableFromCarry
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UInterface_Operative_DeployBarrier_C::ActivateHighlyUnstableFromCarry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Operative_DeployBarrier.Interface_Operative_DeployBarrier_C.ActivateHighlyUnstableFromCarry");
		
		UInterface_Operative_DeployBarrier_C_ActivateHighlyUnstableFromCarry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Interface_Operative_DeployBarrier.Interface_Operative_DeployBarrier_C.ActivateHighlyUnstable
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UInterface_Operative_DeployBarrier_C::ActivateHighlyUnstable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Operative_DeployBarrier.Interface_Operative_DeployBarrier_C.ActivateHighlyUnstable");
		
		UInterface_Operative_DeployBarrier_C_ActivateHighlyUnstable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Interface_Operative_DeployBarrier.Interface_Operative_DeployBarrier_C.GetBarrierHealthPercent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              HealthPercent                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInterface_Operative_DeployBarrier_C::GetBarrierHealthPercent(float* HealthPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Operative_DeployBarrier.Interface_Operative_DeployBarrier_C.GetBarrierHealthPercent");
		
		UInterface_Operative_DeployBarrier_C_GetBarrierHealthPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HealthPercent != nullptr)
			*HealthPercent = params.HealthPercent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Interface_Operative_DeployBarrier.Interface_Operative_DeployBarrier_C.StartHoldingBarrier
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInterface_Operative_DeployBarrier_C::StartHoldingBarrier(class AActor* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Operative_DeployBarrier.Interface_Operative_DeployBarrier_C.StartHoldingBarrier");
		
		UInterface_Operative_DeployBarrier_C_StartHoldingBarrier_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Interface_Operative_DeployBarrier.Interface_Operative_DeployBarrier_C.DeployNewBarrierInHand
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInterface_Operative_DeployBarrier_C::DeployNewBarrierInHand(class AActor* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Operative_DeployBarrier.Interface_Operative_DeployBarrier_C.DeployNewBarrierInHand");
		
		UInterface_Operative_DeployBarrier_C_DeployNewBarrierInHand_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Interface_Operative_DeployBarrier.Interface_Operative_DeployBarrier_C.DeployNewBarrierAroundPlayer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UInterface_Operative_DeployBarrier_C::DeployNewBarrierAroundPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Operative_DeployBarrier.Interface_Operative_DeployBarrier_C.DeployNewBarrierAroundPlayer");
		
		UInterface_Operative_DeployBarrier_C_DeployNewBarrierAroundPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInterface_Operative_DeployBarrier_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInterface_Operative_DeployBarrier_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Interface_Operative_DeployBarrier.Interface_Operative_DeployBarrier_C");
		return ptr;
	}

}


