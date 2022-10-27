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
	 * AnimBlueprintGeneratedClass BPAnim_PlayerCharacter_BaseHead.BPAnim_PlayerCharacter_BaseHead_C
	 * Size -> 0x0488 (FullSize[0x09C0] - InheritedSize[0x0538])
	 */
	class UBPAnim_PlayerCharacter_BaseHead_C : public UGbxAnimInstance
	{
	public:
		unsigned char                                              UnknownData_4I1O[0x8];                                   // 0x0538(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0540(0x0008) Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_2247D28045061B601ADCA3B21C3610F3;     // 0x0548(0x0048)
		struct FGbxAnimNode_CopyParentTransforms                   GbxAnimGraphNode_CopyParentTransforms_38D4052440DFC51A4DAE388E1A9E8834; // 0x0590(0x0040)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_6BC9F3C040F12B2F8EA35F9AE0D95E2B; // 0x05D0(0x0120)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_0DFF4BD544810D93F2B95889C2800467; // 0x06F0(0x00E0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_6A13AC12430185E9ABC63A957F544D3D; // 0x07D0(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_78C104E34C687864DCF8B88993564FAB; // 0x0820(0x00F0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_79EBD5D942399AAD80FB6C8E2B42EE94;     // 0x0910(0x00B0)

	public:
		void ExecuteUbergraph_BPAnim_PlayerCharacter_BaseHead(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
