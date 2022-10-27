#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * AnimBlueprintGeneratedClass ABP_Prisoner_Vehicle2W.ABP_Prisoner_Vehicle2W_C
	 * Size -> 0x3BF0 (FullSize[0x4040] - InheritedSize[0x0450])
	 */
	class UABP_Prisoner_Vehicle2W_C : public UPrisonerAnimInstance_Vehicle2W
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0450(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0458(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_10;                       // 0x0488(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9;                        // 0x04B0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8;                        // 0x04D8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x0500(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x0528(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x0550(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x0578(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x05A0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x05C8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x05F0(0x0028)
		unsigned char                                              UnknownData_AZZ8[0x8];                                   // 0x0618(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_Fabrik                                    AnimGraphNode_Fabrik_20;                                 // 0x0620(0x0190)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_10;                  // 0x07B0(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_10;                  // 0x07D0(0x0020)
		struct FAnimNode_Fabrik                                    AnimGraphNode_Fabrik_19;                                 // 0x07F0(0x0190)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_10;                         // 0x0980(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7;                             // 0x0A00(0x0030)
		struct FAnimNode_Fabrik                                    AnimGraphNode_Fabrik_18;                                 // 0x0A30(0x0190)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_9;                   // 0x0BC0(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_9;                   // 0x0BE0(0x0020)
		struct FAnimNode_Fabrik                                    AnimGraphNode_Fabrik_17;                                 // 0x0C00(0x0190)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9;                          // 0x0D90(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x0E10(0x0030)
		struct FAnimNode_Fabrik                                    AnimGraphNode_Fabrik_16;                                 // 0x0E40(0x0190)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_8;                   // 0x0FD0(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_8;                   // 0x0FF0(0x0020)
		struct FAnimNode_Fabrik                                    AnimGraphNode_Fabrik_15;                                 // 0x1010(0x0190)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8;                          // 0x11A0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x1220(0x0030)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_9;                         // 0x1250(0x00A0)
		struct FAnimNode_Fabrik                                    AnimGraphNode_Fabrik_14;                                 // 0x12F0(0x0190)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_7;                   // 0x1480(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_7;                   // 0x14A0(0x0020)
		struct FAnimNode_Fabrik                                    AnimGraphNode_Fabrik_13;                                 // 0x14C0(0x0190)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_6;                        // 0x1650(0x00E8)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_6;                   // 0x1738(0x0020)
		unsigned char                                              UnknownData_JL1L[0x8];                                   // 0x1758(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_Fabrik                                    AnimGraphNode_Fabrik_12;                                 // 0x1760(0x0190)
		struct FAnimNode_Fabrik                                    AnimGraphNode_Fabrik_11;                                 // 0x18F0(0x0190)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_5;                   // 0x1A80(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_6;                   // 0x1AA0(0x0020)
		struct FAnimNode_Fabrik                                    AnimGraphNode_Fabrik_10;                                 // 0x1AC0(0x0190)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_5;                   // 0x1C50(0x0020)
		struct FAnimNode_Fabrik                                    AnimGraphNode_Fabrik_9;                                  // 0x1C70(0x0190)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_4;                // 0x1E00(0x0190)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_3;                // 0x1F90(0x0190)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_5;                        // 0x2120(0x00E8)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_8;                         // 0x2208(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7;                          // 0x22A8(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x2328(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_7;                         // 0x23A8(0x00A0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_6;                         // 0x2448(0x00A0)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_4;                        // 0x24E8(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x25D0(0x0030)
		struct FAnimNode_Fabrik                                    AnimGraphNode_Fabrik_8;                                  // 0x2600(0x0190)
		struct FAnimNode_Fabrik                                    AnimGraphNode_Fabrik_7;                                  // 0x2790(0x0190)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_4;                   // 0x2920(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_4;                   // 0x2940(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x2960(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x29E0(0x0030)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_3;                        // 0x2A10(0x00E8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x2AF8(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x2B78(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_5;                         // 0x2BF8(0x00A0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_4;                         // 0x2C98(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x2D38(0x0030)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_3;                   // 0x2D68(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_3;                   // 0x2D88(0x0020)
		unsigned char                                              UnknownData_28O5[0x8];                                   // 0x2DA8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_Fabrik                                    AnimGraphNode_Fabrik_6;                                  // 0x2DB0(0x0190)
		struct FAnimNode_Fabrik                                    AnimGraphNode_Fabrik_5;                                  // 0x2F40(0x0190)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_2;                   // 0x30D0(0x0020)
		struct FAnimNode_Fabrik                                    AnimGraphNode_Fabrik_4;                                  // 0x30F0(0x0190)
		struct FAnimNode_Fabrik                                    AnimGraphNode_Fabrik_3;                                  // 0x3280(0x0190)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x3410(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_2;                   // 0x3430(0x0020)
		struct FAnimNode_Fabrik                                    AnimGraphNode_Fabrik_2;                                  // 0x3450(0x0190)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x35E0(0x0020)
		struct FAnimNode_Fabrik                                    AnimGraphNode_Fabrik;                                    // 0x3600(0x0190)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_2;                // 0x3790(0x0190)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace;                  // 0x3920(0x0190)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_2;                        // 0x3AB0(0x00E8)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_3;                         // 0x3B98(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x3C38(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x3CB8(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x3D38(0x00A0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x3DD8(0x00A0)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x3E78(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x3F60(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x3F90(0x00B0)

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Vehicle2W_AnimGraphNode_RotationOffsetBlendSpace_AAE9334B47094D2620ADE3ABF5DC0773();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Vehicle2W_AnimGraphNode_BlendSpacePlayer_1E0141B440C4FAEB3F80D4AEA6940C46();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Vehicle2W_AnimGraphNode_BlendListByBool_D7FDC9FF4490A203BB799B8A4D018E11();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Vehicle2W_AnimGraphNode_RotationOffsetBlendSpace_B311635244AE48ADF203D4835B5D059F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Vehicle2W_AnimGraphNode_BlendListByBool_324F87964C6CCBFFC519FD8C7D116A89();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Vehicle2W_AnimGraphNode_BlendSpacePlayer_EEBAF83B41AC67E69B2ECEBBC3994661();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Vehicle2W_AnimGraphNode_BlendListByBool_7A0C85E74E8AD8D952F86EBBBACC3F4B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Vehicle2W_AnimGraphNode_TransitionResult_A17D905C47CD008091F4D88320390040();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Vehicle2W_AnimGraphNode_TransitionResult_6D73DBA842BBF4567D9409AACC2B1CEE();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Vehicle2W_AnimGraphNode_TransitionResult_0FAB6E834B85EADE1AFE238159CFEA66();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Vehicle2W_AnimGraphNode_TransitionResult_09FA5F0848A20D40F390CB8B1C761843();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Vehicle2W_AnimGraphNode_TransitionResult_843C8ACF4F4592AD7DFBEFBE6163131F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Vehicle2W_AnimGraphNode_TransitionResult_F954A1304565F203ABFF8B8075D99BF1();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Vehicle2W_AnimGraphNode_TransitionResult_7190B1A8415F48075EB7C28BB094A5AA();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_ABP_Prisoner_Vehicle2W(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
