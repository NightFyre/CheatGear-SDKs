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
	 * 		Name   -> Function Lesson_54_ChangeClass.Lesson_54_ChangeClass_C.OnPlayerDeath
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void ULesson_54_ChangeClass_C::OnPlayerDeath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lesson_54_ChangeClass.Lesson_54_ChangeClass_C.OnPlayerDeath");
		
		ULesson_54_ChangeClass_C_OnPlayerDeath_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FDAAC0
	 * 		Name   -> Function Lesson_54_ChangeClass.Lesson_54_ChangeClass_C.BlueprintOnInitialized
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		class AINSBasePlayerController*                    bpp__NewOwningPlayerController__pf                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AINSPlayerState*                             bpp__NewPlayer__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULesson_54_ChangeClass_C::BlueprintOnInitialized(class AINSBasePlayerController* bpp__NewOwningPlayerController__pf, class AINSPlayerState* bpp__NewPlayer__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lesson_54_ChangeClass.Lesson_54_ChangeClass_C.BlueprintOnInitialized");
		
		ULesson_54_ChangeClass_C_BlueprintOnInitialized_Params params {};
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
	 * 		Name   -> DelegateFunction Lesson_54_ChangeClass.Lesson_54_ChangeClass_C.OnPlayerDeathDelegate__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 */
	void ULesson_54_ChangeClass_C::OnPlayerDeathDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Lesson_54_ChangeClass.Lesson_54_ChangeClass_C.OnPlayerDeathDelegate__DelegateSignature");
		
		ULesson_54_ChangeClass_C_OnPlayerDeathDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULesson_54_ChangeClass_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULesson_54_ChangeClass_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass Lesson_54_ChangeClass.Lesson_54_ChangeClass_C");
		return ptr;
	}

}


