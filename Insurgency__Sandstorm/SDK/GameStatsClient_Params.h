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
	 * Function GameStatsClient.GameStatsClientSubsystem.QueueXPRequest
	 */
	struct UGameStatsClientSubsystem_QueueXPRequest_Params
	{
	public:
		bool                                                       bForceUpdate;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameStatsClient.GameStatsClientSubsystem.IsBoostActiveForPlaylist
	 */
	struct UGameStatsClientSubsystem_IsBoostActiveForPlaylist_Params
	{
	public:
		class FString                                              PlaylistName;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Multiplier;                                              // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SUYN[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDateTime                                           Until;                                                   // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameStatsClient.GameStatsClientSubsystem.HasXP
	 */
	struct UGameStatsClientSubsystem_HasXP_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameStatsClient.GameStatsClientSubsystem.GetXP
	 */
	struct UGameStatsClientSubsystem_GetXP_Params
	{
	public:
		int64_t                                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
