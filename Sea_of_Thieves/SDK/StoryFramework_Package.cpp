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
	 * 		Name   -> PredefinedFunction UActiveStorySpawnRequirement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActiveStorySpawnRequirement::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StoryFramework.ActiveStorySpawnRequirement");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIsStoryActiveNPCDialogConditional.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsStoryActiveNPCDialogConditional::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StoryFramework.IsStoryActiveNPCDialogConditional");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStoryClaimableResourceComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStoryClaimableResourceComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StoryFramework.StoryClaimableResourceComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStoryClaimedResourcesServiceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStoryClaimedResourcesServiceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StoryFramework.StoryClaimedResourcesServiceInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStoryClaimedResourcesService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStoryClaimedResourcesService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StoryFramework.StoryClaimedResourcesService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x015B88A0
	 * 		Name   -> Function StoryFramework.StoryDrivenBlendedLightingZoneComponent.OnRep_CurrentStoryResponse
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UStoryDrivenBlendedLightingZoneComponent::OnRep_CurrentStoryResponse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StoryFramework.StoryDrivenBlendedLightingZoneComponent.OnRep_CurrentStoryResponse");
		
		UStoryDrivenBlendedLightingZoneComponent_OnRep_CurrentStoryResponse_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStoryDrivenBlendedLightingZoneComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStoryDrivenBlendedLightingZoneComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StoryFramework.StoryDrivenBlendedLightingZoneComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStoryDrivenBlendedLightingZoneComponentDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStoryDrivenBlendedLightingZoneComponentDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StoryFramework.StoryDrivenBlendedLightingZoneComponentDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStoryDrivenBlendedLightingZoneComponentCollectionDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStoryDrivenBlendedLightingZoneComponentCollectionDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StoryFramework.StoryDrivenBlendedLightingZoneComponentCollectionDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStoryDrivenSalvageItemSpawnComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStoryDrivenSalvageItemSpawnComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StoryFramework.StoryDrivenSalvageItemSpawnComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStoryNPCDialogConditionalContext.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStoryNPCDialogConditionalContext::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StoryFramework.StoryNPCDialogConditionalContext");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStoryNPCDialogOverrideType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStoryNPCDialogOverrideType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StoryFramework.StoryNPCDialogOverrideType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStorySpawnedActorsCollectionDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStorySpawnedActorsCollectionDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StoryFramework.StorySpawnedActorsCollectionDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStorySpawnedActorsComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStorySpawnedActorsComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StoryFramework.StorySpawnedActorsComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStorySpawnedActorsComponentCollectionDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStorySpawnedActorsComponentCollectionDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StoryFramework.StorySpawnedActorsComponentCollectionDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStorySpawnedActorsComponentDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStorySpawnedActorsComponentDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StoryFramework.StorySpawnedActorsComponentDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStorySpawnedActorsDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStorySpawnedActorsDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StoryFramework.StorySpawnedActorsDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStorySpawnedActorsServiceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStorySpawnedActorsServiceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StoryFramework.StorySpawnedActorsServiceInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStorySpawnedActorsService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStorySpawnedActorsService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StoryFramework.StorySpawnedActorsService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStorySpawnedActorsSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStorySpawnedActorsSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StoryFramework.StorySpawnedActorsSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDebugStoryServiceCheatInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDebugStoryServiceCheatInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StoryFramework.DebugStoryServiceCheatInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADebugStoryServiceCheat.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADebugStoryServiceCheat::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StoryFramework.DebugStoryServiceCheat");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStorySettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStorySettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StoryFramework.StorySettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStoryNamesCollectionDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStoryNamesCollectionDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StoryFramework.StoryNamesCollectionDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStoryServiceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStoryServiceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StoryFramework.StoryServiceInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0355C320
	 * 		Name   -> Function StoryFramework.StoryService.OnRep_ActiveStories
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AStoryService::OnRep_ActiveStories()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StoryFramework.StoryService.OnRep_ActiveStories");
		
		AStoryService_OnRep_ActiveStories_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStoryService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStoryService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StoryFramework.StoryService");
		return ptr;
	}

}


