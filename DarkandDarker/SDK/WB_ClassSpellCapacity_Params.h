#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * Function WB_ClassSpellCapacity.WB_ClassSpellCapacity_C.GetSpellCapacityImageSize
	 */
	struct UWB_ClassSpellCapacity_C_GetSpellCapacityImageSize_Params
	{
	public:
		struct FVector2D                                           InVec;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SpellTier;                                               // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BNDF[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     SpellCapacityToUse;                                      // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_ClassSpellCapacity.WB_ClassSpellCapacity_C.OnMessageReceived_19F7A0BB4FA330B0CBE1ADB130D8E6F2
	 */
	struct UWB_ClassSpellCapacity_C_OnMessageReceived_19F7A0BB4FA330B0CBE1ADB130D8E6F2_Params
	{
	public:
		class UMsgBaseNode*                                        ProxyObject;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_ClassSpellCapacity.WB_ClassSpellCapacity_C.OnSpellCapacityChanged
	 */
	struct UWB_ClassSpellCapacity_C_OnSpellCapacityChanged_Params
	{
	public:
		float                                                      InSpellCurrentCapacity;                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InSpellMaxCapacity;                                      // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_ClassSpellCapacity.WB_ClassSpellCapacity_C.OnSpellListChanged
	 */
	struct UWB_ClassSpellCapacity_C_OnSpellListChanged_Params
	{
	public:
		TArray<struct FSpellData>                                  InSpellDataArray;                                        // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_ClassSpellCapacity.WB_ClassSpellCapacity_C.Construct
	 */
	struct UWB_ClassSpellCapacity_C_Construct_Params
	{	};

	/**
	 * Function WB_ClassSpellCapacity.WB_ClassSpellCapacity_C.OnClickedCommonInfoBtn
	 */
	struct UWB_ClassSpellCapacity_C_OnClickedCommonInfoBtn_Params
	{	};

	/**
	 * Function WB_ClassSpellCapacity.WB_ClassSpellCapacity_C.ExecuteUbergraph_WB_ClassSpellCapacity
	 */
	struct UWB_ClassSpellCapacity_C_ExecuteUbergraph_WB_ClassSpellCapacity_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PTPS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
