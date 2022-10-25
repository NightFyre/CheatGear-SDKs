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
	 * AnimBlueprintGeneratedClass BPAnim_IronBear_GrenadeLauncher.BPAnim_IronBear_GrenadeLauncher_C
	 * Size -> 0x0138 (FullSize[0x0578] - InheritedSize[0x0440])
	 */
	class UBPAnim_IronBear_GrenadeLauncher_C : public UAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0440(0x0008) Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_0A624C3C4AD5EEE2D072178E630B68DC;     // 0x0448(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_86B864FE4000DA0CD177B48E9BCEAD87;     // 0x0490(0x00B0)
		struct FAnimNode_RefPose                                   AnimGraphNode_LocalRefPose_D9A6C7AA409FF9C00432D29471CECB16; // 0x0540(0x0038)

	public:
		void ExecuteUbergraph_BPAnim_IronBear_GrenadeLauncher(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
