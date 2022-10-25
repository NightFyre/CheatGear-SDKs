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
	 * Function BP_RoundVictory_StatsPanel.BP_RoundVictory_StatsPanel_C.OnBackendReceivedXP
	 */
	struct UBP_RoundVictory_StatsPanel_C_OnBackendReceivedXP_Params
	{
	public:
		int32_t                                                    EarnedXP;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RH1G[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_RoundVictory_StatsPanel.BP_RoundVictory_StatsPanel_C.UpdateObjectivesCasptureTime
	 */
	struct UBP_RoundVictory_StatsPanel_C_UpdateObjectivesCasptureTime_Params
	{
	public:
		struct FGameStatsSummary                                   Summary;                                                 // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_RoundVictory_StatsPanel.BP_RoundVictory_StatsPanel_C.UpdateObjectivesSecured
	 */
	struct UBP_RoundVictory_StatsPanel_C_UpdateObjectivesSecured_Params
	{
	public:
		struct FGameStatsSummary                                   Summary;                                                 // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_RoundVictory_StatsPanel.BP_RoundVictory_StatsPanel_C.UpdateKDR
	 */
	struct UBP_RoundVictory_StatsPanel_C_UpdateKDR_Params
	{
	public:
		struct FGameStatsSummary                                   Summary;                                                 // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_RoundVictory_StatsPanel.BP_RoundVictory_StatsPanel_C.ClearStatPanels
	 */
	struct UBP_RoundVictory_StatsPanel_C_ClearStatPanels_Params
	{	};

	/**
	 * Function BP_RoundVictory_StatsPanel.BP_RoundVictory_StatsPanel_C.GetNextStatPanelColumn
	 */
	struct UBP_RoundVictory_StatsPanel_C_GetNextStatPanelColumn_Params
	{
	public:
		int32_t                                                    NewID;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RoundVictory_StatsPanel.BP_RoundVictory_StatsPanel_C.AppendNewStatPanelText
	 */
	struct UBP_RoundVictory_StatsPanel_C_AppendNewStatPanelText_Params
	{
	public:
		class FText                                                StatHeader;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                CenterText;                                              // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                StatFooter;                                              // 0x0030(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_RoundVictory_StatsPanel.BP_RoundVictory_StatsPanel_C.AppendNewStatPanelIcon
	 */
	struct UBP_RoundVictory_StatsPanel_C_AppendNewStatPanelIcon_Params
	{
	public:
		class FText                                                StatHeader;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UTexture2D*                                          Icon;                                                    // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                StatFooter;                                              // 0x0020(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_RoundVictory_StatsPanel.BP_RoundVictory_StatsPanel_C.UpdateMostUsedWeapon
	 */
	struct UBP_RoundVictory_StatsPanel_C_UpdateMostUsedWeapon_Params
	{
	public:
		struct FGameStatsSummary                                   Summary;                                                 // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_RoundVictory_StatsPanel.BP_RoundVictory_StatsPanel_C.UpdateMostUsedClass
	 */
	struct UBP_RoundVictory_StatsPanel_C_UpdateMostUsedClass_Params
	{
	public:
		struct FGameStatsSummary                                   Summary;                                                 // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_RoundVictory_StatsPanel.BP_RoundVictory_StatsPanel_C.Update Top Labels
	 */
	struct UBP_RoundVictory_StatsPanel_C_Update_Top_Labels_Params
	{
	public:
		int32_t                                                    LengthSeconds;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TIKS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                CategoryName;                                            // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                GameModeName;                                            // 0x0020(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_RoundVictory_StatsPanel.BP_RoundVictory_StatsPanel_C.BuildPanel
	 */
	struct UBP_RoundVictory_StatsPanel_C_BuildPanel_Params
	{
	public:
		struct FGameStatsSummary                                   Summary;                                                 // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    LengthSeconds;                                           // 0x0050(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LBFE[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                CategoryName;                                            // 0x0058(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                GameModeName;                                            // 0x0070(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_RoundVictory_StatsPanel.BP_RoundVictory_StatsPanel_C.Construct
	 */
	struct UBP_RoundVictory_StatsPanel_C_Construct_Params
	{	};

	/**
	 * Function BP_RoundVictory_StatsPanel.BP_RoundVictory_StatsPanel_C.PreConstruct
	 */
	struct UBP_RoundVictory_StatsPanel_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_RoundVictory_StatsPanel.BP_RoundVictory_StatsPanel_C.ExecuteUbergraph_BP_RoundVictory_StatsPanel
	 */
	struct UBP_RoundVictory_StatsPanel_C_ExecuteUbergraph_BP_RoundVictory_StatsPanel_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
