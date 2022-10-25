#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * Function BP_MatchHistoryRowStat.BP_MatchHistoryRowStat_C.Set Value Class
	 */
	struct UBP_MatchHistoryRowStat_C_Set_Value_Class_Params
	{
	public:
		class FName                                                ClassName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MatchHistoryRowStat.BP_MatchHistoryRowStat_C.Set Value Item
	 */
	struct UBP_MatchHistoryRowStat_C_Set_Value_Item_Params
	{
	public:
		unsigned char                                              UnknownData_KYAR[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MatchHistoryRowStat.BP_MatchHistoryRowStat_C.SetValue
	 */
	struct UBP_MatchHistoryRowStat_C_SetValue_Params
	{
	public:
		class FText                                                Value;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_MatchHistoryRowStat.BP_MatchHistoryRowStat_C.PreConstruct
	 */
	struct UBP_MatchHistoryRowStat_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MatchHistoryRowStat.BP_MatchHistoryRowStat_C.Construct
	 */
	struct UBP_MatchHistoryRowStat_C_Construct_Params
	{	};

	/**
	 * Function BP_MatchHistoryRowStat.BP_MatchHistoryRowStat_C.ExecuteUbergraph_BP_MatchHistoryRowStat
	 */
	struct UBP_MatchHistoryRowStat_C_ExecuteUbergraph_BP_MatchHistoryRowStat_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
