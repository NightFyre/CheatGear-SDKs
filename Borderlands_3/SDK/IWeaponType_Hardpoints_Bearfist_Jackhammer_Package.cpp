/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IWeaponType_Hardpoints_Bearfist_Jackhammer.IWeaponType_Hardpoints_Bearfist_Jackhammer_C.SetHandVisible
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UIWeaponType_Hardpoints_Bearfist_Jackhammer_C::SetHandVisible(bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IWeaponType_Hardpoints_Bearfist_Jackhammer.IWeaponType_Hardpoints_Bearfist_Jackhammer_C.SetHandVisible");
		
		UIWeaponType_Hardpoints_Bearfist_Jackhammer_C_SetHandVisible_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIWeaponType_Hardpoints_Bearfist_Jackhammer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIWeaponType_Hardpoints_Bearfist_Jackhammer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass IWeaponType_Hardpoints_Bearfist_Jackhammer.IWeaponType_Hardpoints_Bearfist_Jackhammer_C");
		return ptr;
	}

}


