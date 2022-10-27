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
	 * BlueprintGeneratedClass BP_PhaseTranceSingularity_Slam_Fracture.BP_PhaseTranceSingularity_Slam_Fracture_C
	 * Size -> 0x0008 (FullSize[0x05B0] - InheritedSize[0x05A8])
	 */
	class ABP_PhaseTranceSingularity_Slam_Fracture_C : public ABP_PhaseTranceSingularity_Slam_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05A8(0x0008) Transient, DuplicateTransient

	public:
		void GetSingularityAttachComponent(class UBoxComponent** res);
		void UserConstructionScript();
		void ConfigureSingularity();
		void ExecuteUbergraph_BP_PhaseTranceSingularity_Slam_Fracture(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
