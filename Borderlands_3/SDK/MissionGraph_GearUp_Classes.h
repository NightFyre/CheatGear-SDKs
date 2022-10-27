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
	 * BlueprintGeneratedClass MissionGraph_GearUp.MissionGraph_GearUp_C
	 * Size -> 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
	 */
	class UMissionGraph_GearUp_C : public UMissionGraph
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0068(0x0008) Transient, DuplicateTransient

	public:
		void Shlooting_Spree_Introduction();
		void Shlooting_Spree();
		void ExecuteUbergraph_MissionGraph_GearUp(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
