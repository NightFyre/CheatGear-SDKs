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
	 * 		Name   -> PredefinedFunction URetractableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URetractableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Retraction.RetractableComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URetractorInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URetractorInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Retraction.RetractorInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URetractableInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URetractableInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Retraction.RetractableInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URetractableProviderInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URetractableProviderInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Retraction.RetractableProviderInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URetractableFloatingBarrelComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URetractableFloatingBarrelComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Retraction.RetractableFloatingBarrelComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URetractorComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URetractorComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Retraction.RetractorComponent");
		return ptr;
	}

}


