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
	 * 		Name   -> Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.Init_SpecialistBear
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_IronCub_V3_C::Init_SpecialistBear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.Init_SpecialistBear");
		
		ABPChar_IronCub_V3_C_Init_SpecialistBear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.Init_DakkaBearCore
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_IronCub_V3_C::Init_DakkaBearCore()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.Init_DakkaBearCore");
		
		ABPChar_IronCub_V3_C_Init_DakkaBearCore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.GetSurpriseForYouTarget
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      AsActor                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_IronCub_V3_C::GetSurpriseForYouTarget(class AActor** AsActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.GetSurpriseForYouTarget");
		
		ABPChar_IronCub_V3_C_GetSurpriseForYouTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsActor != nullptr)
			*AsActor = params.AsActor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.ExitSurpriseForYouCore
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_IronCub_V3_C::ExitSurpriseForYouCore()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.ExitSurpriseForYouCore");
		
		ABPChar_IronCub_V3_C_ExitSurpriseForYouCore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.OnRep_bAutoBearStarted
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_IronCub_V3_C::OnRep_bAutoBearStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.OnRep_bAutoBearStarted");
		
		ABPChar_IronCub_V3_C_OnRep_bAutoBearStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.CalculateAutoBearDuration
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_IronCub_V3_C::CalculateAutoBearDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.CalculateAutoBearDuration");
		
		ABPChar_IronCub_V3_C_CalculateAutoBearDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.SetNewAutoBearRotationRates
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_IronCub_V3_C::SetNewAutoBearRotationRates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.SetNewAutoBearRotationRates");
		
		ABPChar_IronCub_V3_C_SetNewAutoBearRotationRates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.OnRep_UseModdedBubbleShieldFX
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_IronCub_V3_C::OnRep_UseModdedBubbleShieldFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.OnRep_UseModdedBubbleShieldFX");
		
		ABPChar_IronCub_V3_C_OnRep_UseModdedBubbleShieldFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.PrepareIronBearForEntry
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_IronCub_V3_C::PrepareIronBearForEntry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.PrepareIronBearForEntry");
		
		ABPChar_IronCub_V3_C_PrepareIronBearForEntry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.HasBubbleShield
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	bool ABPChar_IronCub_V3_C::HasBubbleShield()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.HasBubbleShield");
		
		ABPChar_IronCub_V3_C_HasBubbleShield_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.Init_BubbleShieldCore
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_IronCub_V3_C::Init_BubbleShieldCore()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.Init_BubbleShieldCore");
		
		ABPChar_IronCub_V3_C_Init_BubbleShieldCore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.ToggleBubbleShieldCollision
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPChar_IronCub_V3_C::ToggleBubbleShieldCollision(bool On)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.ToggleBubbleShieldCollision");
		
		ABPChar_IronCub_V3_C_ToggleBubbleShieldCollision_Params params {};
		params.On = On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.StopBubbleShieldAudioLoop
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_IronCub_V3_C::StopBubbleShieldAudioLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.StopBubbleShieldAudioLoop");
		
		ABPChar_IronCub_V3_C_StopBubbleShieldAudioLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.StartBubbleShieldAudioLoop
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_IronCub_V3_C::StartBubbleShieldAudioLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.StartBubbleShieldAudioLoop");
		
		ABPChar_IronCub_V3_C_StartBubbleShieldAudioLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.LockResources
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Locked                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPChar_IronCub_V3_C::LockResources(bool Locked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.LockResources");
		
		ABPChar_IronCub_V3_C_LockResources_Params params {};
		params.Locked = Locked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.TestAugment
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UOakActionAbilityAugmentData*                Augment                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPChar_IronCub_V3_C::TestAugment(class UOakActionAbilityAugmentData* Augment, bool* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.TestAugment");
		
		ABPChar_IronCub_V3_C_TestAugment_Params params {};
		params.Augment = Augment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.Mod4_ReleaseNuke
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_IronCub_V3_C::Mod4_ReleaseNuke()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.Mod4_ReleaseNuke");
		
		ABPChar_IronCub_V3_C_Mod4_ReleaseNuke_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.Mod2_OnCausedElementalEffect
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Causer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FStatusEffectSpec                           Spec                                                       (BlueprintVisible, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void ABPChar_IronCub_V3_C::Mod2_OnCausedElementalEffect(class AActor* Causer, struct FStatusEffectSpec* Spec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.Mod2_OnCausedElementalEffect");
		
		ABPChar_IronCub_V3_C_Mod2_OnCausedElementalEffect_Params params {};
		params.Causer = Causer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Spec != nullptr)
			*Spec = params.Spec;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.Mod1_Cleanup
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOakActionAbility*                           OakActionAbility                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_IronCub_V3_C::Mod1_Cleanup(class UOakActionAbility* OakActionAbility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.Mod1_Cleanup");
		
		ABPChar_IronCub_V3_C_Mod1_Cleanup_Params params {};
		params.OakActionAbility = OakActionAbility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.Mod1_AddStack
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_IronCub_V3_C::Mod1_AddStack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.Mod1_AddStack");
		
		ABPChar_IronCub_V3_C_Mod1_AddStack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.GetWeaponUserForWeaponSlot
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UWeaponSlotData*                             SlotData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UAIWeaponUserComponent* ABPChar_IronCub_V3_C::GetWeaponUserForWeaponSlot(class UWeaponSlotData* SlotData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.GetWeaponUserForWeaponSlot");
		
		ABPChar_IronCub_V3_C_GetWeaponUserForWeaponSlot_Params params {};
		params.SlotData = SlotData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.TestHardpoint
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UOakActionAbilityAugmentData*                Hard_Point                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPChar_IronCub_V3_C::TestHardpoint(class UOakActionAbilityAugmentData* Hard_Point, bool* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.TestHardpoint");
		
		ABPChar_IronCub_V3_C_TestHardpoint_Params params {};
		params.Hard_Point = Hard_Point;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.SetBlackboard_Aggro
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Toggle                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPChar_IronCub_V3_C::SetBlackboard_Aggro(bool Toggle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.SetBlackboard_Aggro");
		
		ABPChar_IronCub_V3_C_SetBlackboard_Aggro_Params params {};
		params.Toggle = Toggle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.SetupHardpointBlackboard
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOakActionAbilityAugmentSlotData*            Hard_Point_Slot                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_IronCub_V3_C::SetupHardpointBlackboard(class UOakActionAbilityAugmentSlotData* Hard_Point_Slot, class UClass** res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.SetupHardpointBlackboard");
		
		ABPChar_IronCub_V3_C_SetupHardpointBlackboard_Params params {};
		params.Hard_Point_Slot = Hard_Point_Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_IronCub_V3_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.UserConstructionScript");
		
		ABPChar_IronCub_V3_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.OnAnimEnd_97D044764693DA850AC80F83C4B2EAE6
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_IronCub_V3_C::OnAnimEnd_97D044764693DA850AC80F83C4B2EAE6()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.OnAnimEnd_97D044764693DA850AC80F83C4B2EAE6");
		
		ABPChar_IronCub_V3_C_OnAnimEnd_97D044764693DA850AC80F83C4B2EAE6_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.OnEnd_97D044764693DA850AC80F83C4B2EAE6
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGbxActionEndState                                 EndState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_IronCub_V3_C::OnEnd_97D044764693DA850AC80F83C4B2EAE6(EGbxActionEndState EndState, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.OnEnd_97D044764693DA850AC80F83C4B2EAE6");
		
		ABPChar_IronCub_V3_C_OnEnd_97D044764693DA850AC80F83C4B2EAE6_Params params {};
		params.EndState = EndState;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.IronBearDurationDepleted
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameResourcePoolReference                  ResourcePool                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
	 */
	void ABPChar_IronCub_V3_C::IronBearDurationDepleted(const struct FGameResourcePoolReference& ResourcePool)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.IronBearDurationDepleted");
		
		ABPChar_IronCub_V3_C_IronBearDurationDepleted_Params params {};
		params.ResourcePool = ResourcePool;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.SetupAutoBearDestroyCleanup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              RepDelay                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_IronCub_V3_C::SetupAutoBearDestroyCleanup(float RepDelay, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.SetupAutoBearDestroyCleanup");
		
		ABPChar_IronCub_V3_C_SetupAutoBearDestroyCleanup_Params params {};
		params.RepDelay = RepDelay;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.EndAutoBear
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_IronCub_V3_C::EndAutoBear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.EndAutoBear");
		
		ABPChar_IronCub_V3_C_EndAutoBear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.DestroyIronCub
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_IronCub_V3_C::DestroyIronCub()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.DestroyIronCub");
		
		ABPChar_IronCub_V3_C_DestroyIronCub_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.IronCub_OnActionSkillCoolingDown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOakActionAbility*                           ActionAbility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_IronCub_V3_C::IronCub_OnActionSkillCoolingDown(class UOakActionAbility* ActionAbility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.IronCub_OnActionSkillCoolingDown");
		
		ABPChar_IronCub_V3_C_IronCub_OnActionSkillCoolingDown_Params params {};
		params.ActionAbility = ActionAbility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_IronCub_V2
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DamageReceiver                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_IronCub_V3_C::BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_IronCub_V2(class AActor* DamageReceiver, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_IronCub_V2");
		
		ABPChar_IronCub_V3_C_BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_IronCub_V2_Params params {};
		params.DamageReceiver = DamageReceiver;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABPChar_IronCub_V3_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.ReceiveBeginPlay");
		
		ABPChar_IronCub_V3_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.OnAggro_PlayerPets
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_IronCub_V3_C::OnAggro_PlayerPets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.OnAggro_PlayerPets");
		
		ABPChar_IronCub_V3_C_OnAggro_PlayerPets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.OnDeAggro_PlayerPets
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              AggroDuration                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_IronCub_V3_C::OnDeAggro_PlayerPets(float AggroDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.OnDeAggro_PlayerPets");
		
		ABPChar_IronCub_V3_C_OnDeAggro_PlayerPets_Params params {};
		params.AggroDuration = AggroDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.OnExitStarted
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABPChar_IronCub_V3_C::OnExitStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.OnExitStarted");
		
		ABPChar_IronCub_V3_C_OnExitStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.IronBear_DoMeleeAttack
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_IronCub_V3_C::IronBear_DoMeleeAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.IronBear_DoMeleeAttack");
		
		ABPChar_IronCub_V3_C_IronBear_DoMeleeAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.ActivateNukeScreenIcons
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EIronBearHardPointOrientation                      HardpointOrientation                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_IronCub_V3_C::ActivateNukeScreenIcons(EIronBearHardPointOrientation HardpointOrientation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.ActivateNukeScreenIcons");
		
		ABPChar_IronCub_V3_C_ActivateNukeScreenIcons_Params params {};
		params.HardpointOrientation = HardpointOrientation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.SetBubbleShieldFXModOverrideEnabled
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPChar_IronCub_V3_C::SetBubbleShieldFXModOverrideEnabled(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.SetBubbleShieldFXModOverrideEnabled");
		
		ABPChar_IronCub_V3_C_SetBubbleShieldFXModOverrideEnabled_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.OnBubbleShieldEnabledStateChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABPChar_IronCub_V3_C::OnBubbleShieldEnabledStateChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.OnBubbleShieldEnabledStateChanged");
		
		ABPChar_IronCub_V3_C_OnBubbleShieldEnabledStateChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.OnActionSkillActivated_IronBear
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOakActionAbility*                           ActionAbility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_IronCub_V3_C::OnActionSkillActivated_IronBear(class UOakActionAbility* ActionAbility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.OnActionSkillActivated_IronBear");
		
		ABPChar_IronCub_V3_C_OnActionSkillActivated_IronBear_Params params {};
		params.ActionAbility = ActionAbility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_2_CauseDeathDelegate__DelegateSignature_BPChar_IronCub_V3
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UDamageComponent*                            Damaged                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCausedDeathDetails                         Details                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABPChar_IronCub_V3_C::BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_2_CauseDeathDelegate__DelegateSignature_BPChar_IronCub_V3(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_2_CauseDeathDelegate__DelegateSignature_BPChar_IronCub_V3");
		
		ABPChar_IronCub_V3_C_BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_2_CauseDeathDelegate__DelegateSignature_BPChar_IronCub_V3_Params params {};
		params.Damaged = Damaged;
		params.Details = Details;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.Player_OnLevelUp
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            OldExperienceLevel                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NewExperienceLevel                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_IronCub_V3_C::Player_OnLevelUp(int32_t OldExperienceLevel, int32_t NewExperienceLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.Player_OnLevelUp");
		
		ABPChar_IronCub_V3_C_Player_OnLevelUp_Params params {};
		params.OldExperienceLevel = OldExperienceLevel;
		params.NewExperienceLevel = NewExperienceLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.ExecuteUbergraph_BPChar_IronCub_V3
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_IronCub_V3_C::ExecuteUbergraph_BPChar_IronCub_V3(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.ExecuteUbergraph_BPChar_IronCub_V3");
		
		ABPChar_IronCub_V3_C_ExecuteUbergraph_BPChar_IronCub_V3_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPChar_IronCub_V3_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPChar_IronCub_V3_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_IronCub_V3.BPChar_IronCub_V3_C");
		return ptr;
	}

}


