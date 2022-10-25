#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * Function BP_Pouch_BreachingCharge.BP_Pouch_BreachingCharge_C.CanAddChild
	 */
	struct ABP_Pouch_BreachingCharge_C_CanAddChild_Params
	{
	public:
		class AGBItem*                                             PotentialChild;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_13JL[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Pouch_BreachingCharge.BP_Pouch_BreachingCharge_C.OnAddingChild
	 */
	struct ABP_Pouch_BreachingCharge_C_OnAddingChild_Params
	{
	public:
		class AGBItem*                                             AddedChild;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Pouch_BreachingCharge.BP_Pouch_BreachingCharge_C.Refill
	 */
	struct ABP_Pouch_BreachingCharge_C_Refill_Params
	{	};

	/**
	 * Function BP_Pouch_BreachingCharge.BP_Pouch_BreachingCharge_C.ReceiveBeginPlay
	 */
	struct ABP_Pouch_BreachingCharge_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Pouch_BreachingCharge.BP_Pouch_BreachingCharge_C.ExecuteUbergraph_BP_Pouch_BreachingCharge
	 */
	struct ABP_Pouch_BreachingCharge_C_ExecuteUbergraph_BP_Pouch_BreachingCharge_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4V1S[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
