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
	 * AnimBlueprintGeneratedClass BPAnim_Operative_Cannon_1st.BPAnim_Operative_Cannon_1st_C
	 * Size -> 0x0358 (FullSize[0x0890] - InheritedSize[0x0538])
	 */
	class UBPAnim_Operative_Cannon_1st_C : public UGbxAnimInstance
	{
	public:
		unsigned char                                              UnknownData_D0RY[0x8];                                   // 0x0538(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0540(0x0008) Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_27823D5748097C1658FBDF88C291855F;     // 0x0548(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2335328749219AEA5080F482061C2275; // 0x0590(0x00F0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_5FC1FBF04A3136AF88E3E1BC50374F2C;     // 0x0680(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_314CF21048986FE5F836F984C2CAFA16;     // 0x0730(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_B53155E14D1F6291516D318AB9488040;     // 0x07E0(0x00B0)

	public:
		void ExecuteUbergraph_BPAnim_Operative_Cannon_1st(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
