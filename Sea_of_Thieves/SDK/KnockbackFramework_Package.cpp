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
	 * 		Name   -> PredefinedFunction UKnockbackInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKnockbackInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class KnockbackFramework.KnockbackInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A8D1F0
	 * 		Name   -> Function KnockbackFramework.KnockbackColliderComponent.OnRep_SolidState
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UKnockbackColliderComponent::OnRep_SolidState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnockbackFramework.KnockbackColliderComponent.OnRep_SolidState");
		
		UKnockbackColliderComponent_OnRep_SolidState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKnockbackColliderComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKnockbackColliderComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class KnockbackFramework.KnockbackColliderComponent");
		return ptr;
	}

}


