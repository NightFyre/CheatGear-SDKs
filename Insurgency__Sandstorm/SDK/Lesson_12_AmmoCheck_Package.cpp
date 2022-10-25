/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x04FDFB40
	 * 		Name   -> Function Lesson_12_AmmoCheck.Lesson_12_AmmoCheck_C.OnLowAmmoWantsAmmoCheck
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void ULesson_12_AmmoCheck_C::OnLowAmmoWantsAmmoCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lesson_12_AmmoCheck.Lesson_12_AmmoCheck_C.OnLowAmmoWantsAmmoCheck");
		
		ULesson_12_AmmoCheck_C_OnLowAmmoWantsAmmoCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FDAAC0
	 * 		Name   -> Function Lesson_12_AmmoCheck.Lesson_12_AmmoCheck_C.OnAmmoCheckDelegate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AINSSoldier*                                 bpp__Interactor__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AItemWeapon*                                 bpp__Weapon__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULesson_12_AmmoCheck_C::OnAmmoCheckDelegate(class AINSSoldier* bpp__Interactor__pf, class AItemWeapon* bpp__Weapon__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lesson_12_AmmoCheck.Lesson_12_AmmoCheck_C.OnAmmoCheckDelegate");
		
		ULesson_12_AmmoCheck_C_OnAmmoCheckDelegate_Params params {};
		params.bpp__Interactor__pf = bpp__Interactor__pf;
		params.bpp__Weapon__pf = bpp__Weapon__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FDF9A0
	 * 		Name   -> Function Lesson_12_AmmoCheck.Lesson_12_AmmoCheck_C.BlueprintOnInitialized
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		class AINSBasePlayerController*                    bpp__NewOwningPlayerController__pf                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AINSPlayerState*                             bpp__NewPlayer__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULesson_12_AmmoCheck_C::BlueprintOnInitialized(class AINSBasePlayerController* bpp__NewOwningPlayerController__pf, class AINSPlayerState* bpp__NewPlayer__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lesson_12_AmmoCheck.Lesson_12_AmmoCheck_C.BlueprintOnInitialized");
		
		ULesson_12_AmmoCheck_C_BlueprintOnInitialized_Params params {};
		params.bpp__NewOwningPlayerController__pf = bpp__NewOwningPlayerController__pf;
		params.bpp__NewPlayer__pf = bpp__NewPlayer__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> DelegateFunction Lesson_12_AmmoCheck.Lesson_12_AmmoCheck_C.OnWeaponEventDelegate__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 * Parameters:
	 * 		class AINSSoldier*                                 bpp__Interactor__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AItemWeapon*                                 bpp__Weapon__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULesson_12_AmmoCheck_C::OnWeaponEventDelegate__DelegateSignature(class AINSSoldier* bpp__Interactor__pf, class AItemWeapon* bpp__Weapon__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Lesson_12_AmmoCheck.Lesson_12_AmmoCheck_C.OnWeaponEventDelegate__DelegateSignature");
		
		ULesson_12_AmmoCheck_C_OnWeaponEventDelegate__DelegateSignature_Params params {};
		params.bpp__Interactor__pf = bpp__Interactor__pf;
		params.bpp__Weapon__pf = bpp__Weapon__pf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> DelegateFunction Lesson_12_AmmoCheck.Lesson_12_AmmoCheck_C.OnShouldHintAmmoCheckDelegate__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 */
	void ULesson_12_AmmoCheck_C::OnShouldHintAmmoCheckDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Lesson_12_AmmoCheck.Lesson_12_AmmoCheck_C.OnShouldHintAmmoCheckDelegate__DelegateSignature");
		
		ULesson_12_AmmoCheck_C_OnShouldHintAmmoCheckDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULesson_12_AmmoCheck_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULesson_12_AmmoCheck_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass Lesson_12_AmmoCheck.Lesson_12_AmmoCheck_C");
		return ptr;
	}

}


