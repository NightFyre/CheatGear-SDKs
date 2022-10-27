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
	 * 		Name   -> PredefinedFunction UInvasionServiceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInvasionServiceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InvasionFramework.InvasionServiceInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryGenerator_AggressiveAggressiveSpawnLocations.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryGenerator_AggressiveAggressiveSpawnLocations::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InvasionFramework.EnvQueryGenerator_AggressiveAggressiveSpawnLocations");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGetInvasionShipsStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGetInvasionShipsStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InvasionFramework.GetInvasionShipsStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestInvasionService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestInvasionService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InvasionFramework.TaleQuestInvasionService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestInvasionServiceDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestInvasionServiceDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InvasionFramework.TaleQuestInvasionServiceDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGetInvasionShipsStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGetInvasionShipsStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InvasionFramework.GetInvasionShipsStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042C01E0
	 * 		Name   -> Function InvasionFramework.InvasionBlueprintFunctionLibrary.ShouldEmergentBattleDisplayBanners
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UInvasionBlueprintFunctionLibrary::STATIC_ShouldEmergentBattleDisplayBanners()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InvasionFramework.InvasionBlueprintFunctionLibrary.ShouldEmergentBattleDisplayBanners");
		
		UInvasionBlueprintFunctionLibrary_ShouldEmergentBattleDisplayBanners_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042C01B0
	 * 		Name   -> Function InvasionFramework.InvasionBlueprintFunctionLibrary.ShouldAggressivePassiveTeleportUseEQS
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UInvasionBlueprintFunctionLibrary::STATIC_ShouldAggressivePassiveTeleportUseEQS()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InvasionFramework.InvasionBlueprintFunctionLibrary.ShouldAggressivePassiveTeleportUseEQS");
		
		UInvasionBlueprintFunctionLibrary_ShouldAggressivePassiveTeleportUseEQS_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042C0180
	 * 		Name   -> Function InvasionFramework.InvasionBlueprintFunctionLibrary.GetAggressivePassiveTeleportOffsetDistance
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	float UInvasionBlueprintFunctionLibrary::STATIC_GetAggressivePassiveTeleportOffsetDistance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InvasionFramework.InvasionBlueprintFunctionLibrary.GetAggressivePassiveTeleportOffsetDistance");
		
		UInvasionBlueprintFunctionLibrary_GetAggressivePassiveTeleportOffsetDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInvasionBlueprintFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInvasionBlueprintFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InvasionFramework.InvasionBlueprintFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInvasionLocationsDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInvasionLocationsDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InvasionFramework.InvasionLocationsDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInvasionLocationsDataAssetGetterInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInvasionLocationsDataAssetGetterInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InvasionFramework.InvasionLocationsDataAssetGetterInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInvasionServiceDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInvasionServiceDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InvasionFramework.InvasionServiceDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AInvasionService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AInvasionService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InvasionFramework.InvasionService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestInvasionMatchmakingService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestInvasionMatchmakingService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InvasionFramework.TaleQuestInvasionMatchmakingService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestInvasionMatchmakingServiceDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestInvasionMatchmakingServiceDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InvasionFramework.TaleQuestInvasionMatchmakingServiceDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaitForShipToBeDefeatedStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaitForShipToBeDefeatedStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InvasionFramework.WaitForShipToBeDefeatedStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaitForShipToBeDefeatedStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaitForShipToBeDefeatedStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InvasionFramework.WaitForShipToBeDefeatedStepDesc");
		return ptr;
	}

}


