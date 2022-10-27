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
	 * BlueprintGeneratedClass Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C
	 * Size -> 0x0017 (FullSize[0x02D0] - InheritedSize[0x02B9])
	 */
	class UAction_Phasetrance_Slam_Base_C : public UAction_Phasetrance_Common_C
	{
	public:
		unsigned char                                              UnknownData_ASRH[0x7];                                   // 0x02B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) Transient, DuplicateTransient
		class UParticleSystemComponent*                            ArmBuildupFX;                                            // 0x02C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetSlamDamage(float* res);
		void SlamFeedbackLaunch(bool Enable);
		void InnerDoSlam();
		void InnerDoSlamDamage();
		void InnerShowSlamLandFX();
		void InnerOnSlamEnded();
		void InnerOnSlamStarted();
		void OnBegin(class AActor* Actor);
		void AN_StartDive();
		void OnEnd(EGbxActionEndState ActionEndState, class AActor* Actor);
		void OnFallEnded();
		void OnServerEnd(EGbxActionEndState ActionEndState, class AActor* Actor);
		void AN_DoSlam();
		void OnBeginBringUpWeapon(class AActor* Actor);
		void HandlePlayerLanded();
		void TriggerActionSkillReactDialogue();
		void TriggerActionSkillUseDialogue();
		void Trigger_Slam_Begin_Dialogue();
		void Trigger_Slam_Impact_Dialogue();
		void Trigger_slam_Taunt_Dialogue();
		void ExecuteUbergraph_Action_Phasetrance_Slam_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
