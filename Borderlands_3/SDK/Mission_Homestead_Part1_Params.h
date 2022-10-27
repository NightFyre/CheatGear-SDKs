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
	 * Function Mission_Homestead_Part1.Mission_Homestead_Part1_C.OnDialogSequenceFinished_17
	 */
	struct UMission_Homestead_Part1_C_OnDialogSequenceFinished_17_Params
	{	};

	/**
	 * Function Mission_Homestead_Part1.Mission_Homestead_Part1_C.OnDialogSequenceFinished_16
	 */
	struct UMission_Homestead_Part1_C_OnDialogSequenceFinished_16_Params
	{	};

	/**
	 * Function Mission_Homestead_Part1.Mission_Homestead_Part1_C.OnDialogSequenceFinished_15
	 */
	struct UMission_Homestead_Part1_C_OnDialogSequenceFinished_15_Params
	{	};

	/**
	 * Function Mission_Homestead_Part1.Mission_Homestead_Part1_C.OnDialogSequenceFinished_14
	 */
	struct UMission_Homestead_Part1_C_OnDialogSequenceFinished_14_Params
	{	};

	/**
	 * Function Mission_Homestead_Part1.Mission_Homestead_Part1_C.OnDialogSequenceFinished_13
	 */
	struct UMission_Homestead_Part1_C_OnDialogSequenceFinished_13_Params
	{	};

	/**
	 * Function Mission_Homestead_Part1.Mission_Homestead_Part1_C.OnDialogSequenceFinished_12
	 */
	struct UMission_Homestead_Part1_C_OnDialogSequenceFinished_12_Params
	{	};

	/**
	 * Function Mission_Homestead_Part1.Mission_Homestead_Part1_C.OnDialogSequenceFinished_11
	 */
	struct UMission_Homestead_Part1_C_OnDialogSequenceFinished_11_Params
	{	};

	/**
	 * Function Mission_Homestead_Part1.Mission_Homestead_Part1_C.OnDialogSequenceFinished_10
	 */
	struct UMission_Homestead_Part1_C_OnDialogSequenceFinished_10_Params
	{	};

	/**
	 * Function Mission_Homestead_Part1.Mission_Homestead_Part1_C.Set_SeeMa
	 */
	struct UMission_Homestead_Part1_C_Set_SeeMa_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Homestead_Part1.Mission_Homestead_Part1_C.Obj_SeeMa
	 */
	struct UMission_Homestead_Part1_C_Obj_SeeMa_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_075O[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Homestead_Part1.Mission_Homestead_Part1_C.Set_GetParts
	 */
	struct UMission_Homestead_Part1_C_Set_GetParts_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Homestead_Part1.Mission_Homestead_Part1_C.Set_ReturnPartsToMa
	 */
	struct UMission_Homestead_Part1_C_Set_ReturnPartsToMa_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Homestead_Part1.Mission_Homestead_Part1_C.Obj_ReturnPartsToMa
	 */
	struct UMission_Homestead_Part1_C_Obj_ReturnPartsToMa_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TQU1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Homestead_Part1.Mission_Homestead_Part1_C.Set_RepairHomestead
	 */
	struct UMission_Homestead_Part1_C_Set_RepairHomestead_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Homestead_Part1.Mission_Homestead_Part1_C.ME_PlayerReturnedToMa
	 */
	struct UMission_Homestead_Part1_C_ME_PlayerReturnedToMa_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Homestead_Part1.Mission_Homestead_Part1_C.Obj_WindTurbineCore
	 */
	struct UMission_Homestead_Part1_C_Obj_WindTurbineCore_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZJA2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Homestead_Part1.Mission_Homestead_Part1_C.Obj_PlaceFuseOnGate
	 */
	struct UMission_Homestead_Part1_C_Obj_PlaceFuseOnGate_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7UU7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Homestead_Part1.Mission_Homestead_Part1_C.Obj_PlaceWindTurbineCore
	 */
	struct UMission_Homestead_Part1_C_Obj_PlaceWindTurbineCore_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MYQB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Homestead_Part1.Mission_Homestead_Part1_C.ME_PlayerPlacedWindTurbineCore
	 */
	struct UMission_Homestead_Part1_C_ME_PlayerPlacedWindTurbineCore_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Homestead_Part1.Mission_Homestead_Part1_C.ME_PlayerPlacedFuse
	 */
	struct UMission_Homestead_Part1_C_ME_PlayerPlacedFuse_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Homestead_Part1.Mission_Homestead_Part1_C.Set_TurnInToMa
	 */
	struct UMission_Homestead_Part1_C_Set_TurnInToMa_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Homestead_Part1.Mission_Homestead_Part1_C.Obj_ReturnToMaAtEnd
	 */
	struct UMission_Homestead_Part1_C_Obj_ReturnToMaAtEnd_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TNIL[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Homestead_Part1.Mission_Homestead_Part1_C.ME_PlayerTurnedInToMa
	 */
	struct UMission_Homestead_Part1_C_ME_PlayerTurnedInToMa_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Homestead_Part1.Mission_Homestead_Part1_C.ME_PlayerTalkedToMaAfterPoster
	 */
	struct UMission_Homestead_Part1_C_ME_PlayerTalkedToMaAfterPoster_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Homestead_Part1.Mission_Homestead_Part1_C.ME_PlayerGotFuse
	 */
	struct UMission_Homestead_Part1_C_ME_PlayerGotFuse_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Homestead_Part1.Mission_Homestead_Part1_C.Obj_Fuse
	 */
	struct UMission_Homestead_Part1_C_Obj_Fuse_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RL04[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Homestead_Part1.Mission_Homestead_Part1_C.ME_PlayerGotWindTurbine
	 */
	struct UMission_Homestead_Part1_C_ME_PlayerGotWindTurbine_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Homestead_Part1.Mission_Homestead_Part1_C.ME_PlayerApproachedFuse_POI
	 */
	struct UMission_Homestead_Part1_C_ME_PlayerApproachedFuse_POI_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Homestead_Part1.Mission_Homestead_Part1_C.ME_PlayerApproachedCore_POI
	 */
	struct UMission_Homestead_Part1_C_ME_PlayerApproachedCore_POI_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Homestead_Part1.Mission_Homestead_Part1_C.ExecuteUbergraph_Mission_Homestead_Part1
	 */
	struct UMission_Homestead_Part1_C_ExecuteUbergraph_Mission_Homestead_Part1_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
