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
	 * 		Name   -> PredefinedFunction UAddMarkToTornMapStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddMarkToTornMapStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaleMaps.AddMarkToTornMapStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAddMarkToTornMapStepDescBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddMarkToTornMapStepDescBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaleMaps.AddMarkToTornMapStepDescBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAddMarkToTornMapAtLocationStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddMarkToTornMapAtLocationStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaleMaps.AddMarkToTornMapAtLocationStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAddMarkToTornMapAtActorLocationStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddMarkToTornMapAtActorLocationStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaleMaps.AddMarkToTornMapAtActorLocationStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGetNumberOfCollectedTornMapPiecesStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGetNumberOfCollectedTornMapPiecesStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaleMaps.GetNumberOfCollectedTornMapPiecesStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGetNumberOfCollectedTornMapPiecesStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGetNumberOfCollectedTornMapPiecesStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaleMaps.GetNumberOfCollectedTornMapPiecesStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URegionIslandSelectionStrategyBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URegionIslandSelectionStrategyBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaleMaps.RegionIslandSelectionStrategyBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URegionIslandFilteredSelectionStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URegionIslandFilteredSelectionStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaleMaps.RegionIslandFilteredSelectionStrategy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URegionIslandRandomSelectionStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URegionIslandRandomSelectionStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaleMaps.RegionIslandRandomSelectionStrategy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USelectIslandsFromRegionStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USelectIslandsFromRegionStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaleMaps.SelectIslandsFromRegionStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USelectIslandsFromRegionStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USelectIslandsFromRegionStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaleMaps.SelectIslandsFromRegionStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestAddLocationMapStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestAddLocationMapStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaleMaps.TaleQuestAddLocationMapStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestAddTornMapStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestAddTornMapStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaleMaps.TaleQuestAddTornMapStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestAddTradeRouteMapStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestAddTradeRouteMapStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaleMaps.TaleQuestAddTradeRouteMapStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04265830
	 * 		Name   -> Function TaleMaps.TaleQuestCustomMapFunctionLibrary.UpdateStrikeThoughTextElement
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FGuid                                       MapGuid                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FGuid                                       ElementGuid                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		bool                                               StrikeThroughEnabled                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void UTaleQuestCustomMapFunctionLibrary::UpdateStrikeThoughTextElement(const struct FGuid& MapGuid, const struct FGuid& ElementGuid, bool StrikeThroughEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaleMaps.TaleQuestCustomMapFunctionLibrary.UpdateStrikeThoughTextElement");
		
		UTaleQuestCustomMapFunctionLibrary_UpdateStrikeThoughTextElement_Params params {};
		params.MapGuid = MapGuid;
		params.ElementGuid = ElementGuid;
		params.StrikeThroughEnabled = StrikeThroughEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04265400
	 * 		Name   -> Function TaleMaps.TaleQuestCustomMapFunctionLibrary.AddCustomMap
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		TAssetPtr<class UCustomMapData>                    Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash)
	 * 		struct FGuid                                       MapGuid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTaleQuestCustomMapFunctionLibrary::AddCustomMap(TAssetPtr<class UCustomMapData> Data, struct FGuid* MapGuid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaleMaps.TaleQuestCustomMapFunctionLibrary.AddCustomMap");
		
		UTaleQuestCustomMapFunctionLibrary_AddCustomMap_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MapGuid != nullptr)
			*MapGuid = params.MapGuid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestCustomMapFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestCustomMapFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaleMaps.TaleQuestCustomMapFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestLocationMapChestFoundStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestLocationMapChestFoundStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaleMaps.TaleQuestLocationMapChestFoundStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestMapStepDescBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestMapStepDescBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaleMaps.TaleQuestMapStepDescBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestAddLocationMapStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestAddLocationMapStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaleMaps.TaleQuestAddLocationMapStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestAddTornMapStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestAddTornMapStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaleMaps.TaleQuestAddTornMapStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestAddTradeRouteMapStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestAddTradeRouteMapStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaleMaps.TaleQuestAddTradeRouteMapStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestLocationMapChestFoundStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestLocationMapChestFoundStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaleMaps.TaleQuestLocationMapChestFoundStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestWaitForChecklistMapCompletionStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestWaitForChecklistMapCompletionStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaleMaps.TaleQuestWaitForChecklistMapCompletionStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestTriggerNamedChecklistEventStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestTriggerNamedChecklistEventStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaleMaps.TaleQuestTriggerNamedChecklistEventStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042655C0
	 * 		Name   -> Function TaleMaps.TaleQuestTriggerNamedChecklistEventStepDesc.EventsSource
	 * 		Flags  -> (Final, Native, Private, Const)
	 */
	TArray<class FString> UTaleQuestTriggerNamedChecklistEventStepDesc::EventsSource()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaleMaps.TaleQuestTriggerNamedChecklistEventStepDesc.EventsSource");
		
		UTaleQuestTriggerNamedChecklistEventStepDesc_EventsSource_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestTriggerNamedChecklistEventStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestTriggerNamedChecklistEventStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaleMaps.TaleQuestTriggerNamedChecklistEventStepDesc");
		return ptr;
	}

}


