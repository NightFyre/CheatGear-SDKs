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
	 * BlueprintGeneratedClass Action_Operative_CalledShot.Action_Operative_CalledShot_C
	 * Size -> 0x0008 (FullSize[0x0280] - InheritedSize[0x0278])
	 */
	class UAction_Operative_CalledShot_C : public UOakAction_Anim_ActionAbility_GRMLN
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) Transient, DuplicateTransient

	public:
		void FireAtTarget();
		void GetCommandRingActor(class ACommandRing_Operative_GRMLN** res);
		void StopTargetingBeam();
		void StartTargetingBeam();
		void OnEnd(EGbxActionEndState ActionEndState, class AActor* Actor);
		void AN_LoopStarted();
		void StopButtonPress();
		void AN_ShowDevice();
		void AN_HideDevice();
		void OnBegin(class AActor* Actor);
		void ExecuteUbergraph_Action_Operative_CalledShot(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
