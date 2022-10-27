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
	 * 		Name   -> PredefinedFunction ASimpleOverlapZone.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASimpleOverlapZone::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SimpleOverlaps.SimpleOverlapZone");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x033D45E0
	 * 		Name   -> Function SimpleOverlaps.DebugSimpleOverlapZoneVisualizerComponent.OnRep_SetDebugDrawColour
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UDebugSimpleOverlapZoneVisualizerComponent::OnRep_SetDebugDrawColour()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleOverlaps.DebugSimpleOverlapZoneVisualizerComponent.OnRep_SetDebugDrawColour");
		
		UDebugSimpleOverlapZoneVisualizerComponent_OnRep_SetDebugDrawColour_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x033D45C0
	 * 		Name   -> Function SimpleOverlaps.DebugSimpleOverlapZoneVisualizerComponent.OnRep_DebugBoxDimensions
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UDebugSimpleOverlapZoneVisualizerComponent::OnRep_DebugBoxDimensions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleOverlaps.DebugSimpleOverlapZoneVisualizerComponent.OnRep_DebugBoxDimensions");
		
		UDebugSimpleOverlapZoneVisualizerComponent_OnRep_DebugBoxDimensions_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDebugSimpleOverlapZoneVisualizerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDebugSimpleOverlapZoneVisualizerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SimpleOverlaps.DebugSimpleOverlapZoneVisualizerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USimpleOverlapCollectionKey.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USimpleOverlapCollectionKey::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SimpleOverlaps.SimpleOverlapCollectionKey");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USimpleOverlapComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USimpleOverlapComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SimpleOverlaps.SimpleOverlapComponent");
		return ptr;
	}

}


