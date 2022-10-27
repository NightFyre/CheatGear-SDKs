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
	 * BlueprintGeneratedClass Proj_ATL_HW_PodRocket_Barrel_02.Proj_ATL_HW_PodRocket_Barrel_02_C
	 * Size -> 0x0008 (FullSize[0x07D8] - InheritedSize[0x07D0])
	 */
	class AProj_ATL_HW_PodRocket_Barrel_02_C : public AProj_ATL_HW_PodRocket_Master_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x07D0(0x0008) Transient, DuplicateTransient

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_Proj_ATL_HW_PodRocket_Barrel_02(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
