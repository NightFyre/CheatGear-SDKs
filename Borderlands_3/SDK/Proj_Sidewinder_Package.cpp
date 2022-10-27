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
	 * 		Name   -> Function Proj_Sidewinder.Proj_Sidewinder_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_Sidewinder_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Sidewinder.Proj_Sidewinder_C.UserConstructionScript");
		
		AProj_Sidewinder_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Sidewinder.Proj_Sidewinder_C.InitializeElement
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EOakElementalType                                  ElementType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProj_Sidewinder_C::InitializeElement(EOakElementalType ElementType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Sidewinder.Proj_Sidewinder_C.InitializeElement");
		
		AProj_Sidewinder_C_InitializeElement_Params params {};
		params.ElementType = ElementType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Sidewinder.Proj_Sidewinder_C.TinkSuicideBomb_SetFuseTimer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewFuseTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProj_Sidewinder_C::TinkSuicideBomb_SetFuseTimer(float NewFuseTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Sidewinder.Proj_Sidewinder_C.TinkSuicideBomb_SetFuseTimer");
		
		AProj_Sidewinder_C_TinkSuicideBomb_SetFuseTimer_Params params {};
		params.NewFuseTime = NewFuseTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Sidewinder.Proj_Sidewinder_C.TinkSuicideBomb_SetCurrentHealth
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewCurrentHealth                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProj_Sidewinder_C::TinkSuicideBomb_SetCurrentHealth(float NewCurrentHealth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Sidewinder.Proj_Sidewinder_C.TinkSuicideBomb_SetCurrentHealth");
		
		AProj_Sidewinder_C_TinkSuicideBomb_SetCurrentHealth_Params params {};
		params.NewCurrentHealth = NewCurrentHealth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Sidewinder.Proj_Sidewinder_C.TinkSuicideBomb_StartSuicide
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_Sidewinder_C::TinkSuicideBomb_StartSuicide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Sidewinder.Proj_Sidewinder_C.TinkSuicideBomb_StartSuicide");
		
		AProj_Sidewinder_C_TinkSuicideBomb_StartSuicide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Sidewinder.Proj_Sidewinder_C.HNT_Prime
	 * 		Flags  -> (Net, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_Sidewinder_C::HNT_Prime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Sidewinder.Proj_Sidewinder_C.HNT_Prime");
		
		AProj_Sidewinder_C_HNT_Prime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Sidewinder.Proj_Sidewinder_C.HNT_Drop
	 * 		Flags  -> (Net, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_Sidewinder_C::HNT_Drop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Sidewinder.Proj_Sidewinder_C.HNT_Drop");
		
		AProj_Sidewinder_C_HNT_Drop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Sidewinder.Proj_Sidewinder_C.HNT_Throw
	 * 		Flags  -> (Net, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_Sidewinder_C::HNT_Throw()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Sidewinder.Proj_Sidewinder_C.HNT_Throw");
		
		AProj_Sidewinder_C_HNT_Throw_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Sidewinder.Proj_Sidewinder_C.OnExplode
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AProj_Sidewinder_C::OnExplode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Sidewinder.Proj_Sidewinder_C.OnExplode");
		
		AProj_Sidewinder_C_OnExplode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Sidewinder.Proj_Sidewinder_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AProj_Sidewinder_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Sidewinder.Proj_Sidewinder_C.ReceiveBeginPlay");
		
		AProj_Sidewinder_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Sidewinder.Proj_Sidewinder_C.FuseTimerExpired
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AProj_Sidewinder_C::FuseTimerExpired()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Sidewinder.Proj_Sidewinder_C.FuseTimerExpired");
		
		AProj_Sidewinder_C_FuseTimerExpired_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Sidewinder.Proj_Sidewinder_C.ReceiveActorBeginOverlap
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProj_Sidewinder_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Sidewinder.Proj_Sidewinder_C.ReceiveActorBeginOverlap");
		
		AProj_Sidewinder_C_ReceiveActorBeginOverlap_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Sidewinder.Proj_Sidewinder_C.FindHomingTarget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AProj_Sidewinder_C::FindHomingTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Sidewinder.Proj_Sidewinder_C.FindHomingTarget");
		
		AProj_Sidewinder_C_FindHomingTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Sidewinder.Proj_Sidewinder_C.DeploySticky
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AProj_Sidewinder_C::DeploySticky()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Sidewinder.Proj_Sidewinder_C.DeploySticky");
		
		AProj_Sidewinder_C_DeploySticky_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Sidewinder.Proj_Sidewinder_C.ExecuteUbergraph_Proj_Sidewinder
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProj_Sidewinder_C::ExecuteUbergraph_Proj_Sidewinder(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Sidewinder.Proj_Sidewinder_C.ExecuteUbergraph_Proj_Sidewinder");
		
		AProj_Sidewinder_C_ExecuteUbergraph_Proj_Sidewinder_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProj_Sidewinder_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProj_Sidewinder_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Proj_Sidewinder.Proj_Sidewinder_C");
		return ptr;
	}

}


