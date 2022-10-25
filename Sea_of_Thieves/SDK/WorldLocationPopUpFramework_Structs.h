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
	 * ScriptStruct WorldLocationPopUpFramework.PlayerEnteredWorldLocationNotificationEvent
	 * Size -> 0x0028
	 */
	struct FPlayerEnteredWorldLocationNotificationEvent
	{
	public:
		class UPopUpAudioDesc*                                     AudioOverride;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              IconPath;                                                // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              DisplayText;                                             // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
