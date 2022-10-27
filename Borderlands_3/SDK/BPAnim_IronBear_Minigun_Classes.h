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
	 * AnimBlueprintGeneratedClass BPAnim_IronBear_Minigun.BPAnim_IronBear_Minigun_C
	 * Size -> 0x0448 (FullSize[0x08C8] - InheritedSize[0x0480])
	 */
	class UBPAnim_IronBear_Minigun_C : public UIronBearMinigunAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0480(0x0008) Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_9E05F77949CD9F63CBC1DCB2311262D5;     // 0x0488(0x0048)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_5C46BE80461D91F8AF877E9F9069FB88; // 0x04D0(0x0048)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_9936D2BF4724625DE8208AACECF01AA4; // 0x0518(0x0198)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_7B95BC804D8408BEA7A97686010AEBD5; // 0x06B0(0x0198)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_910883FC435CDBB377138580D1E4A18A; // 0x0848(0x0048)
		struct FAnimNode_RefPose                                   AnimGraphNode_LocalRefPose_3B476BC04889F9735E26788C34C1C61D; // 0x0890(0x0038)

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronBear_Minigun_AnimGraphNode_ModifyBone_7B95BC804D8408BEA7A97686010AEBD5();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronBear_Minigun_AnimGraphNode_ModifyBone_9936D2BF4724625DE8208AACECF01AA4();
		void ExecuteUbergraph_BPAnim_IronBear_Minigun(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
