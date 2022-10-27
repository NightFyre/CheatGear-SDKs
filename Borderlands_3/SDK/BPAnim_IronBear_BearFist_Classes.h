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
	 * AnimBlueprintGeneratedClass BPAnim_IronBear_BearFist.BPAnim_IronBear_BearFist_C
	 * Size -> 0x0500 (FullSize[0x0940] - InheritedSize[0x0440])
	 */
	class UBPAnim_IronBear_BearFist_C : public UAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0440(0x0008) Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_9A80DA26460723AA850A369571235640;     // 0x0448(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_486E8D944566844F3586578BDE2420E6;     // 0x0490(0x00B0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_8AC2996E4A41357F4A06C8BB7207837D; // 0x0540(0x0198)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_AF713A29422C3FDD0BEC648D4EBD976A; // 0x06D8(0x0048)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_C9DCB71B4C006738F80626A7DBBCC408; // 0x0720(0x0048)
		struct FAnimNode_BlendListByInt                            AnimGraphNode_BlendListByInt_06193D0546144F09CA9439B54A9E6A8B; // 0x0768(0x00D0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_CB1FDBB54AAD3FAF1BAF7CBB0F9BCF3E; // 0x0838(0x0080)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_0588456E41F1690BFA782D9418DA9C94; // 0x08B8(0x0080)
		float                                                      Hand_End;                                                // 0x0938(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Mod3SlotWeight;                                          // 0x093C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetHardpointMods(class AOakWeapon_IronBearHardPoint* Hardpoint);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronBear_BearFist_AnimGraphNode_BlendListByInt_06193D0546144F09CA9439B54A9E6A8B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronBear_BearFist_AnimGraphNode_ModifyBone_8AC2996E4A41357F4A06C8BB7207837D();
		void ExecuteUbergraph_BPAnim_IronBear_BearFist(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
