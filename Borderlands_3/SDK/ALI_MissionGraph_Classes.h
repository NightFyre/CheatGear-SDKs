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
	 * BlueprintGeneratedClass ALI_MissionGraph.ALI_MissionGraph_C
	 * Size -> 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
	 */
	class UALI_MissionGraph_C : public UMissionGraph
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0068(0x0008) Transient, DuplicateTransient

	public:
		void Siege_of_Castle_Crimson();
		void What_Love_Remains();
		void Inhuman_Trials();
		void Locus_of_Rage();
		void Enter_the_Psychoscape();
		void A_Good_Egg();
		void Don_t_Call_it_a_Rorschach();
		void Remodel_Behavior();
		void It_s_an_Allegory();
		void Does_a_Body_Good();
		void That_Rings_a_Something();
		void Krieg_s_on_Parade();
		void Scratch_Don_t_Sniff();
		void Brainstorm();
		void Check_Please();
		void Laid_to_Rust();
		void Blast_Requests();
		void Hot_and_Unbothered();
		void ExecuteUbergraph_ALI_MissionGraph(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
