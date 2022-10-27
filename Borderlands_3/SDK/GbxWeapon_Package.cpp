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
	 * 		RVA    -> 0x030B5610
	 * 		Name   -> Function GbxWeapon.Weapon.Unlock
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bReplicate                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWeapon::Unlock(bool bReplicate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.Unlock");
		
		AWeapon_Unlock_Params params {};
		params.bReplicate = bReplicate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B55F0
	 * 		Name   -> Function GbxWeapon.Weapon.TryAutoReload
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void AWeapon::TryAutoReload()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.TryAutoReload");
		
		AWeapon_TryAutoReload_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B5570
	 * 		Name   -> Function GbxWeapon.Weapon.ToggleMode
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		unsigned char                                      InputChannel                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWeapon::ToggleMode(unsigned char InputChannel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.ToggleMode");
		
		AWeapon_ToggleMode_Params params {};
		params.InputChannel = InputChannel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B5050
	 * 		Name   -> Function GbxWeapon.Weapon.SwitchPendingUseMode
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void AWeapon::SwitchPendingUseMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.SwitchPendingUseMode");
		
		AWeapon_SwitchPendingUseMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B4F50
	 * 		Name   -> Function GbxWeapon.Weapon.SwitchMode
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		unsigned char                                      InputChannel                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      NextUseModeIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bForced                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWeapon::SwitchMode(unsigned char InputChannel, unsigned char NextUseModeIndex, bool bForced)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.SwitchMode");
		
		AWeapon_SwitchMode_Params params {};
		params.InputChannel = InputChannel;
		params.NextUseModeIndex = NextUseModeIndex;
		params.bForced = bForced;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B4E80
	 * 		Name   -> Function GbxWeapon.Weapon.StopZooming
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bSkipTransitions                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bClearInput                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWeapon::StopZooming(bool bSkipTransitions, bool bClearInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.StopZooming");
		
		AWeapon_StopZooming_Params params {};
		params.bSkipTransitions = bSkipTransitions;
		params.bClearInput = bClearInput;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B4E00
	 * 		Name   -> Function GbxWeapon.Weapon.StopWeaponAction
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EWeaponActionType                                  WeaponAction                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWeapon::StopWeaponAction(EWeaponActionType WeaponAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.StopWeaponAction");
		
		AWeapon_StopWeaponAction_Params params {};
		params.WeaponAction = WeaponAction;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B4D30
	 * 		Name   -> Function GbxWeapon.Weapon.StopUsing
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		unsigned char                                      InputChannel                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bForced                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWeapon::StopUsing(unsigned char InputChannel, bool bForced)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.StopUsing");
		
		AWeapon_StopUsing_Params params {};
		params.InputChannel = InputChannel;
		params.bForced = bForced;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02912DC0
	 * 		Name   -> Function GbxWeapon.Weapon.StopReloading
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void AWeapon::StopReloading()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.StopReloading");
		
		AWeapon_StopReloading_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x014F27C0
	 * 		Name   -> Function GbxWeapon.Weapon.StopModeSwitch
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void AWeapon::StopModeSwitch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.StopModeSwitch");
		
		AWeapon_StopModeSwitch_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B4C70
	 * 		Name   -> Function GbxWeapon.Weapon.StopEffects
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EWeaponEffectType                                  EffectType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      UseModeIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWeapon::StopEffects(EWeaponEffectType EffectType, unsigned char UseModeIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.StopEffects");
		
		AWeapon_StopEffects_Params params {};
		params.EffectType = EffectType;
		params.UseModeIndex = UseModeIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B4BF0
	 * 		Name   -> Function GbxWeapon.Weapon.StopDynamicMaterialEffect
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            EffectID                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWeapon::StopDynamicMaterialEffect(int32_t EffectID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.StopDynamicMaterialEffect");
		
		AWeapon_StopDynamicMaterialEffect_Params params {};
		params.EffectID = EffectID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B4B00
	 * 		Name   -> Function GbxWeapon.Weapon.StopAnimation
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAnimMontage*                                Anim                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFirstPerson                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWeapon::StopAnimation(class UAnimMontage* Anim, bool bFirstPerson)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.StopAnimation");
		
		AWeapon_StopAnimation_Params params {};
		params.Anim = Anim;
		params.bFirstPerson = bFirstPerson;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B4AE0
	 * 		Name   -> Function GbxWeapon.Weapon.StartZooming
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void AWeapon::StartZooming()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.StartZooming");
		
		AWeapon_StartZooming_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B4A60
	 * 		Name   -> Function GbxWeapon.Weapon.StartUsing
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		unsigned char                                      InputChannel                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWeapon::StartUsing(unsigned char InputChannel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.StartUsing");
		
		AWeapon_StartUsing_Params params {};
		params.InputChannel = InputChannel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B49D0
	 * 		Name   -> Function GbxWeapon.Weapon.StartReloading
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bAuto                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWeapon::StartReloading(bool bAuto)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.StartReloading");
		
		AWeapon_StartReloading_Params params {};
		params.bAuto = bAuto;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B4940
	 * 		Name   -> Function GbxWeapon.Weapon.SetTargetLocked
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bIsLocked                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWeapon::SetTargetLocked(bool bIsLocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.SetTargetLocked");
		
		AWeapon_SetTargetLocked_Params params {};
		params.bIsLocked = bIsLocked;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B4670
	 * 		Name   -> Function GbxWeapon.Weapon.SetPreUseState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		unsigned char                                      UseModeIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWeapon::SetPreUseState(unsigned char UseModeIndex, bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.SetPreUseState");
		
		AWeapon_SetPreUseState_Params params {};
		params.UseModeIndex = UseModeIndex;
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B45A0
	 * 		Name   -> Function GbxWeapon.Weapon.SetMaterialVectorParameterValue
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ParamName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                ParamValue                                                 (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWeapon::SetMaterialVectorParameterValue(const class FName& ParamName, const struct FLinearColor& ParamValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.SetMaterialVectorParameterValue");
		
		AWeapon_SetMaterialVectorParameterValue_Params params {};
		params.ParamName = ParamName;
		params.ParamValue = ParamValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B44D0
	 * 		Name   -> Function GbxWeapon.Weapon.SetMaterialScalarParameterValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ParamName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ParamValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWeapon::SetMaterialScalarParameterValue(const class FName& ParamName, float ParamValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.SetMaterialScalarParameterValue");
		
		AWeapon_SetMaterialScalarParameterValue_Params params {};
		params.ParamName = ParamName;
		params.ParamValue = ParamValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B4390
	 * 		Name   -> Function GbxWeapon.Weapon.SetEffectVectorParameter
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ParamName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ParamValue                                                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FWeaponEffectQueryData                      QueryData                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AWeapon::SetEffectVectorParameter(const class FName& ParamName, const struct FVector& ParamValue, const struct FWeaponEffectQueryData& QueryData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.SetEffectVectorParameter");
		
		AWeapon_SetEffectVectorParameter_Params params {};
		params.ParamName = ParamName;
		params.ParamValue = ParamValue;
		params.QueryData = QueryData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B4270
	 * 		Name   -> Function GbxWeapon.Weapon.SetEffectMaterialParameter
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ParamName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMaterialInterface*                          ParamValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FWeaponEffectQueryData                      QueryData                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AWeapon::SetEffectMaterialParameter(const class FName& ParamName, class UMaterialInterface* ParamValue, const struct FWeaponEffectQueryData& QueryData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.SetEffectMaterialParameter");
		
		AWeapon_SetEffectMaterialParameter_Params params {};
		params.ParamName = ParamName;
		params.ParamValue = ParamValue;
		params.QueryData = QueryData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B4140
	 * 		Name   -> Function GbxWeapon.Weapon.SetEffectFloatParameter
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ParamName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ParamValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FWeaponEffectQueryData                      QueryData                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AWeapon::SetEffectFloatParameter(const class FName& ParamName, float ParamValue, const struct FWeaponEffectQueryData& QueryData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.SetEffectFloatParameter");
		
		AWeapon_SetEffectFloatParameter_Params params {};
		params.ParamName = ParamName;
		params.ParamValue = ParamValue;
		params.QueryData = QueryData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B4020
	 * 		Name   -> Function GbxWeapon.Weapon.SetEffectEmitterState
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        EmitterName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FWeaponEffectQueryData                      QueryData                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AWeapon::SetEffectEmitterState(const class FName& EmitterName, bool bEnabled, const struct FWeaponEffectQueryData& QueryData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.SetEffectEmitterState");
		
		AWeapon_SetEffectEmitterState_Params params {};
		params.EmitterName = EmitterName;
		params.bEnabled = bEnabled;
		params.QueryData = QueryData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B3EE0
	 * 		Name   -> Function GbxWeapon.Weapon.SetEffectColorParameter
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ParamName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                ParamValue                                                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FWeaponEffectQueryData                      QueryData                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AWeapon::SetEffectColorParameter(const class FName& ParamName, const struct FLinearColor& ParamValue, const struct FWeaponEffectQueryData& QueryData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.SetEffectColorParameter");
		
		AWeapon_SetEffectColorParameter_Params params {};
		params.ParamName = ParamName;
		params.ParamValue = ParamValue;
		params.QueryData = QueryData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B3DD0
	 * 		Name   -> Function GbxWeapon.Weapon.SetBoneVisibility
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        BoneName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bVisible                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EWeaponAttachmentVisibilityType                    AttachmentType                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWeapon::SetBoneVisibility(const class FName& BoneName, bool bVisible, EWeaponAttachmentVisibilityType AttachmentType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.SetBoneVisibility");
		
		AWeapon_SetBoneVisibility_Params params {};
		params.BoneName = BoneName;
		params.bVisible = bVisible;
		params.AttachmentType = AttachmentType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B3D80
	 * 		Name   -> Function GbxWeapon.Weapon.ServerUnlock
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 */
	void AWeapon::ServerUnlock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.ServerUnlock");
		
		AWeapon_ServerUnlock_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B3C40
	 * 		Name   -> Function GbxWeapon.Weapon.ServerSwitchMode
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		unsigned char                                      InputChannel                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      NextUseModeIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bForced                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWeapon::ServerSwitchMode(unsigned char InputChannel, unsigned char NextUseModeIndex, bool bForced)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.ServerSwitchMode");
		
		AWeapon_ServerSwitchMode_Params params {};
		params.InputChannel = InputChannel;
		params.NextUseModeIndex = NextUseModeIndex;
		params.bForced = bForced;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B3B40
	 * 		Name   -> Function GbxWeapon.Weapon.ServerStopUsing
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		unsigned char                                      InputChannel                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bForced                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWeapon::ServerStopUsing(unsigned char InputChannel, bool bForced)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.ServerStopUsing");
		
		AWeapon_ServerStopUsing_Params params {};
		params.InputChannel = InputChannel;
		params.bForced = bForced;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B3A50
	 * 		Name   -> Function GbxWeapon.Weapon.ServerStopModeSwitch
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		unsigned char                                      InputChannel                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      ClientUseModeIndex                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWeapon::ServerStopModeSwitch(unsigned char InputChannel, unsigned char ClientUseModeIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.ServerStopModeSwitch");
		
		AWeapon_ServerStopModeSwitch_Params params {};
		params.InputChannel = InputChannel;
		params.ClientUseModeIndex = ClientUseModeIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B3960
	 * 		Name   -> Function GbxWeapon.Weapon.ServerStartUsing
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		unsigned char                                      InputChannel                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      ClientPatternSeed                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWeapon::ServerStartUsing(unsigned char InputChannel, unsigned char ClientPatternSeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.ServerStartUsing");
		
		AWeapon_ServerStartUsing_Params params {};
		params.InputChannel = InputChannel;
		params.ClientPatternSeed = ClientPatternSeed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B3860
	 * 		Name   -> Function GbxWeapon.Weapon.ServerStartReloading
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		unsigned char                                      UseModeIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAuto                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWeapon::ServerStartReloading(unsigned char UseModeIndex, bool bAuto)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.ServerStartReloading");
		
		AWeapon_ServerStartReloading_Params params {};
		params.UseModeIndex = UseModeIndex;
		params.bAuto = bAuto;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B3720
	 * 		Name   -> Function GbxWeapon.Weapon.ServerSetZoomState
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		unsigned char                                      UseModeIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FWeaponZoomState                            NewState                                                   (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              ZoomStartOffset                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWeapon::ServerSetZoomState(unsigned char UseModeIndex, const struct FWeaponZoomState& NewState, float ZoomStartOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.ServerSetZoomState");
		
		AWeapon_ServerSetZoomState_Params params {};
		params.UseModeIndex = UseModeIndex;
		params.NewState = NewState;
		params.ZoomStartOffset = ZoomStartOffset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B3670
	 * 		Name   -> Function GbxWeapon.Weapon.ServerSetPatternSeed
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		unsigned char                                      ClientPatternSeed                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWeapon::ServerSetPatternSeed(unsigned char ClientPatternSeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.ServerSetPatternSeed");
		
		AWeapon_ServerSetPatternSeed_Params params {};
		params.ClientPatternSeed = ClientPatternSeed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B3620
	 * 		Name   -> Function GbxWeapon.Weapon.ServerRestartAutoUse
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 */
	void AWeapon::ServerRestartAutoUse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.ServerRestartAutoUse");
		
		AWeapon_ServerRestartAutoUse_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B3570
	 * 		Name   -> Function GbxWeapon.Weapon.ServerLock
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWeapon::ServerLock(float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.ServerLock");
		
		AWeapon_ServerLock_Params params {};
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B34B0
	 * 		Name   -> Function GbxWeapon.Weapon.ServerInterruptReloadToUse
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	 * Parameters:
	 * 		int32_t                                            ClientLoadedAmmo                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWeapon::ServerInterruptReloadToUse(int32_t ClientLoadedAmmo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.ServerInterruptReloadToUse");
		
		AWeapon_ServerInterruptReloadToUse_Params params {};
		params.ClientLoadedAmmo = ClientLoadedAmmo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B3460
	 * 		Name   -> Function GbxWeapon.Weapon.ServerEquipInterruptible
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 */
	void AWeapon::ServerEquipInterruptible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.ServerEquipInterruptible");
		
		AWeapon_ServerEquipInterruptible_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B3280
	 * 		Name   -> Function GbxWeapon.Weapon.RegisterTrinketAttachment
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FWeaponRegisterTrinketAttachmentData        Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AWeapon::RegisterTrinketAttachment(const struct FWeaponRegisterTrinketAttachmentData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.RegisterTrinketAttachment");
		
		AWeapon_RegisterTrinketAttachment_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B31E0
	 * 		Name   -> Function GbxWeapon.Weapon.RegisterSkeletalControl
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FWeaponRegisterSkeletalControlData          Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void AWeapon::RegisterSkeletalControl(const struct FWeaponRegisterSkeletalControlData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.RegisterSkeletalControl");
		
		AWeapon_RegisterSkeletalControl_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B30E0
	 * 		Name   -> Function GbxWeapon.Weapon.RegisterSimpleEffect
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EWeaponEffectType                                  EffectType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UParticleSystem*                             Effect                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        EffectSocket                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWeapon::RegisterSimpleEffect(EWeaponEffectType EffectType, class UParticleSystem* Effect, const class FName& EffectSocket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.RegisterSimpleEffect");
		
		AWeapon_RegisterSimpleEffect_Params params {};
		params.EffectType = EffectType;
		params.Effect = Effect;
		params.EffectSocket = EffectSocket;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B2FD0
	 * 		Name   -> Function GbxWeapon.Weapon.RegisterMaterialEffect
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FWeaponRegisterMaterialEffectData           Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AWeapon::RegisterMaterialEffect(const struct FWeaponRegisterMaterialEffectData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.RegisterMaterialEffect");
		
		AWeapon_RegisterMaterialEffect_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B2EC0
	 * 		Name   -> Function GbxWeapon.Weapon.RegisterEffect
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FWeaponRegisterAttachmentEffectData         Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AWeapon::RegisterEffect(const struct FWeaponRegisterAttachmentEffectData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.RegisterEffect");
		
		AWeapon_RegisterEffect_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B2EA0
	 * 		Name   -> Function GbxWeapon.Weapon.ReevaluateConditionalEffects
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AWeapon::ReevaluateConditionalEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.ReevaluateConditionalEffects");
		
		AWeapon_ReevaluateConditionalEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B2E80
	 * 		Name   -> Function GbxWeapon.Weapon.PrevZoomLevel
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void AWeapon::PrevZoomLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.PrevZoomLevel");
		
		AWeapon_PrevZoomLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B2C90
	 * 		Name   -> Function GbxWeapon.Weapon.PlayEffects
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EWeaponEffectType                                  EffectType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      UseModeIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            EffectID                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWeapon::PlayEffects(EWeaponEffectType EffectType, unsigned char UseModeIndex, int32_t EffectID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.PlayEffects");
		
		AWeapon_PlayEffects_Params params {};
		params.EffectType = EffectType;
		params.UseModeIndex = UseModeIndex;
		params.EffectID = EffectID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B2BA0
	 * 		Name   -> Function GbxWeapon.Weapon.PlayDynamicMaterialEffect
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FWeaponMaterialEffectData                   Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t AWeapon::PlayDynamicMaterialEffect(const struct FWeaponMaterialEffectData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.PlayDynamicMaterialEffect");
		
		AWeapon_PlayDynamicMaterialEffect_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B2A50
	 * 		Name   -> Function GbxWeapon.Weapon.PlayAnimation
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAnimMontage*                                Anim                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFirstPerson                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PlayRate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float AWeapon::PlayAnimation(class UAnimMontage* Anim, bool bFirstPerson, float PlayRate, float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.PlayAnimation");
		
		AWeapon_PlayAnimation_Params params {};
		params.Anim = Anim;
		params.bFirstPerson = bFirstPerson;
		params.PlayRate = PlayRate;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B2A30
	 * 		Name   -> Function GbxWeapon.Weapon.OnZoomedOut
	 * 		Flags  -> (Native, Protected)
	 */
	void AWeapon::OnZoomedOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.OnZoomedOut");
		
		AWeapon_OnZoomedOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B2A10
	 * 		Name   -> Function GbxWeapon.Weapon.OnUseStarted
	 * 		Flags  -> (Native, Protected)
	 */
	void AWeapon::OnUseStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.OnUseStarted");
		
		AWeapon_OnUseStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B29F0
	 * 		Name   -> Function GbxWeapon.Weapon.OnUseFinished
	 * 		Flags  -> (Native, Protected)
	 */
	void AWeapon::OnUseFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.OnUseFinished");
		
		AWeapon_OnUseFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B29B0
	 * 		Name   -> Function GbxWeapon.Weapon.OnUpdateSkeletalControlsWhenUseFinishes
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void AWeapon::OnUpdateSkeletalControlsWhenUseFinishes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.OnUpdateSkeletalControlsWhenUseFinishes");
		
		AWeapon_OnUpdateSkeletalControlsWhenUseFinishes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B29D0
	 * 		Name   -> Function GbxWeapon.Weapon.OnUpdateSkeletalControlsWhenUsed
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void AWeapon::OnUpdateSkeletalControlsWhenUsed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.OnUpdateSkeletalControlsWhenUsed");
		
		AWeapon_OnUpdateSkeletalControlsWhenUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B2990
	 * 		Name   -> Function GbxWeapon.Weapon.OnUpdateSkeletalControlsWhenAmmoChanges
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void AWeapon::OnUpdateSkeletalControlsWhenAmmoChanges()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.OnUpdateSkeletalControlsWhenAmmoChanges");
		
		AWeapon_OnUpdateSkeletalControlsWhenAmmoChanges_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B2970
	 * 		Name   -> Function GbxWeapon.Weapon.OnRep_TargetLockedChanged
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void AWeapon::OnRep_TargetLockedChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.OnRep_TargetLockedChanged");
		
		AWeapon_OnRep_TargetLockedChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B2950
	 * 		Name   -> Function GbxWeapon.Weapon.OnRep_PendingUseModeIndex
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void AWeapon::OnRep_PendingUseModeIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.OnRep_PendingUseModeIndex");
		
		AWeapon_OnRep_PendingUseModeIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B2930
	 * 		Name   -> Function GbxWeapon.Weapon.OnRep_PendingAttachState
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void AWeapon::OnRep_PendingAttachState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.OnRep_PendingAttachState");
		
		AWeapon_OnRep_PendingAttachState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B28B0
	 * 		Name   -> Function GbxWeapon.Weapon.OnRep_CurrentUseModeIndex
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		unsigned char                                      PreviousUseModeIndex                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWeapon::OnRep_CurrentUseModeIndex(unsigned char PreviousUseModeIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.OnRep_CurrentUseModeIndex");
		
		AWeapon_OnRep_CurrentUseModeIndex_Params params {};
		params.PreviousUseModeIndex = PreviousUseModeIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B2820
	 * 		Name   -> Function GbxWeapon.Weapon.OnReloadEnded
	 * 		Flags  -> (Native, Protected)
	 * Parameters:
	 * 		bool                                               bCompleted                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWeapon::OnReloadEnded(bool bCompleted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.OnReloadEnded");
		
		AWeapon_OnReloadEnded_Params params {};
		params.bCompleted = bCompleted;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B2780
	 * 		Name   -> Function GbxWeapon.Weapon.OnAmmoGivenToEmptyWeapon
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void AWeapon::OnAmmoGivenToEmptyWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.OnAmmoGivenToEmptyWeapon");
		
		AWeapon_OnAmmoGivenToEmptyWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B2630
	 * 		Name   -> Function GbxWeapon.Weapon.NotifySkeletalControl
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EWeaponEffectType                                  ControlType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ControlName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EWeaponSkeletalControlEvent                        Event                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              EventValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWeapon::NotifySkeletalControl(EWeaponEffectType ControlType, const class FName& ControlName, EWeaponSkeletalControlEvent Event, float EventValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.NotifySkeletalControl");
		
		AWeapon_NotifySkeletalControl_Params params {};
		params.ControlType = ControlType;
		params.ControlName = ControlName;
		params.Event = Event;
		params.EventValue = EventValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B2610
	 * 		Name   -> Function GbxWeapon.Weapon.NextZoomLevel
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void AWeapon::NextZoomLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.NextZoomLevel");
		
		AWeapon_NextZoomLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B2540
	 * 		Name   -> Function GbxWeapon.Weapon.Lock
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bReplicate                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWeapon::Lock(float Duration, bool bReplicate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.Lock");
		
		AWeapon_Lock_Params params {};
		params.Duration = Duration;
		params.bReplicate = bReplicate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B24C0
	 * 		Name   -> Function GbxWeapon.Weapon.K2_StopWeaponActionObj
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable)
	 * Parameters:
	 * 		class UGbxAction*                                  WeaponAction                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWeapon::K2_StopWeaponActionObj(class UGbxAction* WeaponAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.K2_StopWeaponActionObj");
		
		AWeapon_K2_StopWeaponActionObj_Params params {};
		params.WeaponAction = WeaponAction;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B2260
	 * 		Name   -> Function GbxWeapon.Weapon.K2_PlayWeaponActionEx
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable)
	 * Parameters:
	 * 		EWeaponActionType                                  WeaponAction                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FActionState_Base                           ActionParams                                               (Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               bCheckForRelevancy                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGbxAction* AWeapon::K2_PlayWeaponActionEx(EWeaponActionType WeaponAction, const struct FActionState_Base& ActionParams, bool bCheckForRelevancy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.K2_PlayWeaponActionEx");
		
		AWeapon_K2_PlayWeaponActionEx_Params params {};
		params.WeaponAction = WeaponAction;
		params.ActionParams = ActionParams;
		params.bCheckForRelevancy = bCheckForRelevancy;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B2110
	 * 		Name   -> Function GbxWeapon.Weapon.K2_PlayWeaponAction
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable)
	 * Parameters:
	 * 		EWeaponActionType                                  WeaponAction                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PlayRate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCheckForRelevancy                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGbxAction* AWeapon::K2_PlayWeaponAction(EWeaponActionType WeaponAction, float PlayRate, float Duration, bool bCheckForRelevancy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.K2_PlayWeaponAction");
		
		AWeapon_K2_PlayWeaponAction_Params params {};
		params.WeaponAction = WeaponAction;
		params.PlayRate = PlayRate;
		params.Duration = Duration;
		params.bCheckForRelevancy = bCheckForRelevancy;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B2080
	 * 		Name   -> Function GbxWeapon.Weapon.IsZoomedIn
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               bIncludeTransitions                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AWeapon::IsZoomedIn(bool bIncludeTransitions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.IsZoomedIn");
		
		AWeapon_IsZoomedIn_Params params {};
		params.bIncludeTransitions = bIncludeTransitions;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B2050
	 * 		Name   -> Function GbxWeapon.Weapon.IsZoomed
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AWeapon::IsZoomed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.IsZoomed");
		
		AWeapon_IsZoomed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B2020
	 * 		Name   -> Function GbxWeapon.Weapon.IsUsing
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AWeapon::IsUsing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.IsUsing");
		
		AWeapon_IsUsing_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B1FF0
	 * 		Name   -> Function GbxWeapon.Weapon.IsTargetLocked
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AWeapon::IsTargetLocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.IsTargetLocked");
		
		AWeapon_IsTargetLocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B1FC0
	 * 		Name   -> Function GbxWeapon.Weapon.IsSwitchingModes
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AWeapon::IsSwitchingModes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.IsSwitchingModes");
		
		AWeapon_IsSwitchingModes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B1F90
	 * 		Name   -> Function GbxWeapon.Weapon.IsReloading
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AWeapon::IsReloading()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.IsReloading");
		
		AWeapon_IsReloading_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B1F60
	 * 		Name   -> Function GbxWeapon.Weapon.IsPuttingDown
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AWeapon::IsPuttingDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.IsPuttingDown");
		
		AWeapon_IsPuttingDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B1ED0
	 * 		Name   -> Function GbxWeapon.Weapon.IsPendingUse
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		unsigned char                                      InputChannel                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AWeapon::IsPendingUse(unsigned char InputChannel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.IsPendingUse");
		
		AWeapon_IsPendingUse_Params params {};
		params.InputChannel = InputChannel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B1EA0
	 * 		Name   -> Function GbxWeapon.Weapon.IsLocked
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AWeapon::IsLocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.IsLocked");
		
		AWeapon_IsLocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B1E70
	 * 		Name   -> Function GbxWeapon.Weapon.IsLocalAuthority
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AWeapon::IsLocalAuthority()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.IsLocalAuthority");
		
		AWeapon_IsLocalAuthority_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B1E40
	 * 		Name   -> Function GbxWeapon.Weapon.IsInactive
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AWeapon::IsInactive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.IsInactive");
		
		AWeapon_IsInactive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B1E10
	 * 		Name   -> Function GbxWeapon.Weapon.IsEquipping
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AWeapon::IsEquipping()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.IsEquipping");
		
		AWeapon_IsEquipping_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B1DE0
	 * 		Name   -> Function GbxWeapon.Weapon.IsAuthorityUsing
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AWeapon::IsAuthorityUsing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.IsAuthorityUsing");
		
		AWeapon_IsAuthorityUsing_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B1DB0
	 * 		Name   -> Function GbxWeapon.Weapon.IsAuthoritySwitchingModes
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AWeapon::IsAuthoritySwitchingModes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.IsAuthoritySwitchingModes");
		
		AWeapon_IsAuthoritySwitchingModes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B1D80
	 * 		Name   -> Function GbxWeapon.Weapon.IsAuthorityReloading
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AWeapon::IsAuthorityReloading()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.IsAuthorityReloading");
		
		AWeapon_IsAuthorityReloading_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B1D50
	 * 		Name   -> Function GbxWeapon.Weapon.IsAuthorityPuttingDown
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AWeapon::IsAuthorityPuttingDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.IsAuthorityPuttingDown");
		
		AWeapon_IsAuthorityPuttingDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B1D20
	 * 		Name   -> Function GbxWeapon.Weapon.IsAuthorityEquipping
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AWeapon::IsAuthorityEquipping()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.IsAuthorityEquipping");
		
		AWeapon_IsAuthorityEquipping_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B1CF0
	 * 		Name   -> Function GbxWeapon.Weapon.IsActive
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AWeapon::IsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.IsActive");
		
		AWeapon_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B1BF0
	 * 		Name   -> Function GbxWeapon.Weapon.GivenTo
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APawn*                                       NewOwner                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWeapon::GivenTo(class APawn* NewOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.GivenTo");
		
		AWeapon_GivenTo_Params params {};
		params.NewOwner = NewOwner;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B1BC0
	 * 		Name   -> Function GbxWeapon.Weapon.GetZoomFOVScale
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float AWeapon::GetZoomFOVScale()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.GetZoomFOVScale");
		
		AWeapon_GetZoomFOVScale_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B1B90
	 * 		Name   -> Function GbxWeapon.Weapon.GetZoomEffect
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float AWeapon::GetZoomEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.GetZoomEffect");
		
		AWeapon_GetZoomEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B1B60
	 * 		Name   -> Function GbxWeapon.Weapon.GetZoomDuration
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float AWeapon::GetZoomDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.GetZoomDuration");
		
		AWeapon_GetZoomDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B1A90
	 * 		Name   -> Function GbxWeapon.Weapon.GetUseModeComponentByClass
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UClass*                                      ComponentClass                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      UseModeIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UActorComponent* AWeapon::GetUseModeComponentByClass(class UClass* ComponentClass, unsigned char UseModeIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.GetUseModeComponentByClass");
		
		AWeapon_GetUseModeComponentByClass_Params params {};
		params.ComponentClass = ComponentClass;
		params.UseModeIndex = UseModeIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B1580
	 * 		Name   -> Function GbxWeapon.Weapon.GetMuteADSAlpha
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent, Const)
	 */
	float AWeapon::GetMuteADSAlpha()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.GetMuteADSAlpha");
		
		AWeapon_GetMuteADSAlpha_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B1550
	 * 		Name   -> Function GbxWeapon.Weapon.GetMaxZoomFOVScale
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float AWeapon::GetMaxZoomFOVScale()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.GetMaxZoomFOVScale");
		
		AWeapon_GetMaxZoomFOVScale_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B1520
	 * 		Name   -> Function GbxWeapon.Weapon.GetLastInputChannel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	unsigned char AWeapon::GetLastInputChannel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.GetLastInputChannel");
		
		AWeapon_GetLastInputChannel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B14C0
	 * 		Name   -> Function GbxWeapon.Weapon.GetCurrentReloadPartType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	unsigned char AWeapon::GetCurrentReloadPartType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.GetCurrentReloadPartType");
		
		AWeapon_GetCurrentReloadPartType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B13E0
	 * 		Name   -> Function GbxWeapon.Weapon.GetAttachmentMesh
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               bFirstPerson                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      SlotIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMeshComponent* AWeapon::GetAttachmentMesh(bool bFirstPerson, unsigned char SlotIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.GetAttachmentMesh");
		
		AWeapon_GetAttachmentMesh_Params params {};
		params.bFirstPerson = bFirstPerson;
		params.SlotIndex = SlotIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B1310
	 * 		Name   -> Function GbxWeapon.Weapon.GetAssociatedUseModeComponentByClass
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UClass*                                      ComponentClass                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UActorComponent*                             ReferenceComponent                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UActorComponent* AWeapon::GetAssociatedUseModeComponentByClass(class UClass* ComponentClass, class UActorComponent* ReferenceComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.GetAssociatedUseModeComponentByClass");
		
		AWeapon_GetAssociatedUseModeComponentByClass_Params params {};
		params.ComponentClass = ComponentClass;
		params.ReferenceComponent = ReferenceComponent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B12F0
	 * 		Name   -> Function GbxWeapon.Weapon.GetAimAssistParameters
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UAimAssistParameters* AWeapon::GetAimAssistParameters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.GetAimAssistParameters");
		
		AWeapon_GetAimAssistParameters_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B0E90
	 * 		Name   -> Function GbxWeapon.Weapon.EquipInterruptible
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AWeapon::EquipInterruptible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.EquipInterruptible");
		
		AWeapon_EquipInterruptible_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B0E70
	 * 		Name   -> Function GbxWeapon.Weapon.Dropped
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AWeapon::Dropped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.Dropped");
		
		AWeapon_Dropped_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B0DE0
	 * 		Name   -> Function GbxWeapon.Weapon.CycleZoomLevel
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void AWeapon::CycleZoomLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.CycleZoomLevel");
		
		AWeapon_CycleZoomLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013BE600
	 * 		Name   -> Function GbxWeapon.Weapon.ClientUnlock
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient)
	 */
	void AWeapon::ClientUnlock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.ClientUnlock");
		
		AWeapon_ClientUnlock_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B0DC0
	 * 		Name   -> Function GbxWeapon.Weapon.ClientStopReloading
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient)
	 */
	void AWeapon::ClientStopReloading()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.ClientStopReloading");
		
		AWeapon_ClientStopReloading_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B0D40
	 * 		Name   -> Function GbxWeapon.Weapon.ClientLock
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient)
	 * Parameters:
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWeapon::ClientLock(float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.ClientLock");
		
		AWeapon_ClientLock_Params params {};
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B02E0
	 * 		Name   -> Function GbxWeapon.Weapon.AddUseMode
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UWeaponUseComponent*                         UseComponent                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UActorComponent*>                     OtherComponents                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InputChannels                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	unsigned char AWeapon::AddUseMode(class UWeaponUseComponent* UseComponent, TArray<class UActorComponent*> OtherComponents, int32_t InputChannels)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.AddUseMode");
		
		AWeapon_AddUseMode_Params params {};
		params.UseComponent = UseComponent;
		params.OtherComponents = OtherComponents;
		params.InputChannels = InputChannels;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B01E0
	 * 		Name   -> Function GbxWeapon.Weapon.Activate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APawn*                                       WeaponOwner                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      InSlot                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EWeaponEquipType                                   InEquipType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWeapon::Activate(class APawn* WeaponOwner, unsigned char InSlot, EWeaponEquipType InEquipType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.Activate");
		
		AWeapon_Activate_Params params {};
		params.WeaponOwner = WeaponOwner;
		params.InSlot = InSlot;
		params.InEquipType = InEquipType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.Weapon");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxWeapon.WeaponPreUseComponent.K2_OnDeactivated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UWeaponPreUseComponent::K2_OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponPreUseComponent.K2_OnDeactivated");
		
		UWeaponPreUseComponent_K2_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxWeapon.WeaponPreUseComponent.K2_OnActivated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UWeaponPreUseComponent::K2_OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponPreUseComponent.K2_OnActivated");
		
		UWeaponPreUseComponent_K2_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponPreUseComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponPreUseComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.WeaponPreUseComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030BF230
	 * 		Name   -> Function GbxWeapon.WeaponUseComponent.ToggleMode
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 */
	bool UWeaponUseComponent::ToggleMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponUseComponent.ToggleMode");
		
		UWeaponUseComponent_ToggleMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030BF1B0
	 * 		Name   -> Function GbxWeapon.WeaponUseComponent.SwitchToZoomedMode
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		unsigned char                                      ZoomLevel                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWeaponUseComponent::SwitchToZoomedMode(unsigned char ZoomLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponUseComponent.SwitchToZoomedMode");
		
		UWeaponUseComponent_SwitchToZoomedMode_Params params {};
		params.ZoomLevel = ZoomLevel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030BF130
	 * 		Name   -> Function GbxWeapon.WeaponUseComponent.SwitchFromZoomedMode
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		unsigned char                                      ZoomLevel                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWeaponUseComponent::SwitchFromZoomedMode(unsigned char ZoomLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponUseComponent.SwitchFromZoomedMode");
		
		UWeaponUseComponent_SwitchFromZoomedMode_Params params {};
		params.ZoomLevel = ZoomLevel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030BEC00
	 * 		Name   -> Function GbxWeapon.WeaponUseComponent.OnPreUseFinished
	 * 		Flags  -> (Native, Protected)
	 * Parameters:
	 * 		bool                                               bInterrupted                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWeaponUseComponent::OnPreUseFinished(bool bInterrupted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponUseComponent.OnPreUseFinished");
		
		UWeaponUseComponent_OnPreUseFinished_Params params {};
		params.bInterrupted = bInterrupted;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxWeapon.WeaponUseComponent.K2_OnDeactivated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UWeaponUseComponent::K2_OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponUseComponent.K2_OnDeactivated");
		
		UWeaponUseComponent_K2_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxWeapon.WeaponUseComponent.K2_OnActivated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UWeaponUseComponent::K2_OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponUseComponent.K2_OnActivated");
		
		UWeaponUseComponent_K2_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030BDE50
	 * 		Name   -> Function GbxWeapon.WeaponUseComponent.CanActivateMode
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent, Const)
	 */
	bool UWeaponUseComponent::CanActivateMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponUseComponent.CanActivateMode");
		
		UWeaponUseComponent_CanActivateMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponUseComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponUseComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.WeaponUseComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030BB660
	 * 		Name   -> Function GbxWeapon.WeaponFireComponent.ServerResetFireSequence
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 */
	void UWeaponFireComponent::ServerResetFireSequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponFireComponent.ServerResetFireSequence");
		
		UWeaponFireComponent_ServerResetFireSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxWeapon.WeaponFireComponent.OnStopFireRateDeceleration
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UWeaponFireComponent::OnStopFireRateDeceleration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponFireComponent.OnStopFireRateDeceleration");
		
		UWeaponFireComponent_OnStopFireRateDeceleration_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxWeapon.WeaponFireComponent.OnStopFireRateAcceleration
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UWeaponFireComponent::OnStopFireRateAcceleration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponFireComponent.OnStopFireRateAcceleration");
		
		UWeaponFireComponent_OnStopFireRateAcceleration_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxWeapon.WeaponFireComponent.OnStartFireRateDeceleration
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UWeaponFireComponent::OnStartFireRateDeceleration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponFireComponent.OnStartFireRateDeceleration");
		
		UWeaponFireComponent_OnStartFireRateDeceleration_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxWeapon.WeaponFireComponent.OnStartFireRateAcceleration
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UWeaponFireComponent::OnStartFireRateAcceleration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponFireComponent.OnStartFireRateAcceleration");
		
		UWeaponFireComponent_OnStartFireRateAcceleration_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0136ED30
	 * 		Name   -> Function GbxWeapon.WeaponFireComponent.OnRep_ImpactLocation
	 * 		Flags  -> (Native, Protected)
	 */
	void UWeaponFireComponent::OnRep_ImpactLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponFireComponent.OnRep_ImpactLocation");
		
		UWeaponFireComponent_OnRep_ImpactLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030BB550
	 * 		Name   -> Function GbxWeapon.WeaponFireComponent.OnRep_FlashCount
	 * 		Flags  -> (Native, Protected)
	 */
	void UWeaponFireComponent::OnRep_FlashCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponFireComponent.OnRep_FlashCount");
		
		UWeaponFireComponent_OnRep_FlashCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030BB530
	 * 		Name   -> Function GbxWeapon.WeaponFireComponent.OnRep_FireRateAccelChanged
	 * 		Flags  -> (Native, Protected)
	 */
	void UWeaponFireComponent::OnRep_FireRateAccelChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponFireComponent.OnRep_FireRateAccelChanged");
		
		UWeaponFireComponent_OnRep_FireRateAccelChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030BB510
	 * 		Name   -> Function GbxWeapon.WeaponFireComponent.OnRep_ClientFireSequenceState
	 * 		Flags  -> (Native, Protected)
	 */
	void UWeaponFireComponent::OnRep_ClientFireSequenceState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponFireComponent.OnRep_ClientFireSequenceState");
		
		UWeaponFireComponent_OnRep_ClientFireSequenceState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02915FA0
	 * 		Name   -> Function GbxWeapon.WeaponFireComponent.OnReloadAmmoGiven
	 * 		Flags  -> (Native, Protected)
	 */
	void UWeaponFireComponent::OnReloadAmmoGiven()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponFireComponent.OnReloadAmmoGiven");
		
		UWeaponFireComponent_OnReloadAmmoGiven_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030BB490
	 * 		Name   -> Function GbxWeapon.WeaponFireComponent.OnLoopingFireActionEnd
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		EGbxActionEndState                                 EndState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWeaponFireComponent::OnLoopingFireActionEnd(EGbxActionEndState EndState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponFireComponent.OnLoopingFireActionEnd");
		
		UWeaponFireComponent_OnLoopingFireActionEnd_Params params {};
		params.EndState = EndState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030BB470
	 * 		Name   -> Function GbxWeapon.WeaponFireComponent.OnGivenTo
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UWeaponFireComponent::OnGivenTo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponFireComponent.OnGivenTo");
		
		UWeaponFireComponent_OnGivenTo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030BB440
	 * 		Name   -> Function GbxWeapon.WeaponFireComponent.IsFireRateAccelEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UWeaponFireComponent::IsFireRateAccelEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponFireComponent.IsFireRateAccelEnabled");
		
		UWeaponFireComponent_IsFireRateAccelEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030BB300
	 * 		Name   -> Function GbxWeapon.WeaponFireComponent.GetLockedTarget
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 */
	class AActor* UWeaponFireComponent::GetLockedTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponFireComponent.GetLockedTarget");
		
		UWeaponFireComponent_GetLockedTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030BB2D0
	 * 		Name   -> Function GbxWeapon.WeaponFireComponent.GetFireRatePercent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UWeaponFireComponent::GetFireRatePercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponFireComponent.GetFireRatePercent");
		
		UWeaponFireComponent_GetFireRatePercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030BB2B0
	 * 		Name   -> Function GbxWeapon.WeaponFireComponent.ClientStopResetFireSequence
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient)
	 */
	void UWeaponFireComponent::ClientStopResetFireSequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponFireComponent.ClientStopResetFireSequence");
		
		UWeaponFireComponent_ClientStopResetFireSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponFireComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponFireComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.WeaponFireComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030BB400
	 * 		Name   -> Function GbxWeapon.WeaponFireProjectileComponent.GetShotProjectileData
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent, Const)
	 */
	class UClass* UWeaponFireProjectileComponent::GetShotProjectileData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponFireProjectileComponent.GetShotProjectileData");
		
		UWeaponFireProjectileComponent_GetShotProjectileData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030BB3C0
	 * 		Name   -> Function GbxWeapon.WeaponFireProjectileComponent.GetShotLightProjectileData
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent, Const)
	 */
	class UClass* UWeaponFireProjectileComponent::GetShotLightProjectileData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponFireProjectileComponent.GetShotLightProjectileData");
		
		UWeaponFireProjectileComponent_GetShotLightProjectileData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponFireProjectileComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponFireProjectileComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.WeaponFireProjectileComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B4BD0
	 * 		Name   -> Function GbxWeapon.Projectile.StopBlockingPawns
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AProjectile::StopBlockingPawns()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Projectile.StopBlockingPawns");
		
		AProjectile_StopBlockingPawns_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B48C0
	 * 		Name   -> Function GbxWeapon.Projectile.SetProjectileDamageType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      DamageType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AProjectile::SetProjectileDamageType(class UClass* DamageType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Projectile.SetProjectileDamageType");
		
		AProjectile_SetProjectileDamageType_Params params {};
		params.DamageType = DamageType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B4840
	 * 		Name   -> Function GbxWeapon.Projectile.SetProjectileDamageSource
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      DamageSource                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AProjectile::SetProjectileDamageSource(class UClass* DamageSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Projectile.SetProjectileDamageSource");
		
		AProjectile_SetProjectileDamageSource_Params params {};
		params.DamageSource = DamageSource;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B47C0
	 * 		Name   -> Function GbxWeapon.Projectile.SetProjectileDamageRadius
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              DamageRadius                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AProjectile::SetProjectileDamageRadius(float DamageRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Projectile.SetProjectileDamageRadius");
		
		AProjectile_SetProjectileDamageRadius_Params params {};
		params.DamageRadius = DamageRadius;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B4740
	 * 		Name   -> Function GbxWeapon.Projectile.SetProjectileDamage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AProjectile::SetProjectileDamage(float Damage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Projectile.SetProjectileDamage");
		
		AProjectile_SetProjectileDamage_Params params {};
		params.Damage = Damage;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B3320
	 * 		Name   -> Function GbxWeapon.Projectile.ResetCollisionWith
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      ActorToCollide                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AProjectile::ResetCollisionWith(class AActor* ActorToCollide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Projectile.ResetCollisionWith");
		
		AProjectile_ResetCollisionWith_Params params {};
		params.ActorToCollide = ActorToCollide;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021F68D0
	 * 		Name   -> Function GbxWeapon.Projectile.OnRep_SpawnModifierType
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void AProjectile::OnRep_SpawnModifierType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Projectile.OnRep_SpawnModifierType");
		
		AProjectile_OnRep_SpawnModifierType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxWeapon.Projectile.OnLastBounce
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  ImpactResult                                               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void AProjectile::OnLastBounce(const struct FHitResult& ImpactResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Projectile.OnLastBounce");
		
		AProjectile_OnLastBounce_Params params {};
		params.ImpactResult = ImpactResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxWeapon.Projectile.OnHitWorld
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void AProjectile::OnHitWorld(const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Projectile.OnHitWorld");
		
		AProjectile_OnHitWorld_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxWeapon.Projectile.OnHitNeutral
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void AProjectile::OnHitNeutral(const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Projectile.OnHitNeutral");
		
		AProjectile_OnHitNeutral_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxWeapon.Projectile.OnHitFriendly
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void AProjectile::OnHitFriendly(const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Projectile.OnHitFriendly");
		
		AProjectile_OnHitFriendly_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxWeapon.Projectile.OnHitEnemy
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void AProjectile::OnHitEnemy(const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Projectile.OnHitEnemy");
		
		AProjectile_OnHitEnemy_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxWeapon.Projectile.OnHitDamagableObject
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void AProjectile::OnHitDamagableObject(const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Projectile.OnHitDamagableObject");
		
		AProjectile_OnHitDamagableObject_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxWeapon.Projectile.OnExplode
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AProjectile::OnExplode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Projectile.OnExplode");
		
		AProjectile_OnExplode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B27A0
	 * 		Name   -> Function GbxWeapon.Projectile.OnComponentDetachedFromParent
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class USceneComponent*                             SceneComponent                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AProjectile::OnComponentDetachedFromParent(class USceneComponent* SceneComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Projectile.OnComponentDetachedFromParent");
		
		AProjectile_OnComponentDetachedFromParent_Params params {};
		params.SceneComponent = SceneComponent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxWeapon.Projectile.OnBounce
	 * 		Flags  -> (Event, Protected, HasOutParms, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ImpactVelocity                                             (ConstParm, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AProjectile::OnBounce(const struct FHitResult& Hit, const struct FVector& ImpactVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Projectile.OnBounce");
		
		AProjectile_OnBounce_Params params {};
		params.Hit = Hit;
		params.ImpactVelocity = ImpactVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxWeapon.Projectile.OnBeginExplode
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AProjectile::OnBeginExplode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Projectile.OnBeginExplode");
		
		AProjectile_OnBeginExplode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B1C70
	 * 		Name   -> Function GbxWeapon.Projectile.IgnoreCollisionWith
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      ActorToIgnore                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AProjectile::IgnoreCollisionWith(class AActor* ActorToIgnore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Projectile.IgnoreCollisionWith");
		
		AProjectile_IgnoreCollisionWith_Params params {};
		params.ActorToIgnore = ActorToIgnore;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E3500
	 * 		Name   -> Function GbxWeapon.Projectile.HandleDetachRequest
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 */
	void AProjectile::HandleDetachRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Projectile.HandleDetachRequest");
		
		AProjectile_HandleDetachRequest_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B16A0
	 * 		Name   -> Function GbxWeapon.Projectile.GetProjectileMovementComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UGbxProjectileMovementComponent* AProjectile::GetProjectileMovementComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Projectile.GetProjectileMovementComponent");
		
		AProjectile_GetProjectileMovementComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B1660
	 * 		Name   -> Function GbxWeapon.Projectile.GetProjectileDamageType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	class UClass* AProjectile::GetProjectileDamageType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Projectile.GetProjectileDamageType");
		
		AProjectile_GetProjectileDamageType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B1620
	 * 		Name   -> Function GbxWeapon.Projectile.GetProjectileDamageSource
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	class UClass* AProjectile::GetProjectileDamageSource()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Projectile.GetProjectileDamageSource");
		
		AProjectile_GetProjectileDamageSource_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B15F0
	 * 		Name   -> Function GbxWeapon.Projectile.GetProjectileDamageRadius
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	float AProjectile::GetProjectileDamageRadius()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Projectile.GetProjectileDamageRadius");
		
		AProjectile_GetProjectileDamageRadius_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B15C0
	 * 		Name   -> Function GbxWeapon.Projectile.GetProjectileDamage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	float AProjectile::GetProjectileDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Projectile.GetProjectileDamage");
		
		AProjectile_GetProjectileDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B14F0
	 * 		Name   -> Function GbxWeapon.Projectile.GetExplosionComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UExplosionComponent* AProjectile::GetExplosionComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Projectile.GetExplosionComponent");
		
		AProjectile_GetExplosionComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013BE5E0
	 * 		Name   -> Function GbxWeapon.Projectile.Explode
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void AProjectile::Explode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Projectile.Explode");
		
		AProjectile_Explode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B0D20
	 * 		Name   -> Function GbxWeapon.Projectile.CheckProjectileAttachment
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AProjectile::CheckProjectileAttachment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Projectile.CheckProjectileAttachment");
		
		AProjectile_CheckProjectileAttachment_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B0410
	 * 		Name   -> Function GbxWeapon.Projectile.BounceDelegate
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults)
	 * Parameters:
	 * 		struct FHitResult                                  ImpactResult                                               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ImpactVelocity                                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AProjectile::BounceDelegate(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.Projectile.BounceDelegate");
		
		AProjectile_BounceDelegate_Params params {};
		params.ImpactResult = ImpactResult;
		params.ImpactVelocity = ImpactVelocity;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjectile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjectile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.Projectile");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A5830
	 * 		Name   -> Function GbxWeapon.GbxProjectileMovementComponent.ScaleVelocity
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InScale                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxProjectileMovementComponent::ScaleVelocity(float InScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.GbxProjectileMovementComponent.ScaleVelocity");
		
		UGbxProjectileMovementComponent_ScaleVelocity_Params params {};
		params.InScale = InScale;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A5750
	 * 		Name   -> Function GbxWeapon.GbxProjectileMovementComponent.OnRep_InitialProjectileGravity
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UGbxProjectileMovementComponent::OnRep_InitialProjectileGravity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.GbxProjectileMovementComponent.OnRep_InitialProjectileGravity");
		
		UGbxProjectileMovementComponent_OnRep_InitialProjectileGravity_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> DelegateFunction GbxWeapon.GbxProjectileMovementComponent.OnProjectilePostLastBounceDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FHitResult                                  ImpactResult                                               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UGbxProjectileMovementComponent::OnProjectilePostLastBounceDelegate__DelegateSignature(const struct FHitResult& ImpactResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction GbxWeapon.GbxProjectileMovementComponent.OnProjectilePostLastBounceDelegate__DelegateSignature");
		
		UGbxProjectileMovementComponent_OnProjectilePostLastBounceDelegate__DelegateSignature_Params params {};
		params.ImpactResult = ImpactResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A5590
	 * 		Name   -> Function GbxWeapon.GbxProjectileMovementComponent.OnHit
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults)
	 * Parameters:
	 * 		class AActor*                                      SelfActor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NormalImpulse                                              (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UGbxProjectileMovementComponent::OnHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.GbxProjectileMovementComponent.OnHit");
		
		UGbxProjectileMovementComponent_OnHit_Params params {};
		params.SelfActor = SelfActor;
		params.OtherActor = OtherActor;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A5480
	 * 		Name   -> Function GbxWeapon.GbxProjectileMovementComponent.OnBounce
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults)
	 * Parameters:
	 * 		struct FHitResult                                  ImpactResult                                               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ImpactVelocity                                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxProjectileMovementComponent::OnBounce(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.GbxProjectileMovementComponent.OnBounce");
		
		UGbxProjectileMovementComponent_OnBounce_Params params {};
		params.ImpactResult = ImpactResult;
		params.ImpactVelocity = ImpactVelocity;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxProjectileMovementComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxProjectileMovementComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.GbxProjectileMovementComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030ABC50
	 * 		Name   -> Function GbxWeapon.LightProjectileManager.ServerSendDebugProjectileImpact
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Protected, NetClient)
	 * Parameters:
	 * 		int32_t                                            ProjSyncID                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      HitActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        BoneName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		uint16_t                                           ProjFlags                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALightProjectileManager::ServerSendDebugProjectileImpact(int32_t ProjSyncID, class AActor* HitActor, const class FName& BoneName, uint16_t ProjFlags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectileManager.ServerSendDebugProjectileImpact");
		
		ALightProjectileManager_ServerSendDebugProjectileImpact_Params params {};
		params.ProjSyncID = ProjSyncID;
		params.HitActor = HitActor;
		params.BoneName = BoneName;
		params.ProjFlags = ProjFlags;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030ABB40
	 * 		Name   -> Function GbxWeapon.LightProjectileManager.OnParticleSystemFinished
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UParticleSystemComponent*                    FinishedComponent                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALightProjectileManager::OnParticleSystemFinished(class UParticleSystemComponent* FinishedComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectileManager.OnParticleSystemFinished");
		
		ALightProjectileManager_OnParticleSystemFinished_Params params {};
		params.FinishedComponent = FinishedComponent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALightProjectileManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALightProjectileManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.LightProjectileManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A90A0
	 * 		Name   -> Function GbxWeapon.LightProjectile.SetLifetime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              NewLifetime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULightProjectile::SetLifetime(float NewLifetime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.SetLifetime");
		
		ULightProjectile_SetLifetime_Params params {};
		params.NewLifetime = NewLifetime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A9010
	 * 		Name   -> Function GbxWeapon.LightProjectile.SetHomingTargetLocation
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     HomingLocation                                             (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULightProjectile::SetHomingTargetLocation(const struct FVector& HomingLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.SetHomingTargetLocation");
		
		ULightProjectile_SetHomingTargetLocation_Params params {};
		params.HomingLocation = HomingLocation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A8F40
	 * 		Name   -> Function GbxWeapon.LightProjectile.SetHomingTarget
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      HomingTarget                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     TargetOffset                                               (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULightProjectile::SetHomingTarget(class AActor* HomingTarget, const struct FVector& TargetOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.SetHomingTarget");
		
		ULightProjectile_SetHomingTarget_Params params {};
		params.HomingTarget = HomingTarget;
		params.TargetOffset = TargetOffset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A8C40
	 * 		Name   -> Function GbxWeapon.LightProjectile.PlayFeedbackSoundEvent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
	 * Parameters:
	 * 		class UWwiseEvent*                                 Event                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULightProjectile::PlayFeedbackSoundEvent(class UWwiseEvent* Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.PlayFeedbackSoundEvent");
		
		ULightProjectile_PlayFeedbackSoundEvent_Params params {};
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A8C20
	 * 		Name   -> Function GbxWeapon.LightProjectile.OnRep_Shutdown
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void ULightProjectile::OnRep_Shutdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.OnRep_Shutdown");
		
		ULightProjectile_OnRep_Shutdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A8C00
	 * 		Name   -> Function GbxWeapon.LightProjectile.OnRep_InitialClientState
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void ULightProjectile::OnRep_InitialClientState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.OnRep_InitialClientState");
		
		ULightProjectile_OnRep_InitialClientState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A8BE0
	 * 		Name   -> Function GbxWeapon.LightProjectile.OnRep_Impact
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void ULightProjectile::OnRep_Impact()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.OnRep_Impact");
		
		ULightProjectile_OnRep_Impact_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A8BC0
	 * 		Name   -> Function GbxWeapon.LightProjectile.OnRep_Exploded
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void ULightProjectile::OnRep_Exploded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.OnRep_Exploded");
		
		ULightProjectile_OnRep_Exploded_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A8BA0
	 * 		Name   -> Function GbxWeapon.LightProjectile.OnRep_Attached
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void ULightProjectile::OnRep_Attached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.OnRep_Attached");
		
		ULightProjectile_OnRep_Attached_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A8B20
	 * 		Name   -> Function GbxWeapon.LightProjectile.OnParticleSystemFinished
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class UParticleSystemComponent*                    FinishedComponent                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULightProjectile::OnParticleSystemFinished(class UParticleSystemComponent* FinishedComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.OnParticleSystemFinished");
		
		ULightProjectile_OnParticleSystemFinished_Params params {};
		params.FinishedComponent = FinishedComponent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A88C0
	 * 		Name   -> Function GbxWeapon.LightProjectile.OnAttachedComponentUnregistered
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class UActorComponent*                             UnregisteredComponent                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULightProjectile::OnAttachedComponentUnregistered(class UActorComponent* UnregisteredComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.OnAttachedComponentUnregistered");
		
		ULightProjectile_OnAttachedComponentUnregistered_Params params {};
		params.UnregisteredComponent = UnregisteredComponent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A8A20
	 * 		Name   -> Function GbxWeapon.LightProjectile.OnAttachedComponentCollisionChanged
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         ChangedComponent                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULightProjectile::OnAttachedComponentCollisionChanged(class UPrimitiveComponent* ChangedComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.OnAttachedComponentCollisionChanged");
		
		ULightProjectile_OnAttachedComponentCollisionChanged_Params params {};
		params.ChangedComponent = ChangedComponent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A8940
	 * 		Name   -> Function GbxWeapon.LightProjectile.OnAttachedActorFractured
	 * 		Flags  -> (Final, Native, Protected, HasOutParms, HasDefaults)
	 * Parameters:
	 * 		struct FVector                                     HitPoint                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     HitDirection                                               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULightProjectile::OnAttachedActorFractured(const struct FVector& HitPoint, const struct FVector& HitDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.OnAttachedActorFractured");
		
		ULightProjectile_OnAttachedActorFractured_Params params {};
		params.HitPoint = HitPoint;
		params.HitDirection = HitDirection;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A88C0
	 * 		Name   -> Function GbxWeapon.LightProjectile.OnAttachedActorDestroyed
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULightProjectile::OnAttachedActorDestroyed(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.OnAttachedActorDestroyed");
		
		ULightProjectile_OnAttachedActorDestroyed_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A8710
	 * 		Name   -> Function GbxWeapon.LightProjectile.K2_ApplyImpactDamage
	 * 		Flags  -> (Native, Protected, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		float                                              ImpactDamage                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPenetrated                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCanReflect                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULightProjectile::K2_ApplyImpactDamage(const struct FHitResult& Hit, float ImpactDamage, bool bPenetrated, bool bCanReflect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.K2_ApplyImpactDamage");
		
		ULightProjectile_K2_ApplyImpactDamage_Params params {};
		params.Hit = Hit;
		params.ImpactDamage = ImpactDamage;
		params.bPenetrated = bPenetrated;
		params.bCanReflect = bCanReflect;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A86E0
	 * 		Name   -> Function GbxWeapon.LightProjectile.IsHomingMovingDirectlyTowardsTarget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ULightProjectile::IsHomingMovingDirectlyTowardsTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.IsHomingMovingDirectlyTowardsTarget");
		
		ULightProjectile_IsHomingMovingDirectlyTowardsTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A86B0
	 * 		Name   -> Function GbxWeapon.LightProjectile.IsHoming
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ULightProjectile::IsHoming()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.IsHoming");
		
		ULightProjectile_IsHoming_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A8480
	 * 		Name   -> Function GbxWeapon.LightProjectile.InitChildData
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FLightProjectileInitializationData          InitData                                                   (Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void ULightProjectile::InitChildData(struct FLightProjectileInitializationData* InitData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.InitChildData");
		
		ULightProjectile_InitChildData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InitData != nullptr)
			*InitData = params.InitData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A8460
	 * 		Name   -> Function GbxWeapon.LightProjectile.GetTarget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AActor* ULightProjectile::GetTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.GetTarget");
		
		ULightProjectile_GetTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A51B0
	 * 		Name   -> Function GbxWeapon.LightProjectile.GetSource
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AActor* ULightProjectile::GetSource()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.GetSource");
		
		ULightProjectile_GetSource_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A8440
	 * 		Name   -> Function GbxWeapon.LightProjectile.GetModifierValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float ULightProjectile::GetModifierValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.GetModifierValue");
		
		ULightProjectile_GetModifierValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A8420
	 * 		Name   -> Function GbxWeapon.LightProjectile.GetModifierType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EWeaponShotModifierType ULightProjectile::GetModifierType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.GetModifierType");
		
		ULightProjectile_GetModifierType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A5220
	 * 		Name   -> Function GbxWeapon.LightProjectile.GetInstigator
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class APawn* ULightProjectile::GetInstigator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.GetInstigator");
		
		ULightProjectile_GetInstigator_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A8400
	 * 		Name   -> Function GbxWeapon.LightProjectile.GetImpactDataOverride
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UImpactData* ULightProjectile::GetImpactDataOverride()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.GetImpactDataOverride");
		
		ULightProjectile_GetImpactDataOverride_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A83D0
	 * 		Name   -> Function GbxWeapon.LightProjectile.GetImpactData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UImpactData* ULightProjectile::GetImpactData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.GetImpactData");
		
		ULightProjectile_GetImpactData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A83A0
	 * 		Name   -> Function GbxWeapon.LightProjectile.GetHomingStartTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float ULightProjectile::GetHomingStartTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.GetHomingStartTime");
		
		ULightProjectile_GetHomingStartTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01423AD0
	 * 		Name   -> Function GbxWeapon.LightProjectile.GetFiringPatternID
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	unsigned char ULightProjectile::GetFiringPatternID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.GetFiringPatternID");
		
		ULightProjectile_GetFiringPatternID_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A8370
	 * 		Name   -> Function GbxWeapon.LightProjectile.GetDamageType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UGbxDamageType* ULightProjectile::GetDamageType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.GetDamageType");
		
		ULightProjectile_GetDamageType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x028DFA40
	 * 		Name   -> Function GbxWeapon.LightProjectile.GetDamageCauser
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AActor* ULightProjectile::GetDamageCauser()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.GetDamageCauser");
		
		ULightProjectile_GetDamageCauser_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A82E0
	 * 		Name   -> Function GbxWeapon.LightProjectile.GetAttitudeTowards
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ETeamAttitude ULightProjectile::GetAttitudeTowards(class AActor* TargetActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.GetAttitudeTowards");
		
		ULightProjectile_GetAttitudeTowards_Params params {};
		params.TargetActor = TargetActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A82A0
	 * 		Name   -> Function GbxWeapon.LightProjectile.GetAttachedImpactNormal
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector ULightProjectile::GetAttachedImpactNormal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.GetAttachedImpactNormal");
		
		ULightProjectile_GetAttachedImpactNormal_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A8270
	 * 		Name   -> Function GbxWeapon.LightProjectile.GetAttachedDamageReceiverActor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AActor* ULightProjectile::GetAttachedDamageReceiverActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.GetAttachedDamageReceiverActor");
		
		ULightProjectile_GetAttachedDamageReceiverActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A8250
	 * 		Name   -> Function GbxWeapon.LightProjectile.GetAttachedActor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AActor* ULightProjectile::GetAttachedActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.GetAttachedActor");
		
		ULightProjectile_GetAttachedActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A81C0
	 * 		Name   -> Function GbxWeapon.LightProjectile.GetAssociatedActor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		ELightProjectileQueryActorType                     ActorType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AActor* ULightProjectile::GetAssociatedActor(ELightProjectileQueryActorType ActorType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.GetAssociatedActor");
		
		ULightProjectile_GetAssociatedActor_Params params {};
		params.ActorType = ActorType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A8020
	 * 		Name   -> Function GbxWeapon.LightProjectile.Explode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Delay                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULightProjectile::Explode(float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.Explode");
		
		ULightProjectile_Explode_Params params {};
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A8000
	 * 		Name   -> Function GbxWeapon.LightProjectile.EnableHoming
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ULightProjectile::EnableHoming()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.EnableHoming");
		
		ULightProjectile_EnableHoming_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A7F40
	 * 		Name   -> Function GbxWeapon.LightProjectile.DisableHoming
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ULightProjectile::DisableHoming()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.DisableHoming");
		
		ULightProjectile_DisableHoming_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A7F20
	 * 		Name   -> Function GbxWeapon.LightProjectile.Destroy
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ULightProjectile::Destroy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.Destroy");
		
		ULightProjectile_Destroy_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A7670
	 * 		Name   -> Function GbxWeapon.LightProjectile.ApplyAreaDamage
	 * 		Flags  -> (Native, Protected, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     Origin                                                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      HitActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void ULightProjectile::ApplyAreaDamage(const struct FVector& Origin, class AActor* HitActor, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.ApplyAreaDamage");
		
		ULightProjectile_ApplyAreaDamage_Params params {};
		params.Origin = Origin;
		params.HitActor = HitActor;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULightProjectile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULightProjectile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.LightProjectile");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxWeapon.LightProjectileData.OnRicochet
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintEvent, Const)
	 * Parameters:
	 * 		class ULightProjectile*                            Projectile                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ImpactVelocity                                             (ConstParm, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULightProjectileData::OnRicochet(class ULightProjectile* Projectile, const struct FHitResult& Hit, const struct FVector& ImpactVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectileData.OnRicochet");
		
		ULightProjectileData_OnRicochet_Params params {};
		params.Projectile = Projectile;
		params.Hit = Hit;
		params.ImpactVelocity = ImpactVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxWeapon.LightProjectileData.OnProxyImpact
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent, Const)
	 * Parameters:
	 * 		class ULightProjectile*                            Projectile                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void ULightProjectileData::OnProxyImpact(class ULightProjectile* Projectile, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectileData.OnProxyImpact");
		
		ULightProjectileData_OnProxyImpact_Params params {};
		params.Projectile = Projectile;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxWeapon.LightProjectileData.OnLifetimeExpired
	 * 		Flags  -> (Event, Public, BlueprintEvent, Const)
	 * Parameters:
	 * 		class ULightProjectile*                            Projectile                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULightProjectileData::OnLifetimeExpired(class ULightProjectile* Projectile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectileData.OnLifetimeExpired");
		
		ULightProjectileData_OnLifetimeExpired_Params params {};
		params.Projectile = Projectile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxWeapon.LightProjectileData.OnImpact
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent, Const)
	 * Parameters:
	 * 		class ULightProjectile*                            Projectile                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void ULightProjectileData::OnImpact(class ULightProjectile* Projectile, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectileData.OnImpact");
		
		ULightProjectileData_OnImpact_Params params {};
		params.Projectile = Projectile;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxWeapon.LightProjectileData.OnExplode
	 * 		Flags  -> (Event, Public, BlueprintEvent, Const)
	 * Parameters:
	 * 		class ULightProjectile*                            Projectile                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULightProjectileData::OnExplode(class ULightProjectile* Projectile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectileData.OnExplode");
		
		ULightProjectileData_OnExplode_Params params {};
		params.Projectile = Projectile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxWeapon.LightProjectileData.OnDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent, Const)
	 * Parameters:
	 * 		class ULightProjectile*                            Projectile                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		bool                                               bCritical                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULightProjectileData::OnDamage(class ULightProjectile* Projectile, const struct FHitResult& Hit, bool bCritical)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectileData.OnDamage");
		
		ULightProjectileData_OnDamage_Params params {};
		params.Projectile = Projectile;
		params.Hit = Hit;
		params.bCritical = bCritical;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxWeapon.LightProjectileData.OnBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent, Const)
	 * Parameters:
	 * 		class ULightProjectile*                            Projectile                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULightProjectileData::OnBegin(class ULightProjectile* Projectile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectileData.OnBegin");
		
		ULightProjectileData_OnBegin_Params params {};
		params.Projectile = Projectile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxWeapon.LightProjectileData.OnAttached
	 * 		Flags  -> (Event, Public, BlueprintEvent, Const)
	 * Parameters:
	 * 		class ULightProjectile*                            Projectile                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      AttachedActor                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULightProjectileData::OnAttached(class ULightProjectile* Projectile, class AActor* AttachedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectileData.OnAttached");
		
		ULightProjectileData_OnAttached_Params params {};
		params.Projectile = Projectile;
		params.AttachedActor = AttachedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A5960
	 * 		Name   -> Function GbxWeapon.LightProjectileData.GetTimedEventNameList
	 * 		Flags  -> (Final, Native, Public, HasOutParms, Const)
	 * Parameters:
	 * 		TArray<class FName>                                FuncList                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void ULightProjectileData::GetTimedEventNameList(TArray<class FName>* FuncList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectileData.GetTimedEventNameList");
		
		ULightProjectileData_GetTimedEventNameList_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FuncList != nullptr)
			*FuncList = params.FuncList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULightProjectileData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULightProjectileData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.LightProjectileData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A8AA0
	 * 		Name   -> Function GbxWeapon.LightBeamManager.OnParticleSystemFinished
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UParticleSystemComponent*                    FinishedComponent                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALightBeamManager::OnParticleSystemFinished(class UParticleSystemComponent* FinishedComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightBeamManager.OnParticleSystemFinished");
		
		ALightBeamManager_OnParticleSystemFinished_Params params {};
		params.FinishedComponent = FinishedComponent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALightBeamManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALightBeamManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.LightBeamManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A58B0
	 * 		Name   -> Function GbxWeapon.LightBeam.SetTargetSocket
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        Socket                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULightBeam::SetTargetSocket(const class FName& Socket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightBeam.SetTargetSocket");
		
		ULightBeam_SetTargetSocket_Params params {};
		params.Socket = Socket;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A57B0
	 * 		Name   -> Function GbxWeapon.LightBeam.OnTrackedImpactParticleSystemFinished
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class UParticleSystemComponent*                    PSC                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULightBeam::OnTrackedImpactParticleSystemFinished(class UParticleSystemComponent* PSC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightBeam.OnTrackedImpactParticleSystemFinished");
		
		ULightBeam_OnTrackedImpactParticleSystemFinished_Params params {};
		params.PSC = PSC;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A5790
	 * 		Name   -> Function GbxWeapon.LightBeam.OnRep_ModifierValue
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void ULightBeam::OnRep_ModifierValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightBeam.OnRep_ModifierValue");
		
		ULightBeam_OnRep_ModifierValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A5770
	 * 		Name   -> Function GbxWeapon.LightBeam.OnRep_ModifierType
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void ULightBeam::OnRep_ModifierType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightBeam.OnRep_ModifierType");
		
		ULightBeam_OnRep_ModifierType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A5730
	 * 		Name   -> Function GbxWeapon.LightBeam.OnRep_ClientState
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void ULightBeam::OnRep_ClientState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightBeam.OnRep_ClientState");
		
		ULightBeam_OnRep_ClientState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A53D0
	 * 		Name   -> Function GbxWeapon.LightBeam.LockOntoTarget
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLightBeamAttachment                        Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void ULightBeam::LockOntoTarget(const struct FLightBeamAttachment& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightBeam.LockOntoTarget");
		
		ULightBeam_LockOntoTarget_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A52E0
	 * 		Name   -> Function GbxWeapon.LightBeam.InitChildData
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FLightBeamInitializationData                InitData                                                   (Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void ULightBeam::InitChildData(struct FLightBeamInitializationData* InitData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightBeam.InitChildData");
		
		ULightBeam_InitChildData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InitData != nullptr)
			*InitData = params.InitData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x028DE2B0
	 * 		Name   -> Function GbxWeapon.LightBeam.GetTargetActor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AActor* ULightBeam::GetTargetActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightBeam.GetTargetActor");
		
		ULightBeam_GetTargetActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A52A0
	 * 		Name   -> Function GbxWeapon.LightBeam.GetTarget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FLightBeamAttachment ULightBeam::GetTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightBeam.GetTarget");
		
		ULightBeam_GetTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A5280
	 * 		Name   -> Function GbxWeapon.LightBeam.GetSourceActor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AActor* ULightBeam::GetSourceActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightBeam.GetSourceActor");
		
		ULightBeam_GetSourceActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A5240
	 * 		Name   -> Function GbxWeapon.LightBeam.GetSource
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FLightBeamAttachment ULightBeam::GetSource()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightBeam.GetSource");
		
		ULightBeam_GetSource_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A5220
	 * 		Name   -> Function GbxWeapon.LightBeam.GetInstigator
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class APawn* ULightBeam::GetInstigator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightBeam.GetInstigator");
		
		ULightBeam_GetInstigator_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A5200
	 * 		Name   -> Function GbxWeapon.LightBeam.GetImpactForce
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float ULightBeam::GetImpactForce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightBeam.GetImpactForce");
		
		ULightBeam_GetImpactForce_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A51D0
	 * 		Name   -> Function GbxWeapon.LightBeam.GetDamageType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UGbxDamageType* ULightBeam::GetDamageType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightBeam.GetDamageType");
		
		ULightBeam_GetDamageType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A51B0
	 * 		Name   -> Function GbxWeapon.LightBeam.GetDamageCauser
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AActor* ULightBeam::GetDamageCauser()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightBeam.GetDamageCauser");
		
		ULightBeam_GetDamageCauser_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A5190
	 * 		Name   -> Function GbxWeapon.LightBeam.GetDamage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float ULightBeam::GetDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightBeam.GetDamage");
		
		ULightBeam_GetDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A5100
	 * 		Name   -> Function GbxWeapon.LightBeam.GetAssociatedActor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		ELightBeamQueryActorType                           ActorType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AActor* ULightBeam::GetAssociatedActor(ELightBeamQueryActorType ActorType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightBeam.GetAssociatedActor");
		
		ULightBeam_GetAssociatedActor_Params params {};
		params.ActorType = ActorType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULightBeam.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULightBeam::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.LightBeam");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A9120
	 * 		Name   -> Function GbxWeapon.LightBeamData.UpdateTarget
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent, Const)
	 * Parameters:
	 * 		class ULightBeam*                                  Beam                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ULightBeamData::UpdateTarget(class ULightBeam* Beam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightBeamData.UpdateTarget");
		
		ULightBeamData_UpdateTarget_Params params {};
		params.Beam = Beam;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A77D0
	 * 		Name   -> Function GbxWeapon.LightBeamData.CanLockOn
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent, Const)
	 * Parameters:
	 * 		class ULightBeam*                                  Beam                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULightBeamData::CanLockOn(class ULightBeam* Beam, class AActor* TargetActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightBeamData.CanLockOn");
		
		ULightBeamData_CanLockOn_Params params {};
		params.Beam = Beam;
		params.TargetActor = TargetActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULightBeamData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULightBeamData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.LightBeamData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxWeapon.WeaponAnimInstance.BlueprintSwitchedMode
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewMode                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWeaponAnimInstance::BlueprintSwitchedMode(int32_t NewMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponAnimInstance.BlueprintSwitchedMode");
		
		UWeaponAnimInstance_BlueprintSwitchedMode_Params params {};
		params.NewMode = NewMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.WeaponAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponAudioProviderComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponAudioProviderComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.WeaponAudioProviderComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWalkingProjectileMovementComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWalkingProjectileMovementComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.WalkingProjectileMovementComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02DFCB90
	 * 		Name   -> Function GbxWeapon.WeaponAmmoComponent.ClientRefillAmmo
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient)
	 * Parameters:
	 * 		int32_t                                            Amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWeaponAmmoComponent::ClientRefillAmmo(int32_t Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponAmmoComponent.ClientRefillAmmo");
		
		UWeaponAmmoComponent_ClientRefillAmmo_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponAmmoComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponAmmoComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.WeaponAmmoComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030BB6B0
	 * 		Name   -> Function GbxWeapon.WeaponHeatComponent.SetCanUseWhenOverheated
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWeaponHeatComponent::SetCanUseWhenOverheated(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponHeatComponent.SetCanUseWhenOverheated");
		
		UWeaponHeatComponent_SetCanUseWhenOverheated_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x014B3930
	 * 		Name   -> Function GbxWeapon.WeaponHeatComponent.OnUseFinished
	 * 		Flags  -> (Native, Protected)
	 */
	void UWeaponHeatComponent::OnUseFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponHeatComponent.OnUseFinished");
		
		UWeaponHeatComponent_OnUseFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012EA950
	 * 		Name   -> Function GbxWeapon.WeaponHeatComponent.OnUsed
	 * 		Flags  -> (Native, Protected)
	 */
	void UWeaponHeatComponent::OnUsed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponHeatComponent.OnUsed");
		
		UWeaponHeatComponent_OnUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxWeapon.WeaponHeatComponent.OnStopOverheat
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UWeaponHeatComponent::OnStopOverheat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponHeatComponent.OnStopOverheat");
		
		UWeaponHeatComponent_OnStopOverheat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxWeapon.WeaponHeatComponent.OnStartOverheat
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UWeaponHeatComponent::OnStartOverheat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponHeatComponent.OnStartOverheat");
		
		UWeaponHeatComponent_OnStartOverheat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030BB600
	 * 		Name   -> Function GbxWeapon.WeaponHeatComponent.OnRep_ReplicatedHeat
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UWeaponHeatComponent::OnRep_ReplicatedHeat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponHeatComponent.OnRep_ReplicatedHeat");
		
		UWeaponHeatComponent_OnRep_ReplicatedHeat_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030BB570
	 * 		Name   -> Function GbxWeapon.WeaponHeatComponent.OnRep_Overheated
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		bool                                               bWasOverheated                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWeaponHeatComponent::OnRep_Overheated(bool bWasOverheated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponHeatComponent.OnRep_Overheated");
		
		UWeaponHeatComponent_OnRep_Overheated_Params params {};
		params.bWasOverheated = bWasOverheated;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x014AB4E0
	 * 		Name   -> Function GbxWeapon.WeaponHeatComponent.OnPutDown
	 * 		Flags  -> (Native, Protected)
	 */
	void UWeaponHeatComponent::OnPutDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponHeatComponent.OnPutDown");
		
		UWeaponHeatComponent_OnPutDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01454240
	 * 		Name   -> Function GbxWeapon.WeaponHeatComponent.OnEquipped
	 * 		Flags  -> (Native, Protected)
	 */
	void UWeaponHeatComponent::OnEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponHeatComponent.OnEquipped");
		
		UWeaponHeatComponent_OnEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x014979B0
	 * 		Name   -> Function GbxWeapon.WeaponHeatComponent.OnDetached
	 * 		Flags  -> (Native, Protected)
	 */
	void UWeaponHeatComponent::OnDetached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponHeatComponent.OnDetached");
		
		UWeaponHeatComponent_OnDetached_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x014AB500
	 * 		Name   -> Function GbxWeapon.WeaponHeatComponent.OnAttached
	 * 		Flags  -> (Native, Protected)
	 */
	void UWeaponHeatComponent::OnAttached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponHeatComponent.OnAttached");
		
		UWeaponHeatComponent_OnAttached_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponHeatComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponHeatComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.WeaponHeatComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponReloadComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponReloadComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.WeaponReloadComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x014AB4E0
	 * 		Name   -> Function GbxWeapon.WeaponZoomComponent.OnSwitchedWeaponMode
	 * 		Flags  -> (Native, Protected)
	 */
	void UWeaponZoomComponent::OnSwitchedWeaponMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponZoomComponent.OnSwitchedWeaponMode");
		
		UWeaponZoomComponent_OnSwitchedWeaponMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030BECB0
	 * 		Name   -> Function GbxWeapon.WeaponZoomComponent.OnRep_ReplicatedZoomState
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UWeaponZoomComponent::OnRep_ReplicatedZoomState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponZoomComponent.OnRep_ReplicatedZoomState");
		
		UWeaponZoomComponent_OnRep_ReplicatedZoomState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x014979B0
	 * 		Name   -> Function GbxWeapon.WeaponZoomComponent.OnDetached
	 * 		Flags  -> (Native, Protected)
	 */
	void UWeaponZoomComponent::OnDetached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponZoomComponent.OnDetached");
		
		UWeaponZoomComponent_OnDetached_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x014AB500
	 * 		Name   -> Function GbxWeapon.WeaponZoomComponent.OnAttached
	 * 		Flags  -> (Native, Protected)
	 */
	void UWeaponZoomComponent::OnAttached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponZoomComponent.OnAttached");
		
		UWeaponZoomComponent_OnAttached_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030BE3A0
	 * 		Name   -> Function GbxWeapon.WeaponZoomComponent.GetMaxZoomFOVScaleWithMode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		unsigned char                                      ModeIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UWeaponZoomComponent::GetMaxZoomFOVScaleWithMode(unsigned char ModeIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponZoomComponent.GetMaxZoomFOVScaleWithMode");
		
		UWeaponZoomComponent_GetMaxZoomFOVScaleWithMode_Params params {};
		params.ModeIndex = ModeIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030BE370
	 * 		Name   -> Function GbxWeapon.WeaponZoomComponent.GetMaxZoomFOVScale
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UWeaponZoomComponent::GetMaxZoomFOVScale()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponZoomComponent.GetMaxZoomFOVScale");
		
		UWeaponZoomComponent_GetMaxZoomFOVScale_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponZoomComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponZoomComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.WeaponZoomComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAmmoProviderInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAmmoProviderInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.AmmoProviderInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponAnimNotify.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponAnimNotify::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.WeaponAnimNotify");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_AmmoReloaded.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_AmmoReloaded::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.AnimNotify_AmmoReloaded");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_EquipInterruptible.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_EquipInterruptible::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.AnimNotify_EquipInterruptible");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_WeaponSkeletalControlEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_WeaponSkeletalControlEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.AnimNotify_WeaponSkeletalControlEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBodyWeaponHoldData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBodyWeaponHoldData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.BodyWeaponHoldData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBodyWeaponHoldManagerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBodyWeaponHoldManagerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.BodyWeaponHoldManagerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryContext_ProjectileProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryContext_ProjectileProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.EnvQueryContext_ProjectileProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryGenerator_FindProjectileTargets.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryGenerator_FindProjectileTargets::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.EnvQueryGenerator_FindProjectileTargets");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryItemType_ProjectileProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryItemType_ProjectileProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.EnvQueryItemType_ProjectileProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFiringPattern.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFiringPattern::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.FiringPattern");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFiringPatternData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFiringPatternData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.FiringPatternData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxAmmoTypeData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxAmmoTypeData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.GbxAmmoTypeData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxProjectileManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxProjectileManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.GbxProjectileManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A59C0
	 * 		Name   -> Function GbxWeapon.GbxTrajectometerComponent.UpdateCollisionShape
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGbxTrajectometerComponent::UpdateCollisionShape()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.GbxTrajectometerComponent.UpdateCollisionShape");
		
		UGbxTrajectometerComponent_UpdateCollisionShape_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> DelegateFunction GbxWeapon.GbxTrajectometerComponent.SimulationResultEvent__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UGbxTrajectometerComponent::SimulationResultEvent__DelegateSignature(const struct FHitResult& HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction GbxWeapon.GbxTrajectometerComponent.SimulationResultEvent__DelegateSignature");
		
		UGbxTrajectometerComponent_SimulationResultEvent__DelegateSignature_Params params {};
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A5930
	 * 		Name   -> Function GbxWeapon.GbxTrajectometerComponent.SetTrajectometerEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxTrajectometerComponent::SetTrajectometerEnabled(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.GbxTrajectometerComponent.SetTrajectometerEnabled");
		
		UGbxTrajectometerComponent_SetTrajectometerEnabled_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxTrajectometerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxTrajectometerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.GbxTrajectometerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGbxTrajectometerProjectile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGbxTrajectometerProjectile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.GbxTrajectometerProjectile");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxWeaponUserInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxWeaponUserInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.GbxWeaponUserInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A8E10
	 * 		Name   -> Function GbxWeapon.LightBeamStatics.SetBeamFlag
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLightBeamInitializationData                InitData                                                   (Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		ELightBeamFlag                                     Flag                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULightBeamStatics::STATIC_SetBeamFlag(struct FLightBeamInitializationData* InitData, ELightBeamFlag Flag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightBeamStatics.SetBeamFlag");
		
		ULightBeamStatics_SetBeamFlag_Params params {};
		params.Flag = Flag;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InitData != nullptr)
			*InitData = params.InitData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A8D60
	 * 		Name   -> Function GbxWeapon.LightBeamStatics.RemoveLightBeamsBySource
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        NameId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULightBeamStatics::STATIC_RemoveLightBeamsBySource(class AActor* Source, const class FName& NameId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightBeamStatics.RemoveLightBeamsBySource");
		
		ULightBeamStatics_RemoveLightBeamsBySource_Params params {};
		params.Source = Source;
		params.NameId = NameId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A8CC0
	 * 		Name   -> Function GbxWeapon.LightBeamStatics.RemoveLightBeamsByActor
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLightBeamQueryData                         Query                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULightBeamStatics::STATIC_RemoveLightBeamsByActor(const struct FLightBeamQueryData& Query)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightBeamStatics.RemoveLightBeamsByActor");
		
		ULightBeamStatics_RemoveLightBeamsByActor_Params params {};
		params.Query = Query;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A8570
	 * 		Name   -> Function GbxWeapon.LightBeamStatics.IsBeamFlagSet
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FLightBeamInitializationData                InitData                                                   (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		ELightBeamFlag                                     Flag                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULightBeamStatics::STATIC_IsBeamFlagSet(const struct FLightBeamInitializationData& InitData, ELightBeamFlag Flag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightBeamStatics.IsBeamFlagSet");
		
		ULightBeamStatics_IsBeamFlagSet_Params params {};
		params.InitData = InitData;
		params.Flag = Flag;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A80A0
	 * 		Name   -> Function GbxWeapon.LightBeamStatics.ForEachLightBeam
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLightBeamQueryData                         Query                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULightBeamStatics::STATIC_ForEachLightBeam(const struct FLightBeamQueryData& Query, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightBeamStatics.ForEachLightBeam");
		
		ULightBeamStatics_ForEachLightBeam_Params params {};
		params.Query = Query;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A7F60
	 * 		Name   -> Function GbxWeapon.LightBeamStatics.DoesLightBeamExist
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLightBeamQueryData                         Query                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool ULightBeamStatics::STATIC_DoesLightBeamExist(const struct FLightBeamQueryData& Query)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightBeamStatics.DoesLightBeamExist");
		
		ULightBeamStatics_DoesLightBeamExist_Params params {};
		params.Query = Query;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A7E50
	 * 		Name   -> Function GbxWeapon.LightBeamStatics.CreateLightBeamFromData
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLightBeamInitializationData                InitData                                                   (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void ULightBeamStatics::STATIC_CreateLightBeamFromData(const struct FLightBeamInitializationData& InitData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightBeamStatics.CreateLightBeamFromData");
		
		ULightBeamStatics_CreateLightBeamFromData_Params params {};
		params.InitData = InitData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A79D0
	 * 		Name   -> Function GbxWeapon.LightBeamStatics.CreateLightBeam
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      Data                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APawn*                                       Instigator                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLightBeamAttachment                        Source                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		struct FLightBeamAttachment                        Target                                                     (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		bool                                               bTargetLocked                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        NameId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      DamageType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      DamageSource                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DamageRadius                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UImpactData*                                 ImpactDataOverride                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FForceSelection                             ImpactForce                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              LifetimeOverride                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bViewDependent                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULightBeamStatics::STATIC_CreateLightBeam(class UClass* Data, class APawn* Instigator, const struct FLightBeamAttachment& Source, const struct FLightBeamAttachment& Target, bool bTargetLocked, const class FName& NameId, float Damage, class UClass* DamageType, class UClass* DamageSource, float DamageRadius, class AActor* DamageCauser, class UImpactData* ImpactDataOverride, const struct FForceSelection& ImpactForce, float LifetimeOverride, bool bViewDependent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightBeamStatics.CreateLightBeam");
		
		ULightBeamStatics_CreateLightBeam_Params params {};
		params.Data = Data;
		params.Instigator = Instigator;
		params.Source = Source;
		params.Target = Target;
		params.bTargetLocked = bTargetLocked;
		params.NameId = NameId;
		params.Damage = Damage;
		params.DamageType = DamageType;
		params.DamageSource = DamageSource;
		params.DamageRadius = DamageRadius;
		params.DamageCauser = DamageCauser;
		params.ImpactDataOverride = ImpactDataOverride;
		params.ImpactForce = ImpactForce;
		params.LifetimeOverride = LifetimeOverride;
		params.bViewDependent = bViewDependent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030A78A0
	 * 		Name   -> Function GbxWeapon.LightBeamStatics.ClearBeamFlag
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLightBeamInitializationData                InitData                                                   (Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		ELightBeamFlag                                     Flag                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULightBeamStatics::STATIC_ClearBeamFlag(struct FLightBeamInitializationData* InitData, ELightBeamFlag Flag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightBeamStatics.ClearBeamFlag");
		
		ULightBeamStatics_ClearBeamFlag_Params params {};
		params.Flag = Flag;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InitData != nullptr)
			*InitData = params.InitData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULightBeamStatics.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULightBeamStatics::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.LightBeamStatics");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULightProjectileMoveModifier.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULightProjectileMoveModifier::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.LightProjectileMoveModifier");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULightProjectileAimViewPointHomingModifier.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULightProjectileAimViewPointHomingModifier::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.LightProjectileAimViewPointHomingModifier");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULightProjectileCurveModifier.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULightProjectileCurveModifier::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.LightProjectileCurveModifier");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULightProjectileHomingModifier.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULightProjectileHomingModifier::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.LightProjectileHomingModifier");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULightProjectileRandomDrunkenModifier.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULightProjectileRandomDrunkenModifier::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.LightProjectileRandomDrunkenModifier");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030ABFA0
	 * 		Name   -> Function GbxWeapon.LightProjectileStatics.SplitLightProjectile
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ULightProjectile*                            Projectile                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      Data                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELightProjectileSplitPattern                       Pattern                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Count                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SpreadAngle                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              RotateAngle                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OffsetDistance                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDestroySource                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULightProjectileStatics::STATIC_SplitLightProjectile(class ULightProjectile* Projectile, class UClass* Data, ELightProjectileSplitPattern Pattern, int32_t Count, float SpreadAngle, float RotateAngle, float OffsetDistance, bool bDestroySource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectileStatics.SplitLightProjectile");
		
		ULightProjectileStatics_SplitLightProjectile_Params params {};
		params.Projectile = Projectile;
		params.Data = Data;
		params.Pattern = Pattern;
		params.Count = Count;
		params.SpreadAngle = SpreadAngle;
		params.RotateAngle = RotateAngle;
		params.OffsetDistance = OffsetDistance;
		params.bDestroySource = bDestroySource;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030ABE70
	 * 		Name   -> Function GbxWeapon.LightProjectileStatics.SetProjectileFlag
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLightProjectileInitializationData          InitData                                                   (Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		ELightProjectileFlag                               Flag                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULightProjectileStatics::STATIC_SetProjectileFlag(struct FLightProjectileInitializationData* InitData, ELightProjectileFlag Flag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectileStatics.SetProjectileFlag");
		
		ULightProjectileStatics_SetProjectileFlag_Params params {};
		params.Flag = Flag;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InitData != nullptr)
			*InitData = params.InitData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030ABD90
	 * 		Name   -> Function GbxWeapon.LightProjectileStatics.SetHomingState
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLightProjectileQueryData                   Query                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsHoming                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULightProjectileStatics::STATIC_SetHomingState(const struct FLightProjectileQueryData& Query, bool bIsHoming)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectileStatics.SetHomingState");
		
		ULightProjectileStatics_SetHomingState_Params params {};
		params.Query = Query;
		params.bIsHoming = bIsHoming;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030ABBC0
	 * 		Name   -> Function GbxWeapon.LightProjectileStatics.RemoveLightProjectilesByActor
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLightProjectileQueryData                   Query                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULightProjectileStatics::STATIC_RemoveLightProjectilesByActor(const struct FLightProjectileQueryData& Query)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectileStatics.RemoveLightProjectilesByActor");
		
		ULightProjectileStatics_RemoveLightProjectilesByActor_Params params {};
		params.Query = Query;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030ABA00
	 * 		Name   -> Function GbxWeapon.LightProjectileStatics.IsProjectileFlagSet
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FLightProjectileInitializationData          InitData                                                   (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		ELightProjectileFlag                               Flag                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULightProjectileStatics::STATIC_IsProjectileFlagSet(const struct FLightProjectileInitializationData& InitData, ELightProjectileFlag Flag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectileStatics.IsProjectileFlagSet");
		
		ULightProjectileStatics_IsProjectileFlagSet_Params params {};
		params.InitData = InitData;
		params.Flag = Flag;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030AB8F0
	 * 		Name   -> Function GbxWeapon.LightProjectileStatics.ForEachLightProjectile
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLightProjectileQueryData                   Query                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULightProjectileStatics::STATIC_ForEachLightProjectile(const struct FLightProjectileQueryData& Query, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectileStatics.ForEachLightProjectile");
		
		ULightProjectileStatics_ForEachLightProjectile_Params params {};
		params.Query = Query;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030AB790
	 * 		Name   -> Function GbxWeapon.LightProjectileStatics.DetonateLightProjectiles
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLightProjectileQueryData                   Query                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              StackingEnemyBonusDamage                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MinDetonationDelay                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxDetonationDelay                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULightProjectileStatics::STATIC_DetonateLightProjectiles(const struct FLightProjectileQueryData& Query, float StackingEnemyBonusDamage, float MinDetonationDelay, float MaxDetonationDelay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectileStatics.DetonateLightProjectiles");
		
		ULightProjectileStatics_DetonateLightProjectiles_Params params {};
		params.Query = Query;
		params.StackingEnemyBonusDamage = StackingEnemyBonusDamage;
		params.MinDetonationDelay = MinDetonationDelay;
		params.MaxDetonationDelay = MaxDetonationDelay;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030AB600
	 * 		Name   -> Function GbxWeapon.LightProjectileStatics.CreateLightProjectileFromSource
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class ULightProjectile*                            SourceProjectile                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      Data                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Direction                                                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULightProjectileStatics::STATIC_CreateLightProjectileFromSource(class ULightProjectile* SourceProjectile, class UClass* Data, const struct FVector& Location, const struct FVector& Direction, float Damage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectileStatics.CreateLightProjectileFromSource");
		
		ULightProjectileStatics_CreateLightProjectileFromSource_Params params {};
		params.SourceProjectile = SourceProjectile;
		params.Data = Data;
		params.Location = Location;
		params.Direction = Direction;
		params.Damage = Damage;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030AB4D0
	 * 		Name   -> Function GbxWeapon.LightProjectileStatics.CreateLightProjectileFromDataAsync
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLightProjectileInitializationData          InitData                                                   (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		float                                              ForceSpawnTimer                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULightProjectileStatics::STATIC_CreateLightProjectileFromDataAsync(const struct FLightProjectileInitializationData& InitData, float ForceSpawnTimer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectileStatics.CreateLightProjectileFromDataAsync");
		
		ULightProjectileStatics_CreateLightProjectileFromDataAsync_Params params {};
		params.InitData = InitData;
		params.ForceSpawnTimer = ForceSpawnTimer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030AB400
	 * 		Name   -> Function GbxWeapon.LightProjectileStatics.CreateLightProjectileFromData
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLightProjectileInitializationData          InitData                                                   (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void ULightProjectileStatics::STATIC_CreateLightProjectileFromData(const struct FLightProjectileInitializationData& InitData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectileStatics.CreateLightProjectileFromData");
		
		ULightProjectileStatics_CreateLightProjectileFromData_Params params {};
		params.InitData = InitData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030AB120
	 * 		Name   -> Function GbxWeapon.LightProjectileStatics.CreateLightProjectile
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      Data                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Direction                                                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APawn*                                       Instigator                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      DamageType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      DamageSource                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UImpactData*                                 ImpactDataOverride                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULightProjectileStatics::STATIC_CreateLightProjectile(class UClass* Data, const struct FVector& Location, const struct FVector& Direction, class APawn* Instigator, class AActor* Source, class AActor* DamageCauser, float Damage, class UClass* DamageType, class UClass* DamageSource, class UImpactData* ImpactDataOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectileStatics.CreateLightProjectile");
		
		ULightProjectileStatics_CreateLightProjectile_Params params {};
		params.Data = Data;
		params.Location = Location;
		params.Direction = Direction;
		params.Instigator = Instigator;
		params.Source = Source;
		params.DamageCauser = DamageCauser;
		params.Damage = Damage;
		params.DamageType = DamageType;
		params.DamageSource = DamageSource;
		params.ImpactDataOverride = ImpactDataOverride;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030AAFF0
	 * 		Name   -> Function GbxWeapon.LightProjectileStatics.ClearProjectileFlag
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLightProjectileInitializationData          InitData                                                   (Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		ELightProjectileFlag                               Flag                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULightProjectileStatics::STATIC_ClearProjectileFlag(struct FLightProjectileInitializationData* InitData, ELightProjectileFlag Flag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectileStatics.ClearProjectileFlag");
		
		ULightProjectileStatics_ClearProjectileFlag_Params params {};
		params.Flag = Flag;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InitData != nullptr)
			*InitData = params.InitData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULightProjectileStatics.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULightProjectileStatics::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.LightProjectileStatics");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULightProjectileWaveModifier.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULightProjectileWaveModifier::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.LightProjectileWaveModifier");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B52E0
	 * 		Name   -> Function GbxWeapon.ProjectileBlueprintLibrary.ThrowProjectileAsync
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FThrowProjectileAsyncRequest                Request                                                    (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	int32_t UProjectileBlueprintLibrary::STATIC_ThrowProjectileAsync(class UObject* WorldContext, const struct FThrowProjectileAsyncRequest& Request)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.ProjectileBlueprintLibrary.ThrowProjectileAsync");
		
		UProjectileBlueprintLibrary_ThrowProjectileAsync_Params params {};
		params.WorldContext = WorldContext;
		params.Request = Request;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B5070
	 * 		Name   -> Function GbxWeapon.ProjectileBlueprintLibrary.ThrowActorAt
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     TargetLocation                                             (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     TargetVelocity                                             (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxPrediction                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Speed                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              AnglePercent                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    DirectionOffset                                            (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     LocalTargetOffset                                          (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UProjectileBlueprintLibrary::STATIC_ThrowActorAt(class AActor* Actor, const struct FVector& TargetLocation, const struct FVector& TargetVelocity, float MaxPrediction, float Speed, float AnglePercent, const struct FRotator& DirectionOffset, const struct FVector& LocalTargetOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.ProjectileBlueprintLibrary.ThrowActorAt");
		
		UProjectileBlueprintLibrary_ThrowActorAt_Params params {};
		params.Actor = Actor;
		params.TargetLocation = TargetLocation;
		params.TargetVelocity = TargetVelocity;
		params.MaxPrediction = MaxPrediction;
		params.Speed = Speed;
		params.AnglePercent = AnglePercent;
		params.DirectionOffset = DirectionOffset;
		params.LocalTargetOffset = LocalTargetOffset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B2D90
	 * 		Name   -> Function GbxWeapon.ProjectileBlueprintLibrary.PredictProjectilePathAsync
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPredictProjectilePathAsyncRequest          Request                                                    (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UProjectileBlueprintLibrary::STATIC_PredictProjectilePathAsync(class UObject* WorldContext, const struct FPredictProjectilePathAsyncRequest& Request)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.ProjectileBlueprintLibrary.PredictProjectilePathAsync");
		
		UProjectileBlueprintLibrary_PredictProjectilePathAsync_Params params {};
		params.WorldContext = WorldContext;
		params.Request = Request;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B18B0
	 * 		Name   -> Function GbxWeapon.ProjectileBlueprintLibrary.GetSafeProjectileThrowTransform_Component
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      SourceActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USceneComponent*                             SourceComponent                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        SocketName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              IgnoreActors                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		ECollisionChannel                                  TraceChannel                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform UProjectileBlueprintLibrary::STATIC_GetSafeProjectileThrowTransform_Component(class AActor* SourceActor, class USceneComponent* SourceComponent, const class FName& SocketName, TArray<class AActor*> IgnoreActors, ECollisionChannel TraceChannel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.ProjectileBlueprintLibrary.GetSafeProjectileThrowTransform_Component");
		
		UProjectileBlueprintLibrary_GetSafeProjectileThrowTransform_Component_Params params {};
		params.SourceActor = SourceActor;
		params.SourceComponent = SourceComponent;
		params.SocketName = SocketName;
		params.IgnoreActors = IgnoreActors;
		params.TraceChannel = TraceChannel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B16D0
	 * 		Name   -> Function GbxWeapon.ProjectileBlueprintLibrary.GetSafeProjectileThrowTransform
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      SourceActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        SocketName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              IgnoreActors                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bThrowFromFirstPersonSocket                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECollisionChannel                                  TraceChannel                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform UProjectileBlueprintLibrary::STATIC_GetSafeProjectileThrowTransform(class AActor* SourceActor, const class FName& SocketName, TArray<class AActor*> IgnoreActors, bool bThrowFromFirstPersonSocket, ECollisionChannel TraceChannel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.ProjectileBlueprintLibrary.GetSafeProjectileThrowTransform");
		
		UProjectileBlueprintLibrary_GetSafeProjectileThrowTransform_Params params {};
		params.SourceActor = SourceActor;
		params.SocketName = SocketName;
		params.IgnoreActors = IgnoreActors;
		params.bThrowFromFirstPersonSocket = bThrowFromFirstPersonSocket;
		params.TraceChannel = TraceChannel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B10D0
	 * 		Name   -> Function GbxWeapon.ProjectileBlueprintLibrary.GeneratePointsOnFan
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     Origin                                                     (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Direction                                                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SampleCount                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SpreadAngle                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              RotateAngle                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OriginOffset                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FTransform> UProjectileBlueprintLibrary::STATIC_GeneratePointsOnFan(const struct FVector& Origin, const struct FVector& Direction, int32_t SampleCount, float SpreadAngle, float RotateAngle, float OriginOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.ProjectileBlueprintLibrary.GeneratePointsOnFan");
		
		UProjectileBlueprintLibrary_GeneratePointsOnFan_Params params {};
		params.Origin = Origin;
		params.Direction = Direction;
		params.SampleCount = SampleCount;
		params.SpreadAngle = SpreadAngle;
		params.RotateAngle = RotateAngle;
		params.OriginOffset = OriginOffset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B0EB0
	 * 		Name   -> Function GbxWeapon.ProjectileBlueprintLibrary.GeneratePointsOnCone
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     Origin                                                     (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Direction                                                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SampleCount                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SpreadAngle                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              RotateAngle                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OriginOffset                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FTransform> UProjectileBlueprintLibrary::STATIC_GeneratePointsOnCone(const struct FVector& Origin, const struct FVector& Direction, int32_t SampleCount, float SpreadAngle, float RotateAngle, float OriginOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.ProjectileBlueprintLibrary.GeneratePointsOnCone");
		
		UProjectileBlueprintLibrary_GeneratePointsOnCone_Params params {};
		params.Origin = Origin;
		params.Direction = Direction;
		params.SampleCount = SampleCount;
		params.SpreadAngle = SpreadAngle;
		params.RotateAngle = RotateAngle;
		params.OriginOffset = OriginOffset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B0E00
	 * 		Name   -> Function GbxWeapon.ProjectileBlueprintLibrary.DetachProjectilesFromActor
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      BaseActor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UProjectileBlueprintLibrary::STATIC_DetachProjectilesFromActor(class AActor* BaseActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.ProjectileBlueprintLibrary.DetachProjectilesFromActor");
		
		UProjectileBlueprintLibrary_DetachProjectilesFromActor_Params params {};
		params.BaseActor = BaseActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B0B50
	 * 		Name   -> Function GbxWeapon.ProjectileBlueprintLibrary.CalculateConeVector
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              Fraction                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Origin                                                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Direction                                                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              AngleWidth                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              AngleHeight                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UProjectileBlueprintLibrary::STATIC_CalculateConeVector(float Fraction, const struct FVector& Origin, const struct FVector& Direction, float AngleWidth, float AngleHeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.ProjectileBlueprintLibrary.CalculateConeVector");
		
		UProjectileBlueprintLibrary_CalculateConeVector_Params params {};
		params.Fraction = Fraction;
		params.Origin = Origin;
		params.Direction = Direction;
		params.AngleWidth = AngleWidth;
		params.AngleHeight = AngleHeight;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B0890
	 * 		Name   -> Function GbxWeapon.ProjectileBlueprintLibrary.CalcThrowVelocityAtActor
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     ResultVelocity                                             (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ResultGravityScale                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     StartLocation                                              (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxPrediction                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Speed                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              AnglePercent                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    DirectionOffset                                            (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     LocalTargetOffset                                          (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UProjectileBlueprintLibrary::STATIC_CalcThrowVelocityAtActor(struct FVector* ResultVelocity, float* ResultGravityScale, const struct FVector& StartLocation, class AActor* Target, float MaxPrediction, float Speed, float AnglePercent, const struct FRotator& DirectionOffset, const struct FVector& LocalTargetOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.ProjectileBlueprintLibrary.CalcThrowVelocityAtActor");
		
		UProjectileBlueprintLibrary_CalcThrowVelocityAtActor_Params params {};
		params.StartLocation = StartLocation;
		params.Target = Target;
		params.MaxPrediction = MaxPrediction;
		params.Speed = Speed;
		params.AnglePercent = AnglePercent;
		params.DirectionOffset = DirectionOffset;
		params.LocalTargetOffset = LocalTargetOffset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ResultVelocity != nullptr)
			*ResultVelocity = params.ResultVelocity;
		if (ResultGravityScale != nullptr)
			*ResultGravityScale = params.ResultGravityScale;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B0520
	 * 		Name   -> Function GbxWeapon.ProjectileBlueprintLibrary.CalcThrowVelocity
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ResultVelocity                                             (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ResultGravityScale                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     StartLocation                                              (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     TargetLocation                                             (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     TargetVelocity                                             (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxPrediction                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Speed                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              AnglePercent                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    DirectionOffset                                            (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     LocalTargetOffset                                          (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UProjectileBlueprintLibrary::STATIC_CalcThrowVelocity(class UObject* WorldContextObject, struct FVector* ResultVelocity, float* ResultGravityScale, const struct FVector& StartLocation, const struct FVector& TargetLocation, const struct FVector& TargetVelocity, float MaxPrediction, float Speed, float AnglePercent, const struct FRotator& DirectionOffset, const struct FVector& LocalTargetOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.ProjectileBlueprintLibrary.CalcThrowVelocity");
		
		UProjectileBlueprintLibrary_CalcThrowVelocity_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.StartLocation = StartLocation;
		params.TargetLocation = TargetLocation;
		params.TargetVelocity = TargetVelocity;
		params.MaxPrediction = MaxPrediction;
		params.Speed = Speed;
		params.AnglePercent = AnglePercent;
		params.DirectionOffset = DirectionOffset;
		params.LocalTargetOffset = LocalTargetOffset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ResultVelocity != nullptr)
			*ResultVelocity = params.ResultVelocity;
		if (ResultGravityScale != nullptr)
			*ResultGravityScale = params.ResultGravityScale;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProjectileBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProjectileBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.ProjectileBlueprintLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProjectileEQSProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProjectileEQSProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.ProjectileEQSProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProjectileSourceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProjectileSourceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.ProjectileSourceInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B33A0
	 * 		Name   -> Function GbxWeapon.RecoilControlComponent.ServerApplyInput
	 * 		Flags  -> (Net, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		uint32_t                                           CompressedInputRot                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URecoilControlComponent::ServerApplyInput(uint32_t CompressedInputRot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.RecoilControlComponent.ServerApplyInput");
		
		URecoilControlComponent_ServerApplyInput_Params params {};
		params.CompressedInputRot = CompressedInputRot;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URecoilControlComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URecoilControlComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.RecoilControlComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URecoilPatternData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URecoilPatternData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.RecoilPatternData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponAccuracyPoolAttributePropertyValueResolver.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponAccuracyPoolAttributePropertyValueResolver::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.WeaponAccuracyPoolAttributePropertyValueResolver");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponSkeletalControlBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponSkeletalControlBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.WeaponSkeletalControlBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponAmmoChamberBoneControl.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponAmmoChamberBoneControl::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.WeaponAmmoChamberBoneControl");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponConsumedLoadedAmmoValueResolver.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponConsumedLoadedAmmoValueResolver::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.WeaponConsumedLoadedAmmoValueResolver");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x014E72C0
	 * 		Name   -> Function GbxWeapon.WeaponAmmoPoolComponent.ServerSendAmmoState
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 */
	void UWeaponAmmoPoolComponent::ServerSendAmmoState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponAmmoPoolComponent.ServerSendAmmoState");
		
		UWeaponAmmoPoolComponent_ServerSendAmmoState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B8FA0
	 * 		Name   -> Function GbxWeapon.WeaponAmmoPoolComponent.OnRep_SpareAmmo
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UWeaponAmmoPoolComponent::OnRep_SpareAmmo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponAmmoPoolComponent.OnRep_SpareAmmo");
		
		UWeaponAmmoPoolComponent_OnRep_SpareAmmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B8F80
	 * 		Name   -> Function GbxWeapon.WeaponAmmoPoolComponent.OnRep_ServerSyncedLoadedAmmo
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UWeaponAmmoPoolComponent::OnRep_ServerSyncedLoadedAmmo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponAmmoPoolComponent.OnRep_ServerSyncedLoadedAmmo");
		
		UWeaponAmmoPoolComponent_OnRep_ServerSyncedLoadedAmmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x014E6D80
	 * 		Name   -> Function GbxWeapon.WeaponAmmoPoolComponent.OnMaxLoadedAmmoChanged
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		float                                              OldValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWeaponAmmoPoolComponent::OnMaxLoadedAmmoChanged(float OldValue, float NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponAmmoPoolComponent.OnMaxLoadedAmmoChanged");
		
		UWeaponAmmoPoolComponent_OnMaxLoadedAmmoChanged_Params params {};
		params.OldValue = OldValue;
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B8EC0
	 * 		Name   -> Function GbxWeapon.WeaponAmmoPoolComponent.OnGivenTo
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UWeaponAmmoPoolComponent::OnGivenTo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponAmmoPoolComponent.OnGivenTo");
		
		UWeaponAmmoPoolComponent_OnGivenTo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x014E6740
	 * 		Name   -> Function GbxWeapon.WeaponAmmoPoolComponent.ClientSetLoadedAmmo
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient)
	 * Parameters:
	 * 		int32_t                                            NewLoadedAmmo                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWeaponAmmoPoolComponent::ClientSetLoadedAmmo(int32_t NewLoadedAmmo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponAmmoPoolComponent.ClientSetLoadedAmmo");
		
		UWeaponAmmoPoolComponent_ClientSetLoadedAmmo_Params params {};
		params.NewLoadedAmmo = NewLoadedAmmo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x014E66B0
	 * 		Name   -> Function GbxWeapon.WeaponAmmoPoolComponent.ClientConsumeAmmo
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient)
	 * Parameters:
	 * 		int32_t                                            Amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWeaponAmmoPoolComponent::ClientConsumeAmmo(int32_t Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponAmmoPoolComponent.ClientConsumeAmmo");
		
		UWeaponAmmoPoolComponent_ClientConsumeAmmo_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponAmmoPoolComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponAmmoPoolComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.WeaponAmmoPoolComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponAmmoRegenAttributeValueResolver.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponAmmoRegenAttributeValueResolver::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.WeaponAmmoRegenAttributeValueResolver");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B8FC0
	 * 		Name   -> Function GbxWeapon.WeaponAttachmentSlot.SetMesh
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMeshComponent*                              InMesh                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWeaponAttachmentSlot::SetMesh(class UMeshComponent* InMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponAttachmentSlot.SetMesh");
		
		UWeaponAttachmentSlot_SetMesh_Params params {};
		params.InMesh = InMesh;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponAttachmentSlot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponAttachmentSlot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.WeaponAttachmentSlot");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponAttributeContextResolver.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponAttributeContextResolver::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.WeaponAttributeContextResolver");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponChargePercentValueResolver.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponChargePercentValueResolver::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.WeaponChargePercentValueResolver");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029BC8D0
	 * 		Name   -> Function GbxWeapon.WeaponChargeComponent.StopEffects
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 */
	void UWeaponChargeComponent::StopEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponChargeComponent.StopEffects");
		
		UWeaponChargeComponent_StopEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x014AA4C0
	 * 		Name   -> Function GbxWeapon.WeaponChargeComponent.Overcharged
	 * 		Flags  -> (Native, Protected)
	 */
	void UWeaponChargeComponent::Overcharged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponChargeComponent.Overcharged");
		
		UWeaponChargeComponent_Overcharged_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B8EE0
	 * 		Name   -> Function GbxWeapon.WeaponChargeComponent.OnRep_ChargeState
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		EWeaponChargeState                                 PrevChargeState                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWeaponChargeComponent::OnRep_ChargeState(EWeaponChargeState PrevChargeState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponChargeComponent.OnRep_ChargeState");
		
		UWeaponChargeComponent_OnRep_ChargeState_Params params {};
		params.PrevChargeState = PrevChargeState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B8E40
	 * 		Name   -> Function GbxWeapon.WeaponChargeComponent.OnChargeActionEnd
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		EGbxActionEndState                                 EndState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWeaponChargeComponent::OnChargeActionEnd(EGbxActionEndState EndState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponChargeComponent.OnChargeActionEnd");
		
		UWeaponChargeComponent_OnChargeActionEnd_Params params {};
		params.EndState = EndState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B8E00
	 * 		Name   -> Function GbxWeapon.WeaponChargeComponent.GetDischargeDuration
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UWeaponChargeComponent::GetDischargeDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponChargeComponent.GetDischargeDuration");
		
		UWeaponChargeComponent_GetDischargeDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B8DD0
	 * 		Name   -> Function GbxWeapon.WeaponChargeComponent.GetChargePercent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UWeaponChargeComponent::GetChargePercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponChargeComponent.GetChargePercent");
		
		UWeaponChargeComponent_GetChargePercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B8D90
	 * 		Name   -> Function GbxWeapon.WeaponChargeComponent.GetChargeDuration
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UWeaponChargeComponent::GetChargeDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponChargeComponent.GetChargeDuration");
		
		UWeaponChargeComponent_GetChargeDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F34E50
	 * 		Name   -> Function GbxWeapon.WeaponChargeComponent.FullyDischarged
	 * 		Flags  -> (Native, Protected)
	 */
	void UWeaponChargeComponent::FullyDischarged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponChargeComponent.FullyDischarged");
		
		UWeaponChargeComponent_FullyDischarged_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B8D70
	 * 		Name   -> Function GbxWeapon.WeaponChargeComponent.FullyCharged
	 * 		Flags  -> (Native, Protected)
	 */
	void UWeaponChargeComponent::FullyCharged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponChargeComponent.FullyCharged");
		
		UWeaponChargeComponent_FullyCharged_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B8D50
	 * 		Name   -> Function GbxWeapon.WeaponChargeComponent.DelayChargeFinished
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UWeaponChargeComponent::DelayChargeFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponChargeComponent.DelayChargeFinished");
		
		UWeaponChargeComponent_DelayChargeFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponChargeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponChargeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.WeaponChargeComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030B8F60
	 * 		Name   -> Function GbxWeapon.WeaponClipReloadComponent.OnRep_ClientReloadState
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UWeaponClipReloadComponent::OnRep_ClientReloadState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponClipReloadComponent.OnRep_ClientReloadState");
		
		UWeaponClipReloadComponent_OnRep_ClientReloadState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponClipReloadComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponClipReloadComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.WeaponClipReloadComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxCondition_ZoomState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxCondition_ZoomState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.GbxCondition_ZoomState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponDebugInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponDebugInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.WeaponDebugInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030BB3C0
	 * 		Name   -> Function GbxWeapon.WeaponFireBeamComponent.GetShotLightBeamData
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent, Const)
	 */
	class UClass* UWeaponFireBeamComponent::GetShotLightBeamData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponFireBeamComponent.GetShotLightBeamData");
		
		UWeaponFireBeamComponent_GetShotLightBeamData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponFireBeamComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponFireBeamComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.WeaponFireBeamComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponFireRateAccelPercentValueResolver.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponFireRateAccelPercentValueResolver::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.WeaponFireRateAccelPercentValueResolver");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01454240
	 * 		Name   -> Function GbxWeapon.WeaponRecoilComponent.OnUsed
	 * 		Flags  -> (Native, Protected)
	 */
	void UWeaponRecoilComponent::OnUsed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponRecoilComponent.OnUsed");
		
		UWeaponRecoilComponent_OnUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x014B3930
	 * 		Name   -> Function GbxWeapon.WeaponRecoilComponent.OnDetached
	 * 		Flags  -> (Native, Protected)
	 */
	void UWeaponRecoilComponent::OnDetached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponRecoilComponent.OnDetached");
		
		UWeaponRecoilComponent_OnDetached_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012EA950
	 * 		Name   -> Function GbxWeapon.WeaponRecoilComponent.OnAttached
	 * 		Flags  -> (Native, Protected)
	 */
	void UWeaponRecoilComponent::OnAttached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponRecoilComponent.OnAttached");
		
		UWeaponRecoilComponent_OnAttached_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponRecoilComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponRecoilComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.WeaponRecoilComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponRecoilGoodnessValueResolver.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponRecoilGoodnessValueResolver::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.WeaponRecoilGoodnessValueResolver");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030BB640
	 * 		Name   -> Function GbxWeapon.WeaponRecoilPatternComponent.ResetPattern
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UWeaponRecoilPatternComponent::ResetPattern()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponRecoilPatternComponent.ResetPattern");
		
		UWeaponRecoilPatternComponent_ResetPattern_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030BB620
	 * 		Name   -> Function GbxWeapon.WeaponRecoilPatternComponent.OnUseFinished
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UWeaponRecoilPatternComponent::OnUseFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponRecoilPatternComponent.OnUseFinished");
		
		UWeaponRecoilPatternComponent_OnUseFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030BB390
	 * 		Name   -> Function GbxWeapon.WeaponRecoilPatternComponent.GetRecoilPatternWidthGoodness
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UWeaponRecoilPatternComponent::GetRecoilPatternWidthGoodness()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponRecoilPatternComponent.GetRecoilPatternWidthGoodness");
		
		UWeaponRecoilPatternComponent_GetRecoilPatternWidthGoodness_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030BB360
	 * 		Name   -> Function GbxWeapon.WeaponRecoilPatternComponent.GetRecoilPatternHeightGoodness
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UWeaponRecoilPatternComponent::GetRecoilPatternHeightGoodness()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponRecoilPatternComponent.GetRecoilPatternHeightGoodness");
		
		UWeaponRecoilPatternComponent_GetRecoilPatternHeightGoodness_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030BB330
	 * 		Name   -> Function GbxWeapon.WeaponRecoilPatternComponent.GetRecoilPatternGoodness
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UWeaponRecoilPatternComponent::GetRecoilPatternGoodness()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponRecoilPatternComponent.GetRecoilPatternGoodness");
		
		UWeaponRecoilPatternComponent_GetRecoilPatternGoodness_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponRecoilPatternComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponRecoilPatternComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.WeaponRecoilPatternComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.WeaponSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponShotModifier.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponShotModifier::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.WeaponShotModifier");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponSimpleMotionControlBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponSimpleMotionControlBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.WeaponSimpleMotionControlBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponSimpleMotionBlendControl.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponSimpleMotionBlendControl::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.WeaponSimpleMotionBlendControl");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponSimpleMotionBoneControl.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponSimpleMotionBoneControl::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.WeaponSimpleMotionBoneControl");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030BECD0
	 * 		Name   -> Function GbxWeapon.WeaponSingleFeedReloadComponent.OnUserInput
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		unsigned char                                      InputChannel                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWeaponSingleFeedReloadComponent::OnUserInput(unsigned char InputChannel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponSingleFeedReloadComponent.OnUserInput");
		
		UWeaponSingleFeedReloadComponent_OnUserInput_Params params {};
		params.InputChannel = InputChannel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030BEC90
	 * 		Name   -> Function GbxWeapon.WeaponSingleFeedReloadComponent.OnRep_ClientReloadState
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UWeaponSingleFeedReloadComponent::OnRep_ClientReloadState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponSingleFeedReloadComponent.OnRep_ClientReloadState");
		
		UWeaponSingleFeedReloadComponent_OnRep_ClientReloadState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponSingleFeedReloadComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponSingleFeedReloadComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.WeaponSingleFeedReloadComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponEffectShotStrengthValueResolver.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponEffectShotStrengthValueResolver::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.WeaponEffectShotStrengthValueResolver");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030BF490
	 * 		Name   -> Function GbxWeapon.WeaponStatics.UpdateVisibleAmmo
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AWeapon*                                     Weapon                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWeaponStatics::STATIC_UpdateVisibleAmmo(class AWeapon* Weapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponStatics.UpdateVisibleAmmo");
		
		UWeaponStatics_UpdateVisibleAmmo_Params params {};
		params.Weapon = Weapon;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030BF350
	 * 		Name   -> Function GbxWeapon.WeaponStatics.UnhideWeapons
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      WeaponUser                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWeaponStatics::STATIC_UnhideWeapons(class AActor* WeaponUser, const class FName& Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponStatics.UnhideWeapons");
		
		UWeaponStatics_UnhideWeapons_Params params {};
		params.WeaponUser = WeaponUser;
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030BF260
	 * 		Name   -> Function GbxWeapon.WeaponStatics.UnhideWeapon
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      WeaponUser                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Slot                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWeaponStatics::STATIC_UnhideWeapon(class AActor* WeaponUser, unsigned char Slot, const class FName& Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponStatics.UnhideWeapon");
		
		UWeaponStatics_UnhideWeapon_Params params {};
		params.WeaponUser = WeaponUser;
		params.Slot = Slot;
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030BF000
	 * 		Name   -> Function GbxWeapon.WeaponStatics.SetVisibleAmmoUpdateMethod
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AWeapon*                                     Weapon                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EWeaponVisibleAmmoUpdateMethod                     NewUpdateMethod                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWeaponStatics::STATIC_SetVisibleAmmoUpdateMethod(class AWeapon* Weapon, EWeaponVisibleAmmoUpdateMethod NewUpdateMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponStatics.SetVisibleAmmoUpdateMethod");
		
		UWeaponStatics_SetVisibleAmmoUpdateMethod_Params params {};
		params.Weapon = Weapon;
		params.NewUpdateMethod = NewUpdateMethod;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030BEED0
	 * 		Name   -> Function GbxWeapon.WeaponStatics.SetVisibleAmmoState
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AWeapon*                                     Weapon                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EWeaponVisibleAmmoState                            NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWeaponStatics::STATIC_SetVisibleAmmoState(class AWeapon* Weapon, EWeaponVisibleAmmoState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponStatics.SetVisibleAmmoState");
		
		UWeaponStatics_SetVisibleAmmoState_Params params {};
		params.Weapon = Weapon;
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030BEE40
	 * 		Name   -> Function GbxWeapon.WeaponStatics.ResetVisibleAmmoState
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AWeapon*                                     Weapon                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWeaponStatics::STATIC_ResetVisibleAmmoState(class AWeapon* Weapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponStatics.ResetVisibleAmmoState");
		
		UWeaponStatics_ResetVisibleAmmoState_Params params {};
		params.Weapon = Weapon;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030BED50
	 * 		Name   -> Function GbxWeapon.WeaponStatics.RefillAmmo
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AWeapon*                                     Weapon                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAsPercent                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWeaponStatics::STATIC_RefillAmmo(class AWeapon* Weapon, int32_t Amount, bool bAsPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponStatics.RefillAmmo");
		
		UWeaponStatics_RefillAmmo_Params params {};
		params.Weapon = Weapon;
		params.Amount = Amount;
		params.bAsPercent = bAsPercent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030BE910
	 * 		Name   -> Function GbxWeapon.WeaponStatics.K2_PlayWeaponHoldActionEx
	 * 		Flags  -> (Final, Native, Static, Private, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EWeaponActionType                                  WeaponAction                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AWeapon*                                     Weapon                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FActionState_Base                           ActionParams                                               (Parm, NativeAccessSpecifierPublic)
	 */
	class UGbxAction* UWeaponStatics::STATIC_K2_PlayWeaponHoldActionEx(class AActor* Actor, EWeaponActionType WeaponAction, class AWeapon* Weapon, const struct FActionState_Base& ActionParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponStatics.K2_PlayWeaponHoldActionEx");
		
		UWeaponStatics_K2_PlayWeaponHoldActionEx_Params params {};
		params.Actor = Actor;
		params.WeaponAction = WeaponAction;
		params.Weapon = Weapon;
		params.ActionParams = ActionParams;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030BE790
	 * 		Name   -> Function GbxWeapon.WeaponStatics.K2_PlayWeaponHoldAction
	 * 		Flags  -> (Final, Native, Static, Private, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EWeaponActionType                                  WeaponAction                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AWeapon*                                     Weapon                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PlayRate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGbxAction* UWeaponStatics::STATIC_K2_PlayWeaponHoldAction(class AActor* Actor, EWeaponActionType WeaponAction, class AWeapon* Weapon, float PlayRate, float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponStatics.K2_PlayWeaponHoldAction");
		
		UWeaponStatics_K2_PlayWeaponHoldAction_Params params {};
		params.Actor = Actor;
		params.WeaponAction = WeaponAction;
		params.Weapon = Weapon;
		params.PlayRate = PlayRate;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030BE6E0
	 * 		Name   -> Function GbxWeapon.WeaponStatics.HideWeapons
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      WeaponUser                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWeaponStatics::STATIC_HideWeapons(class AActor* WeaponUser, const class FName& Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponStatics.HideWeapons");
		
		UWeaponStatics_HideWeapons_Params params {};
		params.WeaponUser = WeaponUser;
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030BE5F0
	 * 		Name   -> Function GbxWeapon.WeaponStatics.HideWeapon
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      WeaponUser                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Slot                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWeaponStatics::STATIC_HideWeapon(class AActor* WeaponUser, unsigned char Slot, const class FName& Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponStatics.HideWeapon");
		
		UWeaponStatics_HideWeapon_Params params {};
		params.WeaponUser = WeaponUser;
		params.Slot = Slot;
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030BE4B0
	 * 		Name   -> Function GbxWeapon.WeaponStatics.GiveAmmo
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AWeapon*                                     Weapon                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bLoaded                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAsPercent                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWeaponStatics::STATIC_GiveAmmo(class AWeapon* Weapon, int32_t Amount, bool bLoaded, bool bAsPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponStatics.GiveAmmo");
		
		UWeaponStatics_GiveAmmo_Params params {};
		params.Weapon = Weapon;
		params.Amount = Amount;
		params.bLoaded = bLoaded;
		params.bAsPercent = bAsPercent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030BE430
	 * 		Name   -> Function GbxWeapon.WeaponStatics.GetWeapon
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     Context                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AWeapon* UWeaponStatics::STATIC_GetWeapon(class UObject* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponStatics.GetWeapon");
		
		UWeaponStatics_GetWeapon_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030BE2B0
	 * 		Name   -> Function GbxWeapon.WeaponStatics.GetMaxZoomFOVScale
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AWeapon*                                     Weapon                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      UseMode                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UWeaponStatics::STATIC_GetMaxZoomFOVScale(class AWeapon* Weapon, unsigned char UseMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponStatics.GetMaxZoomFOVScale");
		
		UWeaponStatics_GetMaxZoomFOVScale_Params params {};
		params.Weapon = Weapon;
		params.UseMode = UseMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030BE1F0
	 * 		Name   -> Function GbxWeapon.WeaponStatics.GetLoadedAmmo
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AWeapon*                                     Weapon                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      UseMode                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UWeaponStatics::STATIC_GetLoadedAmmo(class AWeapon* Weapon, unsigned char UseMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponStatics.GetLoadedAmmo");
		
		UWeaponStatics_GetLoadedAmmo_Params params {};
		params.Weapon = Weapon;
		params.UseMode = UseMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030BE130
	 * 		Name   -> Function GbxWeapon.WeaponStatics.GetFireRateAccelPercent
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AWeapon*                                     Weapon                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      UseMode                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UWeaponStatics::STATIC_GetFireRateAccelPercent(class AWeapon* Weapon, unsigned char UseMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponStatics.GetFireRateAccelPercent");
		
		UWeaponStatics_GetFireRateAccelPercent_Params params {};
		params.Weapon = Weapon;
		params.UseMode = UseMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030BE070
	 * 		Name   -> Function GbxWeapon.WeaponStatics.GetFireRate
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AWeapon*                                     Weapon                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      UseMode                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UWeaponStatics::STATIC_GetFireRate(class AWeapon* Weapon, unsigned char UseMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponStatics.GetFireRate");
		
		UWeaponStatics_GetFireRate_Params params {};
		params.Weapon = Weapon;
		params.UseMode = UseMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030BDFB0
	 * 		Name   -> Function GbxWeapon.WeaponStatics.GetDamageType
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AWeapon*                                     Weapon                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      UseMode                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGbxDamageType* UWeaponStatics::STATIC_GetDamageType(class AWeapon* Weapon, unsigned char UseMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponStatics.GetDamageType");
		
		UWeaponStatics_GetDamageType_Params params {};
		params.Weapon = Weapon;
		params.UseMode = UseMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030BDE80
	 * 		Name   -> Function GbxWeapon.WeaponStatics.CreateProjectileEQSProxy
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Rotation                                                   (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      ReferenceActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UProjectileEQSProxy* UWeaponStatics::STATIC_CreateProjectileEQSProxy(const struct FVector& Location, const struct FRotator& Rotation, class AActor* ReferenceActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponStatics.CreateProjectileEQSProxy");
		
		UWeaponStatics_CreateProjectileEQSProxy_Params params {};
		params.Location = Location;
		params.Rotation = Rotation;
		params.ReferenceActor = ReferenceActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponStatics.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponStatics::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.WeaponStatics");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponTriggerFeedbackAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponTriggerFeedbackAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.WeaponTriggerFeedbackAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponTypeAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponTypeAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.WeaponTypeAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponTypeData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponTypeData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.WeaponTypeData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponTypeDataTableAttributeValueResolver.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponTypeDataTableAttributeValueResolver::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.WeaponTypeDataTableAttributeValueResolver");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030BF400
	 * 		Name   -> Function GbxWeapon.WeaponVisibleAmmoComponent.UpdateBoneVisibility
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bForce                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWeaponVisibleAmmoComponent::UpdateBoneVisibility(bool bForce)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponVisibleAmmoComponent.UpdateBoneVisibility");
		
		UWeaponVisibleAmmoComponent_UpdateBoneVisibility_Params params {};
		params.bForce = bForce;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030BF0B0
	 * 		Name   -> Function GbxWeapon.WeaponVisibleAmmoComponent.SetVisibleAmmoUpdateMethod
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EWeaponVisibleAmmoUpdateMethod                     NewUpdateMethod                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWeaponVisibleAmmoComponent::SetVisibleAmmoUpdateMethod(EWeaponVisibleAmmoUpdateMethod NewUpdateMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponVisibleAmmoComponent.SetVisibleAmmoUpdateMethod");
		
		UWeaponVisibleAmmoComponent_SetVisibleAmmoUpdateMethod_Params params {};
		params.NewUpdateMethod = NewUpdateMethod;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030BEF80
	 * 		Name   -> Function GbxWeapon.WeaponVisibleAmmoComponent.SetVisibleAmmoState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EWeaponVisibleAmmoState                            NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWeaponVisibleAmmoComponent::SetVisibleAmmoState(EWeaponVisibleAmmoState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponVisibleAmmoComponent.SetVisibleAmmoState");
		
		UWeaponVisibleAmmoComponent_SetVisibleAmmoState_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030BEEB0
	 * 		Name   -> Function GbxWeapon.WeaponVisibleAmmoComponent.ResetVisibleAmmoState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UWeaponVisibleAmmoComponent::ResetVisibleAmmoState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponVisibleAmmoComponent.ResetVisibleAmmoState");
		
		UWeaponVisibleAmmoComponent_ResetVisibleAmmoState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030BEBA0
	 * 		Name   -> Function GbxWeapon.WeaponVisibleAmmoComponent.OnRep_ServerAmmoCount
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UWeaponVisibleAmmoComponent::OnRep_ServerAmmoCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponVisibleAmmoComponent.OnRep_ServerAmmoCount");
		
		UWeaponVisibleAmmoComponent_OnRep_ServerAmmoCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030BEBE0
	 * 		Name   -> Function GbxWeapon.WeaponVisibleAmmoComponent.OnDetached
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UWeaponVisibleAmmoComponent::OnDetached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponVisibleAmmoComponent.OnDetached");
		
		UWeaponVisibleAmmoComponent_OnDetached_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030BEBC0
	 * 		Name   -> Function GbxWeapon.WeaponVisibleAmmoComponent.OnAttached
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UWeaponVisibleAmmoComponent::OnAttached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponVisibleAmmoComponent.OnAttached");
		
		UWeaponVisibleAmmoComponent_OnAttached_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030BEBA0
	 * 		Name   -> Function GbxWeapon.WeaponVisibleAmmoComponent.OnAmmoChanged
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UWeaponVisibleAmmoComponent::OnAmmoChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponVisibleAmmoComponent.OnAmmoChanged");
		
		UWeaponVisibleAmmoComponent_OnAmmoChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponVisibleAmmoComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponVisibleAmmoComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.WeaponVisibleAmmoComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponMaxZoomFOVScaleValueResolver.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponMaxZoomFOVScaleValueResolver::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxWeapon.WeaponMaxZoomFOVScaleValueResolver");
		return ptr;
	}

}


