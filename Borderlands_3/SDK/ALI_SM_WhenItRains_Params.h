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
	 * Function ALI_SM_WhenItRains.ALI_SM_WhenItRains_C.OnDialogSequenceFinished_5
	 */
	struct UALI_SM_WhenItRains_C_OnDialogSequenceFinished_5_Params
	{	};

	/**
	 * Function ALI_SM_WhenItRains.ALI_SM_WhenItRains_C.OnDialogSequenceFinished_4
	 */
	struct UALI_SM_WhenItRains_C_OnDialogSequenceFinished_4_Params
	{	};

	/**
	 * Function ALI_SM_WhenItRains.ALI_SM_WhenItRains_C.MCE_FindUmbrella
	 */
	struct UALI_SM_WhenItRains_C_MCE_FindUmbrella_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_WhenItRains.ALI_SM_WhenItRains_C.Obj_FindUmbrella
	 */
	struct UALI_SM_WhenItRains_C_Obj_FindUmbrella_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L8BA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_WhenItRains.ALI_SM_WhenItRains_C.SET_GiveUmbrella
	 */
	struct UALI_SM_WhenItRains_C_SET_GiveUmbrella_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_WhenItRains.ALI_SM_WhenItRains_C.Obj_GiveUmbrella
	 */
	struct UALI_SM_WhenItRains_C_Obj_GiveUmbrella_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2VSH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_WhenItRains.ALI_SM_WhenItRains_C.MCE_GiveUmbrella
	 */
	struct UALI_SM_WhenItRains_C_MCE_GiveUmbrella_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_WhenItRains.ALI_SM_WhenItRains_C.SET_FindUmbrella
	 */
	struct UALI_SM_WhenItRains_C_SET_FindUmbrella_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_WhenItRains.ALI_SM_WhenItRains_C.MissionKickoff
	 */
	struct UALI_SM_WhenItRains_C_MissionKickoff_Params
	{	};

	/**
	 * Function ALI_SM_WhenItRains.ALI_SM_WhenItRains_C.ExecuteUbergraph_ALI_SM_WhenItRains
	 */
	struct UALI_SM_WhenItRains_C_ExecuteUbergraph_ALI_SM_WhenItRains_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_61OW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
