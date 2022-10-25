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
	 * DynamicClass Lesson_10_MeleeCharge.Lesson_10_MeleeCharge_C
	 * Size -> 0x0088 (FullSize[0x0170] - InheritedSize[0x00E8])
	 */
	class ULesson_10_MeleeCharge_C : public UTutorialLesson
	{
	public:
		bool                                                       bIsCurrentlySprinting;                                   // 0x00E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DKLW[0x3];                                   // 0x00E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LastKnownSprintLocation;                                 // 0x00EC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TotalSprintDistance;                                     // 0x00F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O9BO[0x4];                                   // 0x00FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AINSBasePlayerController*                            K2Node_Event_NewOwningPlayerController;                  // 0x0100(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AINSPlayerState*                                     K2Node_Event_NewPlayer;                                  // 0x0108(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate;                    // 0x0110(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		class AINSSoldier*                                         K2Node_CustomEvent_Interactor_3;                         // 0x0120(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AINSSoldier*                                         K2Node_CustomEvent_Interactor_2;                         // 0x0128(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AINSSoldier*                                         K2Node_CustomEvent_Interactor;                           // 0x0130(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AINSSoldier*                                         K2Node_CustomEvent_Player;                               // 0x0138(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate_2;                  // 0x0140(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate_3;                  // 0x0150(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate_4;                  // 0x0160(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic

	public:
		void UpdateSprintDistance(class AINSSoldier* bpp__Soldier__pf);
		void OnUpdatePosition(class AINSSoldier* bpp__Interactor__pf);
		void OnStartSprint(class AINSSoldier* bpp__Interactor__pf);
		void OnPlayerSpawned(class AINSSoldier* bpp__Player__pf);
		void OnEndSprint(class AINSSoldier* bpp__Interactor__pf);
		void CheckLessonTrigger(class AINSSoldier* bpp__Soldier__pf);
		void BlueprintOnInitialized(class AINSBasePlayerController* bpp__NewOwningPlayerController__pf, class AINSPlayerState* bpp__NewPlayer__pf);
		void OnPlayerEventDelegate__DelegateSignature(class AINSSoldier* bpp__Player__pf);
		void OnMovementEventDelegate__DelegateSignature(class AINSSoldier* bpp__Interactor__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
