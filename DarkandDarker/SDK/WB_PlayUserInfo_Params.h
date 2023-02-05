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
	 * Function WB_PlayUserInfo.WB_PlayUserInfo_C.OnPlayUserInfo
	 */
	struct UWB_PlayUserInfo_C_OnPlayUserInfo_Params
	{
	public:
		struct FPlayPartyUserInfo                                  PlayPartyUserInfo;                                       // 0x0000(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WB_PlayUserInfo.WB_PlayUserInfo_C.OnLoadArtData
	 */
	struct UWB_PlayUserInfo_C_OnLoadArtData_Params
	{
	public:
		class UObject*                                             InObjectLoaded;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_PlayUserInfo.WB_PlayUserInfo_C.OnPlayPartyUserState
	 */
	struct UWB_PlayUserInfo_C_OnPlayPartyUserState_Params
	{
	public:
		EWidgetPlayUserPartyState                                  Ready;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_PlayUserInfo.WB_PlayUserInfo_C.OnUpdateLobbyCharacterInfo
	 */
	struct UWB_PlayUserInfo_C_OnUpdateLobbyCharacterInfo_Params
	{
	public:
		struct FLobbyCharacterInfo                                 LobbyCharacterInfo;                                      // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WB_PlayUserInfo.WB_PlayUserInfo_C.OnLocationUpdate
	 */
	struct UWB_PlayUserInfo_C_OnLocationUpdate_Params
	{
	public:
		struct FClientMsgPartyCharacterInfo                        PartyCharacterInfo;                                      // 0x0000(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    MetaLocationIndex;                                       // 0x0070(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_PlayUserInfo.WB_PlayUserInfo_C.OnUpdateLocationCacheData
	 */
	struct UWB_PlayUserInfo_C_OnUpdateLocationCacheData_Params
	{
	public:
		int32_t                                                    MetaLopcationIndex;                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_PlayUserInfo.WB_PlayUserInfo_C.ExecuteUbergraph_WB_PlayUserInfo
	 */
	struct UWB_PlayUserInfo_C_ExecuteUbergraph_WB_PlayUserInfo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_899X[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WB_PlayUserInfo.WB_PlayUserInfo_C.NewEventDispatcher_0__DelegateSignature
	 */
	struct UWB_PlayUserInfo_C_NewEventDispatcher_0__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
