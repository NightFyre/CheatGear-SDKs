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
	 * Function DiscordRpc.DiscordRpc.UpdatePresence
	 */
	struct UDiscordRpc_UpdatePresence_Params
	{	};

	/**
	 * Function DiscordRpc.DiscordRpc.Shutdown
	 */
	struct UDiscordRpc_Shutdown_Params
	{	};

	/**
	 * Function DiscordRpc.DiscordRpc.RunCallbacks
	 */
	struct UDiscordRpc_RunCallbacks_Params
	{	};

	/**
	 * Function DiscordRpc.DiscordRpc.Respond
	 */
	struct UDiscordRpc_Respond_Params
	{
	public:
		class FString                                              UserId;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Reply;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DiscordRpc.DiscordRpc.Initialize
	 */
	struct UDiscordRpc_Initialize_Params
	{
	public:
		class FString                                              applicationId;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       autoRegister;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GCPK[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              optionalSteamId;                                         // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DiscordRpc.DiscordRpc.ClearPresence
	 */
	struct UDiscordRpc_ClearPresence_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
