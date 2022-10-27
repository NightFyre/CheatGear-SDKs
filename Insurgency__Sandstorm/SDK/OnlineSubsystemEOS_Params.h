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
	 * Function OnlineSubsystemEOS.AntiCheatNetComponentEOS.ServerSendMessage
	 */
	struct UAntiCheatNetComponentEOS_ServerSendMessage_Params
	{
	public:
		TArray<unsigned char>                                      Message;                                                 // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineSubsystemEOS.AntiCheatNetComponentEOS.ServerCheckSanctions
	 */
	struct UAntiCheatNetComponentEOS_ServerCheckSanctions_Params
	{
	public:
		struct FUniqueNetIdRepl                                    UserId;                                                  // 0x0000(0x0028)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineSubsystemEOS.AntiCheatNetComponentEOS.OnRep_IsRegisteredEOS
	 */
	struct UAntiCheatNetComponentEOS_OnRep_IsRegisteredEOS_Params
	{	};

	/**
	 * Function OnlineSubsystemEOS.AntiCheatNetComponentEOS.ClientSendMessage
	 */
	struct UAntiCheatNetComponentEOS_ClientSendMessage_Params
	{
	public:
		TArray<unsigned char>                                      Message;                                                 // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
