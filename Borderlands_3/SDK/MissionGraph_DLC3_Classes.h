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
	 * BlueprintGeneratedClass MissionGraph_DLC3.MissionGraph_DLC3_C
	 * Size -> 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
	 */
	class UMissionGraph_DLC3_C : public UMissionGraph
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0068(0x0008) Transient, DuplicateTransient

	public:
		void Riding_to_Ruin();
		void Devil_Rustlers();
		void Saurdew_Valley();
		void Dirty_Deeds();
		void The_Legend_of_McSmugger();
		void The_Meatman_Prophecy();
		void Lost_and_Found();
		void The_Dandy_and_Damsel();
		void Of_Blood_and_Beans();
		void Miracle_Elixir_Fixer();
		void Money_Back_Guarantee();
		void The_Quick_and_the_Quickerer();
		void Where_it_all_Started();
		void Off_the_Rails();
		void The_Name_of_the_Law();
		void Blood_From_a_Stone();
		void ExecuteUbergraph_MissionGraph_DLC3(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
