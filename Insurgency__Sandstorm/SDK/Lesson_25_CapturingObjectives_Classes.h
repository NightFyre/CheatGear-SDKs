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
	 * DynamicClass Lesson_25_CapturingObjectives.Lesson_25_CapturingObjectives_C
	 * Size -> 0x0030 (FullSize[0x0118] - InheritedSize[0x00E8])
	 */
	class ULesson_25_CapturingObjectives_C : public UTutorialLesson
	{
	public:
		class AINSBasePlayerController*                            K2Node_Event_NewOwningPlayerController;                  // 0x00E8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AINSPlayerState*                                     K2Node_Event_NewPlayer;                                  // 0x00F0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AINSPlayerController*                                K2Node_CustomEvent_Capturer;                             // 0x00F8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AObjectiveBase*                                      K2Node_CustomEvent_Objective;                            // 0x0100(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate;                    // 0x0108(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic

	public:
		void OnObjectiveBeginOverlapDelegate_Event_1(class AINSPlayerController* bpp__Capturer__pf, class AObjectiveBase* bpp__Objective__pf);
		void BlueprintOnInitialized(class AINSBasePlayerController* bpp__NewOwningPlayerController__pf, class AINSPlayerState* bpp__NewPlayer__pf);
		void OnObjectiveBeginOverlapDelegate__DelegateSignature(class AINSPlayerController* bpp__Capturer__pf, class AObjectiveBase* bpp__Objective__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
