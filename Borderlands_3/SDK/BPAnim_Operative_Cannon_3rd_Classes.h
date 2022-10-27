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
	 * AnimBlueprintGeneratedClass BPAnim_Operative_Cannon_3rd.BPAnim_Operative_Cannon_3rd_C
	 * Size -> 0x06B0 (FullSize[0x0C10] - InheritedSize[0x0560])
	 */
	class UBPAnim_Operative_Cannon_3rd_C : public UOperativeCannonAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0560(0x0008) Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_8FEB5ED843BC0A7D92AA54A1DE330157;     // 0x0568(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_D09DF2A3465B130AFD30D39285025F3C; // 0x05B0(0x00F0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_E3F221414353F54661447B98C5043364;     // 0x06A0(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_454519C1410349BA003352BE9D444E29;     // 0x0750(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_494FE96F443B3E924537A7BA0EC5D3D1;     // 0x0800(0x00B0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_BD74E9A94D1201677ECA549FBAFB904C; // 0x08B0(0x0048)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_5B5C6A0749C751B7FD3F8AAEA6AA8560; // 0x08F8(0x0048)
		struct FGbxAnimNode_LookAt                                 GbxAnimGraphNode_LookAt_07969AA542B1958A4694FA9A4027B952; // 0x0940(0x02D0)

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Operative_Cannon_3rd_GbxAnimGraphNode_LookAt_07969AA542B1958A4694FA9A4027B952();
		void ExecuteUbergraph_BPAnim_Operative_Cannon_3rd(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
