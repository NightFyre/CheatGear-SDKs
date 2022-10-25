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
	 * 		RVA    -> 0x04E10830
	 * 		Name   -> Function BP_Firearm_P90.BP_Firearm_P90_C.UpdateSocketName
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        bpp__ParentSocket__pf                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName ABP_Firearm_P90_C::UpdateSocketName(const class FName& bpp__ParentSocket__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_P90.BP_Firearm_P90_C.UpdateSocketName");
		
		ABP_Firearm_P90_C_UpdateSocketName_Params params {};
		params.bpp__ParentSocket__pf = bpp__ParentSocket__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E10800
	 * 		Name   -> Function BP_Firearm_P90.BP_Firearm_P90_C.HasMovableUpgrade
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintPure)
	 */
	bool ABP_Firearm_P90_C::HasMovableUpgrade()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_P90.BP_Firearm_P90_C.HasMovableUpgrade");
		
		ABP_Firearm_P90_C_HasMovableUpgrade_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E107D0
	 * 		Name   -> Function BP_Firearm_P90.BP_Firearm_P90_C.GetMovableUpgrade
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 */
	class UWeaponUpgradeComponent* ABP_Firearm_P90_C::GetMovableUpgrade()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_P90.BP_Firearm_P90_C.GetMovableUpgrade");
		
		ABP_Firearm_P90_C_GetMovableUpgrade_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Firearm_P90_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Firearm_P90_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BP_Firearm_P90.BP_Firearm_P90_C");
		return ptr;
	}

}


