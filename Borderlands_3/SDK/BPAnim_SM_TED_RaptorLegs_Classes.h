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
	 * AnimBlueprintGeneratedClass BPAnim_SM_TED_RaptorLegs.BPAnim_SM_TED_RaptorLegs_C
	 * Size -> 0x0E38 (FullSize[0x1920] - InheritedSize[0x0AE8])
	 */
	class UBPAnim_SM_TED_RaptorLegs_C : public UOakCharacterAnimInstance
	{
	public:
		unsigned char                                              UnknownData_A93V[0x8];                                   // 0x0AE8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0AF0(0x0008) Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_011B22F245E32B1064D9BE87C4CB4A9B;     // 0x0AF8(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9DE5ABEB48922A563399948299EC678A; // 0x0B40(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7FCF346945296BC026CAFBA3B83DAB5D; // 0x0B90(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_F6F4E5E543A1728D97C09C9A7F2DAE16; // 0x0BE0(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7FDDFF53410E5DBE81C20286DA7086B6; // 0x0C30(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7DEEAC6B4AAF56D02924B8B400589C85; // 0x0C80(0x00F0)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_811FB47D49BE200EEFD898A5D5B391D8; // 0x0D70(0x0048)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_135112CF4BE2C6BA116FD588EC7822C2; // 0x0DB8(0x0160)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_788CFBCE42729A185CDB5DA74E45BC0C; // 0x0F18(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_E0D6A1304251D11FECC3489705BAFEB4; // 0x0F60(0x00D0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_F5B697904D819520E315DBAA380F8F59; // 0x1030(0x00F0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_EBDC810F4599079D98564E9F85EA8DF4; // 0x1120(0x00F0)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_722267E843E6E9CD9CFEA7A755E34316; // 0x1210(0x0048)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_054916474A097992E35B33B55079736E; // 0x1258(0x0188)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_128FDCC947A87A083AD5D39664AAFBBF;     // 0x13E0(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_E8DB83AB44D81F659023CF96C4183746;     // 0x1490(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_1405D81A4146A905F8FC06AD280EAAE4;     // 0x1540(0x00B0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_94B761B74F7650A05A4A31A70145DD11; // 0x15F0(0x0048)
		unsigned char                                              UnknownData_YN2B[0x8];                                   // 0x1638(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_C71EECC84CD88DDC85507C8CCC7EACF9;   // 0x1640(0x0290)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_4C4062EF4346947A46A37FBADE9DFA08; // 0x18D0(0x0048)
		class ABPChar_TedioreTurret_C*                             Base_BPChar;                                             // 0x1918(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SM_TED_RaptorLegs_AnimGraphNode_BlendSpacePlayer_135112CF4BE2C6BA116FD588EC7822C2();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SM_TED_RaptorLegs_AnimGraphNode_TransitionResult_7FDDFF53410E5DBE81C20286DA7086B6();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SM_TED_RaptorLegs_AnimGraphNode_BlendListByBool_E0D6A1304251D11FECC3489705BAFEB4();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SM_TED_RaptorLegs_AnimGraphNode_LookAt_C71EECC84CD88DDC85507C8CCC7EACF9();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SM_TED_RaptorLegs_AnimGraphNode_TransitionResult_F6F4E5E543A1728D97C09C9A7F2DAE16();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SM_TED_RaptorLegs_AnimGraphNode_TransitionResult_9DE5ABEB48922A563399948299EC678A();
		void BlueprintInitializeAnimation();
		void ExecuteUbergraph_BPAnim_SM_TED_RaptorLegs(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
