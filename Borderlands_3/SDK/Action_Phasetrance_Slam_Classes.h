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
	 * BlueprintGeneratedClass Action_Phasetrance_Slam.Action_Phasetrance_Slam_C
	 * Size -> 0x0008 (FullSize[0x02D8] - InheritedSize[0x02D0])
	 */
	class UAction_Phasetrance_Slam_C : public UAction_Phasetrance_Slam_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02D0(0x0008) Transient, DuplicateTransient

	public:
		void StopSlamLoopFeedback();
		void GetSlamControlledMove(class UClass** res);
		void GetSlamTargetLocation(struct FVector* res);
		void OnServerBegin(class AActor* Actor);
		void InnerDoSlamDamage();
		void AN_Unlockmovement();
		void OnServerEnd(EGbxActionEndState ActionEndState, class AActor* Actor);
		void OnBeginBringUpWeapon(class AActor* Actor);
		void AN_SlamMoveLock();
		void OnBegin(class AActor* Actor);
		void AN_FeedbackSlamLand();
		void AN_FeedbackSlamLoop();
		void ExecuteUbergraph_Action_Phasetrance_Slam(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
