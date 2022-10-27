#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct AccountLinking.SteamAccountLinkRequest
	 * Size -> 0x0030
	 */
	struct FSteamAccountLinkRequest
	{
	public:
		class FString                                              NetworkToken;                                            // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              NetworkAppId;                                            // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              AppId;                                                   // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
