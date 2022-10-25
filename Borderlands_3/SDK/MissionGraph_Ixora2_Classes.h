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
	 * BlueprintGeneratedClass MissionGraph_Ixora2.MissionGraph_Ixora2_C
	 * Size -> 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
	 */
	class UMissionGraph_Ixora2_C : public UMissionGraph
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0068(0x0008) Transient, DuplicateTransient

	public:
		void Mysteriouslier_Murder_on_Eschaton_Row();
		void Mysteriouslier_The_Vanishing_of_Hizzen_Mays();
		void Mysteriouslier_Ghosts_of_Karass_Canyon();
		void Mysteriouslier_Horror_at_Scryer_s_Crypt();
		void You_Will_Die_Over_and_Over();
		void ExecuteUbergraph_MissionGraph_Ixora2(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
