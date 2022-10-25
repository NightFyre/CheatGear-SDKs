/**
 * Name: Sea_of_Thieves
 * Version: 9505844
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USirenAnimationData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USirenAnimationData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SirensAnimation.SirenAnimationData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x015A8F60
	 * 		Name   -> Function SirensAnimation.SirenAnimationInstance.ClearActiveAttack
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void USirenAnimationInstance::ClearActiveAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SirensAnimation.SirenAnimationInstance.ClearActiveAttack");
		
		USirenAnimationInstance_ClearActiveAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x015A8F40
	 * 		Name   -> Function SirensAnimation.SirenAnimationInstance.BeginNewAttack
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void USirenAnimationInstance::BeginNewAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SirensAnimation.SirenAnimationInstance.BeginNewAttack");
		
		USirenAnimationInstance_BeginNewAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USirenAnimationInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USirenAnimationInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SirensAnimation.SirenAnimationInstance");
		return ptr;
	}

}


