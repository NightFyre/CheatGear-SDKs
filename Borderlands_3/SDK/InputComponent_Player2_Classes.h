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
	 * BlueprintGeneratedClass InputComponent_Player2.InputComponent_Player2_C
	 * Size -> 0x0DD0 (FullSize[0x10C0] - InheritedSize[0x02F0])
	 */
	class UInputComponent_Player2_C : public UGbxInputComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02F0(0x0008) Transient, DuplicateTransient
		class AOakCharacter_Player*                                Player;                                                  // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGbxInputEvent_Button_PressHoldRelease              GbxInputEvent__28;                                       // 0x0300(0x0080) ContainsInstancedReference
		struct FGbxInputEvent_Button_PressRelease                  GbxInputEvent__37;                                       // 0x0380(0x0078) ContainsInstancedReference
		struct FGbxInputEvent_Button_PressRelease                  GbxInputEvent__38;                                       // 0x03F8(0x0078) ContainsInstancedReference
		struct FGbxInputEvent_Button_PressRelease                  GbxInputEvent__39;                                       // 0x0470(0x0078) ContainsInstancedReference
		struct FGbxInputEvent_Button_PressRelease                  GbxInputEvent__6;                                        // 0x04E8(0x0078) ContainsInstancedReference
		struct FGbxInputEvent_Button_PressRelease                  GbxInputEvent__7;                                        // 0x0560(0x0078) ContainsInstancedReference
		struct FGbxInputEvent_Button_PressRelease                  GbxInputEvent__2;                                        // 0x05D8(0x0078) ContainsInstancedReference
		struct FGbxInputEvent_Button_PressRelease                  GbxInputEvent__14;                                       // 0x0650(0x0078) ContainsInstancedReference
		struct FGbxInputEvent_Button_PressRelease                  GbxInputEvent__8;                                        // 0x06C8(0x0078) ContainsInstancedReference
		struct FGbxInputEvent_Button_PressRelease                  GbxInputEvent__15;                                       // 0x0740(0x0078) ContainsInstancedReference
		struct FGbxInputEvent_Button_PressRelease                  GbxInputEvent__16;                                       // 0x07B8(0x0078) ContainsInstancedReference
		struct FGbxInputEvent_Button_PressRelease                  GbxInputEvent__17;                                       // 0x0830(0x0078) ContainsInstancedReference
		struct FGbxInputEvent_Button_PressRelease                  GbxInputEvent__23;                                       // 0x08A8(0x0078) ContainsInstancedReference
		struct FGbxInputEvent_Button_PressRelease                  GbxInputEvent__3;                                        // 0x0920(0x0078) ContainsInstancedReference
		struct FGbxInputEvent_Button_PressRelease                  GbxInputEvent__1;                                        // 0x0998(0x0078) ContainsInstancedReference
		struct FGbxInputEvent_Button_PressHoldRelease              GbxInputEvent__10;                                       // 0x0A10(0x0080) ContainsInstancedReference
		struct FGbxInputEvent_Button_PressHoldRelease              GbxInputEvent__12;                                       // 0x0A90(0x0080) ContainsInstancedReference
		struct FGbxInputEvent_Button_PressRelease                  GbxInputEvent__9;                                        // 0x0B10(0x0078) ContainsInstancedReference
		struct FGbxInputEvent_OakMoveAxis                          GbxInputEvent__4;                                        // 0x0B88(0x0070) ContainsInstancedReference
		struct FGbxInputEvent_OakLookAxis                          GbxInputEvent__5;                                        // 0x0BF8(0x0080) ContainsInstancedReference
		struct FGbxInputEvent_Button_PressHoldRelease              GbxInputEvent__13;                                       // 0x0C78(0x0080) ContainsInstancedReference
		struct FGbxInputEvent_Button_PressRelease                  GbxInputEvent__18;                                       // 0x0CF8(0x0078) ContainsInstancedReference
		struct FGbxInputEvent_Button_PressHoldRelease              GbxInputEvent__22;                                       // 0x0D70(0x0080) ContainsInstancedReference
		struct FGbxInputEvent_Button_PressRelease                  GbxInputEvent__11;                                       // 0x0DF0(0x0078) ContainsInstancedReference
		struct FGbxInputEvent_Button_PressRelease                  GbxInputEvent__20;                                       // 0x0E68(0x0078) ContainsInstancedReference
		struct FGbxInputEvent_Button_PressRelease                  GbxInputEvent__19;                                       // 0x0EE0(0x0078) ContainsInstancedReference
		struct FGbxInputEvent_Button_PressRelease                  GbxInputEvent__21;                                       // 0x0F58(0x0078) ContainsInstancedReference
		struct FGbxInputEvent_Button_PressRelease                  GbxInputEvent__25;                                       // 0x0FD0(0x0078) ContainsInstancedReference
		struct FGbxInputEvent_Button_PressRelease                  GbxInputEvent__24;                                       // 0x1048(0x0078) ContainsInstancedReference

	public:
		void UsesActionSkillOverride(bool* bRes);
		void IsPawnAttached(bool* bRes);
		void ShouldAttemptSecondaryActionSkill(bool* bRes);
		void IsUsePromptEnabled(EUsabilityType Type, bool* res);
		void IsInFFYL(bool* InFFYL);
		void K2Node_GbxInputEvent_Button_PressRelease_1176_Released_exec();
		void K2Node_GbxInputEvent_Button_PressRelease_1176_Pressed_exec();
		void K2Node_GbxInputEvent_Button_PressHoldRelease_0_Released_exec();
		void K2Node_GbxInputEvent_Button_PressHoldRelease_0_Held_exec();
		void K2Node_GbxInputEvent_Button_PressHoldRelease_0_Pressed_exec();
		void K2Node_GbxInputEvent_Button_PressRelease_97_Released_exec();
		void K2Node_GbxInputEvent_Button_PressRelease_97_Pressed_exec();
		void K2Node_GbxInputEvent_Button_PressRelease_2_Released_exec();
		void K2Node_GbxInputEvent_Button_PressRelease_2_Pressed_exec();
		void K2Node_GbxInputEvent_Button_PressRelease_201_Released_exec();
		void K2Node_GbxInputEvent_Button_PressRelease_201_Pressed_exec();
		void K2Node_GbxInputEvent_Button_PressRelease_141_Released_exec();
		void K2Node_GbxInputEvent_Button_PressRelease_141_Pressed_exec();
		void K2Node_GbxInputEvent_Button_PressRelease_210_Released_exec();
		void K2Node_GbxInputEvent_Button_PressRelease_210_Pressed_exec();
		void K2Node_GbxInputEvent_Button_PressRelease_1072_Released_exec();
		void K2Node_GbxInputEvent_Button_PressRelease_1072_Pressed_exec();
		void K2Node_GbxInputEvent_Button_PressRelease_1127_Released_exec();
		void K2Node_GbxInputEvent_Button_PressRelease_1127_Pressed_exec();
		void K2Node_GbxInputEvent_Button_PressRelease_1128_Released_exec();
		void K2Node_GbxInputEvent_Button_PressRelease_1128_Pressed_exec();
		void K2Node_GbxInputEvent_Button_PressRelease_1157_Released_exec();
		void K2Node_GbxInputEvent_Button_PressRelease_1157_Pressed_exec();
		void K2Node_GbxInputEvent_Button_PressRelease_1410_Released_exec();
		void K2Node_GbxInputEvent_Button_PressRelease_1410_Pressed_exec();
		void K2Node_GbxInputEvent_Button_PressRelease_1672_Released_exec();
		void K2Node_GbxInputEvent_Button_PressRelease_1672_Pressed_exec();
		void K2Node_GbxInputEvent_OakMoveAxis_0_def_exec(const struct FVector& Val, bool bGamePad);
		void K2Node_GbxInputEvent_OakLookAxis_6_def_exec(const struct FVector& Val, bool bGamePad);
		void K2Node_GbxInputEvent_Button_PressHoldRelease_2_Released_exec();
		void K2Node_GbxInputEvent_Button_PressHoldRelease_2_Held_exec();
		void K2Node_GbxInputEvent_Button_PressHoldRelease_2_Pressed_exec();
		void K2Node_GbxInputEvent_Button_PressRelease_943_Released_exec();
		void K2Node_GbxInputEvent_Button_PressRelease_943_Pressed_exec();
		void K2Node_GbxInputEvent_Button_PressRelease_858_Released_exec();
		void K2Node_GbxInputEvent_Button_PressRelease_858_Pressed_exec();
		void K2Node_GbxInputEvent_Button_PressRelease_514_Released_exec();
		void K2Node_GbxInputEvent_Button_PressRelease_514_Pressed_exec();
		void K2Node_GbxInputEvent_Button_PressRelease_446_Released_exec();
		void K2Node_GbxInputEvent_Button_PressRelease_446_Pressed_exec();
		void K2Node_GbxInputEvent_Button_PressHoldRelease_1_Released_exec();
		void K2Node_GbxInputEvent_Button_PressHoldRelease_1_Held_exec();
		void K2Node_GbxInputEvent_Button_PressHoldRelease_1_Pressed_exec();
		void GbxInpActEvt_InputAction_Discrete_TrackPreviousMission_K2Node_GbxInputActionEvent_Discrete_6(class UGbxInputActionData_Discrete* Action);
		void GbxInpActEvt_InputAction_Discrete_TrackNextMission_K2Node_GbxInputActionEvent_Discrete_5(class UGbxInputActionData_Discrete* Action);
		void K2Node_GbxInputEvent_Button_PressRelease_4_Released_exec();
		void K2Node_GbxInputEvent_Button_PressRelease_4_Pressed_exec();
		void K2Node_GbxInputEvent_Button_PressRelease_6_Released_exec();
		void K2Node_GbxInputEvent_Button_PressRelease_6_Pressed_exec();
		void K2Node_GbxInputEvent_Button_PressRelease_3_Released_exec();
		void K2Node_GbxInputEvent_Button_PressRelease_3_Pressed_exec();
		void K2Node_GbxInputEvent_Button_PressHoldRelease_19_Released_exec();
		void K2Node_GbxInputEvent_Button_PressHoldRelease_19_Held_exec();
		void K2Node_GbxInputEvent_Button_PressHoldRelease_19_Pressed_exec();
		void K2Node_GbxInputEvent_Button_PressHoldRelease_51_Released_exec();
		void K2Node_GbxInputEvent_Button_PressHoldRelease_51_Held_exec();
		void K2Node_GbxInputEvent_Button_PressHoldRelease_51_Pressed_exec();
		void K2Node_GbxInputEvent_Button_PressRelease_40_Released_exec();
		void K2Node_GbxInputEvent_Button_PressRelease_40_Pressed_exec();
		void GbxInpActEvt_InputAction_Discrete_MarkTarget_K2Node_GbxInputActionEvent_Discrete_4(class UGbxInputActionData_Discrete* Action);
		void K2Node_GbxInputEvent_Button_PressRelease_0_Released_exec();
		void K2Node_GbxInputEvent_Button_PressRelease_0_Pressed_exec();
		void K2Node_GbxInputEvent_Button_PressRelease_1_Released_exec();
		void K2Node_GbxInputEvent_Button_PressRelease_1_Pressed_exec();
		void GbxInputEvent_8();
		void GbxInputEvent_10();
		void GbxInputEvent_9();
		void K2Node_GbxInputEvent_Button_PressRelease5();
		void GbxInputEvent_37();
		void GbxInputEvent_38();
		void GbxInputEvent_39();
		void GbxInputEvent_32();
		void GbxInputEvent_33();
		void GbxInputEvent_34();
		void GbxInputEvent_35();
		void GbxInputEvent_3();
		void GbxInputEvent_1();
		void GbxInputEvent_4(const struct FVector& Val, bool bGamePad);
		void GbxInputEvent_6(const struct FVector& Val, bool bGamePad);
		void K2Node_GbxInputEvent_Button_PressHoldRelease1();
		void GbxInputEvent_14();
		void GbxInputEvent_2();
		void GbxInputEvent_7();
		void GbxInputEvent_5();
		void K2Node_GbxInputEvent_Button_PressHoldRelease();
		void K2Node_GbxInputEvent_Button_PressRelease4();
		void K2Node_GbxInputEvent_Button_PressRelease3();
		void K2Node_GbxInputEvent_Button_PressRelease2();
		void GbxInputEvent_25();
		void GbxInputEvent_28();
		void GbxInputEvent_22();
		void K2Node_GbxInputEvent_Button_PressRelease1();
		void K2Node_GbxInputEvent_Button_PressRelease();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_InputComponent_Player2(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
