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
	 * AnimBlueprintGeneratedClass BPAnim_PS_TED_Legs.BPAnim_PS_TED_Legs_C
	 * Size -> 0x0B58 (FullSize[0x1640] - InheritedSize[0x0AE8])
	 */
	class UBPAnim_PS_TED_Legs_C : public UOakCharacterAnimInstance
	{
	public:
		unsigned char                                              UnknownData_3MEU[0x8];                                   // 0x0AE8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0AF0(0x0008) Transient, DuplicateTransient
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_FF8556324C55EAA047EFE5AD0AB97FD7; // 0x0AF8(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_E42B0CAF4EFD295A94DD5D82616975EC; // 0x0B48(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3A73355847EF7B31FA972DA3E46D86D4; // 0x0B98(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8BF11D714755FD0B96E10182AA17015D; // 0x0BE8(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5131C524446B71C07F2FC4AC073D79F3; // 0x0C38(0x00F0)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_34E3C0654D90A343FAC1379D40BBDDEA; // 0x0D28(0x0048)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_775735114E9AF1DFCC8A0E9E8CC519CB; // 0x0D70(0x0160)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_613E0B494AE2BD8A09F1DEA8CE53E080; // 0x0ED0(0x0048)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_8695DF394AFEF67DCF68E69D4D5D4DBD; // 0x0F18(0x0080)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_FBD661EB4F7CAC036295F08402A8C40C; // 0x0F98(0x0048)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_79192A064E293ECEC2ED909BBB6FF7CE; // 0x0FE0(0x0188)
		unsigned char                                              UnknownData_578C[0x8];                                   // 0x1168(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_FA8D33F8499AE27A82F7CCA831163EA5;     // 0x1170(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_7F5DF62140A3069AE3C22983488D6227;     // 0x1220(0x00B0)
		struct FAnimNode_Root                                      AnimGraphNode_Root_BC9E91F84BBDC824F18E98A2469796DB;     // 0x12D0(0x0048)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_F8FE7C5241A28939501E3997CA88BB9D; // 0x1318(0x0048)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_3FC0186F42CEB2275504BAAB5B57C1E6;   // 0x1360(0x0290)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_35D146094494052DF3D83298E9C0BA94; // 0x15F0(0x0048)
		class ABPChar_TedioreTurret_C*                             Base_BPChar;                                             // 0x1638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_TED_Legs_AnimGraphNode_TransitionResult_8BF11D714755FD0B96E10182AA17015D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_TED_Legs_AnimGraphNode_LookAt_3FC0186F42CEB2275504BAAB5B57C1E6();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_TED_Legs_AnimGraphNode_TransitionResult_3A73355847EF7B31FA972DA3E46D86D4();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_TED_Legs_AnimGraphNode_BlendSpacePlayer_775735114E9AF1DFCC8A0E9E8CC519CB();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_TED_Legs_AnimGraphNode_TransitionResult_FF8556324C55EAA047EFE5AD0AB97FD7();
		void BlueprintInitializeAnimation();
		void ExecuteUbergraph_BPAnim_PS_TED_Legs(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
