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
	 * 		Name   -> PredefinedFunction UBurntItemConditionalStatTrigger.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBurntItemConditionalStatTrigger::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Cooking.BurntItemConditionalStatTrigger");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBurntItemOnShipConditionalStatTrigger.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBurntItemOnShipConditionalStatTrigger::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Cooking.BurntItemOnShipConditionalStatTrigger");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCookableInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCookableInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Cooking.CookableInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCookingDefaultsInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCookingDefaultsInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Cooking.CookingDefaultsInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCookingStatusPublisherInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCookingStatusPublisherInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Cooking.CookingStatusPublisherInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCookingStateInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCookingStateInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Cooking.CookingStateInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCookableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCookableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Cooking.CookableComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCookerInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCookerInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Cooking.CookerInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0396A170
	 * 		Name   -> Function Cooking.CookerComponent.OnRep_CookingState
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FCookingClientRepresentation                OldRepresentation                                          (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UCookerComponent::OnRep_CookingState(const struct FCookingClientRepresentation& OldRepresentation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Cooking.CookerComponent.OnRep_CookingState");
		
		UCookerComponent_OnRep_CookingState_Params params {};
		params.OldRepresentation = OldRepresentation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCookerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCookerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Cooking.CookerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCookingComponentAudioParams.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCookingComponentAudioParams::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Cooking.CookingComponentAudioParams");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACookingPot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACookingPot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Cooking.CookingPot");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCookItemConditionalStatTrigger.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCookItemConditionalStatTrigger::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Cooking.CookItemConditionalStatTrigger");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHasRequiredCookingStateStatCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHasRequiredCookingStateStatCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Cooking.HasRequiredCookingStateStatCondition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMixableInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMixableInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Cooking.MixableInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPottableInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPottableInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Cooking.PottableInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPottableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPottableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Cooking.PottableComponent");
		return ptr;
	}

}


