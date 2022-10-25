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
	 * AnimBlueprintGeneratedClass ABP_Prisoner_Boat.ABP_Prisoner_Boat_C
	 * Size -> 0x2288 (FullSize[0x2688] - InheritedSize[0x0400])
	 */
	class UABP_Prisoner_Boat_C : public UPrisonerAnimInstance_Boat
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0400(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0408(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_23;                       // 0x0438(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_22;                       // 0x0460(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_21;                       // 0x0488(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_20;                       // 0x04B0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_19;                       // 0x04D8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_18;                       // 0x0500(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_17;                       // 0x0528(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_16;                       // 0x0550(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_15;                       // 0x0578(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_14;                       // 0x05A0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_13;                       // 0x05C8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_12;                       // 0x05F0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_11;                       // 0x0618(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_10;                       // 0x0640(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9;                        // 0x0668(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8;                        // 0x0690(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x06B8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x06E0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x0708(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x0730(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x0758(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x0780(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x07A8(0x0028)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_6;                   // 0x07D0(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_6;                   // 0x07F0(0x0020)
		struct FAnimNode_Fabrik                                    AnimGraphNode_Fabrik_7;                                  // 0x0810(0x0190)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_10;                         // 0x09A0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_15;                            // 0x0A20(0x0030)
		struct FAnimNode_Fabrik                                    AnimGraphNode_Fabrik_6;                                  // 0x0A50(0x0190)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_5;                   // 0x0BE0(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_5;                   // 0x0C00(0x0020)
		struct FAnimNode_Fabrik                                    AnimGraphNode_Fabrik_5;                                  // 0x0C20(0x0190)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_8;                        // 0x0DB0(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_14;                            // 0x0E98(0x0030)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_4;                   // 0x0EC8(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_4;                   // 0x0EE8(0x0020)
		unsigned char                                              UnknownData_IVIL[0x8];                                   // 0x0F08(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_Fabrik                                    AnimGraphNode_Fabrik_4;                                  // 0x0F10(0x0190)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9;                          // 0x10A0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_13;                            // 0x1120(0x0030)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_3;                   // 0x1150(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_3;                   // 0x1170(0x0020)
		struct FAnimNode_Fabrik                                    AnimGraphNode_Fabrik_3;                                  // 0x1190(0x0190)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8;                          // 0x1320(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_12;                            // 0x13A0(0x0030)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_2;                   // 0x13D0(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_2;                   // 0x13F0(0x0020)
		struct FAnimNode_Fabrik                                    AnimGraphNode_Fabrik_2;                                  // 0x1410(0x0190)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7;                          // 0x15A0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_11;                            // 0x1620(0x0030)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_7;                        // 0x1650(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_10;                            // 0x1738(0x0030)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_6;                        // 0x1768(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_9;                             // 0x1850(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x1880(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_8;                             // 0x1900(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x1930(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7;                             // 0x19B0(0x0030)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_5;                        // 0x19E0(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x1AC8(0x0030)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_4;                        // 0x1AF8(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x1BE0(0x0030)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_3;                        // 0x1C10(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x1CF8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x1D28(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x1DA8(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_4;                         // 0x1E28(0x00A0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_3;                         // 0x1EC8(0x00A0)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_2;                        // 0x1F68(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x2050(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x2080(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x2100(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x2180(0x00A0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x2220(0x00A0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x22C0(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x22E0(0x0020)
		struct FAnimNode_Fabrik                                    AnimGraphNode_Fabrik;                                    // 0x2300(0x0190)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x2490(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x2578(0x0030)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x25A8(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x25D8(0x00B0)

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Boat_AnimGraphNode_TransitionResult_F9F566ED49B00D2D87A907BC4E51F966();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Boat_AnimGraphNode_TransitionResult_596B25F34E3A056DF82F21839C98BE6B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Boat_AnimGraphNode_BlendSpacePlayer_0DE4D1484694D1D6DAE0F68416DFE9CD();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Boat_AnimGraphNode_BlendSpacePlayer_245F8CAB4D613C340A1C19AAE2AE650C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Boat_AnimGraphNode_BlendSpacePlayer_68C94A2847129A0472ABC0B80BFB3BA8();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Boat_AnimGraphNode_TransitionResult_908B8AE4460A8918EB2EC5AD7734953D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Boat_AnimGraphNode_TransitionResult_A65E456D4E7421CD88642CA348761727();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Boat_AnimGraphNode_TransitionResult_78ECFFDD4E4B4ADE82182892AF49C812();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Boat_AnimGraphNode_TransitionResult_16DB115146F3AFD7CC20209414E97D23();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Boat_AnimGraphNode_TransitionResult_39240775488ABD597CB145826813C3F7();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Boat_AnimGraphNode_TransitionResult_BEF6923C4153D8B61E5ADEA21D4B292D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Boat_AnimGraphNode_TransitionResult_DCCF6A81474DDEEB5E0960B2B817FEB1();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Boat_AnimGraphNode_TransitionResult_9414F53A41EA807302E776BC86E36A41();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Boat_AnimGraphNode_TransitionResult_17E228304BC358ABFFE5BD9200B2FA3C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Boat_AnimGraphNode_TransitionResult_0039F2D04158BE8D75BC89B8B170906E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Boat_AnimGraphNode_TransitionResult_2797F4E34A20064992B8F7B91F8B161C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Boat_AnimGraphNode_TransitionResult_0641C33440E72FC73696E9934F77808F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Boat_AnimGraphNode_TransitionResult_8F8C3EA247C7C47F1FB100AFB0BB943C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Boat_AnimGraphNode_TransitionResult_172EBDD249F80827D8418ABF9E3574E8();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Boat_AnimGraphNode_TransitionResult_E5A104B649F1D95AA7139486FD93CC99();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Boat_AnimGraphNode_TransitionResult_AD26813941F44DDB3F6553BF49E1BCF5();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Boat_AnimGraphNode_TransitionResult_534ED18E439E8F7B921B98BC75B89D54();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void BlueprintBeginPlay();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Boat_AnimGraphNode_TransitionResult_6594A7BA4C8E1D4B38486798F206A20E();
		void ExecuteUbergraph_ABP_Prisoner_Boat(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
