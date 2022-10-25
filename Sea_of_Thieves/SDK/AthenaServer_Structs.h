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
	 * ScriptStruct AthenaServer.IdleTimeTracker
	 * Size -> 0x0038
	 */
	struct FIdleTimeTracker
	{
	public:
		struct FTimespan                                           InactivityThreshold;                                     // 0x0000(0x0008) Edit, ZeroConstructor
		unsigned char                                              UnknownData_NQKX[0x30];                                  // 0x0008(0x0030) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
