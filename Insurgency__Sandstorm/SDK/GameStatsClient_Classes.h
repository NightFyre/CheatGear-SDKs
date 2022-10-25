#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class GameStatsClient.GameStatsClientSubsystem
	 * Size -> 0x02C8 (FullSize[0x02F8] - InheritedSize[0x0030])
	 */
	class UGameStatsClientSubsystem : public ULocalPlayerSubsystem
	{
	public:
		unsigned char                                              UnknownData_RPSS[0x20];                                  // 0x0030(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnXPUpdated;                                             // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1XRQ[0x228];                                 // 0x0060(0x0228) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnXPBoostsUpdated;                                       // 0x0288(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6Y2T[0x60];                                  // 0x0298(0x0060) MISSED OFFSET (PADDING)

	public:
		void QueueXPRequest(bool bForceUpdate);
		bool IsBoostActiveForPlaylist(const class FString& PlaylistName, float* Multiplier, struct FDateTime* Until);
		bool HasXP();
		int64_t GetXP();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
