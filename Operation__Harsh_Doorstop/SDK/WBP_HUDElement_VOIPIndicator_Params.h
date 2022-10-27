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
	 * Function WBP_HUDElement_VOIPIndicator.WBP_HUDElement_VOIPIndicator_C.ContainsTalkerListing
	 */
	struct UWBP_HUDElement_VOIPIndicator_C_ContainsTalkerListing_Params
	{
	public:
		class UHDVoiceChatMsgInfo*                                 PlayerMsgInfo;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bMatchFound;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_HUDElement_VOIPIndicator.WBP_HUDElement_VOIPIndicator_C.FindTalkerListing
	 */
	struct UWBP_HUDElement_VOIPIndicator_C_FindTalkerListing_Params
	{
	public:
		class UHDVoiceChatMsgInfo*                                 PlayerMsgInfo;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bListingFound;                                           // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IZ78[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWBP_HUDElement_VOIPIndicator_OutputListing_C*       TalkerListing;                                           // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HUDElement_VOIPIndicator.WBP_HUDElement_VOIPIndicator_C.PlayerStoppedTalking
	 */
	struct UWBP_HUDElement_VOIPIndicator_C_PlayerStoppedTalking_Params
	{
	public:
		class UHDVoiceChatMsgInfo*                                 TalkerMsgInfo;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HUDElement_VOIPIndicator.WBP_HUDElement_VOIPIndicator_C.PlayerStartedTalking
	 */
	struct UWBP_HUDElement_VOIPIndicator_C_PlayerStartedTalking_Params
	{
	public:
		class UHDVoiceChatMsgInfo*                                 TalkerMsgInfo;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HUDElement_VOIPIndicator.WBP_HUDElement_VOIPIndicator_C.OnPlayerStartTalking
	 */
	struct UWBP_HUDElement_VOIPIndicator_C_OnPlayerStartTalking_Params
	{
	public:
		class UHDVoiceChatMsgInfo*                                 TalkerMsgInfo;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HUDElement_VOIPIndicator.WBP_HUDElement_VOIPIndicator_C.OnPlayerStopTalking
	 */
	struct UWBP_HUDElement_VOIPIndicator_C_OnPlayerStopTalking_Params
	{
	public:
		class UHDVoiceChatMsgInfo*                                 TalkerMsgInfo;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HUDElement_VOIPIndicator.WBP_HUDElement_VOIPIndicator_C.OnOwningPlayerStartTalking
	 */
	struct UWBP_HUDElement_VOIPIndicator_C_OnOwningPlayerStartTalking_Params
	{
	public:
		class UHDVoiceChatMsgInfo*                                 LocalTalkerMsgInfo;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HUDElement_VOIPIndicator.WBP_HUDElement_VOIPIndicator_C.OnOwningPlayerStopTalking
	 */
	struct UWBP_HUDElement_VOIPIndicator_C_OnOwningPlayerStopTalking_Params
	{
	public:
		class UHDVoiceChatMsgInfo*                                 LocalTalkerMsgInfo;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HUDElement_VOIPIndicator.WBP_HUDElement_VOIPIndicator_C.PreConstruct
	 */
	struct UWBP_HUDElement_VOIPIndicator_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_HUDElement_VOIPIndicator.WBP_HUDElement_VOIPIndicator_C.ExecuteUbergraph_WBP_HUDElement_VOIPIndicator
	 */
	struct UWBP_HUDElement_VOIPIndicator_C_ExecuteUbergraph_WBP_HUDElement_VOIPIndicator_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GHJ9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
