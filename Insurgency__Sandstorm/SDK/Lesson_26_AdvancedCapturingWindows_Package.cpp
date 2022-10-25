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
	 * 		RVA    -> 0x04FEF1B0
	 * 		Name   -> Function Lesson_26_AdvancedCapturingWindows.Lesson_26_AdvancedCapturingWindows_C.OnScoreObjectiveCapturedDelegate_Event_1
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AINSPlayerController*                        bpp__Capturer__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AObjectiveCapturable*                        bpp__Objective__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      bpp__OldOwners__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      bpp__NewOwners__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULesson_26_AdvancedCapturingWindows_C::OnScoreObjectiveCapturedDelegate_Event_1(class AINSPlayerController* bpp__Capturer__pf, class AObjectiveCapturable* bpp__Objective__pf, unsigned char bpp__OldOwners__pf, unsigned char bpp__NewOwners__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lesson_26_AdvancedCapturingWindows.Lesson_26_AdvancedCapturingWindows_C.OnScoreObjectiveCapturedDelegate_Event_1");
		
		ULesson_26_AdvancedCapturingWindows_C_OnScoreObjectiveCapturedDelegate_Event_1_Params params {};
		params.bpp__Capturer__pf = bpp__Capturer__pf;
		params.bpp__Objective__pf = bpp__Objective__pf;
		params.bpp__OldOwners__pf = bpp__OldOwners__pf;
		params.bpp__NewOwners__pf = bpp__NewOwners__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FDAAC0
	 * 		Name   -> Function Lesson_26_AdvancedCapturingWindows.Lesson_26_AdvancedCapturingWindows_C.BlueprintOnInitialized
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		class AINSBasePlayerController*                    bpp__NewOwningPlayerController__pf                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AINSPlayerState*                             bpp__NewPlayer__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULesson_26_AdvancedCapturingWindows_C::BlueprintOnInitialized(class AINSBasePlayerController* bpp__NewOwningPlayerController__pf, class AINSPlayerState* bpp__NewPlayer__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lesson_26_AdvancedCapturingWindows.Lesson_26_AdvancedCapturingWindows_C.BlueprintOnInitialized");
		
		ULesson_26_AdvancedCapturingWindows_C_BlueprintOnInitialized_Params params {};
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
	 * 		Name   -> DelegateFunction Lesson_26_AdvancedCapturingWindows.Lesson_26_AdvancedCapturingWindows_C.OnScoreObjectiveCapturedDelegate__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 * Parameters:
	 * 		class AINSPlayerController*                        bpp__Capturer__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AObjectiveCapturable*                        bpp__Objective__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      bpp__OldOwners__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      bpp__NewOwners__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULesson_26_AdvancedCapturingWindows_C::OnScoreObjectiveCapturedDelegate__DelegateSignature(class AINSPlayerController* bpp__Capturer__pf, class AObjectiveCapturable* bpp__Objective__pf, unsigned char bpp__OldOwners__pf, unsigned char bpp__NewOwners__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Lesson_26_AdvancedCapturingWindows.Lesson_26_AdvancedCapturingWindows_C.OnScoreObjectiveCapturedDelegate__DelegateSignature");
		
		ULesson_26_AdvancedCapturingWindows_C_OnScoreObjectiveCapturedDelegate__DelegateSignature_Params params {};
		params.bpp__Capturer__pf = bpp__Capturer__pf;
		params.bpp__Objective__pf = bpp__Objective__pf;
		params.bpp__OldOwners__pf = bpp__OldOwners__pf;
		params.bpp__NewOwners__pf = bpp__NewOwners__pf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULesson_26_AdvancedCapturingWindows_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULesson_26_AdvancedCapturingWindows_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass Lesson_26_AdvancedCapturingWindows.Lesson_26_AdvancedCapturingWindows_C");
		return ptr;
	}

}


