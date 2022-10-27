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
	 * AnimBlueprintGeneratedClass BPAnim_PS_ATL.BPAnim_PS_ATL_C
	 * Size -> 0x0BEC (FullSize[0x107C] - InheritedSize[0x0490])
	 */
	class UBPAnim_PS_ATL_C : public UOakWeaponAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0490(0x0008) Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_62B1E93A42E8945B3DDC81B6B097485E;     // 0x0498(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_DD2669F9419F28CA2DB7F4BCE89EE845;     // 0x04E0(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_6821F4FF4B19F2C9C1F1D7B6F74907F7;     // 0x0590(0x00B0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_F8BFC989489DEC450686F6951A3D565A; // 0x0640(0x0120)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_88765E4A435537032CD702BE598FEF79; // 0x0760(0x0080)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_F3FD79ED48E720D54AAD73BF31809B1E; // 0x07E0(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_07F7EE804346FE12315540BC87FC2D4A; // 0x0860(0x00D0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_8B4FA7E643474E14E2B94782164A702D;     // 0x0930(0x00B0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_7808892344E5933391BCE68C699D9C5B; // 0x09E0(0x0080)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_2A7D6DC4482CFB1AA8A74587223C5226; // 0x0A60(0x0080)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_ABFDDE1447D8528B5AF41295BD426875; // 0x0AE0(0x0120)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_AF540188488A2834436832A325F76159; // 0x0C00(0x0080)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_E2CCCBC94BAF9E9C20BA38B77DFDFB75; // 0x0C80(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_B0DF85E84BD9785DE6CBDC8CB58D36B1; // 0x0D00(0x00D0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_9A9F22054C1A501F196BDEA13FF18272; // 0x0DD0(0x0120)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_097CDEC7436D43DB5D3E93A8C5089A70; // 0x0EF0(0x00E0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_E419A2BD423EA42266A6E89A1469AC1B; // 0x0FD0(0x0050)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_8D0E76CE4FE9DE3814368AB543F4702C; // 0x1020(0x0050)
		class ABPWeap_ATL_BaseWeapon_C*                            BaseWeapon;                                              // 0x1070(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HasHomingTarget;                                         // 0x1078(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       HasFiredRecently;                                        // 0x1079(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bFlapsOut;                                               // 0x107A(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       MarkerMode;                                              // 0x107B(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_ATL_AnimGraphNode_BlendListByBool_07F7EE804346FE12315540BC87FC2D4A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_ATL_AnimGraphNode_SequenceEvaluator_7808892344E5933391BCE68C699D9C5B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_ATL_AnimGraphNode_SequenceEvaluator_2A7D6DC4482CFB1AA8A74587223C5226();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_ATL_AnimGraphNode_BlendListByBool_B0DF85E84BD9785DE6CBDC8CB58D36B1();
		void BlueprintInitializeAnimation();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void BlueprintSwitchedMode(int32_t NewMode);
		void ExecuteUbergraph_BPAnim_PS_ATL(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
