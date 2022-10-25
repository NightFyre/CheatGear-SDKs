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
	 * 		Name   -> PredefinedFunction UAIShipBattlesDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIShipBattlesDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIShips.AIShipBattlesDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIShipObstacleServiceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIShipObstacleServiceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIShips.AIShipObstacleServiceInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_SailShipBesideTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_SailShipBesideTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIShips.BTTask_SailShipBesideTarget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAthenaAIShipControllerParamsDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAthenaAIShipControllerParamsDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIShips.AthenaAIShipControllerParamsDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIShipContextDescDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIShipContextDescDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIShips.AIShipContextDescDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIShipContextParamsDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIShipContextParamsDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIShips.AIShipContextParamsDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIShipEncounterSpawnParamsDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIShipEncounterSpawnParamsDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIShips.AIShipEncounterSpawnParamsDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AShipProxyPawn.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AShipProxyPawn::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIShips.ShipProxyPawn");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIShipEncounterParamsDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIShipEncounterParamsDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIShips.AIShipEncounterParamsDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIShipServiceDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIShipServiceDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIShips.AIShipServiceDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDF800
	 * 		Name   -> Function AIShips.AIShipDebugFunctionLibrary.RequestAIShipForCrew
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGuid                                       CrewId                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAIShipDebugFunctionLibrary::STATIC_RequestAIShipForCrew(class UObject* WorldContextObject, const struct FGuid& CrewId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIShips.AIShipDebugFunctionLibrary.RequestAIShipForCrew");
		
		UAIShipDebugFunctionLibrary_RequestAIShipForCrew_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.CrewId = CrewId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDF6B0
	 * 		Name   -> Function AIShips.AIShipDebugFunctionLibrary.GenerateAIShipBattleDesc
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAIShipServiceDataAsset*                     ServiceParams                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FAIShipEncounterBattleDesc UAIShipDebugFunctionLibrary::STATIC_GenerateAIShipBattleDesc(class UObject* WorldContextObject, class UAIShipServiceDataAsset* ServiceParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIShips.AIShipDebugFunctionLibrary.GenerateAIShipBattleDesc");
		
		UAIShipDebugFunctionLibrary_GenerateAIShipBattleDesc_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ServiceParams = ServiceParams;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIShipDebugFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIShipDebugFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIShips.AIShipDebugFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIShipEncounterDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIShipEncounterDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIShips.AIShipEncounterDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIShipObstacleComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIShipObstacleComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIShips.AIShipObstacleComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAIShipObstacleService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAIShipObstacleService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIShips.AIShipObstacleService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIShipServiceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIShipServiceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIShips.AIShipServiceInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAIShipService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAIShipService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIShips.AIShipService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIShipTelemetryComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIShipTelemetryComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIShips.AIShipTelemetryComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDF5E0
	 * 		Name   -> Function AIShips.AthenaAIShipController.ApplyControllerParams
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAthenaAIControllerParamsDataAsset*          ParamsAsset                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       InPawn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAthenaAIShipController::ApplyControllerParams(class UAthenaAIControllerParamsDataAsset* ParamsAsset, class APawn* InPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIShips.AthenaAIShipController.ApplyControllerParams");
		
		AAthenaAIShipController_ApplyControllerParams_Params params {};
		params.ParamsAsset = ParamsAsset;
		params.InPawn = InPawn;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAthenaAIShipController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAthenaAIShipController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIShips.AthenaAIShipController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_UpdateIfShipShouldBreakTracking.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_UpdateIfShipShouldBreakTracking::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIShips.BTService_UpdateIfShipShouldBreakTracking");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_UpdateLocationWithActorLocation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_UpdateLocationWithActorLocation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIShips.BTService_UpdateLocationWithActorLocation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_UpdateTargetLocationForPassiveShip.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_UpdateTargetLocationForPassiveShip::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIShips.BTService_UpdateTargetLocationForPassiveShip");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_AIShipSurface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_AIShipSurface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIShips.BTTask_AIShipSurface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_RamTargetShip.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_RamTargetShip::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIShips.BTTask_RamTargetShip");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_SailShipCircleTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_SailShipCircleTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIShips.BTTask_SailShipCircleTarget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_SailShipForward.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_SailShipForward::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIShips.BTTask_SailShipForward");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_SailShipToLocation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_SailShipToLocation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIShips.BTTask_SailShipToLocation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDF8C0
	 * 		Name   -> Function AIShips.CursedCrewCustomisationInterface.SetCursedCrewCustomisationProperties
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FAIShipSailData                             SailData                                                   (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UCursedCrewCustomisationInterface::SetCursedCrewCustomisationProperties(const struct FAIShipSailData& SailData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIShips.CursedCrewCustomisationInterface.SetCursedCrewCustomisationProperties");
		
		UCursedCrewCustomisationInterface_SetCursedCrewCustomisationProperties_Params params {};
		params.SailData = SailData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCursedCrewCustomisationInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCursedCrewCustomisationInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIShips.CursedCrewCustomisationInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCursedSailsCampaignDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCursedSailsCampaignDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIShips.CursedSailsCampaignDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDefeatAIShipEncounterConditionalStatTrigger.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDefeatAIShipEncounterConditionalStatTrigger::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIShips.DefeatAIShipEncounterConditionalStatTrigger");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIsAIShipEncounterTypeStatCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsAIShipEncounterTypeStatCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIShips.IsAIShipEncounterTypeStatCondition");
		return ptr;
	}

}


