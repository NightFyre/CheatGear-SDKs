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
	 * 		Name   -> Function Lesson_24_DoorKick.Lesson_24_DoorKick_C.OnDoorKickedDelegate_Event_1
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AINSSoldier*                                 bpp__Interactor__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADoor*                                       bpp__Door__pf                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULesson_24_DoorKick_C::OnDoorKickedDelegate_Event_1(class AINSSoldier* bpp__Interactor__pf, class ADoor* bpp__Door__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lesson_24_DoorKick.Lesson_24_DoorKick_C.OnDoorKickedDelegate_Event_1");
		
		ULesson_24_DoorKick_C_OnDoorKickedDelegate_Event_1_Params params {};
		params.bpp__Interactor__pf = bpp__Interactor__pf;
		params.bpp__Door__pf = bpp__Door__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FDAAC0
	 * 		Name   -> Function Lesson_24_DoorKick.Lesson_24_DoorKick_C.BlueprintOnInitialized
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		class AINSBasePlayerController*                    bpp__NewOwningPlayerController__pf                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AINSPlayerState*                             bpp__NewPlayer__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULesson_24_DoorKick_C::BlueprintOnInitialized(class AINSBasePlayerController* bpp__NewOwningPlayerController__pf, class AINSPlayerState* bpp__NewPlayer__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lesson_24_DoorKick.Lesson_24_DoorKick_C.BlueprintOnInitialized");
		
		ULesson_24_DoorKick_C_BlueprintOnInitialized_Params params {};
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
	 * 		Name   -> DelegateFunction Lesson_24_DoorKick.Lesson_24_DoorKick_C.OnDoorInteractedEventDelegate__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 * Parameters:
	 * 		class AINSSoldier*                                 bpp__Interactor__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADoor*                                       bpp__Door__pf                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULesson_24_DoorKick_C::OnDoorInteractedEventDelegate__DelegateSignature(class AINSSoldier* bpp__Interactor__pf, class ADoor* bpp__Door__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Lesson_24_DoorKick.Lesson_24_DoorKick_C.OnDoorInteractedEventDelegate__DelegateSignature");
		
		ULesson_24_DoorKick_C_OnDoorInteractedEventDelegate__DelegateSignature_Params params {};
		params.bpp__Interactor__pf = bpp__Interactor__pf;
		params.bpp__Door__pf = bpp__Door__pf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULesson_24_DoorKick_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULesson_24_DoorKick_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass Lesson_24_DoorKick.Lesson_24_DoorKick_C");
		return ptr;
	}

}


