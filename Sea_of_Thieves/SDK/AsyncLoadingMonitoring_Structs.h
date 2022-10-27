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
	 * ScriptStruct AsyncLoadingMonitoring.AsyncExcessiveLoadTelemetryEvent
	 * Size -> 0x0028
	 */
	struct FAsyncExcessiveLoadTelemetryEvent
	{
	public:
		int32_t                                                    FrameCounter;                                            // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_3V6Q[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     ExpectedAsyncLoadingTime;                                // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ActualAsyncLoadingTime;                                  // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FString>                                      AssetRequestList;                                        // 0x0018(0x0010) ZeroConstructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
