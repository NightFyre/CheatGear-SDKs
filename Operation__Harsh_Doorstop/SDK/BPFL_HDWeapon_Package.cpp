/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BPFL_HDWeapon.BPFL_HDWeapon_C.AimStyleToDisplayText
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		EHDWeaponAimStyle                                  AimStyle                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        StyleText                                                  (Parm, OutParm)
	 */
	void UBPFL_HDWeapon_C::STATIC_AimStyleToDisplayText(EHDWeaponAimStyle AimStyle, class UObject* __WorldContext, class FText* StyleText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_HDWeapon.BPFL_HDWeapon_C.AimStyleToDisplayText");
		
		UBPFL_HDWeapon_C_AimStyleToDisplayText_Params params {};
		params.AimStyle = AimStyle;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StyleText != nullptr)
			*StyleText = params.StyleText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BPFL_HDWeapon.BPFL_HDWeapon_C.FireModeToDisplayText
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		EFireMode                                          FireMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        ModeText                                                   (Parm, OutParm)
	 */
	void UBPFL_HDWeapon_C::STATIC_FireModeToDisplayText(EFireMode FireMode, class UObject* __WorldContext, class FText* ModeText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_HDWeapon.BPFL_HDWeapon_C.FireModeToDisplayText");
		
		UBPFL_HDWeapon_C_FireModeToDisplayText_Params params {};
		params.FireMode = FireMode;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModeText != nullptr)
			*ModeText = params.ModeText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BPFL_HDWeapon.BPFL_HDWeapon_C.FireModeToString
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		EFireMode                                          FireMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      ModeString                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBPFL_HDWeapon_C::STATIC_FireModeToString(EFireMode FireMode, class UObject* __WorldContext, class FString* ModeString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_HDWeapon.BPFL_HDWeapon_C.FireModeToString");
		
		UBPFL_HDWeapon_C_FireModeToString_Params params {};
		params.FireMode = FireMode;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModeString != nullptr)
			*ModeString = params.ModeString;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPFL_HDWeapon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPFL_HDWeapon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPFL_HDWeapon.BPFL_HDWeapon_C");
		return ptr;
	}

}


