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
	 * 		Name   -> Function Lesson_31_BasicDriving_ForGamepad.Lesson_31_BasicDriving_ForGamepad_C.OnNewSeat
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AINSSoldier*                                 bpp__Interactor__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UVehicleSeatComponent*                       bpp__NewSeat__pf                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULesson_31_BasicDriving_ForGamepad_C::OnNewSeat(class AINSSoldier* bpp__Interactor__pf, class UVehicleSeatComponent* bpp__NewSeat__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lesson_31_BasicDriving_ForGamepad.Lesson_31_BasicDriving_ForGamepad_C.OnNewSeat");
		
		ULesson_31_BasicDriving_ForGamepad_C_OnNewSeat_Params params {};
		params.bpp__Interactor__pf = bpp__Interactor__pf;
		params.bpp__NewSeat__pf = bpp__NewSeat__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FDAC20
	 * 		Name   -> Function Lesson_31_BasicDriving_ForGamepad.Lesson_31_BasicDriving_ForGamepad_C.EnterDriverSeat
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AINSSoldier*                                 bpp__Soldier__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULesson_31_BasicDriving_ForGamepad_C::EnterDriverSeat(class AINSSoldier* bpp__Soldier__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lesson_31_BasicDriving_ForGamepad.Lesson_31_BasicDriving_ForGamepad_C.EnterDriverSeat");
		
		ULesson_31_BasicDriving_ForGamepad_C_EnterDriverSeat_Params params {};
		params.bpp__Soldier__pf = bpp__Soldier__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FDAEF0
	 * 		Name   -> Function Lesson_31_BasicDriving_ForGamepad.Lesson_31_BasicDriving_ForGamepad_C.CheckIfDriverMoved
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void ULesson_31_BasicDriving_ForGamepad_C::CheckIfDriverMoved()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lesson_31_BasicDriving_ForGamepad.Lesson_31_BasicDriving_ForGamepad_C.CheckIfDriverMoved");
		
		ULesson_31_BasicDriving_ForGamepad_C_CheckIfDriverMoved_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FDAAC0
	 * 		Name   -> Function Lesson_31_BasicDriving_ForGamepad.Lesson_31_BasicDriving_ForGamepad_C.BlueprintOnInitialized
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		class AINSBasePlayerController*                    bpp__NewOwningPlayerController__pf                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AINSPlayerState*                             bpp__NewPlayer__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULesson_31_BasicDriving_ForGamepad_C::BlueprintOnInitialized(class AINSBasePlayerController* bpp__NewOwningPlayerController__pf, class AINSPlayerState* bpp__NewPlayer__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lesson_31_BasicDriving_ForGamepad.Lesson_31_BasicDriving_ForGamepad_C.BlueprintOnInitialized");
		
		ULesson_31_BasicDriving_ForGamepad_C_BlueprintOnInitialized_Params params {};
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
	 * 		Name   -> DelegateFunction Lesson_31_BasicDriving_ForGamepad.Lesson_31_BasicDriving_ForGamepad_C.OnNewSeatDelegate__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 * Parameters:
	 * 		class AINSSoldier*                                 bpp__Interactor__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UVehicleSeatComponent*                       bpp__NewSeat__pf                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULesson_31_BasicDriving_ForGamepad_C::OnNewSeatDelegate__DelegateSignature(class AINSSoldier* bpp__Interactor__pf, class UVehicleSeatComponent* bpp__NewSeat__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Lesson_31_BasicDriving_ForGamepad.Lesson_31_BasicDriving_ForGamepad_C.OnNewSeatDelegate__DelegateSignature");
		
		ULesson_31_BasicDriving_ForGamepad_C_OnNewSeatDelegate__DelegateSignature_Params params {};
		params.bpp__Interactor__pf = bpp__Interactor__pf;
		params.bpp__NewSeat__pf = bpp__NewSeat__pf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULesson_31_BasicDriving_ForGamepad_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULesson_31_BasicDriving_ForGamepad_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass Lesson_31_BasicDriving_ForGamepad.Lesson_31_BasicDriving_ForGamepad_C");
		return ptr;
	}

}


