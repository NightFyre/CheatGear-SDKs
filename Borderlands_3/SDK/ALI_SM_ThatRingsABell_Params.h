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
	 * Function ALI_SM_ThatRingsABell.ALI_SM_ThatRingsABell_C.OnDialogSequenceFinished_5
	 */
	struct UALI_SM_ThatRingsABell_C_OnDialogSequenceFinished_5_Params
	{	};

	/**
	 * Function ALI_SM_ThatRingsABell.ALI_SM_ThatRingsABell_C.OnDialogSequenceFinished_4
	 */
	struct UALI_SM_ThatRingsABell_C_OnDialogSequenceFinished_4_Params
	{	};

	/**
	 * Function ALI_SM_ThatRingsABell.ALI_SM_ThatRingsABell_C.MCE_RingABell
	 */
	struct UALI_SM_ThatRingsABell_C_MCE_RingABell_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ThatRingsABell.ALI_SM_ThatRingsABell_C.Obj_RingABell
	 */
	struct UALI_SM_ThatRingsABell_C_Obj_RingABell_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_X3O0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ThatRingsABell.ALI_SM_ThatRingsABell_C.SET_RingABell
	 */
	struct UALI_SM_ThatRingsABell_C_SET_RingABell_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_SM_ThatRingsABell.ALI_SM_ThatRingsABell_C.MissionKickoff
	 */
	struct UALI_SM_ThatRingsABell_C_MissionKickoff_Params
	{	};

	/**
	 * Function ALI_SM_ThatRingsABell.ALI_SM_ThatRingsABell_C.ExecuteUbergraph_ALI_SM_ThatRingsABell
	 */
	struct UALI_SM_ThatRingsABell_C_ExecuteUbergraph_ALI_SM_ThatRingsABell_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JCIX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
