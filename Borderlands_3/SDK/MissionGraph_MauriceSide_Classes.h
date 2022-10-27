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
	 * BlueprintGeneratedClass MissionGraph_MauriceSide.MissionGraph_MauriceSide_C
	 * Size -> 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
	 */
	class UMissionGraph_MauriceSide_C : public UMissionGraph
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0068(0x0008) Transient, DuplicateTransient

	public:
		void Saurian_Not_Saurian();
		void ExecuteUbergraph_MissionGraph_MauriceSide(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
