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
	 * BlueprintGeneratedClass Improvised_Wooden_Chest.Improvised_Wooden_Chest_C
	 * Size -> 0x0008 (FullSize[0x09C0] - InheritedSize[0x09B8])
	 */
	class AImprovised_Wooden_Chest_C : public AChestItem
	{
	public:
		unsigned char                                              UnknownData_2ULA[0x8];                                   // 0x09B8(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
