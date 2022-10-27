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
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.OnDialogSequenceFinished_9
	 */
	struct UMission_COVSlaughter1_C_OnDialogSequenceFinished_9_Params
	{	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.OnDialogSequenceFinished_8
	 */
	struct UMission_COVSlaughter1_C_OnDialogSequenceFinished_8_Params
	{	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.OnDialogSequenceFinished_7
	 */
	struct UMission_COVSlaughter1_C_OnDialogSequenceFinished_7_Params
	{	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.OnDialogSequenceFinished_6
	 */
	struct UMission_COVSlaughter1_C_OnDialogSequenceFinished_6_Params
	{	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.Obj_StartRound_2
	 */
	struct UMission_COVSlaughter1_C_Obj_StartRound_2_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1UA7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.Set_Round_2
	 */
	struct UMission_COVSlaughter1_C_Set_Round_2_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.Obj_Rounds
	 */
	struct UMission_COVSlaughter1_C_Obj_Rounds_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5LL7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.Obj_CompleteWave_2
	 */
	struct UMission_COVSlaughter1_C_Obj_CompleteWave_2_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3YIY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.MCE_Update_Obj_CompleteWave_2
	 */
	struct UMission_COVSlaughter1_C_MCE_Update_Obj_CompleteWave_2_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.Set_TurnIn
	 */
	struct UMission_COVSlaughter1_C_Set_TurnIn_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.MCE_Update_Obj_TurnIn
	 */
	struct UMission_COVSlaughter1_C_MCE_Update_Obj_TurnIn_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.Obj_TurnIn
	 */
	struct UMission_COVSlaughter1_C_Obj_TurnIn_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_71TM[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.MCE_Update_RoundCounter
	 */
	struct UMission_COVSlaughter1_C_MCE_Update_RoundCounter_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.Obj_OptionalObjective_2
	 */
	struct UMission_COVSlaughter1_C_Obj_OptionalObjective_2_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0UPX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.Obj_StartRound_3
	 */
	struct UMission_COVSlaughter1_C_Obj_StartRound_3_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Y1GO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.Set_Round_3
	 */
	struct UMission_COVSlaughter1_C_Set_Round_3_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.Obj_CompleteWave_3
	 */
	struct UMission_COVSlaughter1_C_Obj_CompleteWave_3_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DOGE[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.MCE_Update_Obj_CompleteWave_3
	 */
	struct UMission_COVSlaughter1_C_MCE_Update_Obj_CompleteWave_3_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.Obj_StartRound_4
	 */
	struct UMission_COVSlaughter1_C_Obj_StartRound_4_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RFPV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.Set_Round_4
	 */
	struct UMission_COVSlaughter1_C_Set_Round_4_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.Obj_CompleteWave_4
	 */
	struct UMission_COVSlaughter1_C_Obj_CompleteWave_4_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_H1SL[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.MCE_Update_Obj_CompleteWave_4
	 */
	struct UMission_COVSlaughter1_C_MCE_Update_Obj_CompleteWave_4_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.Obj_StartRound_5
	 */
	struct UMission_COVSlaughter1_C_Obj_StartRound_5_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HAZV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.Set_Round_5
	 */
	struct UMission_COVSlaughter1_C_Set_Round_5_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.Obj_CompleteWave_5
	 */
	struct UMission_COVSlaughter1_C_Obj_CompleteWave_5_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7K1D[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.MCE_Update_Obj_CompleteWave_5
	 */
	struct UMission_COVSlaughter1_C_MCE_Update_Obj_CompleteWave_5_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.Obj_StartRound_6
	 */
	struct UMission_COVSlaughter1_C_Obj_StartRound_6_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UFE4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.Set_Round_6
	 */
	struct UMission_COVSlaughter1_C_Set_Round_6_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.Obj_CompleteWave_6
	 */
	struct UMission_COVSlaughter1_C_Obj_CompleteWave_6_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FW4T[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.MCE_Update_Obj_CompleteWave_6
	 */
	struct UMission_COVSlaughter1_C_MCE_Update_Obj_CompleteWave_6_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.Obj_OptionalObjective_3
	 */
	struct UMission_COVSlaughter1_C_Obj_OptionalObjective_3_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZOX0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.Obj_OptionalObjective_4
	 */
	struct UMission_COVSlaughter1_C_Obj_OptionalObjective_4_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q2L2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.Obj_OptionalObjective_5
	 */
	struct UMission_COVSlaughter1_C_Obj_OptionalObjective_5_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SXHB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.Obj_OptionalObjective_6
	 */
	struct UMission_COVSlaughter1_C_Obj_OptionalObjective_6_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_738U[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.MCE_PlayersAllDied
	 */
	struct UMission_COVSlaughter1_C_MCE_PlayersAllDied_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.MCE_SwitchUsed
	 */
	struct UMission_COVSlaughter1_C_MCE_SwitchUsed_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.[Obj_Rounds_Objective] PROXY
	 */
	struct UMission_COVSlaughter1_C_Obj_Rounds_Objective_PROXY_Params
	{	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.[Obj_Rounds_Objective] PROXY_1
	 */
	struct UMission_COVSlaughter1_C_Obj_Rounds_Objective_PROXY_1_Params
	{	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.[Obj_Rounds_Objective] PROXY_2
	 */
	struct UMission_COVSlaughter1_C_Obj_Rounds_Objective_PROXY_2_Params
	{	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.[Obj_Rounds_Objective] PROXY_3
	 */
	struct UMission_COVSlaughter1_C_Obj_Rounds_Objective_PROXY_3_Params
	{	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.Obj_INVIS_AssembleRound1
	 */
	struct UMission_COVSlaughter1_C_Obj_INVIS_AssembleRound1_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7XCR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.MCE_PlayersAssembled
	 */
	struct UMission_COVSlaughter1_C_MCE_PlayersAssembled_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.MCE_PlayersNotAssembled
	 */
	struct UMission_COVSlaughter1_C_MCE_PlayersNotAssembled_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.Obj_INVIS_Assemble2
	 */
	struct UMission_COVSlaughter1_C_Obj_INVIS_Assemble2_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ISGA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.Obj_INVIS_Assemble3
	 */
	struct UMission_COVSlaughter1_C_Obj_INVIS_Assemble3_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DPL6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.Obj_INVIS_Assemble4
	 */
	struct UMission_COVSlaughter1_C_Obj_INVIS_Assemble4_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_O0H7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.Obj_INVIS_Assemble5
	 */
	struct UMission_COVSlaughter1_C_Obj_INVIS_Assemble5_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5I8C[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.MCE_PlayerDied
	 */
	struct UMission_COVSlaughter1_C_MCE_PlayerDied_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.MissionKickoff
	 */
	struct UMission_COVSlaughter1_C_MissionKickoff_Params
	{	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.Obj_INVIS_PlayersDiedinRound
	 */
	struct UMission_COVSlaughter1_C_Obj_INVIS_PlayersDiedinRound_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_10XB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.MCE_PlayersAllDiedInRound
	 */
	struct UMission_COVSlaughter1_C_MCE_PlayersAllDiedInRound_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.[Obj_INVIS_PlayersDiedinRound_Objective] PROXY_4
	 */
	struct UMission_COVSlaughter1_C_Obj_INVIS_PlayersDiedinRound_Objective_PROXY_4_Params
	{	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.[Obj_INVIS_PlayersDiedinRound_Objective] PROXY_5
	 */
	struct UMission_COVSlaughter1_C_Obj_INVIS_PlayersDiedinRound_Objective_PROXY_5_Params
	{	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.[Obj_INVIS_PlayersDiedinRound_Objective] PROXY_6
	 */
	struct UMission_COVSlaughter1_C_Obj_INVIS_PlayersDiedinRound_Objective_PROXY_6_Params
	{	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.[Obj_INVIS_PlayersDiedinRound_Objective] PROXY_7
	 */
	struct UMission_COVSlaughter1_C_Obj_INVIS_PlayersDiedinRound_Objective_PROXY_7_Params
	{	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.MCE_BossSpawns
	 */
	struct UMission_COVSlaughter1_C_MCE_BossSpawns_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.MissionActiveLoad
	 */
	struct UMission_COVSlaughter1_C_MissionActiveLoad_Params
	{	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.MissionActive
	 */
	struct UMission_COVSlaughter1_C_MissionActive_Params
	{	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.Obj_DropshipCleared
	 */
	struct UMission_COVSlaughter1_C_Obj_DropshipCleared_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_N0MR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.MCE_Update_Obj_DropshipCleared
	 */
	struct UMission_COVSlaughter1_C_MCE_Update_Obj_DropshipCleared_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.MCE_BC_NotAllAssembled
	 */
	struct UMission_COVSlaughter1_C_MCE_BC_NotAllAssembled_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.ExecuteUbergraph_Mission_COVSlaughter1
	 */
	struct UMission_COVSlaughter1_C_ExecuteUbergraph_Mission_COVSlaughter1_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BE0C[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
