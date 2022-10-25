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
	 * 		RVA    -> 0x04FE3A30
	 * 		Name   -> Function Lesson_13_SpeedReload.Lesson_13_SpeedReload_C.OnSuppressedLowAmmo
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void ULesson_13_SpeedReload_C::OnSuppressedLowAmmo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lesson_13_SpeedReload.Lesson_13_SpeedReload_C.OnSuppressedLowAmmo");
		
		ULesson_13_SpeedReload_C_OnSuppressedLowAmmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FDF9A0
	 * 		Name   -> Function Lesson_13_SpeedReload.Lesson_13_SpeedReload_C.OnSpeedReloadDelegate_Event_1
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AINSSoldier*                                 bpp__Interactor__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AItemWeapon*                                 bpp__Weapon__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULesson_13_SpeedReload_C::OnSpeedReloadDelegate_Event_1(class AINSSoldier* bpp__Interactor__pf, class AItemWeapon* bpp__Weapon__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lesson_13_SpeedReload.Lesson_13_SpeedReload_C.OnSpeedReloadDelegate_Event_1");
		
		ULesson_13_SpeedReload_C_OnSpeedReloadDelegate_Event_1_Params params {};
		params.bpp__Interactor__pf = bpp__Interactor__pf;
		params.bpp__Weapon__pf = bpp__Weapon__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE3960
	 * 		Name   -> Function Lesson_13_SpeedReload.Lesson_13_SpeedReload_C.OnReloadDelegate_Event_1
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AINSSoldier*                                 bpp__Interactor__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AItemWeapon*                                 bpp__Weapon__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULesson_13_SpeedReload_C::OnReloadDelegate_Event_1(class AINSSoldier* bpp__Interactor__pf, class AItemWeapon* bpp__Weapon__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lesson_13_SpeedReload.Lesson_13_SpeedReload_C.OnReloadDelegate_Event_1");
		
		ULesson_13_SpeedReload_C_OnReloadDelegate_Event_1_Params params {};
		params.bpp__Interactor__pf = bpp__Interactor__pf;
		params.bpp__Weapon__pf = bpp__Weapon__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FDA9F0
	 * 		Name   -> Function Lesson_13_SpeedReload.Lesson_13_SpeedReload_C.OnEquip
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AINSSoldier*                                 bpp__Interactor__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AItemWeapon*                                 bpp__Weapon__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULesson_13_SpeedReload_C::OnEquip(class AINSSoldier* bpp__Interactor__pf, class AItemWeapon* bpp__Weapon__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lesson_13_SpeedReload.Lesson_13_SpeedReload_C.OnEquip");
		
		ULesson_13_SpeedReload_C_OnEquip_Params params {};
		params.bpp__Interactor__pf = bpp__Interactor__pf;
		params.bpp__Weapon__pf = bpp__Weapon__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FDFA70
	 * 		Name   -> Function Lesson_13_SpeedReload.Lesson_13_SpeedReload_C.BlueprintOnInitialized
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		class AINSBasePlayerController*                    bpp__NewOwningPlayerController__pf                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AINSPlayerState*                             bpp__NewPlayer__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULesson_13_SpeedReload_C::BlueprintOnInitialized(class AINSBasePlayerController* bpp__NewOwningPlayerController__pf, class AINSPlayerState* bpp__NewPlayer__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lesson_13_SpeedReload.Lesson_13_SpeedReload_C.BlueprintOnInitialized");
		
		ULesson_13_SpeedReload_C_BlueprintOnInitialized_Params params {};
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
	 * 		Name   -> DelegateFunction Lesson_13_SpeedReload.Lesson_13_SpeedReload_C.OnWeaponEventDelegate__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 * Parameters:
	 * 		class AINSSoldier*                                 bpp__Interactor__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AItemWeapon*                                 bpp__Weapon__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULesson_13_SpeedReload_C::OnWeaponEventDelegate__DelegateSignature(class AINSSoldier* bpp__Interactor__pf, class AItemWeapon* bpp__Weapon__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Lesson_13_SpeedReload.Lesson_13_SpeedReload_C.OnWeaponEventDelegate__DelegateSignature");
		
		ULesson_13_SpeedReload_C_OnWeaponEventDelegate__DelegateSignature_Params params {};
		params.bpp__Interactor__pf = bpp__Interactor__pf;
		params.bpp__Weapon__pf = bpp__Weapon__pf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> DelegateFunction Lesson_13_SpeedReload.Lesson_13_SpeedReload_C.OnHintSpeedReloadSuppressedLowAmmoDelegate__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 */
	void ULesson_13_SpeedReload_C::OnHintSpeedReloadSuppressedLowAmmoDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Lesson_13_SpeedReload.Lesson_13_SpeedReload_C.OnHintSpeedReloadSuppressedLowAmmoDelegate__DelegateSignature");
		
		ULesson_13_SpeedReload_C_OnHintSpeedReloadSuppressedLowAmmoDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULesson_13_SpeedReload_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULesson_13_SpeedReload_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass Lesson_13_SpeedReload.Lesson_13_SpeedReload_C");
		return ptr;
	}

}


