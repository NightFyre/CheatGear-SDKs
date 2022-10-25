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
	 * 		RVA    -> 0x04FDFC80
	 * 		Name   -> Function Lesson_08_UsingWeaponSights.Lesson_08_UsingWeaponSights_C.ShouldTriggerLessonFromFire
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bpp__TriggerLesson__pf                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULesson_08_UsingWeaponSights_C::ShouldTriggerLessonFromFire(bool* bpp__TriggerLesson__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lesson_08_UsingWeaponSights.Lesson_08_UsingWeaponSights_C.ShouldTriggerLessonFromFire");
		
		ULesson_08_UsingWeaponSights_C_ShouldTriggerLessonFromFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__TriggerLesson__pf != nullptr)
			*bpp__TriggerLesson__pf = params.bpp__TriggerLesson__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FDAAC0
	 * 		Name   -> Function Lesson_08_UsingWeaponSights.Lesson_08_UsingWeaponSights_C.OnSightDelegate_Event_1
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AINSSoldier*                                 bpp__Interactor__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AItemWeapon*                                 bpp__Weapon__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULesson_08_UsingWeaponSights_C::OnSightDelegate_Event_1(class AINSSoldier* bpp__Interactor__pf, class AItemWeapon* bpp__Weapon__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lesson_08_UsingWeaponSights.Lesson_08_UsingWeaponSights_C.OnSightDelegate_Event_1");
		
		ULesson_08_UsingWeaponSights_C_OnSightDelegate_Event_1_Params params {};
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
	 * 		Name   -> Function Lesson_08_UsingWeaponSights.Lesson_08_UsingWeaponSights_C.OnFire
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AINSSoldier*                                 bpp__Interactor__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AItemWeapon*                                 bpp__Weapon__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULesson_08_UsingWeaponSights_C::OnFire(class AINSSoldier* bpp__Interactor__pf, class AItemWeapon* bpp__Weapon__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lesson_08_UsingWeaponSights.Lesson_08_UsingWeaponSights_C.OnFire");
		
		ULesson_08_UsingWeaponSights_C_OnFire_Params params {};
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
	 * 		Name   -> Function Lesson_08_UsingWeaponSights.Lesson_08_UsingWeaponSights_C.BlueprintOnInitialized
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		class AINSBasePlayerController*                    bpp__NewOwningPlayerController__pf                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AINSPlayerState*                             bpp__NewPlayer__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULesson_08_UsingWeaponSights_C::BlueprintOnInitialized(class AINSBasePlayerController* bpp__NewOwningPlayerController__pf, class AINSPlayerState* bpp__NewPlayer__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lesson_08_UsingWeaponSights.Lesson_08_UsingWeaponSights_C.BlueprintOnInitialized");
		
		ULesson_08_UsingWeaponSights_C_BlueprintOnInitialized_Params params {};
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
	 * 		Name   -> DelegateFunction Lesson_08_UsingWeaponSights.Lesson_08_UsingWeaponSights_C.OnWeaponEventDelegate__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 * Parameters:
	 * 		class AINSSoldier*                                 bpp__Interactor__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AItemWeapon*                                 bpp__Weapon__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULesson_08_UsingWeaponSights_C::OnWeaponEventDelegate__DelegateSignature(class AINSSoldier* bpp__Interactor__pf, class AItemWeapon* bpp__Weapon__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Lesson_08_UsingWeaponSights.Lesson_08_UsingWeaponSights_C.OnWeaponEventDelegate__DelegateSignature");
		
		ULesson_08_UsingWeaponSights_C_OnWeaponEventDelegate__DelegateSignature_Params params {};
		params.bpp__Interactor__pf = bpp__Interactor__pf;
		params.bpp__Weapon__pf = bpp__Weapon__pf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULesson_08_UsingWeaponSights_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULesson_08_UsingWeaponSights_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass Lesson_08_UsingWeaponSights.Lesson_08_UsingWeaponSights_C");
		return ptr;
	}

}


