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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class AnimGraphRuntime.AnimSequencerInstance
	 * Size -> 0x01A0 (FullSize[0x05E0] - InheritedSize[0x0440])
	 */
	class UAnimSequencerInstance : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_I3DP[0x1A0];                                 // 0x0440(0x01A0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
