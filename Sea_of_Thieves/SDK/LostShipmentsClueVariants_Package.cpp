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
	 * 		Name   -> PredefinedFunction UAbandonedNoteClueDescriptor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbandonedNoteClueDescriptor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.AbandonedNoteClueDescriptor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbandonedNoteClueDescriptorGenerator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbandonedNoteClueDescriptorGenerator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.AbandonedNoteClueDescriptorGenerator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbandonedNoteClueTextChoiceSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbandonedNoteClueTextChoiceSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.AbandonedNoteClueTextChoiceSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbandonedNoteClueTextChoiceSourceConsumerInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbandonedNoteClueTextChoiceSourceConsumerInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.AbandonedNoteClueTextChoiceSourceConsumerInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbandonedNoteClueTextAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbandonedNoteClueTextAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.AbandonedNoteClueTextAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbandonedNoteClueTextIndexAssetBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbandonedNoteClueTextIndexAssetBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.AbandonedNoteClueTextIndexAssetBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbandonedNoteClueTextIndexAssetMap.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbandonedNoteClueTextIndexAssetMap::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.AbandonedNoteClueTextIndexAssetMap");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbandonedNoteClueTextSourceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbandonedNoteClueTextSourceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.AbandonedNoteClueTextSourceInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClueTitleInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClueTitleInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.ClueTitleInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClueDestinationContainerInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClueDestinationContainerInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.ClueDestinationContainerInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x014358A0
	 * 		Name   -> Function LostShipmentsClueVariants.AbandonedNoteClueDestinationContainerComponent.OnRep_CurrentTitleText
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UAbandonedNoteClueDestinationContainerComponent::OnRep_CurrentTitleText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LostShipmentsClueVariants.AbandonedNoteClueDestinationContainerComponent.OnRep_CurrentTitleText");
		
		UAbandonedNoteClueDestinationContainerComponent_OnRep_CurrentTitleText_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01435880
	 * 		Name   -> Function LostShipmentsClueVariants.AbandonedNoteClueDestinationContainerComponent.OnRep_CurrentClueDestination
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UAbandonedNoteClueDestinationContainerComponent::OnRep_CurrentClueDestination()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LostShipmentsClueVariants.AbandonedNoteClueDestinationContainerComponent.OnRep_CurrentClueDestination");
		
		UAbandonedNoteClueDestinationContainerComponent_OnRep_CurrentClueDestination_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbandonedNoteClueDestinationContainerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbandonedNoteClueDestinationContainerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.AbandonedNoteClueDestinationContainerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNPCByNameClueDestinationDescriptor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNPCByNameClueDestinationDescriptor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.NPCByNameClueDestinationDescriptor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbandonedNoteClueGenderSpecificTextAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbandonedNoteClueGenderSpecificTextAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.AbandonedNoteClueGenderSpecificTextAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbandonedNoteClueGenderSpecificTextIndexAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbandonedNoteClueGenderSpecificTextIndexAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.AbandonedNoteClueGenderSpecificTextIndexAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbandonedNoteClueTextIndexAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbandonedNoteClueTextIndexAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.AbandonedNoteClueTextIndexAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbandonedNoteWieldableRenderingComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbandonedNoteWieldableRenderingComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.AbandonedNoteWieldableRenderingComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAbandonedNoteWieldable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAbandonedNoteWieldable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.AbandonedNoteWieldable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBarrelsOfPlentyClueDestinationGenerator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBarrelsOfPlentyClueDestinationGenerator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.BarrelsOfPlentyClueDestinationGenerator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBarrelsOfPlentyClueSiteData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBarrelsOfPlentyClueSiteData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.BarrelsOfPlentyClueSiteData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBarrelsOfPlentyClueSiteType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBarrelsOfPlentyClueSiteType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.BarrelsOfPlentyClueSiteType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBarrelsOfPlentySeaClueCreator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBarrelsOfPlentySeaClueCreator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.BarrelsOfPlentySeaClueCreator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCircleMapClueDescriptor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCircleMapClueDescriptor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.CircleMapClueDescriptor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCircleMapClueDescriptorGenerator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCircleMapClueDescriptorGenerator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.CircleMapClueDescriptorGenerator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCircleMapClueRenderDataSourceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCircleMapClueRenderDataSourceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.CircleMapClueRenderDataSourceInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCircleMapClueDestinationContainerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCircleMapClueDestinationContainerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.CircleMapClueDestinationContainerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x014358E0
	 * 		Name   -> Function LostShipmentsClueVariants.ClueSiteCircleMapWieldable.OnRep_MapRadialIconData
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AClueSiteCircleMapWieldable::OnRep_MapRadialIconData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LostShipmentsClueVariants.ClueSiteCircleMapWieldable.OnRep_MapRadialIconData");
		
		AClueSiteCircleMapWieldable_OnRep_MapRadialIconData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AClueSiteCircleMapWieldable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AClueSiteCircleMapWieldable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.ClueSiteCircleMapWieldable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x014357D0
	 * 		Name   -> Function LostShipmentsClueVariants.ClueVariantsBlueprintFunctionLibrary.GiveClueDescriptorToItem
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AItemInfo*                                   ItemInfo                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClueDescriptor*                             Clue                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UClueVariantsBlueprintFunctionLibrary::STATIC_GiveClueDescriptorToItem(class AItemInfo* ItemInfo, class UClueDescriptor* Clue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LostShipmentsClueVariants.ClueVariantsBlueprintFunctionLibrary.GiveClueDescriptorToItem");
		
		UClueVariantsBlueprintFunctionLibrary_GiveClueDescriptorToItem_Params params {};
		params.ItemInfo = ItemInfo;
		params.Clue = Clue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClueVariantsBlueprintFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClueVariantsBlueprintFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.ClueVariantsBlueprintFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x014358C0
	 * 		Name   -> Function LostShipmentsClueVariants.CompositeClueDestinationDescriptor.OnRep_DestinationInfo
	 * 		Flags  -> (Native, Public)
	 */
	void UCompositeClueDestinationDescriptor::OnRep_DestinationInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LostShipmentsClueVariants.CompositeClueDestinationDescriptor.OnRep_DestinationInfo");
		
		UCompositeClueDestinationDescriptor_OnRep_DestinationInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCompositeClueDestinationDescriptor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCompositeClueDestinationDescriptor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.CompositeClueDestinationDescriptor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEndOfGooseChaseClueDestinationDescriptor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEndOfGooseChaseClueDestinationDescriptor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.EndOfGooseChaseClueDestinationDescriptor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UExistingToPhasedNPCIndexAssetMap.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UExistingToPhasedNPCIndexAssetMap::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.ExistingToPhasedNPCIndexAssetMap");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFloatingMessageInABottleClueDestinationGenerator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFloatingMessageInABottleClueDestinationGenerator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.FloatingMessageInABottleClueDestinationGenerator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFloatingMessageInABottleClueSiteData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFloatingMessageInABottleClueSiteData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.FloatingMessageInABottleClueSiteData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFloatingMessageInABottleClueSiteType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFloatingMessageInABottleClueSiteType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.FloatingMessageInABottleClueSiteType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFloatingMessageInABottleSeaClueCreator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFloatingMessageInABottleSeaClueCreator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.FloatingMessageInABottleSeaClueCreator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01435770
	 * 		Name   -> Function LostShipmentsClueVariants.GooseChaseClueBlueprintFunctionLibrary.CreateEndOfGooseChaseClue
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class UClueDescriptor* UGooseChaseClueBlueprintFunctionLibrary::STATIC_CreateEndOfGooseChaseClue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LostShipmentsClueVariants.GooseChaseClueBlueprintFunctionLibrary.CreateEndOfGooseChaseClue");
		
		UGooseChaseClueBlueprintFunctionLibrary_CreateEndOfGooseChaseClue_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGooseChaseClueBlueprintFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGooseChaseClueBlueprintFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.GooseChaseClueBlueprintFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIslandByCompassBearingClueDestinationDescriptor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIslandByCompassBearingClueDestinationDescriptor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.IslandByCompassBearingClueDestinationDescriptor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIslandByNameClueDestinationDescriptor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIslandByNameClueDestinationDescriptor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.IslandByNameClueDestinationDescriptor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIslandNameForNPCContextDestinationDescriptor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIslandNameForNPCContextDestinationDescriptor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.IslandNameForNPCContextDestinationDescriptor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULocationOnIslandClueDestinationDescriptor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULocationOnIslandClueDestinationDescriptor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.LocationOnIslandClueDestinationDescriptor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULostShipwreckClueDestinationDescriptor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULostShipwreckClueDestinationDescriptor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.LostShipwreckClueDestinationDescriptor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMerchantCaptainSpawnInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMerchantCaptainSpawnInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.MerchantCaptainSpawnInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMerchantCaptainSpawnComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMerchantCaptainSpawnComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.MerchantCaptainSpawnComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNPCHintDialogueClueCreator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNPCHintDialogueClueCreator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.NPCHintDialogueClueCreator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNPCHintDialogueClueDestinationGenerator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNPCHintDialogueClueDestinationGenerator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.NPCHintDialogueClueDestinationGenerator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNPCHintDialogueClueSiteData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNPCHintDialogueClueSiteData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.NPCHintDialogueClueSiteData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNPCHintDialogueClueSiteType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNPCHintDialogueClueSiteType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.NPCHintDialogueClueSiteType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UObtainClueOnWieldComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UObtainClueOnWieldComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.ObtainClueOnWieldComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UObtainClueFromContainerOnWieldComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UObtainClueFromContainerOnWieldComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.ObtainClueFromContainerOnWieldComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USeaLocationByGridSquareClueDestinationDescriptor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USeaLocationByGridSquareClueDestinationDescriptor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.SeaLocationByGridSquareClueDestinationDescriptor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01435570
	 * 		Name   -> Function LostShipmentsClueVariants.ShipwreckClueBlueprintFunctionLibrary.CreateCluePointingToShipwreck
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UClueConnectionConfig*                       ConnectionConfiguration                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Difficulty                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UClass*>                              AllowedClueTypes                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper)
	 * 		class UTaleQuestSelectorService*                   SelectorService                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     SourceLocation                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		class AShipwreck*                                  Shipwreck                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UClueDescriptor* UShipwreckClueBlueprintFunctionLibrary::STATIC_CreateCluePointingToShipwreck(class UClueConnectionConfig* ConnectionConfiguration, int32_t Difficulty, TArray<class UClass*> AllowedClueTypes, class UTaleQuestSelectorService* SelectorService, const struct FVector& SourceLocation, class AShipwreck* Shipwreck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LostShipmentsClueVariants.ShipwreckClueBlueprintFunctionLibrary.CreateCluePointingToShipwreck");
		
		UShipwreckClueBlueprintFunctionLibrary_CreateCluePointingToShipwreck_Params params {};
		params.ConnectionConfiguration = ConnectionConfiguration;
		params.Difficulty = Difficulty;
		params.AllowedClueTypes = AllowedClueTypes;
		params.SelectorService = SelectorService;
		params.SourceLocation = SourceLocation;
		params.Shipwreck = Shipwreck;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShipwreckClueBlueprintFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShipwreckClueBlueprintFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.ShipwreckClueBlueprintFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShipwreckClueDestinationDescriptor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShipwreckClueDestinationDescriptor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.ShipwreckClueDestinationDescriptor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShipwreckClueDestinationGenerator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShipwreckClueDestinationGenerator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.ShipwreckClueDestinationGenerator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShipwreckClueSiteType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShipwreckClueSiteType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.ShipwreckClueSiteType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01435900
	 * 		Name   -> Function LostShipmentsClueVariants.TaleQuestClueInventoryService.SetClueTitleText
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FText                                        InTitleText                                                (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UTaleQuestClueInventoryService::SetClueTitleText(const class FText& InTitleText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LostShipmentsClueVariants.TaleQuestClueInventoryService.SetClueTitleText");
		
		UTaleQuestClueInventoryService_SetClueTitleText_Params params {};
		params.InTitleText = InTitleText;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x014357A0
	 * 		Name   -> Function LostShipmentsClueVariants.TaleQuestClueInventoryService.GetCollectedClueCount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UTaleQuestClueInventoryService::GetCollectedClueCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LostShipmentsClueVariants.TaleQuestClueInventoryService.GetCollectedClueCount");
		
		UTaleQuestClueInventoryService_GetCollectedClueCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestClueInventoryService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestClueInventoryService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.TaleQuestClueInventoryService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestClueInventoryServiceDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestClueInventoryServiceDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.TaleQuestClueInventoryServiceDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestGetNPCActorFromClueSiteStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestGetNPCActorFromClueSiteStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.TaleQuestGetNPCActorFromClueSiteStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestGetNPCActorFromClueSiteStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestGetNPCActorFromClueSiteStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.TaleQuestGetNPCActorFromClueSiteStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestGetPhasedVersionOfActorFromAssetMapStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestGetPhasedVersionOfActorFromAssetMapStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.TaleQuestGetPhasedVersionOfActorFromAssetMapStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestGetPhasedVersionOfActorFromAssetMapStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestGetPhasedVersionOfActorFromAssetMapStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.TaleQuestGetPhasedVersionOfActorFromAssetMapStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestRetrieveSpawnedMerchantCaptainFromShipwreckStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestRetrieveSpawnedMerchantCaptainFromShipwreckStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.TaleQuestRetrieveSpawnedMerchantCaptainFromShipwreckStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestRetrieveSpawnedMerchantCaptainFromShipwreckStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestRetrieveSpawnedMerchantCaptainFromShipwreckStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.TaleQuestRetrieveSpawnedMerchantCaptainFromShipwreckStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestSpawnWashedUpMessageInABottleClueStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestSpawnWashedUpMessageInABottleClueStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.TaleQuestSpawnWashedUpMessageInABottleClueStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestSpawnWashedUpMessageInABottleClueStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestSpawnWashedUpMessageInABottleClueStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.TaleQuestSpawnWashedUpMessageInABottleClueStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestSpawnWashedUpSkeletonClueStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestSpawnWashedUpSkeletonClueStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.TaleQuestSpawnWashedUpSkeletonClueStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestSpawnWashedUpSkeletonClueStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestSpawnWashedUpSkeletonClueStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.TaleQuestSpawnWashedUpSkeletonClueStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaitForClueCollectedStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaitForClueCollectedStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.WaitForClueCollectedStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaitForClueCollectedStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaitForClueCollectedStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.WaitForClueCollectedStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWashedUpMessageInABottleClueCreator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWashedUpMessageInABottleClueCreator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.WashedUpMessageInABottleClueCreator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWashedUpMessageInABottleClueDestinationGenerator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWashedUpMessageInABottleClueDestinationGenerator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.WashedUpMessageInABottleClueDestinationGenerator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWashedUpMessageInABottleClueSiteData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWashedUpMessageInABottleClueSiteData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.WashedUpMessageInABottleClueSiteData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWashedUpMessageInABottleClueSiteType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWashedUpMessageInABottleClueSiteType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.WashedUpMessageInABottleClueSiteType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWashedUpSkeletonClueDestinationGenerator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWashedUpSkeletonClueDestinationGenerator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.WashedUpSkeletonClueDestinationGenerator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWashedUpSkeletonClueSiteData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWashedUpSkeletonClueSiteData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.WashedUpSkeletonClueSiteData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWashedUpSkeletonClueSiteType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWashedUpSkeletonClueSiteType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.WashedUpSkeletonClueSiteType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWashedUpSkeletonLandClueCreator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWashedUpSkeletonLandClueCreator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.WashedUpSkeletonLandClueCreator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInteractableGrammaticalGenderComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteractableGrammaticalGenderComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueVariants.InteractableGrammaticalGenderComponent");
		return ptr;
	}

}


