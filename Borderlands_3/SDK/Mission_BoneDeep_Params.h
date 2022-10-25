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
	 * Function Mission_BoneDeep.Mission_BoneDeep_C.OnDialogSequenceFinished_31
	 */
	struct UMission_BoneDeep_C_OnDialogSequenceFinished_31_Params
	{	};

	/**
	 * Function Mission_BoneDeep.Mission_BoneDeep_C.OnDialogSequenceFinished_30
	 */
	struct UMission_BoneDeep_C_OnDialogSequenceFinished_30_Params
	{	};

	/**
	 * Function Mission_BoneDeep.Mission_BoneDeep_C.OnDialogSequenceFinished_29
	 */
	struct UMission_BoneDeep_C_OnDialogSequenceFinished_29_Params
	{	};

	/**
	 * Function Mission_BoneDeep.Mission_BoneDeep_C.OnDialogSequenceFinished_28
	 */
	struct UMission_BoneDeep_C_OnDialogSequenceFinished_28_Params
	{	};

	/**
	 * Function Mission_BoneDeep.Mission_BoneDeep_C.OnDialogSequenceFinished_27
	 */
	struct UMission_BoneDeep_C_OnDialogSequenceFinished_27_Params
	{	};

	/**
	 * Function Mission_BoneDeep.Mission_BoneDeep_C.OnDialogSequenceFinished_26
	 */
	struct UMission_BoneDeep_C_OnDialogSequenceFinished_26_Params
	{	};

	/**
	 * Function Mission_BoneDeep.Mission_BoneDeep_C.OnDialogSequenceFinished_25
	 */
	struct UMission_BoneDeep_C_OnDialogSequenceFinished_25_Params
	{	};

	/**
	 * Function Mission_BoneDeep.Mission_BoneDeep_C.OnDialogSequenceFinished_24
	 */
	struct UMission_BoneDeep_C_OnDialogSequenceFinished_24_Params
	{	};

	/**
	 * Function Mission_BoneDeep.Mission_BoneDeep_C.OnDialogSequenceFinished_23
	 */
	struct UMission_BoneDeep_C_OnDialogSequenceFinished_23_Params
	{	};

	/**
	 * Function Mission_BoneDeep.Mission_BoneDeep_C.OnDialogSequenceFinished_22
	 */
	struct UMission_BoneDeep_C_OnDialogSequenceFinished_22_Params
	{	};

	/**
	 * Function Mission_BoneDeep.Mission_BoneDeep_C.OnDialogSequenceFinished_21
	 */
	struct UMission_BoneDeep_C_OnDialogSequenceFinished_21_Params
	{	};

	/**
	 * Function Mission_BoneDeep.Mission_BoneDeep_C.OnDialogSequenceFinished_20
	 */
	struct UMission_BoneDeep_C_OnDialogSequenceFinished_20_Params
	{	};

	/**
	 * Function Mission_BoneDeep.Mission_BoneDeep_C.OnDialogSequenceFinished_19
	 */
	struct UMission_BoneDeep_C_OnDialogSequenceFinished_19_Params
	{	};

	/**
	 * Function Mission_BoneDeep.Mission_BoneDeep_C.OnDialogSequenceFinished_18
	 */
	struct UMission_BoneDeep_C_OnDialogSequenceFinished_18_Params
	{	};

	/**
	 * Function Mission_BoneDeep.Mission_BoneDeep_C.OnDialogSequenceFinished_17
	 */
	struct UMission_BoneDeep_C_OnDialogSequenceFinished_17_Params
	{	};

	/**
	 * Function Mission_BoneDeep.Mission_BoneDeep_C.Obj_PlaceBeacons
	 */
	struct UMission_BoneDeep_C_Obj_PlaceBeacons_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HPSG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BoneDeep.Mission_BoneDeep_C.MCE_PlayerArrivedAtEpicenter
	 */
	struct UMission_BoneDeep_C_MCE_PlayerArrivedAtEpicenter_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BoneDeep.Mission_BoneDeep_C.Obj_PlaceExplosives_Boulder
	 */
	struct UMission_BoneDeep_C_Obj_PlaceExplosives_Boulder_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JAMM[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BoneDeep.Mission_BoneDeep_C.Set_PlaceExplosive_Boulder
	 */
	struct UMission_BoneDeep_C_Set_PlaceExplosive_Boulder_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BoneDeep.Mission_BoneDeep_C.MCE_PlayerPlacedAnExplosive_Boulder
	 */
	struct UMission_BoneDeep_C_MCE_PlayerPlacedAnExplosive_Boulder_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BoneDeep.Mission_BoneDeep_C.Obj_BlowUpBoulder
	 */
	struct UMission_BoneDeep_C_Obj_BlowUpBoulder_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_24YO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BoneDeep.Mission_BoneDeep_C.MCE_PlayerBlewUpBoulder
	 */
	struct UMission_BoneDeep_C_MCE_PlayerBlewUpBoulder_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BoneDeep.Mission_BoneDeep_C.Set_GetExplosives
	 */
	struct UMission_BoneDeep_C_Set_GetExplosives_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BoneDeep.Mission_BoneDeep_C.Obj_GetExplosives
	 */
	struct UMission_BoneDeep_C_Obj_GetExplosives_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QJM5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BoneDeep.Mission_BoneDeep_C.MCE_PlayerTalkedToEndRobot
	 */
	struct UMission_BoneDeep_C_MCE_PlayerTalkedToEndRobot_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BoneDeep.Mission_BoneDeep_C.Set_PlaceExplosives_Shaft
	 */
	struct UMission_BoneDeep_C_Set_PlaceExplosives_Shaft_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BoneDeep.Mission_BoneDeep_C.MCE_PlayerPlacedExplosives_Shaft
	 */
	struct UMission_BoneDeep_C_MCE_PlayerPlacedExplosives_Shaft_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BoneDeep.Mission_BoneDeep_C.Obj_PlaceExplosive_Shaft
	 */
	struct UMission_BoneDeep_C_Obj_PlaceExplosive_Shaft_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3J4N[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BoneDeep.Mission_BoneDeep_C.MCE_PlayerPlacedOneBeacon
	 */
	struct UMission_BoneDeep_C_MCE_PlayerPlacedOneBeacon_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BoneDeep.Mission_BoneDeep_C.Obj_BlowHoleInShaft
	 */
	struct UMission_BoneDeep_C_Obj_BlowHoleInShaft_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VUQB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BoneDeep.Mission_BoneDeep_C.MCE_PlayerBlewHoleInShaft
	 */
	struct UMission_BoneDeep_C_MCE_PlayerBlewHoleInShaft_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BoneDeep.Mission_BoneDeep_C.Obj_GoToEpicenter_BC1
	 */
	struct UMission_BoneDeep_C_Obj_GoToEpicenter_BC1_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OTXN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BoneDeep.Mission_BoneDeep_C.MCE_PlayerArrivedAtEpicenter_BC_2
	 */
	struct UMission_BoneDeep_C_MCE_PlayerArrivedAtEpicenter_BC_2_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BoneDeep.Mission_BoneDeep_C.Obj_GoToEpicenter_BC2
	 */
	struct UMission_BoneDeep_C_Obj_GoToEpicenter_BC2_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_12D5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BoneDeep.Mission_BoneDeep_C.MCE_PlayerArrivedAtEpicenter_BC_3
	 */
	struct UMission_BoneDeep_C_MCE_PlayerArrivedAtEpicenter_BC_3_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BoneDeep.Mission_BoneDeep_C.Obj_GoToEpicenter
	 */
	struct UMission_BoneDeep_C_Obj_GoToEpicenter_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LNZZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BoneDeep.Mission_BoneDeep_C.Set_PlaceFirstBeacon
	 */
	struct UMission_BoneDeep_C_Set_PlaceFirstBeacon_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BoneDeep.Mission_BoneDeep_C.SET_PickUpBeacons
	 */
	struct UMission_BoneDeep_C_SET_PickUpBeacons_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BoneDeep.Mission_BoneDeep_C.Obj_PickUpBeacons
	 */
	struct UMission_BoneDeep_C_Obj_PickUpBeacons_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UOJO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BoneDeep.Mission_BoneDeep_C.Obj_GoToEpicenter_BC3
	 */
	struct UMission_BoneDeep_C_Obj_GoToEpicenter_BC3_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XIF4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BoneDeep.Mission_BoneDeep_C.MCE_PlayerArrivedAtEpicenter_BC_4
	 */
	struct UMission_BoneDeep_C_MCE_PlayerArrivedAtEpicenter_BC_4_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BoneDeep.Mission_BoneDeep_C.Obj_TakeSteamJet
	 */
	struct UMission_BoneDeep_C_Obj_TakeSteamJet_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_A7K0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BoneDeep.Mission_BoneDeep_C.MCE_PlayerTookSteamJetOutOfCave
	 */
	struct UMission_BoneDeep_C_MCE_PlayerTookSteamJetOutOfCave_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BoneDeep.Mission_BoneDeep_C.MCE_ResetPlaceExplosive_Boulder
	 */
	struct UMission_BoneDeep_C_MCE_ResetPlaceExplosive_Boulder_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BoneDeep.Mission_BoneDeep_C.MCE_ResetPlaceExplosive_Shaft
	 */
	struct UMission_BoneDeep_C_MCE_ResetPlaceExplosive_Shaft_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BoneDeep.Mission_BoneDeep_C.Obj_PlaceFirstBeacon
	 */
	struct UMission_BoneDeep_C_Obj_PlaceFirstBeacon_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M0K2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BoneDeep.Mission_BoneDeep_C.MCE_PlayerPlacedFirstBeacon
	 */
	struct UMission_BoneDeep_C_MCE_PlayerPlacedFirstBeacon_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BoneDeep.Mission_BoneDeep_C.Set_PlaceBeacons
	 */
	struct UMission_BoneDeep_C_Set_PlaceBeacons_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BoneDeep.Mission_BoneDeep_C.Obj_INV_PlaceBeaconA_BC
	 */
	struct UMission_BoneDeep_C_Obj_INV_PlaceBeaconA_BC_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FAMP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BoneDeep.Mission_BoneDeep_C.Obj_INV_PlaceBeaconB_BC
	 */
	struct UMission_BoneDeep_C_Obj_INV_PlaceBeaconB_BC_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7CF7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BoneDeep.Mission_BoneDeep_C.Set_TakeSteamJet
	 */
	struct UMission_BoneDeep_C_Set_TakeSteamJet_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BoneDeep.Mission_BoneDeep_C.MCE_INV_WentToPlaceBeaconA_BC
	 */
	struct UMission_BoneDeep_C_MCE_INV_WentToPlaceBeaconA_BC_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BoneDeep.Mission_BoneDeep_C.MCE_INV_WentToPlaceBeaconB_BC
	 */
	struct UMission_BoneDeep_C_MCE_INV_WentToPlaceBeaconB_BC_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BoneDeep.Mission_BoneDeep_C.Obj_TalkToGrouse
	 */
	struct UMission_BoneDeep_C_Obj_TalkToGrouse_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_C7NX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BoneDeep.Mission_BoneDeep_C.INV_Obj_ExitBase
	 */
	struct UMission_BoneDeep_C_INV_Obj_ExitBase_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0KTA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BoneDeep.Mission_BoneDeep_C.MCE_ExitedBase
	 */
	struct UMission_BoneDeep_C_MCE_ExitedBase_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BoneDeep.Mission_BoneDeep_C.MissionKickoff
	 */
	struct UMission_BoneDeep_C_MissionKickoff_Params
	{	};

	/**
	 * Function Mission_BoneDeep.Mission_BoneDeep_C.Set_TalkToGrouse
	 */
	struct UMission_BoneDeep_C_Set_TalkToGrouse_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BoneDeep.Mission_BoneDeep_C.Set_BlowHoleInShaft
	 */
	struct UMission_BoneDeep_C_Set_BlowHoleInShaft_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BoneDeep.Mission_BoneDeep_C.Set_GoToEpicenter
	 */
	struct UMission_BoneDeep_C_Set_GoToEpicenter_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_BoneDeep.Mission_BoneDeep_C.ExecuteUbergraph_Mission_BoneDeep
	 */
	struct UMission_BoneDeep_C_ExecuteUbergraph_Mission_BoneDeep_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YCDB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
