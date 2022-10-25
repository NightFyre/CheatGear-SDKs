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
	 * BlueprintGeneratedClass MissionGraph_Takedown2.MissionGraph_Takedown2_C
	 * Size -> 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
	 */
	class UMissionGraph_Takedown2_C : public UMissionGraph
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0068(0x0008) Transient, DuplicateTransient

	public:
		void Takedown_at_the_Guardian_Breach();
		void Discovery_Takedown_at_the_Guardian_Breach();
		void ExecuteUbergraph_MissionGraph_Takedown2(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
