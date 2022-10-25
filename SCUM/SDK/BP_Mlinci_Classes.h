#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * BlueprintGeneratedClass BP_Mlinci.BP_Mlinci_C
	 * Size -> 0x0008 (FullSize[0x0A60] - InheritedSize[0x0A58])
	 */
	class ABP_Mlinci_C : public AFoodItem
	{
	public:
		unsigned char                                              UnknownData_Q9AD[0x8];                                   // 0x0A58(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
