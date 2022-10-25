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
	 * DynamicClass Lesson_26_AdvancedCapturingWindows.Lesson_26_AdvancedCapturingWindows_C
	 * Size -> 0x0038 (FullSize[0x0120] - InheritedSize[0x00E8])
	 */
	class ULesson_26_AdvancedCapturingWindows_C : public UTutorialLesson
	{
	public:
		class AINSBasePlayerController*                            K2Node_Event_NewOwningPlayerController;                  // 0x00E8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AINSPlayerState*                                     K2Node_Event_NewPlayer;                                  // 0x00F0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AINSPlayerController*                                K2Node_CustomEvent_Capturer;                             // 0x00F8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AObjectiveCapturable*                                K2Node_CustomEvent_Objective;                            // 0x0100(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              K2Node_CustomEvent_OldOwners;                            // 0x0108(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              K2Node_CustomEvent_NewOwners;                            // 0x0109(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6AHW[0x2];                                   // 0x010A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate;                    // 0x010C(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CZ6D[0x4];                                   // 0x011C(0x0004) MISSED OFFSET (PADDING)

	public:
		void OnScoreObjectiveCapturedDelegate_Event_1(class AINSPlayerController* bpp__Capturer__pf, class AObjectiveCapturable* bpp__Objective__pf, unsigned char bpp__OldOwners__pf, unsigned char bpp__NewOwners__pf);
		void BlueprintOnInitialized(class AINSBasePlayerController* bpp__NewOwningPlayerController__pf, class AINSPlayerState* bpp__NewPlayer__pf);
		void OnScoreObjectiveCapturedDelegate__DelegateSignature(class AINSPlayerController* bpp__Capturer__pf, class AObjectiveCapturable* bpp__Objective__pf, unsigned char bpp__OldOwners__pf, unsigned char bpp__NewOwners__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
