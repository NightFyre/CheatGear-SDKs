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
	 * BlueprintGeneratedClass TravelGraph_DLC3.TravelGraph_DLC3_C
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UTravelGraph_DLC3_C : public UTravelGraph
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0090(0x0008) Transient, DuplicateTransient

	public:
		void ExecuteUbergraph_TravelGraph_DLC3(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
