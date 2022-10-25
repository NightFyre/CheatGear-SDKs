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
	 * 		RVA    -> 0x04FDA9F0
	 * 		Name   -> Function Lesson_14_SwitchWeapons.Lesson_14_SwitchWeapons_C.OnItemSelected
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AItemEquipable*                              bpp__NewItem__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AItemEquipable*                              bpp__PreviousItem__pf                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULesson_14_SwitchWeapons_C::OnItemSelected(class AItemEquipable* bpp__NewItem__pf, class AItemEquipable* bpp__PreviousItem__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lesson_14_SwitchWeapons.Lesson_14_SwitchWeapons_C.OnItemSelected");
		
		ULesson_14_SwitchWeapons_C_OnItemSelected_Params params {};
		params.bpp__NewItem__pf = bpp__NewItem__pf;
		params.bpp__PreviousItem__pf = bpp__PreviousItem__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FDAAC0
	 * 		Name   -> Function Lesson_14_SwitchWeapons.Lesson_14_SwitchWeapons_C.BlueprintOnInitialized
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		class AINSBasePlayerController*                    bpp__NewOwningPlayerController__pf                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AINSPlayerState*                             bpp__NewPlayer__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULesson_14_SwitchWeapons_C::BlueprintOnInitialized(class AINSBasePlayerController* bpp__NewOwningPlayerController__pf, class AINSPlayerState* bpp__NewPlayer__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lesson_14_SwitchWeapons.Lesson_14_SwitchWeapons_C.BlueprintOnInitialized");
		
		ULesson_14_SwitchWeapons_C_BlueprintOnInitialized_Params params {};
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
	 * 		Name   -> DelegateFunction Lesson_14_SwitchWeapons.Lesson_14_SwitchWeapons_C.EquipableItemSelectedDelegate__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 * Parameters:
	 * 		class AItemEquipable*                              bpp__NewItem__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AItemEquipable*                              bpp__PreviousItem__pf                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULesson_14_SwitchWeapons_C::EquipableItemSelectedDelegate__DelegateSignature(class AItemEquipable* bpp__NewItem__pf, class AItemEquipable* bpp__PreviousItem__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Lesson_14_SwitchWeapons.Lesson_14_SwitchWeapons_C.EquipableItemSelectedDelegate__DelegateSignature");
		
		ULesson_14_SwitchWeapons_C_EquipableItemSelectedDelegate__DelegateSignature_Params params {};
		params.bpp__NewItem__pf = bpp__NewItem__pf;
		params.bpp__PreviousItem__pf = bpp__PreviousItem__pf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULesson_14_SwitchWeapons_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULesson_14_SwitchWeapons_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass Lesson_14_SwitchWeapons.Lesson_14_SwitchWeapons_C");
		return ptr;
	}

}


