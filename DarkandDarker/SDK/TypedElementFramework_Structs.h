#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * ScriptStruct TypedElementFramework.ScriptTypedElementHandle
	 * Size -> 0x0008
	 */
	struct FScriptTypedElementHandle
	{
	public:
		unsigned char                                              UnknownData_QYWI[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TypedElementFramework.ScriptTypedElementListProxy
	 * Size -> 0x0010
	 */
	struct FScriptTypedElementListProxy
	{
	public:
		unsigned char                                              UnknownData_MC43[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
