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
	 * 		Name   -> PredefinedFunction UCommodityTokenEntitlementDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommodityTokenEntitlementDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CommodityDemandFramework.CommodityTokenEntitlementDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommodityDemandFrameworkEditorSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommodityDemandFrameworkEditorSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CommodityDemandFramework.CommodityDemandFrameworkEditorSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommodityDemandFrameworkSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommodityDemandFrameworkSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CommodityDemandFramework.CommodityDemandFrameworkSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommodityDemandServiceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommodityDemandServiceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CommodityDemandFramework.CommodityDemandServiceInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x038F44C0
	 * 		Name   -> Function CommodityDemandFramework.CommodityDemandService.OnRep_ActiveCommodityDemands
	 * 		Flags  -> (Final, RequiredAPI, Native, Private)
	 */
	void ACommodityDemandService::OnRep_ActiveCommodityDemands()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommodityDemandFramework.CommodityDemandService.OnRep_ActiveCommodityDemands");
		
		ACommodityDemandService_OnRep_ActiveCommodityDemands_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACommodityDemandService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACommodityDemandService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CommodityDemandFramework.CommodityDemandService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommodityDemandStorageInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommodityDemandStorageInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CommodityDemandFramework.CommodityDemandStorageInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommodityDemandStorageProviderInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommodityDemandStorageProviderInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CommodityDemandFramework.CommodityDemandStorageProviderInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommodityEntitlementRedemptionAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommodityEntitlementRedemptionAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CommodityDemandFramework.CommodityEntitlementRedemptionAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommodityItemDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommodityItemDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CommodityDemandFramework.CommodityItemDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommodityPurchaseTrackingComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommodityPurchaseTrackingComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CommodityDemandFramework.CommodityPurchaseTrackingComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommodityRedemptionInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommodityRedemptionInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CommodityDemandFramework.CommodityRedemptionInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommodityRedemptionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommodityRedemptionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CommodityDemandFramework.CommodityRedemptionComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommoditySourceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommoditySourceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CommodityDemandFramework.CommoditySourceInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommoditySourceComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommoditySourceComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CommodityDemandFramework.CommoditySourceComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommodityTypeDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommodityTypeDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CommodityDemandFramework.CommodityTypeDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCrateFillerInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCrateFillerInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CommodityDemandFramework.CrateFillerInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCrateFillerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCrateFillerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CommodityDemandFramework.CrateFillerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDeliverableCommodityRequirement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeliverableCommodityRequirement::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CommodityDemandFramework.DeliverableCommodityRequirement");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIsWieldedCommodityItemInDemandStatCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsWieldedCommodityItemInDemandStatCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CommodityDemandFramework.IsWieldedCommodityItemInDemandStatCondition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpecificItemsCrateFillerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpecificItemsCrateFillerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CommodityDemandFramework.SpecificItemsCrateFillerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWasWieldedCommodityItemBoughtAtDemandStatCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWasWieldedCommodityItemBoughtAtDemandStatCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CommodityDemandFramework.WasWieldedCommodityItemBoughtAtDemandStatCondition");
		return ptr;
	}

}


