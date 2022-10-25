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
	 * 		RVA    -> 0x04F35500
	 * 		Name   -> Function Lesson_10_MeleeCharge.Lesson_10_MeleeCharge_C.UpdateSprintDistance
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AINSSoldier*                                 bpp__Soldier__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULesson_10_MeleeCharge_C::UpdateSprintDistance(class AINSSoldier* bpp__Soldier__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lesson_10_MeleeCharge.Lesson_10_MeleeCharge_C.UpdateSprintDistance");
		
		ULesson_10_MeleeCharge_C_UpdateSprintDistance_Params params {};
		params.bpp__Soldier__pf = bpp__Soldier__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FDAB90
	 * 		Name   -> Function Lesson_10_MeleeCharge.Lesson_10_MeleeCharge_C.OnUpdatePosition
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AINSSoldier*                                 bpp__Interactor__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULesson_10_MeleeCharge_C::OnUpdatePosition(class AINSSoldier* bpp__Interactor__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lesson_10_MeleeCharge.Lesson_10_MeleeCharge_C.OnUpdatePosition");
		
		ULesson_10_MeleeCharge_C_OnUpdatePosition_Params params {};
		params.bpp__Interactor__pf = bpp__Interactor__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FDFBF0
	 * 		Name   -> Function Lesson_10_MeleeCharge.Lesson_10_MeleeCharge_C.OnStartSprint
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AINSSoldier*                                 bpp__Interactor__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULesson_10_MeleeCharge_C::OnStartSprint(class AINSSoldier* bpp__Interactor__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lesson_10_MeleeCharge.Lesson_10_MeleeCharge_C.OnStartSprint");
		
		ULesson_10_MeleeCharge_C_OnStartSprint_Params params {};
		params.bpp__Interactor__pf = bpp__Interactor__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FDFB60
	 * 		Name   -> Function Lesson_10_MeleeCharge.Lesson_10_MeleeCharge_C.OnPlayerSpawned
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AINSSoldier*                                 bpp__Player__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULesson_10_MeleeCharge_C::OnPlayerSpawned(class AINSSoldier* bpp__Player__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lesson_10_MeleeCharge.Lesson_10_MeleeCharge_C.OnPlayerSpawned");
		
		ULesson_10_MeleeCharge_C_OnPlayerSpawned_Params params {};
		params.bpp__Player__pf = bpp__Player__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FDAC20
	 * 		Name   -> Function Lesson_10_MeleeCharge.Lesson_10_MeleeCharge_C.OnEndSprint
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AINSSoldier*                                 bpp__Interactor__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULesson_10_MeleeCharge_C::OnEndSprint(class AINSSoldier* bpp__Interactor__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lesson_10_MeleeCharge.Lesson_10_MeleeCharge_C.OnEndSprint");
		
		ULesson_10_MeleeCharge_C_OnEndSprint_Params params {};
		params.bpp__Interactor__pf = bpp__Interactor__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F35470
	 * 		Name   -> Function Lesson_10_MeleeCharge.Lesson_10_MeleeCharge_C.CheckLessonTrigger
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AINSSoldier*                                 bpp__Soldier__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULesson_10_MeleeCharge_C::CheckLessonTrigger(class AINSSoldier* bpp__Soldier__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lesson_10_MeleeCharge.Lesson_10_MeleeCharge_C.CheckLessonTrigger");
		
		ULesson_10_MeleeCharge_C_CheckLessonTrigger_Params params {};
		params.bpp__Soldier__pf = bpp__Soldier__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FDFA70
	 * 		Name   -> Function Lesson_10_MeleeCharge.Lesson_10_MeleeCharge_C.BlueprintOnInitialized
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		class AINSBasePlayerController*                    bpp__NewOwningPlayerController__pf                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AINSPlayerState*                             bpp__NewPlayer__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULesson_10_MeleeCharge_C::BlueprintOnInitialized(class AINSBasePlayerController* bpp__NewOwningPlayerController__pf, class AINSPlayerState* bpp__NewPlayer__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lesson_10_MeleeCharge.Lesson_10_MeleeCharge_C.BlueprintOnInitialized");
		
		ULesson_10_MeleeCharge_C_BlueprintOnInitialized_Params params {};
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
	 * 		Name   -> DelegateFunction Lesson_10_MeleeCharge.Lesson_10_MeleeCharge_C.OnPlayerEventDelegate__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 * Parameters:
	 * 		class AINSSoldier*                                 bpp__Player__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULesson_10_MeleeCharge_C::OnPlayerEventDelegate__DelegateSignature(class AINSSoldier* bpp__Player__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Lesson_10_MeleeCharge.Lesson_10_MeleeCharge_C.OnPlayerEventDelegate__DelegateSignature");
		
		ULesson_10_MeleeCharge_C_OnPlayerEventDelegate__DelegateSignature_Params params {};
		params.bpp__Player__pf = bpp__Player__pf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> DelegateFunction Lesson_10_MeleeCharge.Lesson_10_MeleeCharge_C.OnMovementEventDelegate__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 * Parameters:
	 * 		class AINSSoldier*                                 bpp__Interactor__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULesson_10_MeleeCharge_C::OnMovementEventDelegate__DelegateSignature(class AINSSoldier* bpp__Interactor__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Lesson_10_MeleeCharge.Lesson_10_MeleeCharge_C.OnMovementEventDelegate__DelegateSignature");
		
		ULesson_10_MeleeCharge_C_OnMovementEventDelegate__DelegateSignature_Params params {};
		params.bpp__Interactor__pf = bpp__Interactor__pf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULesson_10_MeleeCharge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULesson_10_MeleeCharge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass Lesson_10_MeleeCharge.Lesson_10_MeleeCharge_C");
		return ptr;
	}

}


