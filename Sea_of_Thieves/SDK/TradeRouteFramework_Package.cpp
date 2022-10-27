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
	 * 		Name   -> PredefinedFunction UTradeRouteDifficultyBand.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTradeRouteDifficultyBand::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TradeRouteFramework.TradeRouteDifficultyBand");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTradeRouteData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTradeRouteData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TradeRouteFramework.TradeRouteData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestGetProjectionPointOnTradeRouteStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestGetProjectionPointOnTradeRouteStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TradeRouteFramework.TaleQuestGetProjectionPointOnTradeRouteStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestGetProjectionPointOnTradeRouteStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestGetProjectionPointOnTradeRouteStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TradeRouteFramework.TaleQuestGetProjectionPointOnTradeRouteStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestSelectTradeRouteStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestSelectTradeRouteStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TradeRouteFramework.TaleQuestSelectTradeRouteStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestSelectTradeRouteStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestSelectTradeRouteStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TradeRouteFramework.TaleQuestSelectTradeRouteStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTradeRoutesDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTradeRoutesDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TradeRouteFramework.TradeRoutesDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWorldTradeRouteInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWorldTradeRouteInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TradeRouteFramework.WorldTradeRouteInterface");
		return ptr;
	}

}


