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
	 * 		RVA    -> 0x006F6550
	 * 		Name   -> Function DonkehFrameworkAnim.AnimNotify_PlayFootstepFX.SetFootstepNotifyProps
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, Const)
	 * Parameters:
	 * 		struct FFootstepFXSettings                         PropsToUse                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UAnimNotify_PlayFootstepFX::SetFootstepNotifyProps(const struct FFootstepFXSettings& PropsToUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkAnim.AnimNotify_PlayFootstepFX.SetFootstepNotifyProps");
		
		UAnimNotify_PlayFootstepFX_SetFootstepNotifyProps_Params params {};
		params.PropsToUse = PropsToUse;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006F62C0
	 * 		Name   -> Function DonkehFrameworkAnim.AnimNotify_PlayFootstepFX.GetFootstepNotifyProps
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FFootstepFXSettings UAnimNotify_PlayFootstepFX::GetFootstepNotifyProps()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkAnim.AnimNotify_PlayFootstepFX.GetFootstepNotifyProps");
		
		UAnimNotify_PlayFootstepFX_GetFootstepNotifyProps_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006F5ED0
	 * 		Name   -> Function DonkehFrameworkAnim.AnimNotify_PlayFootstepFX.EqualProps
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FFootstepFXSettings                         Props                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FFootstepFXSettings                         OtherProps                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UAnimNotify_PlayFootstepFX::STATIC_EqualProps(const struct FFootstepFXSettings& Props, const struct FFootstepFXSettings& OtherProps)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkAnim.AnimNotify_PlayFootstepFX.EqualProps");
		
		UAnimNotify_PlayFootstepFX_EqualProps_Params params {};
		params.Props = Props;
		params.OtherProps = OtherProps;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_PlayFootstepFX.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_PlayFootstepFX::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFrameworkAnim.AnimNotify_PlayFootstepFX");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006F6660
	 * 		Name   -> Function DonkehFrameworkAnim.DFCharacterAnimInstance.TryGetOwnerWeapon
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class ADFBaseItem* UDFCharacterAnimInstance::TryGetOwnerWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkAnim.DFCharacterAnimInstance.TryGetOwnerWeapon");
		
		UDFCharacterAnimInstance_TryGetOwnerWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006F6630
	 * 		Name   -> Function DonkehFrameworkAnim.DFCharacterAnimInstance.TryGetControllerOwner
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AController* UDFCharacterAnimInstance::TryGetControllerOwner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkAnim.DFCharacterAnimInstance.TryGetControllerOwner");
		
		UDFCharacterAnimInstance_TryGetControllerOwner_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006F61C0
	 * 		Name   -> Function DonkehFrameworkAnim.DFCharacterAnimInstance.EquippedWeaponChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ADFBaseCharacter*                            Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADFBaseItem*                                 NewEquippedWeap                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADFBaseItem*                                 PrevEquippedWeap                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFCharacterAnimInstance::EquippedWeaponChanged(class ADFBaseCharacter* Character, class ADFBaseItem* NewEquippedWeap, class ADFBaseItem* PrevEquippedWeap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkAnim.DFCharacterAnimInstance.EquippedWeaponChanged");
		
		UDFCharacterAnimInstance_EquippedWeaponChanged_Params params {};
		params.Character = Character;
		params.NewEquippedWeap = NewEquippedWeap;
		params.PrevEquippedWeap = PrevEquippedWeap;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFrameworkAnim.DFCharacterAnimInstance.BlueprintUpdatePawnOwnerRefs
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       NewPawn                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFCharacterAnimInstance::BlueprintUpdatePawnOwnerRefs(class APawn* NewPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkAnim.DFCharacterAnimInstance.BlueprintUpdatePawnOwnerRefs");
		
		UDFCharacterAnimInstance_BlueprintUpdatePawnOwnerRefs_Params params {};
		params.NewPawn = NewPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFrameworkAnim.DFCharacterAnimInstance.BlueprintUpdateEquippedWeaponRefs
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADFBaseItem*                                 NewWeap                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFCharacterAnimInstance::BlueprintUpdateEquippedWeaponRefs(class ADFBaseItem* NewWeap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkAnim.DFCharacterAnimInstance.BlueprintUpdateEquippedWeaponRefs");
		
		UDFCharacterAnimInstance_BlueprintUpdateEquippedWeaponRefs_Params params {};
		params.NewWeap = NewWeap;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFrameworkAnim.DFCharacterAnimInstance.BlueprintUpdateControllerOwnerRefs
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 NewC                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFCharacterAnimInstance::BlueprintUpdateControllerOwnerRefs(class AController* NewC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkAnim.DFCharacterAnimInstance.BlueprintUpdateControllerOwnerRefs");
		
		UDFCharacterAnimInstance_BlueprintUpdateControllerOwnerRefs_Params params {};
		params.NewC = NewC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDFCharacterAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDFCharacterAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFrameworkAnim.DFCharacterAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006F6690
	 * 		Name   -> Function DonkehFrameworkAnim.DFWeaponAnimInstance.TryGetWeaponOwner
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class ADFBaseWeapon* UDFWeaponAnimInstance::TryGetWeaponOwner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkAnim.DFWeaponAnimInstance.TryGetWeaponOwner");
		
		UDFWeaponAnimInstance_TryGetWeaponOwner_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFrameworkAnim.DFWeaponAnimInstance.BlueprintUpdateWeaponOwnerRefs
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADFBaseWeapon*                               NewWeap                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFWeaponAnimInstance::BlueprintUpdateWeaponOwnerRefs(class ADFBaseWeapon* NewWeap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkAnim.DFWeaponAnimInstance.BlueprintUpdateWeaponOwnerRefs");
		
		UDFWeaponAnimInstance_BlueprintUpdateWeaponOwnerRefs_Params params {};
		params.NewWeap = NewWeap;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDFWeaponAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDFWeaponAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFrameworkAnim.DFWeaponAnimInstance");
		return ptr;
	}

}


