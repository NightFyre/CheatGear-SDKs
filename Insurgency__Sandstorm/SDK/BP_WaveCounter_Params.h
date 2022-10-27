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
	 * Function BP_WaveCounter.BP_WaveCounter_C.ToggleBlinking
	 */
	struct UBP_WaveCounter_C_ToggleBlinking_Params
	{
	public:
		bool                                                       Blink;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_39O9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_WaveCounter.BP_WaveCounter_C.Update Wave Count Visibility
	 */
	struct UBP_WaveCounter_C_Update_Wave_Count_Visibility_Params
	{	};

	/**
	 * Function BP_WaveCounter.BP_WaveCounter_C.UpdateWaveCount
	 */
	struct UBP_WaveCounter_C_UpdateWaveCount_Params
	{
	public:
		int32_t                                                    NewCount;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WaveCounter.BP_WaveCounter_C.GetWaveCountColor
	 */
	struct UBP_WaveCounter_C_GetWaveCountColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_WaveCounter.BP_WaveCounter_C.GetWaveCountVisibility
	 */
	struct UBP_WaveCounter_C_GetWaveCountVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WaveCounter.BP_WaveCounter_C.Tick
	 */
	struct UBP_WaveCounter_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WaveCounter.BP_WaveCounter_C.ChangeText
	 */
	struct UBP_WaveCounter_C_ChangeText_Params
	{	};

	/**
	 * Function BP_WaveCounter.BP_WaveCounter_C.PreConstruct
	 */
	struct UBP_WaveCounter_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_WaveCounter.BP_WaveCounter_C.OnUpdateFaction
	 */
	struct UBP_WaveCounter_C_OnUpdateFaction_Params
	{	};

	/**
	 * Function BP_WaveCounter.BP_WaveCounter_C.Construct
	 */
	struct UBP_WaveCounter_C_Construct_Params
	{	};

	/**
	 * Function BP_WaveCounter.BP_WaveCounter_C.OnRefreshTeams
	 */
	struct UBP_WaveCounter_C_OnRefreshTeams_Params
	{	};

	/**
	 * Function BP_WaveCounter.BP_WaveCounter_C.OnPlayerChangedTeam
	 */
	struct UBP_WaveCounter_C_OnPlayerChangedTeam_Params
	{
	public:
		unsigned char                                              TeamId;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_N8B0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ATeamInfo*                                           TeamInfo;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WaveCounter.BP_WaveCounter_C.CheckWaveCount
	 */
	struct UBP_WaveCounter_C_CheckWaveCount_Params
	{	};

	/**
	 * Function BP_WaveCounter.BP_WaveCounter_C.OnWaveShouldBlinkDelegate_Event_1
	 */
	struct UBP_WaveCounter_C_OnWaveShouldBlinkDelegate_Event_1_Params
	{
	public:
		bool                                                       bBlink;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_WaveCounter.BP_WaveCounter_C.ExecuteUbergraph_BP_WaveCounter
	 */
	struct UBP_WaveCounter_C_ExecuteUbergraph_BP_WaveCounter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PT5H[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_WaveCounter.BP_WaveCounter_C.OnWaveCountChange__DelegateSignature
	 */
	struct UBP_WaveCounter_C_OnWaveCountChange__DelegateSignature_Params
	{
	public:
		int32_t                                                    Difference;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
