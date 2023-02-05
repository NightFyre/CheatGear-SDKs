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
	 * Function WB_LobbyAnnounce.WB_LobbyAnnounce_C.GetLocalizedString
	 */
	struct UWB_LobbyAnnounce_C_GetLocalizedString_Params
	{
	public:
		class FString                                              Text;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Namespace;                                               // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Key;                                                     // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              LocalizedString;                                         // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_LobbyAnnounce.WB_LobbyAnnounce_C.OnAnnounceEnd
	 */
	struct UWB_LobbyAnnounce_C_OnAnnounceEnd_Params
	{	};

	/**
	 * Function WB_LobbyAnnounce.WB_LobbyAnnounce_C.Destruct
	 */
	struct UWB_LobbyAnnounce_C_Destruct_Params
	{	};

	/**
	 * Function WB_LobbyAnnounce.WB_LobbyAnnounce_C.OnInitialized
	 */
	struct UWB_LobbyAnnounce_C_OnInitialized_Params
	{	};

	/**
	 * Function WB_LobbyAnnounce.WB_LobbyAnnounce_C.Construct
	 */
	struct UWB_LobbyAnnounce_C_Construct_Params
	{	};

	/**
	 * Function WB_LobbyAnnounce.WB_LobbyAnnounce_C.EventMsgLobbyAnnounce
	 */
	struct UWB_LobbyAnnounce_C_EventMsgLobbyAnnounce_Params
	{
	public:
		class FString                                              AnnounceText;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_LobbyAnnounce.WB_LobbyAnnounce_C.ExecuteUbergraph_WB_LobbyAnnounce
	 */
	struct UWB_LobbyAnnounce_C_ExecuteUbergraph_WB_LobbyAnnounce_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WUU8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
