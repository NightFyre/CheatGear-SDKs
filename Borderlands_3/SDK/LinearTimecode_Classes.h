#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * Class LinearTimecode.LinearTimecodeComponent
	 * Size -> 0x0070 (FullSize[0x0340] - InheritedSize[0x02D0])
	 */
	class ULinearTimecodeComponent : public USceneComponent
	{
	public:
		class UMediaPlayer*                                        MediaPlayer;                                             // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDropTimecode                                       DropTimecode;                                            // 0x02D8(0x001C) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NAKI[0x4];                                   // 0x02F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnTimecodeChange;                                        // 0x02F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EQHE[0x38];                                  // 0x0308(0x0038) MISSED OFFSET (PADDING)

	public:
		void STATIC_SetDropTimecodeFrameNumber(const struct FDropTimecode& Timecode, int32_t FrameNumber, struct FDropTimecode* OutTimecode);
		void STATIC_GetDropTimeCodeFrameNumber(const struct FDropTimecode& Timecode, int32_t* FrameNumber);
		int32_t GetDropFrameNumber();
		static UClass* StaticClass();
	};

	/**
	 * Class LinearTimecode.DropTimecodeToStringConversion
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDropTimecodeToStringConversion : public UBlueprintFunctionLibrary
	{
	public:
		class FString STATIC_Conv_DropTimecodeToString(const struct FDropTimecode& InTimecode);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
