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
	 * 		RVA    -> 0x04FDFB60
	 * 		Name   -> Function Lesson_18_ToggleGasMask.Lesson_18_ToggleGasMask_C.OnSpawn
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AINSSoldier*                                 bpp__Player__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULesson_18_ToggleGasMask_C::OnSpawn(class AINSSoldier* bpp__Player__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lesson_18_ToggleGasMask.Lesson_18_ToggleGasMask_C.OnSpawn");
		
		ULesson_18_ToggleGasMask_C_OnSpawn_Params params {};
		params.bpp__Player__pf = bpp__Player__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FEA1D0
	 * 		Name   -> Function Lesson_18_ToggleGasMask.Lesson_18_ToggleGasMask_C.GearIsGasMask
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class AItemGear*                                   bpp__GearItem__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__IsGasmask__pf                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULesson_18_ToggleGasMask_C::GearIsGasMask(class AItemGear* bpp__GearItem__pf, bool* bpp__IsGasmask__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lesson_18_ToggleGasMask.Lesson_18_ToggleGasMask_C.GearIsGasMask");
		
		ULesson_18_ToggleGasMask_C_GearIsGasMask_Params params {};
		params.bpp__GearItem__pf = bpp__GearItem__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__IsGasmask__pf != nullptr)
			*bpp__IsGasmask__pf = params.bpp__IsGasmask__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FDAAC0
	 * 		Name   -> Function Lesson_18_ToggleGasMask.Lesson_18_ToggleGasMask_C.BlueprintOnInitialized
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		class AINSBasePlayerController*                    bpp__NewOwningPlayerController__pf                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AINSPlayerState*                             bpp__NewPlayer__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULesson_18_ToggleGasMask_C::BlueprintOnInitialized(class AINSBasePlayerController* bpp__NewOwningPlayerController__pf, class AINSPlayerState* bpp__NewPlayer__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lesson_18_ToggleGasMask.Lesson_18_ToggleGasMask_C.BlueprintOnInitialized");
		
		ULesson_18_ToggleGasMask_C_BlueprintOnInitialized_Params params {};
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
	 * 		Name   -> DelegateFunction Lesson_18_ToggleGasMask.Lesson_18_ToggleGasMask_C.OnPlayerEventDelegate__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 * Parameters:
	 * 		class AINSSoldier*                                 bpp__Player__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULesson_18_ToggleGasMask_C::OnPlayerEventDelegate__DelegateSignature(class AINSSoldier* bpp__Player__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Lesson_18_ToggleGasMask.Lesson_18_ToggleGasMask_C.OnPlayerEventDelegate__DelegateSignature");
		
		ULesson_18_ToggleGasMask_C_OnPlayerEventDelegate__DelegateSignature_Params params {};
		params.bpp__Player__pf = bpp__Player__pf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULesson_18_ToggleGasMask_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULesson_18_ToggleGasMask_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass Lesson_18_ToggleGasMask.Lesson_18_ToggleGasMask_C");
		return ptr;
	}

}


