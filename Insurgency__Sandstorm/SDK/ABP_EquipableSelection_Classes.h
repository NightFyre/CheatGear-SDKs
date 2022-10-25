#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * AnimBlueprintGeneratedClass ABP_EquipableSelection.ABP_EquipableSelection_C
	 * Size -> 0x0C09 (FullSize[0x2BC9] - InheritedSize[0x1FC0])
	 */
	class UABP_EquipableSelection_C : public UFirstPersonAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1FC0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x1FC8(0x0030)
		struct FAnimNode_RefPose                                   AnimGraphNode_LocalRefPose;                              // 0x1FF8(0x0018)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_5;                              // 0x2010(0x0108)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x2118(0x0020)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone;                                  // 0x2138(0x00F0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x2228(0x0020)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x2248(0x00A0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_4;                              // 0x22E8(0x0108)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_4;                       // 0x23F0(0x0048)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_3;                              // 0x2438(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2;                              // 0x2540(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x2648(0x0108)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive;                             // 0x2750(0x00C8)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_3;                       // 0x2818(0x0048)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_2;                       // 0x2860(0x0048)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_2;                        // 0x28A8(0x00C0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x2968(0x00C0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator;                         // 0x2A28(0x0048)
		class UAnimSequence*                                       UIPoseAnimation;                                         // 0x2A70(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UIPoseValid;                                             // 0x2A78(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DFX7[0x3];                                   // 0x2A79(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WeaponRotation;                                          // 0x2A7C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             SocketOffsetMenu;                                        // 0x2A80(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            WeaponRotator;                                           // 0x2A8C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bHasLMGDelta;                                            // 0x2A98(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QNDW[0x7];                                   // 0x2A99(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequenceBase*                                   AmmoDeltaAnim;                                           // 0x2AA0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AItemEquipable*                                      EquipableItem;                                           // 0x2AA8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bRanInitialChecks;                                       // 0x2AB0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bScaleUp;                                                // 0x2AB1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VX4A[0x2];                                   // 0x2AB2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             EquipableScale;                                          // 0x2AB4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HasMagazineDeltaTransparent;                             // 0x2AC0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_85QT[0x4];                                   // 0x2AC4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                       UnderbarrelShotgunSequence;                              // 0x2AC8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bHasUnderbarrelShotgun;                                  // 0x2AD0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KVJ4[0x7];                                   // 0x2AD1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UClass*, class UAnimSequence*>                  UnderbarrelMap;                                          // 0x2AD8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<class UClass*, class UAnimSequence*>                  WeaponMapM26;                                            // 0x2B28(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<class UClass*, class UAnimSequence*>                  WeaponMapMasterkey;                                      // 0x2B78(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bIsMasterkey;                                            // 0x2BC8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void CheckAmmoDelta(class AItemEquipable* Item, class UAnimSequence** Sequence, bool* LMG, float* MagazineTransparency);
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_ABP_EquipableSelection(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
