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
	 * BlueprintGeneratedClass InputComponent_IronBear.InputComponent_IronBear_C
	 * Size -> 0x0728 (FullSize[0x0A18] - InheritedSize[0x02F0])
	 */
	class UInputComponent_IronBear_C : public UGbxInputComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02F0(0x0008) Transient, DuplicateTransient
		class AOakCharacter_IronBear*                              IronBear;                                                // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGbxInputEvent_Button_PressRelease                  GbxInputEvent__8;                                        // 0x0300(0x0078) ContainsInstancedReference
		struct FGbxInputEvent_Button_PressRelease                  GbxInputEvent__10;                                       // 0x0378(0x0078) ContainsInstancedReference
		struct FGbxInputEvent_Button_PressRelease                  GbxInputEvent__13;                                       // 0x03F0(0x0078) ContainsInstancedReference
		struct FGbxInputEvent_Button_PressRelease                  GbxInputEvent__15;                                       // 0x0468(0x0078) ContainsInstancedReference
		struct FGbxInputEvent_OakMoveAxis                          GbxInputEvent__4;                                        // 0x04E0(0x0070) ContainsInstancedReference
		struct FGbxInputEvent_OakLookAxis                          GbxInputEvent__5;                                        // 0x0550(0x0080) ContainsInstancedReference
		struct FGbxInputEvent_Button_PressRelease                  GbxInputEvent__7;                                        // 0x05D0(0x0078) ContainsInstancedReference
		struct FGbxInputEvent_Button_PressRelease                  GbxInputEvent__2;                                        // 0x0648(0x0078) ContainsInstancedReference
		struct FGbxInputEvent_Button_PressRelease                  GbxInputEvent__3;                                        // 0x06C0(0x0078) ContainsInstancedReference
		struct FGbxInputEvent_Button_PressRelease                  GbxInputEvent__6;                                        // 0x0738(0x0078) ContainsInstancedReference
		struct FGbxInputEvent_Button_PressRelease                  GbxInputEvent__1;                                        // 0x07B0(0x0078) ContainsInstancedReference
		struct FGbxInputEvent_Button_PressHoldRelease              GbxInputEvent__9;                                        // 0x0828(0x0080) ContainsInstancedReference
		struct FGbxInputEvent_Button_PressHoldRelease              GbxInputEvent__11;                                       // 0x08A8(0x0080) ContainsInstancedReference
		struct FGbxInputEvent_Button_PressRelease                  GbxInputEvent__12;                                       // 0x0928(0x0078) ContainsInstancedReference
		struct FGbxInputEvent_Button_PressRelease                  GbxInputEvent__14;                                       // 0x09A0(0x0078) ContainsInstancedReference

	public:
		void IsUsePromptEnabled(EUsabilityType Type, bool* res);
		void K2Node_GbxInputEvent_Button_PressRelease_106_Released_exec();
		void K2Node_GbxInputEvent_Button_PressRelease_106_Pressed_exec();
		void K2Node_GbxInputEvent_Button_PressRelease_167_Released_exec();
		void K2Node_GbxInputEvent_Button_PressRelease_167_Pressed_exec();
		void K2Node_GbxInputEvent_Button_PressRelease_276_Released_exec();
		void K2Node_GbxInputEvent_Button_PressRelease_276_Pressed_exec();
		void K2Node_GbxInputEvent_Button_PressRelease_294_Released_exec();
		void K2Node_GbxInputEvent_Button_PressRelease_294_Pressed_exec();
		void K2Node_GbxInputEvent_Button_PressRelease_53_Released_exec();
		void K2Node_GbxInputEvent_Button_PressRelease_53_Pressed_exec();
		void K2Node_GbxInputEvent_Button_PressRelease_20_Released_exec();
		void K2Node_GbxInputEvent_Button_PressRelease_20_Pressed_exec();
		void K2Node_GbxInputEvent_Button_PressRelease_0_Released_exec();
		void K2Node_GbxInputEvent_Button_PressRelease_0_Pressed_exec();
		void K2Node_GbxInputEvent_Button_PressRelease_138_Released_exec();
		void K2Node_GbxInputEvent_Button_PressRelease_138_Pressed_exec();
		void K2Node_GbxInputEvent_Button_PressRelease_1_Released_exec();
		void K2Node_GbxInputEvent_Button_PressRelease_1_Pressed_exec();
		void K2Node_GbxInputEvent_Button_PressHoldRelease_0_Released_exec();
		void K2Node_GbxInputEvent_Button_PressHoldRelease_0_Held_exec();
		void K2Node_GbxInputEvent_Button_PressHoldRelease_0_Pressed_exec();
		void K2Node_GbxInputEvent_Button_PressHoldRelease_1_Released_exec();
		void K2Node_GbxInputEvent_Button_PressHoldRelease_1_Held_exec();
		void K2Node_GbxInputEvent_Button_PressHoldRelease_1_Pressed_exec();
		void K2Node_GbxInputEvent_OakMoveAxis_0_def_exec(const struct FVector& Val, bool bGamePad);
		void K2Node_GbxInputEvent_OakLookAxis_6_def_exec(const struct FVector& Val, bool bGamePad);
		void K2Node_GbxInputEvent_Button_PressRelease_2_Released_exec();
		void K2Node_GbxInputEvent_Button_PressRelease_2_Pressed_exec();
		void K2Node_GbxInputEvent_Button_PressRelease_3_Released_exec();
		void K2Node_GbxInputEvent_Button_PressRelease_3_Pressed_exec();
		void GbxInputEvent_8();
		void GbxInputEvent_9();
		void GbxInputEvent_10();
		void GbxInputEvent_13();
		void GbxInputEvent_1();
		void GbxInputEvent_2();
		void K2Node_GbxInputEvent_Button_PressRelease3();
		void GbxInputEvent_15();
		void K2Node_GbxInputEvent_Button_PressRelease2();
		void GbxInputEvent_28();
		void K2Node_GbxInputEvent_Button_PressHoldRelease();
		void ReceiveBeginPlay();
		void GbxInputEvent_4(const struct FVector& Val, bool bGamePad);
		void GbxInputEvent_6(const struct FVector& Val, bool bGamePad);
		void K2Node_GbxInputEvent_Button_PressRelease1();
		void K2Node_GbxInputEvent_Button_PressRelease();
		void ExecuteUbergraph_InputComponent_IronBear(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
