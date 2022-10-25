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
	 * Function BP_VoiceStatus.BP_VoiceStatus_C.AddSpacer
	 */
	struct UBP_VoiceStatus_C_AddSpacer_Params
	{	};

	/**
	 * Function BP_VoiceStatus.BP_VoiceStatus_C.InitializeList
	 */
	struct UBP_VoiceStatus_C_InitializeList_Params
	{	};

	/**
	 * Function BP_VoiceStatus.BP_VoiceStatus_C.RegenerateList
	 */
	struct UBP_VoiceStatus_C_RegenerateList_Params
	{	};

	/**
	 * Function BP_VoiceStatus.BP_VoiceStatus_C.Construct
	 */
	struct UBP_VoiceStatus_C_Construct_Params
	{	};

	/**
	 * Function BP_VoiceStatus.BP_VoiceStatus_C.OnPlayerTalkingStateChanged
	 */
	struct UBP_VoiceStatus_C_OnPlayerTalkingStateChanged_Params
	{
	public:
		class APlayerState*                                        PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsTalking;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_VoiceStatus.BP_VoiceStatus_C.OnTalkingPlayersChanged
	 */
	struct UBP_VoiceStatus_C_OnTalkingPlayersChanged_Params
	{
	public:
		TArray<class APlayerState*>                                InTalkingPlayers;                                        // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_VoiceStatus.BP_VoiceStatus_C.ExecuteUbergraph_BP_VoiceStatus
	 */
	struct UBP_VoiceStatus_C_ExecuteUbergraph_BP_VoiceStatus_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YJ48[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
