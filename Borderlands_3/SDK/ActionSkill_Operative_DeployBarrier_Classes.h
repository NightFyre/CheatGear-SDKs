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
	 * BlueprintGeneratedClass ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C
	 * Size -> 0x0028 (FullSize[0x02A0] - InheritedSize[0x0278])
	 */
	class UActionSkill_Operative_DeployBarrier_C : public UOakActionAbility_Barrier
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) Transient, DuplicateTransient
		bool                                                       FailedToSpawnBarrier;                                    // 0x0280(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       BestLaidPlans;                                           // 0x0281(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7YFK[0x6];                                   // 0x0282(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDataTableValueHandle                               BestLaidPlains;                                          // 0x0288(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		void IsHoldingBarrier(bool* res);
		void RefillBarrierHealth(bool* res);
		void GiveBarrierHealth(float Health, float* New_Health);
		void GetBarrierReference(class AActor** Barrier);
		void GetBarrierHealthPercent(float* HealthPercent);
		bool ShouldStopAbilityOnPawnSlotComponentAttach();
		class AOperativeBarrier* SpawnNewBarrier(const struct FTransform& Transform);
		float GetCooldownRestartPercent();
		void StartHoldingBarrier(class AActor* Player);
		void ActivateHighlyUnstable();
		void ActivateHighlyUnstableFromCarry();
		void OnStartActionAbility();
		void DeployNewBarrierInHand(class AActor* Player);
		void TryDropPickup();
		void DeployNewBarrierAroundPlayer();
		void OnStopActionAbility();
		void ExecuteUbergraph_ActionSkill_Operative_DeployBarrier(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
