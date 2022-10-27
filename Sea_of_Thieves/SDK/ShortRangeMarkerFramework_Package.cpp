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
	 * 		RVA    -> 0x03F83D50
	 * 		Name   -> Function ShortRangeMarkerFramework.ShortRangeMarker.Multicast_OnCleanUp
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Protected)
	 */
	void AShortRangeMarker::Multicast_OnCleanUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortRangeMarkerFramework.ShortRangeMarker.Multicast_OnCleanUp");
		
		AShortRangeMarker_Multicast_OnCleanUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AShortRangeMarker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AShortRangeMarker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShortRangeMarkerFramework.ShortRangeMarker");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShortRangeMarkerInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShortRangeMarkerInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShortRangeMarkerFramework.ShortRangeMarkerInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F83D70
	 * 		Name   -> Function ShortRangeMarkerFramework.ShortRangeMarkerBlueprintFunctionLibrary.RegisterActorsWithShortRangeMarker
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      InMarker                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class AActor*>                              InActors                                                   (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UShortRangeMarkerBlueprintFunctionLibrary::STATIC_RegisterActorsWithShortRangeMarker(class UObject* WorldContextObject, class AActor* InMarker, TArray<class AActor*>* InActors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortRangeMarkerFramework.ShortRangeMarkerBlueprintFunctionLibrary.RegisterActorsWithShortRangeMarker");
		
		UShortRangeMarkerBlueprintFunctionLibrary_RegisterActorsWithShortRangeMarker_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.InMarker = InMarker;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InActors != nullptr)
			*InActors = params.InActors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShortRangeMarkerBlueprintFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShortRangeMarkerBlueprintFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShortRangeMarkerFramework.ShortRangeMarkerBlueprintFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShortRangeMarkerDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShortRangeMarkerDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShortRangeMarkerFramework.ShortRangeMarkerDataAsset");
		return ptr;
	}

}


