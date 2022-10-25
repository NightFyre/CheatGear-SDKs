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
	 * BlueprintGeneratedClass ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C
	 * Size -> 0x0028 (FullSize[0x0298] - InheritedSize[0x0270])
	 */
	class UActionSkill_Operative_ShoulderCannon_C : public UOakActionAbility_ShoulderCannon
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0270(0x0008) Transient, DuplicateTransient
		class AIO_Operative_ShoulderCannon_C*                      ShoulderCannon;                                          // 0x0278(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDataTableValueHandle                               Mod3Cooldown;                                            // 0x0280(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		void StartShoulderCannonMod3Timer(bool* res);
		void IsShouldCannonModSlotted(EShoulderCannonMods Mod, bool* res);
		void GetCannonRef(class AActor** Ref);
		bool ShouldAbortActivation(unsigned char* OutAbortCode);
		class AInteractiveObject* TrySpawnCannon();
		bool IsActionSkillValid();
		void OnPaused();
		void OnResumed();
		void OnChargeCountChanged(int32_t OldCharge);
		void OnActivated();
		void SpawnShoulderCannon();
		void OnStartActionAbility();
		void OnDeactivated();
		void OnRegistered();
		void OnUnregistered();
		void ExecuteUbergraph_ActionSkill_Operative_ShoulderCannon(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
