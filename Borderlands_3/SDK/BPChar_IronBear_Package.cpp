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
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.GetIronBearAutoSlideCooldownRefund
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	float ABPChar_IronBear_C::GetIronBearAutoSlideCooldownRefund()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.GetIronBearAutoSlideCooldownRefund");
		
		ABPChar_IronBear_C_GetIronBearAutoSlideCooldownRefund_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.OnRep_bAutoBearStarted
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_IronBear_C::OnRep_bAutoBearStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.OnRep_bAutoBearStarted");
		
		ABPChar_IronBear_C_OnRep_bAutoBearStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.CalculateAutoBearDuration
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_IronBear_C::CalculateAutoBearDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.CalculateAutoBearDuration");
		
		ABPChar_IronBear_C_CalculateAutoBearDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.GetWeaponUserForWeaponSlot
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UWeaponSlotData*                             SlotData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UAIWeaponUserComponent* ABPChar_IronBear_C::GetWeaponUserForWeaponSlot(class UWeaponSlotData* SlotData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.GetWeaponUserForWeaponSlot");
		
		ABPChar_IronBear_C_GetWeaponUserForWeaponSlot_Params params {};
		params.SlotData = SlotData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.SetScreenLoopEnabled
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPChar_IronBear_C::SetScreenLoopEnabled(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.SetScreenLoopEnabled");
		
		ABPChar_IronBear_C_SetScreenLoopEnabled_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.StopBubbleShieldAudioLoop
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_IronBear_C::StopBubbleShieldAudioLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.StopBubbleShieldAudioLoop");
		
		ABPChar_IronBear_C_StopBubbleShieldAudioLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.StartBubbleShieldAudioLoop
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_IronBear_C::StartBubbleShieldAudioLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.StartBubbleShieldAudioLoop");
		
		ABPChar_IronBear_C_StartBubbleShieldAudioLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.BootGunnersNestOccupant
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               InputPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Delay                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_IronBear_C::BootGunnersNestOccupant(bool InputPin, float* Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.BootGunnersNestOccupant");
		
		ABPChar_IronBear_C_BootGunnersNestOccupant_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Delay != nullptr)
			*Delay = params.Delay;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.SetNewAutoBearRotationRates
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_IronBear_C::SetNewAutoBearRotationRates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.SetNewAutoBearRotationRates");
		
		ABPChar_IronBear_C_SetNewAutoBearRotationRates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.LockGunnerNestUsability
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_IronBear_C::LockGunnerNestUsability()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.LockGunnerNestUsability");
		
		ABPChar_IronBear_C_LockGunnerNestUsability_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.KickPlayerOutOfGunnersNest
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               zKilled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Delay                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_IronBear_C::KickPlayerOutOfGunnersNest(bool zKilled, float* Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.KickPlayerOutOfGunnersNest");
		
		ABPChar_IronBear_C_KickPlayerOutOfGunnersNest_Params params {};
		params.zKilled = zKilled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Delay != nullptr)
			*Delay = params.Delay;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.InitNukeMod
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EIronBearHardPointOrientation                      NewOrientation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_IronBear_C::InitNukeMod(EIronBearHardPointOrientation NewOrientation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.InitNukeMod");
		
		ABPChar_IronBear_C_InitNukeMod_Params params {};
		params.NewOrientation = NewOrientation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.GetSurpriseForYouTarget
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      AsActor                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_IronBear_C::GetSurpriseForYouTarget(class AActor** AsActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.GetSurpriseForYouTarget");
		
		ABPChar_IronBear_C_GetSurpriseForYouTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsActor != nullptr)
			*AsActor = params.AsActor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.ExitSurpriseForYouCore
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_IronBear_C::ExitSurpriseForYouCore()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.ExitSurpriseForYouCore");
		
		ABPChar_IronBear_C_ExitSurpriseForYouCore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.HasBubbleShield
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	bool ABPChar_IronBear_C::HasBubbleShield()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.HasBubbleShield");
		
		ABPChar_IronBear_C_HasBubbleShield_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.Init_BubbleShieldCore
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_IronBear_C::Init_BubbleShieldCore()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.Init_BubbleShieldCore");
		
		ABPChar_IronBear_C_Init_BubbleShieldCore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.Init_GunnersNestCore
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_IronBear_C::Init_GunnersNestCore()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.Init_GunnersNestCore");
		
		ABPChar_IronBear_C_Init_GunnersNestCore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.OnRep_GunnersNestOccupied
	 * 		Flags  -> (HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_IronBear_C::OnRep_GunnersNestOccupied()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.OnRep_GunnersNestOccupied");
		
		ABPChar_IronBear_C_OnRep_GunnersNestOccupied_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.OnRep_UseModdedBubbleShieldFX
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_IronBear_C::OnRep_UseModdedBubbleShieldFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.OnRep_UseModdedBubbleShieldFX");
		
		ABPChar_IronBear_C_OnRep_UseModdedBubbleShieldFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.ToggleBubbleShieldCollision
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPChar_IronBear_C::ToggleBubbleShieldCollision(bool On)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.ToggleBubbleShieldCollision");
		
		ABPChar_IronBear_C_ToggleBubbleShieldCollision_Params params {};
		params.On = On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.UpdateScreenParameter
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ParamName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EIronBearDamageLevel                               TriggeredLevel                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_IronBear_C::UpdateScreenParameter(const class FName& ParamName, EIronBearDamageLevel TriggeredLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.UpdateScreenParameter");
		
		ABPChar_IronBear_C_UpdateScreenParameter_Params params {};
		params.ParamName = ParamName;
		params.TriggeredLevel = TriggeredLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.UpdateScreenDamage
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticleSystemComponent*                    ParticleSystem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EIronBearDamageLevel                               TriggeredLevel                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EIronBearDamageLevel                               TriggeredSmokeLevel                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EIronBearDamageLevel                               TriggeredFireLevel                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_IronBear_C::UpdateScreenDamage(class UParticleSystemComponent* ParticleSystem, EIronBearDamageLevel TriggeredLevel, EIronBearDamageLevel TriggeredSmokeLevel, EIronBearDamageLevel TriggeredFireLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.UpdateScreenDamage");
		
		ABPChar_IronBear_C_UpdateScreenDamage_Params params {};
		params.ParticleSystem = ParticleSystem;
		params.TriggeredLevel = TriggeredLevel;
		params.TriggeredSmokeLevel = TriggeredSmokeLevel;
		params.TriggeredFireLevel = TriggeredFireLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.UpdateScreenCrack
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticleSystemComponent*                    ParticleSystem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EIronBearDamageLevel                               TriggeredLevel                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_IronBear_C::UpdateScreenCrack(class UParticleSystemComponent* ParticleSystem, EIronBearDamageLevel TriggeredLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.UpdateScreenCrack");
		
		ABPChar_IronBear_C_UpdateScreenCrack_Params params {};
		params.ParticleSystem = ParticleSystem;
		params.TriggeredLevel = TriggeredLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.PrepareIronBearForEntry
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOakCharacter*                               Gunner                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_IronBear_C::PrepareIronBearForEntry(class AOakCharacter* Gunner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.PrepareIronBearForEntry");
		
		ABPChar_IronBear_C_PrepareIronBearForEntry_Params params {};
		params.Gunner = Gunner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_IronBear_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.UserConstructionScript");
		
		ABPChar_IronBear_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.Timeline_0__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABPChar_IronBear_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.Timeline_0__FinishedFunc");
		
		ABPChar_IronBear_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.Timeline_0__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABPChar_IronBear_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.Timeline_0__UpdateFunc");
		
		ABPChar_IronBear_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.Timeline_1__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABPChar_IronBear_C::Timeline_1__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.Timeline_1__FinishedFunc");
		
		ABPChar_IronBear_C_Timeline_1__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.Timeline_1__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABPChar_IronBear_C::Timeline_1__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.Timeline_1__UpdateFunc");
		
		ABPChar_IronBear_C_Timeline_1__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.Timeline_2__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABPChar_IronBear_C::Timeline_2__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.Timeline_2__FinishedFunc");
		
		ABPChar_IronBear_C_Timeline_2__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.Timeline_2__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABPChar_IronBear_C::Timeline_2__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.Timeline_2__UpdateFunc");
		
		ABPChar_IronBear_C_Timeline_2__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.OnAnimEnd_2A9499CC4F6188887CB16E840419821A
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_IronBear_C::OnAnimEnd_2A9499CC4F6188887CB16E840419821A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.OnAnimEnd_2A9499CC4F6188887CB16E840419821A");
		
		ABPChar_IronBear_C_OnAnimEnd_2A9499CC4F6188887CB16E840419821A_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.OnEnd_2A9499CC4F6188887CB16E840419821A
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGbxActionEndState                                 EndState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_IronBear_C::OnEnd_2A9499CC4F6188887CB16E840419821A(EGbxActionEndState EndState, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.OnEnd_2A9499CC4F6188887CB16E840419821A");
		
		ABPChar_IronBear_C_OnEnd_2A9499CC4F6188887CB16E840419821A_Params params {};
		params.EndState = EndState;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.OnAnimEnd_D554724642CB95A6F77CEEA2DFDC9FF2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_IronBear_C::OnAnimEnd_D554724642CB95A6F77CEEA2DFDC9FF2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.OnAnimEnd_D554724642CB95A6F77CEEA2DFDC9FF2");
		
		ABPChar_IronBear_C_OnAnimEnd_D554724642CB95A6F77CEEA2DFDC9FF2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.OnEnd_D554724642CB95A6F77CEEA2DFDC9FF2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGbxActionEndState                                 EndState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_IronBear_C::OnEnd_D554724642CB95A6F77CEEA2DFDC9FF2(EGbxActionEndState EndState, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.OnEnd_D554724642CB95A6F77CEEA2DFDC9FF2");
		
		ABPChar_IronBear_C_OnEnd_D554724642CB95A6F77CEEA2DFDC9FF2_Params params {};
		params.EndState = EndState;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.OnAnimEnd_A39BE65742340F11ACEF63BD04B6FCB1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_IronBear_C::OnAnimEnd_A39BE65742340F11ACEF63BD04B6FCB1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.OnAnimEnd_A39BE65742340F11ACEF63BD04B6FCB1");
		
		ABPChar_IronBear_C_OnAnimEnd_A39BE65742340F11ACEF63BD04B6FCB1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.OnEnd_A39BE65742340F11ACEF63BD04B6FCB1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGbxActionEndState                                 EndState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_IronBear_C::OnEnd_A39BE65742340F11ACEF63BD04B6FCB1(EGbxActionEndState EndState, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.OnEnd_A39BE65742340F11ACEF63BD04B6FCB1");
		
		ABPChar_IronBear_C_OnEnd_A39BE65742340F11ACEF63BD04B6FCB1_Params params {};
		params.EndState = EndState;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.OnExiting
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bInstantExit                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPChar_IronBear_C::OnExiting(bool bInstantExit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.OnExiting");
		
		ABPChar_IronBear_C_OnExiting_Params params {};
		params.bInstantExit = bInstantExit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.OnExited
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 OldController                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_IronBear_C::OnExited(class AController* OldController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.OnExited");
		
		ABPChar_IronBear_C_OnExited_Params params {};
		params.OldController = OldController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.OnExitStarted
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABPChar_IronBear_C::OnExitStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.OnExitStarted");
		
		ABPChar_IronBear_C_OnExitStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.ServerNotifyIBScreenOff
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_IronBear_C::ServerNotifyIBScreenOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.ServerNotifyIBScreenOff");
		
		ABPChar_IronBear_C_ServerNotifyIBScreenOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.ClientOnExiting
	 * 		Flags  -> (Net, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_IronBear_C::ClientOnExiting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.ClientOnExiting");
		
		ABPChar_IronBear_C_ClientOnExiting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.SetupAutoBearDestroyCleanup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              RepDelay                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_IronBear_C::SetupAutoBearDestroyCleanup(float RepDelay, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.SetupAutoBearDestroyCleanup");
		
		ABPChar_IronBear_C_SetupAutoBearDestroyCleanup_Params params {};
		params.RepDelay = RepDelay;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.OnActionSkillActivated_IronBear
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOakActionAbility*                           ActionAbility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_IronBear_C::OnActionSkillActivated_IronBear(class UOakActionAbility* ActionAbility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.OnActionSkillActivated_IronBear");
		
		ABPChar_IronBear_C_OnActionSkillActivated_IronBear_Params params {};
		params.ActionAbility = ActionAbility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.ManualExitCancelled
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABPChar_IronBear_C::ManualExitCancelled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.ManualExitCancelled");
		
		ABPChar_IronBear_C_ManualExitCancelled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_BPChar_IronBear
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UDamageComponent*                            DamageReceiver                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageCauserComponent*                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_IronBear_C::BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_BPChar_IronBear(class UDamageComponent* DamageReceiver, class UDamageCauserComponent* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_BPChar_IronBear");
		
		ABPChar_IronBear_C_BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_BPChar_IronBear_Params params {};
		params.DamageReceiver = DamageReceiver;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.OnJumped
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABPChar_IronBear_C::OnJumped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.OnJumped");
		
		ABPChar_IronBear_C_OnJumped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.OnLanded
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABPChar_IronBear_C::OnLanded(const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.OnLanded");
		
		ABPChar_IronBear_C_OnLanded_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.ActivateGundamCore
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABPChar_IronBear_C::ActivateGundamCore()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.ActivateGundamCore");
		
		ABPChar_IronBear_C_ActivateGundamCore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.ServerActivateGundamCore
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_IronBear_C::ServerActivateGundamCore()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.ServerActivateGundamCore");
		
		ABPChar_IronBear_C_ServerActivateGundamCore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.BndEvt__DamageComponent_K2Node_ComponentBoundEvent_11_TakeAnyPipelineDamageDelegate__DelegateSignature_BPChar_IronBear
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UDamageComponent*                            DamageReceiver                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGbxDamageType*                              DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageSource*                               DamageSource                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AController*                                 InstigatedBy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageCauserComponent*                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FReceivedDamageDetails                      Details                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	 */
	void ABPChar_IronBear_C::BndEvt__DamageComponent_K2Node_ComponentBoundEvent_11_TakeAnyPipelineDamageDelegate__DelegateSignature_BPChar_IronBear(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.BndEvt__DamageComponent_K2Node_ComponentBoundEvent_11_TakeAnyPipelineDamageDelegate__DelegateSignature_BPChar_IronBear");
		
		ABPChar_IronBear_C_BndEvt__DamageComponent_K2Node_ComponentBoundEvent_11_TakeAnyPipelineDamageDelegate__DelegateSignature_BPChar_IronBear_Params params {};
		params.DamageReceiver = DamageReceiver;
		params.Damage = Damage;
		params.DamageType = DamageType;
		params.DamageSource = DamageSource;
		params.InstigatedBy = InstigatedBy;
		params.DamageCauser = DamageCauser;
		params.Details = Details;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.IBScreenOn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_IronBear_C::IBScreenOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.IBScreenOn");
		
		ABPChar_IronBear_C_IBScreenOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.IBScreenOff
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_IronBear_C::IBScreenOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.IBScreenOff");
		
		ABPChar_IronBear_C_IBScreenOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.EnableDamageScreens
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_IronBear_C::EnableDamageScreens()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.EnableDamageScreens");
		
		ABPChar_IronBear_C_EnableDamageScreens_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.DisableDamageScreens
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_IronBear_C::DisableDamageScreens()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.DisableDamageScreens");
		
		ABPChar_IronBear_C_DisableDamageScreens_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.OnDamageLevelChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABPChar_IronBear_C::OnDamageLevelChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.OnDamageLevelChanged");
		
		ABPChar_IronBear_C_OnDamageLevelChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.ActivateNukeScreenIcons
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EIronBearHardPointOrientation                      HardpointOrientation                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_IronBear_C::ActivateNukeScreenIcons(EIronBearHardPointOrientation HardpointOrientation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.ActivateNukeScreenIcons");
		
		ABPChar_IronBear_C_ActivateNukeScreenIcons_Params params {};
		params.HardpointOrientation = HardpointOrientation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.OnEntered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABPChar_IronBear_C::OnEntered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.OnEntered");
		
		ABPChar_IronBear_C_OnEntered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.OnEnteredClient
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_IronBear_C::OnEnteredClient()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.OnEnteredClient");
		
		ABPChar_IronBear_C_OnEnteredClient_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.OnEntering
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AOakCharacter_Player*                        InGunner                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_IronBear_C::OnEntering(class AOakCharacter_Player* InGunner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.OnEntering");
		
		ABPChar_IronBear_C_OnEntering_Params params {};
		params.InGunner = InGunner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABPChar_IronBear_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.ReceiveBeginPlay");
		
		ABPChar_IronBear_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.OnBubbleShieldEnabledStateChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABPChar_IronBear_C::OnBubbleShieldEnabledStateChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.OnBubbleShieldEnabledStateChanged");
		
		ABPChar_IronBear_C_OnBubbleShieldEnabledStateChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.SetBubbleShieldFXModOverrideEnabled
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPChar_IronBear_C::SetBubbleShieldFXModOverrideEnabled(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.SetBubbleShieldFXModOverrideEnabled");
		
		ABPChar_IronBear_C_SetBubbleShieldFXModOverrideEnabled_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.BndEvt__DestructibleCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_BPChar_IronBear
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABPChar_IronBear_C::BndEvt__DestructibleCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_BPChar_IronBear(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.BndEvt__DestructibleCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_BPChar_IronBear");
		
		ABPChar_IronBear_C_BndEvt__DestructibleCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_BPChar_IronBear_Params params {};
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
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.OnAttachStateChanged_GunnersNest
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_IronBear_C::OnAttachStateChanged_GunnersNest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.OnAttachStateChanged_GunnersNest");
		
		ABPChar_IronBear_C_OnAttachStateChanged_GunnersNest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.StartDigistructIn
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABPChar_IronBear_C::StartDigistructIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.StartDigistructIn");
		
		ABPChar_IronBear_C_StartDigistructIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_IronBear_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.ReceiveEndPlay");
		
		ABPChar_IronBear_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.IronBear_DoMeleeAttack
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_IronBear_C::IronBear_DoMeleeAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.IronBear_DoMeleeAttack");
		
		ABPChar_IronBear_C_IronBear_DoMeleeAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.UnlockResourceGod
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_IronBear_C::UnlockResourceGod()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.UnlockResourceGod");
		
		ABPChar_IronBear_C_UnlockResourceGod_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.StopBubbleShield
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_IronBear_C::StopBubbleShield()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.StopBubbleShield");
		
		ABPChar_IronBear_C_StopBubbleShield_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear.BPChar_IronBear_C.ExecuteUbergraph_BPChar_IronBear
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_IronBear_C::ExecuteUbergraph_BPChar_IronBear(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.ExecuteUbergraph_BPChar_IronBear");
		
		ABPChar_IronBear_C_ExecuteUbergraph_BPChar_IronBear_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPChar_IronBear_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPChar_IronBear_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_IronBear.BPChar_IronBear_C");
		return ptr;
	}

}


