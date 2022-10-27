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
	 * Function ConsoleCertificationRequirements.AccountNickname.GetActiveAccountNickname
	 */
	struct UAccountNickname_GetActiveAccountNickname_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ConsoleCertificationRequirements.AccountNickname.BP_OnAccountChanged
	 */
	struct UAccountNickname_BP_OnAccountChanged_Params
	{
	public:
		int32_t                                                    ActiveControllerId;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ConsoleCertificationRequirements.NetworkConnectionStatus.BP_OnConnectionStatusChanged
	 */
	struct UNetworkConnectionStatus_BP_OnConnectionStatusChanged_Params
	{
	public:
		bool                                                       bConnected;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
