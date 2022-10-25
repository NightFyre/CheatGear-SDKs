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
	 * 		Name   -> Function BP_Firearm_Master.BP_Firearm_Master_C.GetLeftHandOverlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimSequence*                               OutLeftHandOverlay                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     OutLeftHandOffset                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Firearm_Master_C::GetLeftHandOverlay(class UAnimSequence** OutLeftHandOverlay, struct FVector* OutLeftHandOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Master.BP_Firearm_Master_C.GetLeftHandOverlay");
		
		ABP_Firearm_Master_C_GetLeftHandOverlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLeftHandOverlay != nullptr)
			*OutLeftHandOverlay = params.OutLeftHandOverlay;
		if (OutLeftHandOffset != nullptr)
			*OutLeftHandOffset = params.OutLeftHandOffset;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_Master.BP_Firearm_Master_C.GetBoltHeldOpen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bBoltHeldOpen                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Firearm_Master_C::GetBoltHeldOpen(bool* bBoltHeldOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Master.BP_Firearm_Master_C.GetBoltHeldOpen");
		
		ABP_Firearm_Master_C_GetBoltHeldOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bBoltHeldOpen != nullptr)
			*bBoltHeldOpen = params.bBoltHeldOpen;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_Master.BP_Firearm_Master_C.SetBoltHeldOpen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewBoltHeldOpen                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Firearm_Master_C::SetBoltHeldOpen(bool bNewBoltHeldOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Master.BP_Firearm_Master_C.SetBoltHeldOpen");
		
		ABP_Firearm_Master_C_SetBoltHeldOpen_Params params {};
		params.bNewBoltHeldOpen = bNewBoltHeldOpen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_Master.BP_Firearm_Master_C.GetWeaponsPositionTransitionTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGBWeaponPosition                                  FromPosition                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EGBWeaponPosition                                  ToPosition                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float ABP_Firearm_Master_C::GetWeaponsPositionTransitionTime(EGBWeaponPosition FromPosition, EGBWeaponPosition ToPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Master.BP_Firearm_Master_C.GetWeaponsPositionTransitionTime");
		
		ABP_Firearm_Master_C_GetWeaponsPositionTransitionTime_Params params {};
		params.FromPosition = FromPosition;
		params.ToPosition = ToPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_Master.BP_Firearm_Master_C.ShowReloadHint
	 * 		Flags  -> ()
	 */
	void ABP_Firearm_Master_C::ShowReloadHint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Master.BP_Firearm_Master_C.ShowReloadHint");
		
		ABP_Firearm_Master_C_ShowReloadHint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_Master.BP_Firearm_Master_C.ShowSightHintMaybe
	 * 		Flags  -> ()
	 */
	void ABP_Firearm_Master_C::ShowSightHintMaybe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Master.BP_Firearm_Master_C.ShowSightHintMaybe");
		
		ABP_Firearm_Master_C_ShowSightHintMaybe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_Master.BP_Firearm_Master_C.HasAttachedSight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OutHasSIght                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Firearm_Master_C::HasAttachedSight(bool* OutHasSIght)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Master.BP_Firearm_Master_C.HasAttachedSight");
		
		ABP_Firearm_Master_C_HasAttachedSight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHasSIght != nullptr)
			*OutHasSIght = params.OutHasSIght;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_Master.BP_Firearm_Master_C.GetFireModeAudioSwitchName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        FireMode                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Firearm_Master_C::GetFireModeAudioSwitchName(class FName* FireMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Master.BP_Firearm_Master_C.GetFireModeAudioSwitchName");
		
		ABP_Firearm_Master_C_GetFireModeAudioSwitchName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FireMode != nullptr)
			*FireMode = params.FireMode;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_Master.BP_Firearm_Master_C.LockOnEmpty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShouldLock                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Firearm_Master_C::LockOnEmpty(bool* bShouldLock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Master.BP_Firearm_Master_C.LockOnEmpty");
		
		ABP_Firearm_Master_C_LockOnEmpty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bShouldLock != nullptr)
			*bShouldLock = params.bShouldLock;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_Master.BP_Firearm_Master_C.GetCharAnimInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimInstance*                               AnimInstance                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Firearm_Master_C::GetCharAnimInstance(class UAnimInstance** AnimInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Master.BP_Firearm_Master_C.GetCharAnimInstance");
		
		ABP_Firearm_Master_C_GetCharAnimInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimInstance != nullptr)
			*AnimInstance = params.AnimInstance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_Master.BP_Firearm_Master_C.NotifyEnum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      InEnumAsByte                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Firearm_Master_C::NotifyEnum(unsigned char InEnumAsByte)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Master.BP_Firearm_Master_C.NotifyEnum");
		
		ABP_Firearm_Master_C_NotifyEnum_Params params {};
		params.InEnumAsByte = InEnumAsByte;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_Master.BP_Firearm_Master_C.NotifyStateBeginEnum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      InEnumAsByte                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Firearm_Master_C::NotifyStateBeginEnum(unsigned char InEnumAsByte)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Master.BP_Firearm_Master_C.NotifyStateBeginEnum");
		
		ABP_Firearm_Master_C_NotifyStateBeginEnum_Params params {};
		params.InEnumAsByte = InEnumAsByte;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_Master.BP_Firearm_Master_C.NotifyStateBeginName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Firearm_Master_C::NotifyStateBeginName(const class FName& InName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Master.BP_Firearm_Master_C.NotifyStateBeginName");
		
		ABP_Firearm_Master_C_NotifyStateBeginName_Params params {};
		params.InName = InName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_Master.BP_Firearm_Master_C.NotifyStateEndEnum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      InEnumAsByte                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Firearm_Master_C::NotifyStateEndEnum(unsigned char InEnumAsByte)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Master.BP_Firearm_Master_C.NotifyStateEndEnum");
		
		ABP_Firearm_Master_C_NotifyStateEndEnum_Params params {};
		params.InEnumAsByte = InEnumAsByte;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_Master.BP_Firearm_Master_C.NotifyStateEndName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Firearm_Master_C::NotifyStateEndName(const class FName& InName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Master.BP_Firearm_Master_C.NotifyStateEndName");
		
		ABP_Firearm_Master_C_NotifyStateEndName_Params params {};
		params.InName = InName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_Master.BP_Firearm_Master_C.NotifyStateTickEnum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      InEnumAsByte                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              FrameDeltaTime                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Firearm_Master_C::NotifyStateTickEnum(unsigned char InEnumAsByte, float FrameDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Master.BP_Firearm_Master_C.NotifyStateTickEnum");
		
		ABP_Firearm_Master_C_NotifyStateTickEnum_Params params {};
		params.InEnumAsByte = InEnumAsByte;
		params.FrameDeltaTime = FrameDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_Master.BP_Firearm_Master_C.NotifyStateTickName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              FrameDeltaTime                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Firearm_Master_C::NotifyStateTickName(const class FName& InName, float FrameDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Master.BP_Firearm_Master_C.NotifyStateTickName");
		
		ABP_Firearm_Master_C_NotifyStateTickName_Params params {};
		params.InName = InName;
		params.FrameDeltaTime = FrameDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_Master.BP_Firearm_Master_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Firearm_Master_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Master.BP_Firearm_Master_C.ReceiveBeginPlay");
		
		ABP_Firearm_Master_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_Master.BP_Firearm_Master_C.OnSetFiringModeIndexEvent
	 * 		Flags  -> ()
	 */
	void ABP_Firearm_Master_C::OnSetFiringModeIndexEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Master.BP_Firearm_Master_C.OnSetFiringModeIndexEvent");
		
		ABP_Firearm_Master_C_OnSetFiringModeIndexEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_Master.BP_Firearm_Master_C.UpdateSafetyAlpha
	 * 		Flags  -> ()
	 */
	void ABP_Firearm_Master_C::UpdateSafetyAlpha()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Master.BP_Firearm_Master_C.UpdateSafetyAlpha");
		
		ABP_Firearm_Master_C_UpdateSafetyAlpha_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_Master.BP_Firearm_Master_C.OnStoppedFiringEvent
	 * 		Flags  -> ()
	 */
	void ABP_Firearm_Master_C::OnStoppedFiringEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Master.BP_Firearm_Master_C.OnStoppedFiringEvent");
		
		ABP_Firearm_Master_C_OnStoppedFiringEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_Master.BP_Firearm_Master_C.UpdateAudioValues
	 * 		Flags  -> ()
	 */
	void ABP_Firearm_Master_C::UpdateAudioValues()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Master.BP_Firearm_Master_C.UpdateAudioValues");
		
		ABP_Firearm_Master_C_UpdateAudioValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_Master.BP_Firearm_Master_C.OnEmptyShotEvent
	 * 		Flags  -> ()
	 */
	void ABP_Firearm_Master_C::OnEmptyShotEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Master.BP_Firearm_Master_C.OnEmptyShotEvent");
		
		ABP_Firearm_Master_C_OnEmptyShotEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_Master.BP_Firearm_Master_C.OnReloadDoubleTappedEvent
	 * 		Flags  -> ()
	 */
	void ABP_Firearm_Master_C::OnReloadDoubleTappedEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Master.BP_Firearm_Master_C.OnReloadDoubleTappedEvent");
		
		ABP_Firearm_Master_C_OnReloadDoubleTappedEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_Master.BP_Firearm_Master_C.OnReloadTappedEvent
	 * 		Flags  -> ()
	 */
	void ABP_Firearm_Master_C::OnReloadTappedEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Master.BP_Firearm_Master_C.OnReloadTappedEvent");
		
		ABP_Firearm_Master_C_OnReloadTappedEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_Master.BP_Firearm_Master_C.DisplayReloadMenuEvent
	 * 		Flags  -> ()
	 */
	void ABP_Firearm_Master_C::DisplayReloadMenuEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Master.BP_Firearm_Master_C.DisplayReloadMenuEvent");
		
		ABP_Firearm_Master_C_DisplayReloadMenuEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_Master.BP_Firearm_Master_C.PlayerReload
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                FalseSection                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                TrueSection                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Firearm_Master_C::PlayerReload(const struct FGameplayTag& FalseSection, const struct FGameplayTag& TrueSection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Master.BP_Firearm_Master_C.PlayerReload");
		
		ABP_Firearm_Master_C_PlayerReload_Params params {};
		params.FalseSection = FalseSection;
		params.TrueSection = TrueSection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_Master.BP_Firearm_Master_C.UseOffHandPressed
	 * 		Flags  -> ()
	 */
	void ABP_Firearm_Master_C::UseOffHandPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Master.BP_Firearm_Master_C.UseOffHandPressed");
		
		ABP_Firearm_Master_C_UseOffHandPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_Master.BP_Firearm_Master_C.ReadyAndShootHint
	 * 		Flags  -> ()
	 */
	void ABP_Firearm_Master_C::ReadyAndShootHint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Master.BP_Firearm_Master_C.ReadyAndShootHint");
		
		ABP_Firearm_Master_C_ReadyAndShootHint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_Master.BP_Firearm_Master_C.UseMainHandReleased
	 * 		Flags  -> ()
	 */
	void ABP_Firearm_Master_C::UseMainHandReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Master.BP_Firearm_Master_C.UseMainHandReleased");
		
		ABP_Firearm_Master_C_UseMainHandReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_Master.BP_Firearm_Master_C.OnFiringEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RecoilCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Firearm_Master_C::OnFiringEvent(int32_t RecoilCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Master.BP_Firearm_Master_C.OnFiringEvent");
		
		ABP_Firearm_Master_C_OnFiringEvent_Params params {};
		params.RecoilCount = RecoilCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_Master.BP_Firearm_Master_C.OnSpatialSoundTagChangedEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        OldSpatialSoundTag                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        NewSpatialSoundTag                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Firearm_Master_C::OnSpatialSoundTagChangedEvent(const class FName& OldSpatialSoundTag, const class FName& NewSpatialSoundTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Master.BP_Firearm_Master_C.OnSpatialSoundTagChangedEvent");
		
		ABP_Firearm_Master_C_OnSpatialSoundTagChangedEvent_Params params {};
		params.OldSpatialSoundTag = OldSpatialSoundTag;
		params.NewSpatialSoundTag = NewSpatialSoundTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_Master.BP_Firearm_Master_C.PositionAlphaMet
	 * 		Flags  -> ()
	 */
	void ABP_Firearm_Master_C::PositionAlphaMet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Master.BP_Firearm_Master_C.PositionAlphaMet");
		
		ABP_Firearm_Master_C_PositionAlphaMet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_Master.BP_Firearm_Master_C.PlayFiringSound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Firearm_Master_C::PlayFiringSound(int32_t Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Master.BP_Firearm_Master_C.PlayFiringSound");
		
		ABP_Firearm_Master_C_PlayFiringSound_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_Master.BP_Firearm_Master_C.OnBeingEquipped
	 * 		Flags  -> ()
	 */
	void ABP_Firearm_Master_C::OnBeingEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Master.BP_Firearm_Master_C.OnBeingEquipped");
		
		ABP_Firearm_Master_C_OnBeingEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_Master.BP_Firearm_Master_C.PlayCameraShake
	 * 		Flags  -> ()
	 */
	void ABP_Firearm_Master_C::PlayCameraShake()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Master.BP_Firearm_Master_C.PlayCameraShake");
		
		ABP_Firearm_Master_C_PlayCameraShake_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_Master.BP_Firearm_Master_C.OnEndViewTarget_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AGBCharacter*                                Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Firearm_Master_C::OnEndViewTarget_Event_1(class APlayerController* PlayerController, class AGBCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Master.BP_Firearm_Master_C.OnEndViewTarget_Event_1");
		
		ABP_Firearm_Master_C_OnEndViewTarget_Event_1_Params params {};
		params.PlayerController = PlayerController;
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_Master.BP_Firearm_Master_C.OnBecomeViewTarget_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AGBCharacter*                                Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Firearm_Master_C::OnBecomeViewTarget_Event_1(class APlayerController* PlayerController, class AGBCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Master.BP_Firearm_Master_C.OnBecomeViewTarget_Event_1");
		
		ABP_Firearm_Master_C_OnBecomeViewTarget_Event_1_Params params {};
		params.PlayerController = PlayerController;
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_Master.BP_Firearm_Master_C.BindViewTargetDelegates
	 * 		Flags  -> ()
	 */
	void ABP_Firearm_Master_C::BindViewTargetDelegates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Master.BP_Firearm_Master_C.BindViewTargetDelegates");
		
		ABP_Firearm_Master_C_BindViewTargetDelegates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_Master.BP_Firearm_Master_C.UnbindViewTargetDelegates
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBCharacter*                                OldParentCharacter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Firearm_Master_C::UnbindViewTargetDelegates(class AGBCharacter* OldParentCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Master.BP_Firearm_Master_C.UnbindViewTargetDelegates");
		
		ABP_Firearm_Master_C_UnbindViewTargetDelegates_Params params {};
		params.OldParentCharacter = OldParentCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_Master.BP_Firearm_Master_C.OnBeingUnequipped
	 * 		Flags  -> ()
	 */
	void ABP_Firearm_Master_C::OnBeingUnequipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Master.BP_Firearm_Master_C.OnBeingUnequipped");
		
		ABP_Firearm_Master_C_OnBeingUnequipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_Master.BP_Firearm_Master_C.StopFiringSound
	 * 		Flags  -> ()
	 */
	void ABP_Firearm_Master_C::StopFiringSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Master.BP_Firearm_Master_C.StopFiringSound");
		
		ABP_Firearm_Master_C_StopFiringSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_Master.BP_Firearm_Master_C.PlayFiringAnim
	 * 		Flags  -> ()
	 */
	void ABP_Firearm_Master_C::PlayFiringAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Master.BP_Firearm_Master_C.PlayFiringAnim");
		
		ABP_Firearm_Master_C_PlayFiringAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_Master.BP_Firearm_Master_C.OnAddedToCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBCharacter*                                NewParentCharacter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Firearm_Master_C::OnAddedToCharacter(class AGBCharacter* NewParentCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Master.BP_Firearm_Master_C.OnAddedToCharacter");
		
		ABP_Firearm_Master_C_OnAddedToCharacter_Params params {};
		params.NewParentCharacter = NewParentCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_Master.BP_Firearm_Master_C.NotifyName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Firearm_Master_C::NotifyName(const class FName& InName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Master.BP_Firearm_Master_C.NotifyName");
		
		ABP_Firearm_Master_C_NotifyName_Params params {};
		params.InName = InName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_Master.BP_Firearm_Master_C.ShowAmmoRelatedMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        AmmoRelatedMessage                                         (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ABP_Firearm_Master_C::ShowAmmoRelatedMessage(const class FText& AmmoRelatedMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Master.BP_Firearm_Master_C.ShowAmmoRelatedMessage");
		
		ABP_Firearm_Master_C_ShowAmmoRelatedMessage_Params params {};
		params.AmmoRelatedMessage = AmmoRelatedMessage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_Master.BP_Firearm_Master_C.OnChangeFiringModeEvent
	 * 		Flags  -> ()
	 */
	void ABP_Firearm_Master_C::OnChangeFiringModeEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Master.BP_Firearm_Master_C.OnChangeFiringModeEvent");
		
		ABP_Firearm_Master_C_OnChangeFiringModeEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_Master.BP_Firearm_Master_C.AIReload
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBAIController*                             AIController                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        ReloadType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Firearm_Master_C::AIReload(class AGBAIController* AIController, const class FName& ReloadType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Master.BP_Firearm_Master_C.AIReload");
		
		ABP_Firearm_Master_C_AIReload_Params params {};
		params.AIController = AIController;
		params.ReloadType = ReloadType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_Master.BP_Firearm_Master_C.SetLeftHandOverlayOverrideRef
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimSequence*                               NewLeftHandOverlayRefOverride                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NewLeftHandRelativeOffsetOverride                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Firearm_Master_C::SetLeftHandOverlayOverrideRef(class UAnimSequence* NewLeftHandOverlayRefOverride, const struct FVector& NewLeftHandRelativeOffsetOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Master.BP_Firearm_Master_C.SetLeftHandOverlayOverrideRef");
		
		ABP_Firearm_Master_C_SetLeftHandOverlayOverrideRef_Params params {};
		params.NewLeftHandOverlayRefOverride = NewLeftHandOverlayRefOverride;
		params.NewLeftHandRelativeOffsetOverride = NewLeftHandRelativeOffsetOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_Master.BP_Firearm_Master_C.ExecuteUbergraph_BP_Firearm_Master
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Firearm_Master_C::ExecuteUbergraph_BP_Firearm_Master(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Master.BP_Firearm_Master_C.ExecuteUbergraph_BP_Firearm_Master");
		
		ABP_Firearm_Master_C_ExecuteUbergraph_BP_Firearm_Master_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Firearm_Master_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Firearm_Master_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Firearm_Master.BP_Firearm_Master_C");
		return ptr;
	}

}


