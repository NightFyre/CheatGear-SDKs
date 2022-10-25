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
	 * 		Name   -> PredefinedFunction UDeliverableRequirementBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeliverableRequirementBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DeliverableFramework.DeliverableRequirementBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDeliverableInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeliverableInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DeliverableFramework.DeliverableInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDeliverableRedirectionInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeliverableRedirectionInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DeliverableFramework.DeliverableRedirectionInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDeliverableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeliverableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DeliverableFramework.DeliverableComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDeliverableRedirectionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeliverableRedirectionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DeliverableFramework.DeliverableRedirectionComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDeliverableRedirectionContextBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeliverableRedirectionContextBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DeliverableFramework.DeliverableRedirectionContextBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDeliverableRedirectionNoContext.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeliverableRedirectionNoContext::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DeliverableFramework.DeliverableRedirectionNoContext");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDeliverableRedirectionCompositeContext.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeliverableRedirectionCompositeContext::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DeliverableFramework.DeliverableRedirectionCompositeContext");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDeliverableRedirectionDestinationDescriptorBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeliverableRedirectionDestinationDescriptorBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DeliverableFramework.DeliverableRedirectionDestinationDescriptorBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDeliverableRedirectionContextHandlerBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeliverableRedirectionContextHandlerBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DeliverableFramework.DeliverableRedirectionContextHandlerBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDeliverableRedirectionLiteralDestinationDescriptor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeliverableRedirectionLiteralDestinationDescriptor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DeliverableFramework.DeliverableRedirectionLiteralDestinationDescriptor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDeliverableRequirementsDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeliverableRequirementsDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DeliverableFramework.DeliverableRequirementsDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDeliverableTooltipCustomizerInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeliverableTooltipCustomizerInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DeliverableFramework.DeliverableTooltipCustomizerInterface");
		return ptr;
	}

}


