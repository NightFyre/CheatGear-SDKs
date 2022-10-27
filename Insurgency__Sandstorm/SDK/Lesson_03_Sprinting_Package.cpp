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
	 * 		RVA    -> 0x04FDAEF0
	 * 		Name   -> Function Lesson_03_Sprinting.Lesson_03_Sprinting_C.UpdateSoldierLocation
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void ULesson_03_Sprinting_C::UpdateSoldierLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lesson_03_Sprinting.Lesson_03_Sprinting_C.UpdateSoldierLocation");
		
		ULesson_03_Sprinting_C_UpdateSoldierLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FDAC20
	 * 		Name   -> Function Lesson_03_Sprinting.Lesson_03_Sprinting_C.OnSprintDelegate_Event_1
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AINSSoldier*                                 bpp__Interactor__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULesson_03_Sprinting_C::OnSprintDelegate_Event_1(class AINSSoldier* bpp__Interactor__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lesson_03_Sprinting.Lesson_03_Sprinting_C.OnSprintDelegate_Event_1");
		
		ULesson_03_Sprinting_C_OnSprintDelegate_Event_1_Params params {};
		params.bpp__Interactor__pf = bpp__Interactor__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FDAB90
	 * 		Name   -> Function Lesson_03_Sprinting.Lesson_03_Sprinting_C.OnPositionUpdated
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AINSSoldier*                                 bpp__Interactor__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULesson_03_Sprinting_C::OnPositionUpdated(class AINSSoldier* bpp__Interactor__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lesson_03_Sprinting.Lesson_03_Sprinting_C.OnPositionUpdated");
		
		ULesson_03_Sprinting_C_OnPositionUpdated_Params params {};
		params.bpp__Interactor__pf = bpp__Interactor__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FDA9F0
	 * 		Name   -> Function Lesson_03_Sprinting.Lesson_03_Sprinting_C.BlueprintOnInitialized
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		class AINSBasePlayerController*                    bpp__NewOwningPlayerController__pf                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AINSPlayerState*                             bpp__NewPlayer__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULesson_03_Sprinting_C::BlueprintOnInitialized(class AINSBasePlayerController* bpp__NewOwningPlayerController__pf, class AINSPlayerState* bpp__NewPlayer__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lesson_03_Sprinting.Lesson_03_Sprinting_C.BlueprintOnInitialized");
		
		ULesson_03_Sprinting_C_BlueprintOnInitialized_Params params {};
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
	 * 		Name   -> DelegateFunction Lesson_03_Sprinting.Lesson_03_Sprinting_C.OnMovementEventDelegate__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 * Parameters:
	 * 		class AINSSoldier*                                 bpp__Interactor__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULesson_03_Sprinting_C::OnMovementEventDelegate__DelegateSignature(class AINSSoldier* bpp__Interactor__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Lesson_03_Sprinting.Lesson_03_Sprinting_C.OnMovementEventDelegate__DelegateSignature");
		
		ULesson_03_Sprinting_C_OnMovementEventDelegate__DelegateSignature_Params params {};
		params.bpp__Interactor__pf = bpp__Interactor__pf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULesson_03_Sprinting_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULesson_03_Sprinting_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass Lesson_03_Sprinting.Lesson_03_Sprinting_C");
		return ptr;
	}

}


