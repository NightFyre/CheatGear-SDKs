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
	 * Function EP02_DLC2.EP02_DLC2_C.OnDialogSequenceFinished_29
	 */
	struct UEP02_DLC2_C_OnDialogSequenceFinished_29_Params
	{	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.OnDialogSequenceFinished_28
	 */
	struct UEP02_DLC2_C_OnDialogSequenceFinished_28_Params
	{	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.OnDialogSequenceFinished_27
	 */
	struct UEP02_DLC2_C_OnDialogSequenceFinished_27_Params
	{	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.OnDialogSequenceFinished_26
	 */
	struct UEP02_DLC2_C_OnDialogSequenceFinished_26_Params
	{	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.OnDialogSequenceFinished_25
	 */
	struct UEP02_DLC2_C_OnDialogSequenceFinished_25_Params
	{	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.OnDialogSequenceFinished_24
	 */
	struct UEP02_DLC2_C_OnDialogSequenceFinished_24_Params
	{	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.OnDialogSequenceFinished_23
	 */
	struct UEP02_DLC2_C_OnDialogSequenceFinished_23_Params
	{	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.OnDialogSequenceFinished_22
	 */
	struct UEP02_DLC2_C_OnDialogSequenceFinished_22_Params
	{	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.OnDialogSequenceFinished_21
	 */
	struct UEP02_DLC2_C_OnDialogSequenceFinished_21_Params
	{	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.OnDialogSequenceFinished_20
	 */
	struct UEP02_DLC2_C_OnDialogSequenceFinished_20_Params
	{	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.OnDialogSequenceFinished_19
	 */
	struct UEP02_DLC2_C_OnDialogSequenceFinished_19_Params
	{	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.OnDialogSequenceFinished_18
	 */
	struct UEP02_DLC2_C_OnDialogSequenceFinished_18_Params
	{	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.OnDialogSequenceFinished_17
	 */
	struct UEP02_DLC2_C_OnDialogSequenceFinished_17_Params
	{	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.OnDialogSequenceFinished_16
	 */
	struct UEP02_DLC2_C_OnDialogSequenceFinished_16_Params
	{	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.MCE_TalkedToHammerlockBar
	 */
	struct UEP02_DLC2_C_MCE_TalkedToHammerlockBar_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.Obj_ReturnToHammerlock
	 */
	struct UEP02_DLC2_C_Obj_ReturnToHammerlock_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VPWT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.Set_ReturnToHammerlock
	 */
	struct UEP02_DLC2_C_Set_ReturnToHammerlock_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.MCE_PlazaCleared
	 */
	struct UEP02_DLC2_C_MCE_PlazaCleared_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.Obj_SecurePlaza
	 */
	struct UEP02_DLC2_C_Obj_SecurePlaza_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_S9PM[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.Set_SecurePlaza
	 */
	struct UEP02_DLC2_C_Set_SecurePlaza_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.MCE_DeathtrapArrivedAtPlaza
	 */
	struct UEP02_DLC2_C_MCE_DeathtrapArrivedAtPlaza_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.Obj_FollowDeathtrapToPlaza
	 */
	struct UEP02_DLC2_C_Obj_FollowDeathtrapToPlaza_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8MNJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.Set_FollowDeathtrapToPlaza
	 */
	struct UEP02_DLC2_C_Set_FollowDeathtrapToPlaza_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.MCE_UpdateTitleCardCursedWainwright
	 */
	struct UEP02_DLC2_C_MCE_UpdateTitleCardCursedWainwright_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.SET_GiveExcuse
	 */
	struct UEP02_DLC2_C_SET_GiveExcuse_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.Obj_GiveExcuse
	 */
	struct UEP02_DLC2_C_Obj_GiveExcuse_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2B57[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.Inv_Obj_MancubusOpensDoorToVillage
	 */
	struct UEP02_DLC2_C_Inv_Obj_MancubusOpensDoorToVillage_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MMW0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.MCE_MancubusOpensDoorToVillage
	 */
	struct UEP02_DLC2_C_MCE_MancubusOpensDoorToVillage_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.MCE_GiveExcuse
	 */
	struct UEP02_DLC2_C_MCE_GiveExcuse_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.SET_EnterVenue
	 */
	struct UEP02_DLC2_C_SET_EnterVenue_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.Obj_EnterVenue
	 */
	struct UEP02_DLC2_C_Obj_EnterVenue_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KCJR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.[Obj_ReachHeartsDesire_Objective] PROXY_1
	 */
	struct UEP02_DLC2_C_Obj_ReachHeartsDesire_Objective_PROXY_1_Params
	{	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.Obj_TitleCardWainwrightCursed
	 */
	struct UEP02_DLC2_C_Obj_TitleCardWainwrightCursed_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PQDM[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.Set_TitleCardWainwrightCursed
	 */
	struct UEP02_DLC2_C_Set_TitleCardWainwrightCursed_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.MCE_CannotEnterVenue
	 */
	struct UEP02_DLC2_C_MCE_CannotEnterVenue_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.BC_TalkToWainwright_01
	 */
	struct UEP02_DLC2_C_BC_TalkToWainwright_01_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GJJ9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.BC_TalkToWainwright_02
	 */
	struct UEP02_DLC2_C_BC_TalkToWainwright_02_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3RCZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.BC_TalkToWainwright_03
	 */
	struct UEP02_DLC2_C_BC_TalkToWainwright_03_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4EZO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.MCE_SkipWainwrightBC_03
	 */
	struct UEP02_DLC2_C_MCE_SkipWainwrightBC_03_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.MCE_SkipWainwrightBC_02
	 */
	struct UEP02_DLC2_C_MCE_SkipWainwrightBC_02_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.MCE_SkipWainwrightBC_01
	 */
	struct UEP02_DLC2_C_MCE_SkipWainwrightBC_01_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.Obj_ReturnToLodge
	 */
	struct UEP02_DLC2_C_Obj_ReturnToLodge_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_W40L[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.SET_ReturnToLodge
	 */
	struct UEP02_DLC2_C_SET_ReturnToLodge_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.MCE_ReturnedToLodge
	 */
	struct UEP02_DLC2_C_MCE_ReturnedToLodge_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.SET_FollowWainwrightToComputer
	 */
	struct UEP02_DLC2_C_SET_FollowWainwrightToComputer_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.SET_PlaceDecorations
	 */
	struct UEP02_DLC2_C_SET_PlaceDecorations_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.Obj_PlaceDecoration
	 */
	struct UEP02_DLC2_C_Obj_PlaceDecoration_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JTD3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.MCE_BalloonPlaced
	 */
	struct UEP02_DLC2_C_MCE_BalloonPlaced_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.MCE_EleanorKilled
	 */
	struct UEP02_DLC2_C_MCE_EleanorKilled_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.Obj_Inv_PlaceDecoration
	 */
	struct UEP02_DLC2_C_Obj_Inv_PlaceDecoration_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9PX9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.Inv_Obj_LodgeDoorOpens
	 */
	struct UEP02_DLC2_C_Inv_Obj_LodgeDoorOpens_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9Z5D[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.MCE_LodgeDoorOpened
	 */
	struct UEP02_DLC2_C_MCE_LodgeDoorOpened_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.MCE_TalkedToWainwrightPlaza
	 */
	struct UEP02_DLC2_C_MCE_TalkedToWainwrightPlaza_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.SET_WainwrightDazeLodge
	 */
	struct UEP02_DLC2_C_SET_WainwrightDazeLodge_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.Obj_TakeWainwrightShotgun
	 */
	struct UEP02_DLC2_C_Obj_TakeWainwrightShotgun_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2NFK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.MCE_ShotgunTaken
	 */
	struct UEP02_DLC2_C_MCE_ShotgunTaken_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.Obj_KillVincent
	 */
	struct UEP02_DLC2_C_Obj_KillVincent_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XKBZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.Set_KillEleanor
	 */
	struct UEP02_DLC2_C_Set_KillEleanor_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.Inv_FollowWainwrightToCivilian
	 */
	struct UEP02_DLC2_C_Inv_FollowWainwrightToCivilian_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4UFR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.MCE_ArrivedAtTownfolkDoor
	 */
	struct UEP02_DLC2_C_MCE_ArrivedAtTownfolkDoor_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.Set_FollowWainwrightToCivillianDoor
	 */
	struct UEP02_DLC2_C_Set_FollowWainwrightToCivillianDoor_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.[Obj_ReachHeartsDesire_Objective] PROXY_2
	 */
	struct UEP02_DLC2_C_Obj_ReachHeartsDesire_Objective_PROXY_2_Params
	{	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.SET_KillKrichesCellar
	 */
	struct UEP02_DLC2_C_SET_KillKrichesCellar_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.[Obj_ReachHeartsDesire_Objective] PROXY_3
	 */
	struct UEP02_DLC2_C_Obj_ReachHeartsDesire_Objective_PROXY_3_Params
	{	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.Inv_KillKrichesCellar
	 */
	struct UEP02_DLC2_C_Inv_KillKrichesCellar_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QU3M[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.MCE_CellarKrichesDead
	 */
	struct UEP02_DLC2_C_MCE_CellarKrichesDead_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.MCE_RenewalStopped
	 */
	struct UEP02_DLC2_C_MCE_RenewalStopped_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.Obj_StopTheRenewal
	 */
	struct UEP02_DLC2_C_Obj_StopTheRenewal_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_574V[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.SET_StopTheRenewal
	 */
	struct UEP02_DLC2_C_SET_StopTheRenewal_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.[Obj_ReachHeartsDesire_Objective] PROXY
	 */
	struct UEP02_DLC2_C_Obj_ReachHeartsDesire_Objective_PROXY_Params
	{	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.Set_FollowWainwrightToComputer2
	 */
	struct UEP02_DLC2_C_Set_FollowWainwrightToComputer2_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.Inv_FollowWainwrightSacrificialPit
	 */
	struct UEP02_DLC2_C_Inv_FollowWainwrightSacrificialPit_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0EJG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.Inv_Obj_FollowWainwrightComputer2
	 */
	struct UEP02_DLC2_C_Inv_Obj_FollowWainwrightComputer2_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LXE3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.[Obj_ReachHeartsDesire_Objective] PROXY_4
	 */
	struct UEP02_DLC2_C_Obj_ReachHeartsDesire_Objective_PROXY_4_Params
	{	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.MCE_WainwrightAtComputer2
	 */
	struct UEP02_DLC2_C_MCE_WainwrightAtComputer2_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.Set_ShootComputer
	 */
	struct UEP02_DLC2_C_Set_ShootComputer_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.MCE_SacrificialPitReached
	 */
	struct UEP02_DLC2_C_MCE_SacrificialPitReached_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.Obj_ShootComputer
	 */
	struct UEP02_DLC2_C_Obj_ShootComputer_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_B71B[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.MCE_ComputerShooted
	 */
	struct UEP02_DLC2_C_MCE_ComputerShooted_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.Set_FollowWainwrightToCeillar
	 */
	struct UEP02_DLC2_C_Set_FollowWainwrightToCeillar_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.Obj_ReachHeartsDesire
	 */
	struct UEP02_DLC2_C_Obj_ReachHeartsDesire_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0X1K[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.SET_ReachHeartsDesire
	 */
	struct UEP02_DLC2_C_SET_ReachHeartsDesire_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.[Obj_ReachHeartsDesire_Objective] PROXY_5
	 */
	struct UEP02_DLC2_C_Obj_ReachHeartsDesire_Objective_PROXY_5_Params
	{	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.Obj_FollowWainwrightCeillar
	 */
	struct UEP02_DLC2_C_Obj_FollowWainwrightCeillar_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0QJM[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.MCE_ArrivedAtCeillar
	 */
	struct UEP02_DLC2_C_MCE_ArrivedAtCeillar_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.Inv_SCR_2100_DazePart1_Completed
	 */
	struct UEP02_DLC2_C_Inv_SCR_2100_DazePart1_Completed_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M42Z[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.Inv_SCR_2100_DazePart2_Completed
	 */
	struct UEP02_DLC2_C_Inv_SCR_2100_DazePart2_Completed_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_S4BH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.MCE_Daze1Completed
	 */
	struct UEP02_DLC2_C_MCE_Daze1Completed_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.MCE_Daze2Completed
	 */
	struct UEP02_DLC2_C_MCE_Daze2Completed_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.Inv_SCR_2100_DazePart3_Completed
	 */
	struct UEP02_DLC2_C_Inv_SCR_2100_DazePart3_Completed_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M02E[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.MCE_Daze3Completed
	 */
	struct UEP02_DLC2_C_MCE_Daze3Completed_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.Inv_SCR_2100_DazePart2_ReadyToPlay
	 */
	struct UEP02_DLC2_C_Inv_SCR_2100_DazePart2_ReadyToPlay_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_K0RE[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.Set_PlayShotGunDazePart3Sequence
	 */
	struct UEP02_DLC2_C_Set_PlayShotGunDazePart3Sequence_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.Inv_Obj_RitualPart2
	 */
	struct UEP02_DLC2_C_Inv_Obj_RitualPart2_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9799[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.Inv_Obj_RitualPart3
	 */
	struct UEP02_DLC2_C_Inv_Obj_RitualPart3_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UUNM[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.Inv_Obj_RitualPart4
	 */
	struct UEP02_DLC2_C_Inv_Obj_RitualPart4_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_392S[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.MCE_RitualPart2
	 */
	struct UEP02_DLC2_C_MCE_RitualPart2_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.MCE_RitualPart4
	 */
	struct UEP02_DLC2_C_MCE_RitualPart4_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.Inv_Obj_RitualPart1
	 */
	struct UEP02_DLC2_C_Inv_Obj_RitualPart1_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2URN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.MCE_RitualPart1
	 */
	struct UEP02_DLC2_C_MCE_RitualPart1_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.Inv_SCR_2100_WainwrightInPositionPart3
	 */
	struct UEP02_DLC2_C_Inv_SCR_2100_WainwrightInPositionPart3_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9KX3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.MCE_WainwrightInPosition
	 */
	struct UEP02_DLC2_C_MCE_WainwrightInPosition_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.Inv_Obj_WainwrightVoOutsideLodge
	 */
	struct UEP02_DLC2_C_Inv_Obj_WainwrightVoOutsideLodge_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_V3QS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.MCE_WainwrightVoOutside
	 */
	struct UEP02_DLC2_C_MCE_WainwrightVoOutside_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.MissionKickoff
	 */
	struct UEP02_DLC2_C_MissionKickoff_Params
	{	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.MCE_DEBUG_EP02_JumpToEndMission
	 */
	struct UEP02_DLC2_C_MCE_DEBUG_EP02_JumpToEndMission_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.Set_GoToVillage
	 */
	struct UEP02_DLC2_C_Set_GoToVillage_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.Inv_Obj_GoToVillage
	 */
	struct UEP02_DLC2_C_Inv_Obj_GoToVillage_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GSMW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.[Obj_TalkToWainwright_Objective] PROXY_6
	 */
	struct UEP02_DLC2_C_Obj_TalkToWainwright_Objective_PROXY_6_Params
	{	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.MCE_WentToVillage
	 */
	struct UEP02_DLC2_C_MCE_WentToVillage_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.MCE_WainwrightAtComputer
	 */
	struct UEP02_DLC2_C_MCE_WainwrightAtComputer_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.Inv_FollowWainwrightComputer
	 */
	struct UEP02_DLC2_C_Inv_FollowWainwrightComputer_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_60Q9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.Obj_TalkToWainwright
	 */
	struct UEP02_DLC2_C_Obj_TalkToWainwright_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7KOV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.SET_TalkToWainwright
	 */
	struct UEP02_DLC2_C_SET_TalkToWainwright_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EP02_DLC2.EP02_DLC2_C.ExecuteUbergraph_EP02_DLC2
	 */
	struct UEP02_DLC2_C_ExecuteUbergraph_EP02_DLC2_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8VE7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
