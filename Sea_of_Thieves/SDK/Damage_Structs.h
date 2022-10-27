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
	 * ScriptStruct Damage.TriggerPlayerControllerHitNotificationNetworkEvent
	 * Size -> 0x0008 (FullSize[0x0018] - InheritedSize[0x0010])
	 */
	struct FTriggerPlayerControllerHitNotificationNetworkEvent : public FNetworkEventStruct
	{
	public:
		bool                                                       IsKillingHit;                                            // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_07DK[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
