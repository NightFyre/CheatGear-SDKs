/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * 		Name   -> PredefinedFunction UTravelGraph.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTravelGraph::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxTravelStation.TravelGraph");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F47180
	 * 		Name   -> Function GbxTravelStation.GlobalTravelGraph.DebugFindClosestLevel
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ULevelData*                                  StartingLevel                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ULevelData*                                  DestinationLevel                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGlobalTravelGraph::STATIC_DebugFindClosestLevel(class UObject* WorldContextObject, class ULevelData* StartingLevel, class ULevelData* DestinationLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTravelStation.GlobalTravelGraph.DebugFindClosestLevel");
		
		UGlobalTravelGraph_DebugFindClosestLevel_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.StartingLevel = StartingLevel;
		params.DestinationLevel = DestinationLevel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGlobalTravelGraph.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGlobalTravelGraph::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxTravelStation.GlobalTravelGraph");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F47FA0
	 * 		Name   -> Function GbxTravelStation.TravelStationTracker.TravelToStationTimer
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ATravelStationTracker::TravelToStationTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTravelStation.TravelStationTracker.TravelToStationTimer");
		
		ATravelStationTracker_TravelToStationTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013BE620
	 * 		Name   -> Function GbxTravelStation.TravelStationTracker.PlayerJoinedTimer
	 * 		Flags  -> (Native, Protected)
	 */
	void ATravelStationTracker::PlayerJoinedTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTravelStation.TravelStationTracker.PlayerJoinedTimer");
		
		ATravelStationTracker_PlayerJoinedTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F47B40
	 * 		Name   -> Function GbxTravelStation.TravelStationTracker.OnRep_TravelToStationCountdown
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ATravelStationTracker::OnRep_TravelToStationCountdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTravelStation.TravelStationTracker.OnRep_TravelToStationCountdown");
		
		ATravelStationTracker_OnRep_TravelToStationCountdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013BE600
	 * 		Name   -> Function GbxTravelStation.TravelStationTracker.OnRep_LastActiveTravelToStation
	 * 		Flags  -> (Native, Public)
	 */
	void ATravelStationTracker::OnRep_LastActiveTravelToStation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTravelStation.TravelStationTracker.OnRep_LastActiveTravelToStation");
		
		ATravelStationTracker_OnRep_LastActiveTravelToStation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F47B00
	 * 		Name   -> Function GbxTravelStation.TravelStationTracker.OnRep_HostFastTravelStations
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ATravelStationTracker::OnRep_HostFastTravelStations()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTravelStation.TravelStationTracker.OnRep_HostFastTravelStations");
		
		ATravelStationTracker_OnRep_HostFastTravelStations_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F479E0
	 * 		Name   -> Function GbxTravelStation.TravelStationTracker.GetTravelStationComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UTravelStationData*                          TravelStationData                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTravelStationComponentBase* ATravelStationTracker::GetTravelStationComponent(class UTravelStationData* TravelStationData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTravelStation.TravelStationTracker.GetTravelStationComponent");
		
		ATravelStationTracker_GetTravelStationComponent_Params params {};
		params.TravelStationData = TravelStationData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F47960
	 * 		Name   -> Function GbxTravelStation.TravelStationTracker.GetLastTravelledThroughStation
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class AActor* ATravelStationTracker::GetLastTravelledThroughStation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTravelStation.TravelStationTracker.GetLastTravelledThroughStation");
		
		ATravelStationTracker_GetLastTravelledThroughStation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F478D0
	 * 		Name   -> Function GbxTravelStation.TravelStationTracker.GetLastActiveTravelToStation
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           pc                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AActor* ATravelStationTracker::GetLastActiveTravelToStation(class APlayerController* pc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTravelStation.TravelStationTracker.GetLastActiveTravelToStation");
		
		ATravelStationTracker_GetLastActiveTravelToStation_Params params {};
		params.pc = pc;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F477E0
	 * 		Name   -> Function GbxTravelStation.TravelStationTracker.GetFastTravelStationInfo
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      FastTravelStationName                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFastTravelStationData* ATravelStationTracker::GetFastTravelStationInfo(const class FString& FastTravelStationName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTravelStation.TravelStationTracker.GetFastTravelStationInfo");
		
		ATravelStationTracker_GetFastTravelStationInfo_Params params {};
		params.FastTravelStationName = FastTravelStationName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F47580
	 * 		Name   -> Function GbxTravelStation.TravelStationTracker.GetAllFastTravelStations
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	TArray<class UFastTravelStationData*> ATravelStationTracker::GetAllFastTravelStations()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTravelStation.TravelStationTracker.GetAllFastTravelStations");
		
		ATravelStationTracker_GetAllFastTravelStations_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F474F0
	 * 		Name   -> Function GbxTravelStation.TravelStationTracker.GetActiveFastTravelStationList
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	TArray<struct FActiveFastTravelData> ATravelStationTracker::GetActiveFastTravelStationList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTravelStation.TravelStationTracker.GetActiveFastTravelStationList");
		
		ATravelStationTracker_GetActiveFastTravelStationList_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F47460
	 * 		Name   -> Function GbxTravelStation.TravelStationTracker.FindFastTravelStationForMap
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        MapName                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFastTravelStationData* ATravelStationTracker::FindFastTravelStationForMap(const class FName& MapName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTravelStation.TravelStationTracker.FindFastTravelStationForMap");
		
		ATravelStationTracker_FindFastTravelStationForMap_Params params {};
		params.MapName = MapName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATravelStationTracker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATravelStationTracker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxTravelStation.TravelStationTracker");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F47E10
	 * 		Name   -> Function GbxTravelStation.TravelStationComponentBase.TravelToStation
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTravelStationData*                          DestinationStationData                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bImmediate                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APawn*                                       ActivatingPawn                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDisallowLocalTravel                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTravelStationComponentBase::STATIC_TravelToStation(class UObject* WorldContextObject, class UTravelStationData* DestinationStationData, bool bImmediate, class APawn* ActivatingPawn, bool bDisallowLocalTravel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTravelStation.TravelStationComponentBase.TravelToStation");
		
		UTravelStationComponentBase_TravelToStation_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DestinationStationData = DestinationStationData;
		params.bImmediate = bImmediate;
		params.ActivatingPawn = ActivatingPawn;
		params.bDisallowLocalTravel = bDisallowLocalTravel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F47610
	 * 		Name   -> Function GbxTravelStation.TravelStationComponentBase.GetAvailableSpawnLocation
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      ActorForSpawnLocation                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     SpawnLocation                                              (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    SpawnRotation                                              (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bTestOnly                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bForVehicle                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTravelStationComponentBase::GetAvailableSpawnLocation(class AActor* ActorForSpawnLocation, struct FVector* SpawnLocation, struct FRotator* SpawnRotation, bool bTestOnly, bool bForVehicle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTravelStation.TravelStationComponentBase.GetAvailableSpawnLocation");
		
		UTravelStationComponentBase_GetAvailableSpawnLocation_Params params {};
		params.ActorForSpawnLocation = ActorForSpawnLocation;
		params.bTestOnly = bTestOnly;
		params.bForVehicle = bForVehicle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpawnLocation != nullptr)
			*SpawnLocation = params.SpawnLocation;
		if (SpawnRotation != nullptr)
			*SpawnRotation = params.SpawnRotation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F47270
	 * 		Name   -> Function GbxTravelStation.TravelStationComponentBase.EnumerateValidTravelStation
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms)
	 * Parameters:
	 * 		class UObject*                                     TravelStationObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              OutItems                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UTravelStationComponentBase::STATIC_EnumerateValidTravelStation(class UObject* TravelStationObject, TArray<class FString>* OutItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTravelStation.TravelStationComponentBase.EnumerateValidTravelStation");
		
		UTravelStationComponentBase_EnumerateValidTravelStation_Params params {};
		params.TravelStationObject = TravelStationObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutItems != nullptr)
			*OutItems = params.OutItems;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTravelStationComponentBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTravelStationComponentBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxTravelStation.TravelStationComponentBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F47C10
	 * 		Name   -> Function GbxTravelStation.FastTravelStationComponent.OnTravelStationActivated
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AActor*                                      PreviousStation                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFastTravelStationComponent::OnTravelStationActivated(class AActor* PreviousStation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTravelStation.FastTravelStationComponent.OnTravelStationActivated");
		
		UFastTravelStationComponent_OnTravelStationActivated_Params params {};
		params.PreviousStation = PreviousStation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F47370
	 * 		Name   -> Function GbxTravelStation.FastTravelStationComponent.FastTravelToStation
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UFastTravelStationData*                      DestinationStationData                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APawn*                                       ActivatingPawn                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFastTravelStationComponent::STATIC_FastTravelToStation(class UObject* WorldContextObject, class UFastTravelStationData* DestinationStationData, class APawn* ActivatingPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTravelStation.FastTravelStationComponent.FastTravelToStation");
		
		UFastTravelStationComponent_FastTravelToStation_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DestinationStationData = DestinationStationData;
		params.ActivatingPawn = ActivatingPawn;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F470F0
	 * 		Name   -> Function GbxTravelStation.FastTravelStationComponent.DeactivateFastTravel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UFastTravelStationComponent*                 FallbackLocation                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFastTravelStationComponent::DeactivateFastTravel(class UFastTravelStationComponent* FallbackLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTravelStation.FastTravelStationComponent.DeactivateFastTravel");
		
		UFastTravelStationComponent_DeactivateFastTravel_Params params {};
		params.FallbackLocation = FallbackLocation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F46FA0
	 * 		Name   -> Function GbxTravelStation.FastTravelStationComponent.ActivateFastTravel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UFastTravelStationComponent::ActivateFastTravel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTravelStation.FastTravelStationComponent.ActivateFastTravel");
		
		UFastTravelStationComponent_ActivateFastTravel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFastTravelStationComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFastTravelStationComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxTravelStation.FastTravelStationComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTravelLocationData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTravelLocationData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxTravelStation.TravelLocationData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F479C0
	 * 		Name   -> Function GbxTravelStation.TravelStationData.GetStationMapName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FName UTravelStationData::GetStationMapName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTravelStation.TravelStationData.GetStationMapName");
		
		UTravelStationData_GetStationMapName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTravelStationData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTravelStationData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxTravelStation.TravelStationData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFastTravelStationData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFastTravelStationData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxTravelStation.FastTravelStationData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F47BF0
	 * 		Name   -> Function GbxTravelStation.FastTravelStationDebugButton.OnStationClicked
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UFastTravelStationDebugButton::OnStationClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTravelStation.FastTravelStationDebugButton.OnStationClicked");
		
		UFastTravelStationDebugButton_OnStationClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFastTravelStationDebugButton.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFastTravelStationDebugButton::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxTravelStation.FastTravelStationDebugButton");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F47C90
	 * 		Name   -> Function GbxTravelStation.FastTravelStationDebugMenu.OnTravelStationSelectedChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UFastTravelStationDebugButton*               TriggeredButton                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsChecked                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFastTravelStationDebugMenu::OnTravelStationSelectedChanged(class UFastTravelStationDebugButton* TriggeredButton, bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTravelStation.FastTravelStationDebugMenu.OnTravelStationSelectedChanged");
		
		UFastTravelStationDebugMenu_OnTravelStationSelectedChanged_Params params {};
		params.TriggeredButton = TriggeredButton;
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005D70B0
	 * 		Name   -> Function GbxTravelStation.FastTravelStationDebugMenu.OnTravelButtonClicked
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UFastTravelStationDebugMenu::OnTravelButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTravelStation.FastTravelStationDebugMenu.OnTravelButtonClicked");
		
		UFastTravelStationDebugMenu_OnTravelButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F47B60
	 * 		Name   -> Function GbxTravelStation.FastTravelStationDebugMenu.OnShowLevelStationsStateChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFastTravelStationDebugMenu::OnShowLevelStationsStateChanged(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTravelStation.FastTravelStationDebugMenu.OnShowLevelStationsStateChanged");
		
		UFastTravelStationDebugMenu_OnShowLevelStationsStateChanged_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F47A70
	 * 		Name   -> Function GbxTravelStation.FastTravelStationDebugMenu.OnActiveStationsStateChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFastTravelStationDebugMenu::OnActiveStationsStateChanged(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTravelStation.FastTravelStationDebugMenu.OnActiveStationsStateChanged");
		
		UFastTravelStationDebugMenu_OnActiveStationsStateChanged_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFastTravelStationDebugMenu.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFastTravelStationDebugMenu::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxTravelStation.FastTravelStationDebugMenu");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F47990
	 * 		Name   -> Function GbxTravelStation.LevelTravelStationComponent.GetLevelTravelStationData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class ULevelTravelStationData* ULevelTravelStationComponent::GetLevelTravelStationData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTravelStation.LevelTravelStationComponent.GetLevelTravelStationData");
		
		ULevelTravelStationComponent_GetLevelTravelStationData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F46FD0
	 * 		Name   -> Function GbxTravelStation.LevelTravelStationComponent.ActivateLevelTravel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AController*                                 ActivatingController                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULevelTravelStationComponent::ActivateLevelTravel(class AController* ActivatingController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTravelStation.LevelTravelStationComponent.ActivateLevelTravel");
		
		ULevelTravelStationComponent_ActivateLevelTravel_Params params {};
		params.ActivatingController = ActivatingController;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULevelTravelStationComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULevelTravelStationComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxTravelStation.LevelTravelStationComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULevelTravelStationData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULevelTravelStationData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxTravelStation.LevelTravelStationData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UResurrectTravelStationData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UResurrectTravelStationData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxTravelStation.ResurrectTravelStationData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F47D60
	 * 		Name   -> Function GbxTravelStation.TeleportDestinationActor.TeleportPlayersToDestination
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ATeleportDestinationActor*                   Destination                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATeleportDestinationActor::STATIC_TeleportPlayersToDestination(class UObject* WorldContextObject, class ATeleportDestinationActor* Destination)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTravelStation.TeleportDestinationActor.TeleportPlayersToDestination");
		
		ATeleportDestinationActor_TeleportPlayersToDestination_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Destination = Destination;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATeleportDestinationActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATeleportDestinationActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxTravelStation.TeleportDestinationActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATravelStationBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATravelStationBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxTravelStation.TravelStationBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTravelStationModuleSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTravelStationModuleSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxTravelStation.TravelStationModuleSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F47B20
	 * 		Name   -> Function GbxTravelStation.TravelStationResurrectComponent.OnRep_StationIsActive
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UTravelStationResurrectComponent::OnRep_StationIsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTravelStation.TravelStationResurrectComponent.OnRep_StationIsActive");
		
		UTravelStationResurrectComponent_OnRep_StationIsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F47060
	 * 		Name   -> Function GbxTravelStation.TravelStationResurrectComponent.ActivateTravelStation
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bForceActivation                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTravelStationResurrectComponent::ActivateTravelStation(bool bForceActivation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTravelStation.TravelStationResurrectComponent.ActivateTravelStation");
		
		UTravelStationResurrectComponent_ActivateTravelStation_Params params {};
		params.bForceActivation = bForceActivation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTravelStationResurrectComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTravelStationResurrectComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxTravelStation.TravelStationResurrectComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTravelStationSpawnPointInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTravelStationSpawnPointInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxTravelStation.TravelStationSpawnPointInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTravelStationSpawnPointComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTravelStationSpawnPointComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxTravelStation.TravelStationSpawnPointComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTravelStationVehicleSpawnPointComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTravelStationVehicleSpawnPointComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxTravelStation.TravelStationVehicleSpawnPointComponent");
		return ptr;
	}

}


