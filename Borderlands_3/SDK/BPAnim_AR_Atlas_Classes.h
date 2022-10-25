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
	 * AnimBlueprintGeneratedClass BPAnim_AR_Atlas.BPAnim_AR_Atlas_C
	 * Size -> 0x0E5B (FullSize[0x12EB] - InheritedSize[0x0490])
	 */
	class UBPAnim_AR_Atlas_C : public UOakWeaponAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0490(0x0008) Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_52C06C5F41A001363CC45E99991461DD;     // 0x0498(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_9A2E1A07401442326845728D648A793B;     // 0x04E0(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_1E8BBAAB4C7F24A9E50F418595C8ED0D;     // 0x0590(0x00B0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_D527A3324C817732DD5ECDAD96D0182D; // 0x0640(0x0120)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_99B6161A4BB842478EAF7595FA9991B9; // 0x0760(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_52EF12E24C9F82D371E6E984A36736CA; // 0x07B0(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_0DD707484984EC4E8A37A5BB3BF49854; // 0x0800(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7EA6707C4B5DB6E7A689A7B536D7AE17; // 0x0850(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_0E201B4C49854936D95210A7812271D4; // 0x08A0(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_20C1991545A4001AA5B37892D919AF4D; // 0x08F0(0x00F0)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_7A1B6B2F4B5B2E870F8F8D9310FF260D; // 0x09E0(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_1F0594804BDEA470B9344AA7F75B0080; // 0x0A28(0x00F0)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_8DAC1D4B4F1BD8DD65787DAEC9D408AA; // 0x0B18(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2D88CE2C4D867AF1633D18B828D2AC54; // 0x0B60(0x00F0)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_F52173C54E8FD4BBFDD08296C9121983; // 0x0C50(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_E2E01FC647065F6934B1609BDB8239E4; // 0x0C98(0x00F0)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_A449A134486D42B8A65BB986C54F4EBC; // 0x0D88(0x0048)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_8CF042174A5E1A0AE8550FBE15F746F1; // 0x0DD0(0x0188)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_41F5417A44D60B242B402B8EBA74B52C; // 0x0F58(0x00D0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_02A46F754CEA9192296380BF5BFD1391; // 0x1028(0x0080)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_A304F3FD48387A6EBC72458EFD9F45BD; // 0x10A8(0x0080)
		unsigned char                                              UnknownData_O4T1[0x8];                                   // 0x1128(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_25EA49A64FA5470BF1D6EAAC88C8125D;     // 0x1130(0x00B0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_52A48A884A31F5FA320A6EADCDF09845; // 0x11E0(0x0080)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_21A1ADEB4421117DE40BA7BD5B331E98; // 0x1260(0x0080)
		class ABPWeap_ATL_BaseWeapon_C*                            BaseWeapon;                                              // 0x12E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HasHomingTarget;                                         // 0x12E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       HasFiredRecently;                                        // 0x12E9(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bFlapsOut;                                               // 0x12EA(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_Atlas_AnimGraphNode_TransitionResult_52EF12E24C9F82D371E6E984A36736CA();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_Atlas_AnimGraphNode_TransitionResult_7EA6707C4B5DB6E7A689A7B536D7AE17();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_Atlas_AnimGraphNode_TransitionResult_0E201B4C49854936D95210A7812271D4();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_Atlas_AnimGraphNode_SequencePlayer_20C1991545A4001AA5B37892D919AF4D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_Atlas_AnimGraphNode_SequencePlayer_1F0594804BDEA470B9344AA7F75B0080();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_Atlas_AnimGraphNode_BlendListByBool_41F5417A44D60B242B402B8EBA74B52C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_Atlas_AnimGraphNode_SequenceEvaluator_52A48A884A31F5FA320A6EADCDF09845();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_Atlas_AnimGraphNode_SequenceEvaluator_21A1ADEB4421117DE40BA7BD5B331E98();
		void BlueprintInitializeAnimation();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_BPAnim_AR_Atlas(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
