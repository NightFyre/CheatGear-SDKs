#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * Function BP_HDVOIPTalker.BP_HDVOIPTalker_C.ListenForTalkingStateChangedEvents
	 */
	struct UBP_HDVOIPTalker_C_ListenForTalkingStateChangedEvents_Params
	{	};

	/**
	 * Function BP_HDVOIPTalker.BP_HDVOIPTalker_C.UpdateSettingsUsageForNextBeginTalk
	 */
	struct UBP_HDVOIPTalker_C_UpdateSettingsUsageForNextBeginTalk_Params
	{
	public:
		bool                                                       bUseSpatialized;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSettingsUpdated;                                        // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NIAL[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_HDVOIPTalker.BP_HDVOIPTalker_C.RegisterTalker
	 */
	struct UBP_HDVOIPTalker_C_RegisterTalker_Params
	{
	public:
		class APlayerState*                                        InRegisteredPS;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVoiceSettings                                      InSpatializedSettings;                                   // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		struct FVoiceSettings                                      InNonSpatializedSettings;                                // 0x0020(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		bool                                                       bStartSpatialized;                                       // 0x0038(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDVOIPTalker.BP_HDVOIPTalker_C.BPOnTalkingBegin
	 */
	struct UBP_HDVOIPTalker_C_BPOnTalkingBegin_Params
	{
	public:
		class UAudioComponent*                                     AudioComponent;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDVOIPTalker.BP_HDVOIPTalker_C.BPOnTalkingEnd
	 */
	struct UBP_HDVOIPTalker_C_BPOnTalkingEnd_Params
	{	};

	/**
	 * Function BP_HDVOIPTalker.BP_HDVOIPTalker_C.TalkStateChangedOnChannel
	 */
	struct UBP_HDVOIPTalker_C_TalkStateChangedOnChannel_Params
	{
	public:
		class UDFCommChannel*                                      MsgTalkerChannel;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerState*                                        MsgTalkerPS;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bMsgIsTalking;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDVOIPTalker.BP_HDVOIPTalker_C.ExecuteUbergraph_BP_HDVOIPTalker
	 */
	struct UBP_HDVOIPTalker_C_ExecuteUbergraph_BP_HDVOIPTalker_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
