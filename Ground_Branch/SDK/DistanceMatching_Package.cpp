/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * 		Name   -> Function DistanceMatching.DistanceMatchingComponent.GetTakeOffMarker
	 * 		Flags  -> ()
	 */
	struct FPredictResult UDistanceMatchingComponent::GetTakeOffMarker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DistanceMatching.DistanceMatchingComponent.GetTakeOffMarker");
		
		UDistanceMatchingComponent_GetTakeOffMarker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DistanceMatching.DistanceMatchingComponent.GetStopMarker
	 * 		Flags  -> ()
	 */
	struct FPredictResult UDistanceMatchingComponent::GetStopMarker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DistanceMatching.DistanceMatchingComponent.GetStopMarker");
		
		UDistanceMatchingComponent_GetStopMarker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DistanceMatching.DistanceMatchingComponent.GetStartMarker
	 * 		Flags  -> ()
	 */
	struct FPredictResult UDistanceMatchingComponent::GetStartMarker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DistanceMatching.DistanceMatchingComponent.GetStartMarker");
		
		UDistanceMatchingComponent_GetStartMarker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DistanceMatching.DistanceMatchingComponent.GetPivotMarker
	 * 		Flags  -> ()
	 */
	struct FPredictResult UDistanceMatchingComponent::GetPivotMarker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DistanceMatching.DistanceMatchingComponent.GetPivotMarker");
		
		UDistanceMatchingComponent_GetPivotMarker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DistanceMatching.DistanceMatchingComponent.GetLandingMarker
	 * 		Flags  -> ()
	 */
	struct FPredictResult UDistanceMatchingComponent::GetLandingMarker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DistanceMatching.DistanceMatchingComponent.GetLandingMarker");
		
		UDistanceMatchingComponent_GetLandingMarker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DistanceMatching.DistanceMatchingComponent.GetApexMarker
	 * 		Flags  -> ()
	 */
	struct FPredictResult UDistanceMatchingComponent::GetApexMarker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DistanceMatching.DistanceMatchingComponent.GetApexMarker");
		
		UDistanceMatchingComponent_GetApexMarker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDistanceMatchingComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDistanceMatchingComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DistanceMatching.DistanceMatchingComponent");
		return ptr;
	}

}


