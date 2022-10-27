/**
 * Name: The_Complex
 * Version: 9349459
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x010604B0
	 * 		Name   -> Function LiveLinkComponents.LiveLinkComponentController.SetSubjectRepresentation
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FLiveLinkSubjectRepresentation              InSubjectRepresentation                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULiveLinkComponentController::SetSubjectRepresentation(const struct FLiveLinkSubjectRepresentation& InSubjectRepresentation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiveLinkComponents.LiveLinkComponentController.SetSubjectRepresentation");
		
		ULiveLinkComponentController_SetSubjectRepresentation_Params params {};
		params.InSubjectRepresentation = InSubjectRepresentation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01060480
	 * 		Name   -> Function LiveLinkComponents.LiveLinkComponentController.GetSubjectRepresentation
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FLiveLinkSubjectRepresentation ULiveLinkComponentController::GetSubjectRepresentation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiveLinkComponents.LiveLinkComponentController.GetSubjectRepresentation");
		
		ULiveLinkComponentController_GetSubjectRepresentation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULiveLinkComponentController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkComponentController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLinkComponents.LiveLinkComponentController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULiveLinkComponentSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkComponentSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLinkComponents.LiveLinkComponentSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULiveLinkControllerBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkControllerBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLinkComponents.LiveLinkControllerBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULiveLinkLightController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkLightController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLinkComponents.LiveLinkLightController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULiveLinkTransformController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkTransformController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLinkComponents.LiveLinkTransformController");
		return ptr;
	}

}


