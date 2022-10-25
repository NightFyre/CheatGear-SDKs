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
	 * AnimBlueprintGeneratedClass BPAnim_SkillScreenAnimInstance.BPAnim_SkillScreenAnimInstance_C
	 * Size -> 0x1260 (FullSize[0x17B0] - InheritedSize[0x0550])
	 */
	class UBPAnim_SkillScreenAnimInstance_C : public USkillScreenStandInAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0550(0x0008) Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_043746364186DDD8556933904D5CD727;     // 0x0558(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_424D26484463D619F88351A4D4929D3B;     // 0x05A0(0x00B0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_4CEEC3F448DB023E5912B8B84D9F9BBE; // 0x0650(0x00D0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_C39DA04C444B5186A01198ACE735363F; // 0x0720(0x00F0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_C60F04704BAEEAFCBA51CCA7A9C7A787; // 0x0810(0x00F0)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_C61B14484C852D4259F3FC9463CAD25D; // 0x0900(0x0048)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_3F508EC248C1BC45871242B588D70557; // 0x0948(0x0188)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK_6CC8D42B460424FF5B2BB1964887C46C; // 0x0AD0(0x0290)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK_2BDB2CC74D4AAE22711A81A6A3F94BFA; // 0x0D60(0x0290)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_6F5B02AF4402F4592DCD58A650B18417; // 0x0FF0(0x0048)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_024AEBA140800F4D3E6B6C887F679705; // 0x1038(0x0048)
		struct FGbxAnimNode_ForwardDynamics                        GbxAnimGraphNode_ForwardDynamics_3CD7C598444F26DB60A385B4AA4BAFFC; // 0x1080(0x0730)

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SkillScreenAnimInstance_AnimGraphNode_BlendListByBool_4CEEC3F448DB023E5912B8B84D9F9BBE();
		void ExecuteUbergraph_BPAnim_SkillScreenAnimInstance(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
