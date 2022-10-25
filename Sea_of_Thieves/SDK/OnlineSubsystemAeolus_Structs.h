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
	 * ScriptStruct OnlineSubsystemAeolus.SessionJoinThroughServiceRequestModel
	 * Size -> 0x0020
	 */
	struct FSessionJoinThroughServiceRequestModel
	{
	public:
		class FString                                              OwningUserId;                                            // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              SessionTemplateName;                                     // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
