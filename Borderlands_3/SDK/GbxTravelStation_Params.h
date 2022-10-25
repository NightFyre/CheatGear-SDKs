#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function GbxTravelStation.GlobalTravelGraph.DebugFindClosestLevel
	 */
	struct UGlobalTravelGraph_DebugFindClosestLevel_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ULevelData*                                          StartingLevel;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ULevelData*                                          DestinationLevel;                                        // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxTravelStation.TravelStationTracker.TravelToStationTimer
	 */
	struct ATravelStationTracker_TravelToStationTimer_Params
	{	};

	/**
	 * Function GbxTravelStation.TravelStationTracker.PlayerJoinedTimer
	 */
	struct ATravelStationTracker_PlayerJoinedTimer_Params
	{	};

	/**
	 * Function GbxTravelStation.TravelStationTracker.OnRep_TravelToStationCountdown
	 */
	struct ATravelStationTracker_OnRep_TravelToStationCountdown_Params
	{	};

	/**
	 * Function GbxTravelStation.TravelStationTracker.OnRep_LastActiveTravelToStation
	 */
	struct ATravelStationTracker_OnRep_LastActiveTravelToStation_Params
	{	};

	/**
	 * Function GbxTravelStation.TravelStationTracker.OnRep_HostFastTravelStations
	 */
	struct ATravelStationTracker_OnRep_HostFastTravelStations_Params
	{	};

	/**
	 * Function GbxTravelStation.TravelStationTracker.GetTravelStationComponent
	 */
	struct ATravelStationTracker_GetTravelStationComponent_Params
	{
	public:
		class UTravelStationData*                                  TravelStationData;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTravelStationComponentBase*                         ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxTravelStation.TravelStationTracker.GetLastTravelledThroughStation
	 */
	struct ATravelStationTracker_GetLastTravelledThroughStation_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxTravelStation.TravelStationTracker.GetLastActiveTravelToStation
	 */
	struct ATravelStationTracker_GetLastActiveTravelToStation_Params
	{
	public:
		class APlayerController*                                   pc;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxTravelStation.TravelStationTracker.GetFastTravelStationInfo
	 */
	struct ATravelStationTracker_GetFastTravelStationInfo_Params
	{
	public:
		class FString                                              FastTravelStationName;                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFastTravelStationData*                              ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxTravelStation.TravelStationTracker.GetAllFastTravelStations
	 */
	struct ATravelStationTracker_GetAllFastTravelStations_Params
	{
	public:
		TArray<class UFastTravelStationData*>                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxTravelStation.TravelStationTracker.GetActiveFastTravelStationList
	 */
	struct ATravelStationTracker_GetActiveFastTravelStationList_Params
	{
	public:
		TArray<struct FActiveFastTravelData>                       ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxTravelStation.TravelStationTracker.FindFastTravelStationForMap
	 */
	struct ATravelStationTracker_FindFastTravelStationForMap_Params
	{
	public:
		class FName                                                MapName;                                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFastTravelStationData*                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxTravelStation.TravelStationComponentBase.TravelToStation
	 */
	struct UTravelStationComponentBase_TravelToStation_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTravelStationData*                                  DestinationStationData;                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bImmediate;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DXVL[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APawn*                                               ActivatingPawn;                                          // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bDisallowLocalTravel;                                    // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0021(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxTravelStation.TravelStationComponentBase.GetAvailableSpawnLocation
	 */
	struct UTravelStationComponentBase_GetAvailableSpawnLocation_Params
	{
	public:
		class AActor*                                              ActorForSpawnLocation;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             SpawnLocation;                                           // 0x0008(0x000C)  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            SpawnRotation;                                           // 0x0014(0x000C)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bTestOnly;                                               // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bForVehicle;                                             // 0x0021(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0022(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxTravelStation.TravelStationComponentBase.EnumerateValidTravelStation
	 */
	struct UTravelStationComponentBase_EnumerateValidTravelStation_Params
	{
	public:
		class UObject*                                             TravelStationObject;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      OutItems;                                                // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxTravelStation.FastTravelStationComponent.OnTravelStationActivated
	 */
	struct UFastTravelStationComponent_OnTravelStationActivated_Params
	{
	public:
		class AActor*                                              PreviousStation;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxTravelStation.FastTravelStationComponent.FastTravelToStation
	 */
	struct UFastTravelStationComponent_FastTravelToStation_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFastTravelStationData*                              DestinationStationData;                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APawn*                                               ActivatingPawn;                                          // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxTravelStation.FastTravelStationComponent.DeactivateFastTravel
	 */
	struct UFastTravelStationComponent_DeactivateFastTravel_Params
	{
	public:
		class UFastTravelStationComponent*                         FallbackLocation;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxTravelStation.FastTravelStationComponent.ActivateFastTravel
	 */
	struct UFastTravelStationComponent_ActivateFastTravel_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxTravelStation.TravelStationData.GetStationMapName
	 */
	struct UTravelStationData_GetStationMapName_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxTravelStation.FastTravelStationDebugButton.OnStationClicked
	 */
	struct UFastTravelStationDebugButton_OnStationClicked_Params
	{	};

	/**
	 * Function GbxTravelStation.FastTravelStationDebugMenu.OnTravelStationSelectedChanged
	 */
	struct UFastTravelStationDebugMenu_OnTravelStationSelectedChanged_Params
	{
	public:
		class UFastTravelStationDebugButton*                       TriggeredButton;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsChecked;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxTravelStation.FastTravelStationDebugMenu.OnTravelButtonClicked
	 */
	struct UFastTravelStationDebugMenu_OnTravelButtonClicked_Params
	{	};

	/**
	 * Function GbxTravelStation.FastTravelStationDebugMenu.OnShowLevelStationsStateChanged
	 */
	struct UFastTravelStationDebugMenu_OnShowLevelStationsStateChanged_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxTravelStation.FastTravelStationDebugMenu.OnActiveStationsStateChanged
	 */
	struct UFastTravelStationDebugMenu_OnActiveStationsStateChanged_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxTravelStation.LevelTravelStationComponent.GetLevelTravelStationData
	 */
	struct ULevelTravelStationComponent_GetLevelTravelStationData_Params
	{
	public:
		class ULevelTravelStationData*                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxTravelStation.LevelTravelStationComponent.ActivateLevelTravel
	 */
	struct ULevelTravelStationComponent_ActivateLevelTravel_Params
	{
	public:
		class AController*                                         ActivatingController;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxTravelStation.TeleportDestinationActor.TeleportPlayersToDestination
	 */
	struct ATeleportDestinationActor_TeleportPlayersToDestination_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ATeleportDestinationActor*                           Destination;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxTravelStation.TravelStationResurrectComponent.OnRep_StationIsActive
	 */
	struct UTravelStationResurrectComponent_OnRep_StationIsActive_Params
	{	};

	/**
	 * Function GbxTravelStation.TravelStationResurrectComponent.ActivateTravelStation
	 */
	struct UTravelStationResurrectComponent_ActivateTravelStation_Params
	{
	public:
		bool                                                       bForceActivation;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
