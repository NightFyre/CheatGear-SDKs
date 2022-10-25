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
	 * BlueprintGeneratedClass Passive_Beastmaster_Ranged3.Passive_Beastmaster_Ranged3_C
	 * Size -> 0x00C8 (FullSize[0x0278] - InheritedSize[0x01B0])
	 */
	class UPassive_Beastmaster_Ranged3_C : public UOakPassiveAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01B0(0x0008) Transient, DuplicateTransient
		class AWeapon*                                             PlayerFiredWeapon;                                       // 0x01B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Killed_Beast;                                            // 0x01C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Killed_Human;                                            // 0x01C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Killed_Robot;                                            // 0x01C2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IFJ8[0x5];                                   // 0x01C3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              NewTarget;                                               // 0x01C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGameplayTagContainer                               Tags_Humanoid;                                           // 0x01D0(0x0020) Edit, BlueprintVisible, DisableEditOnInstance
		struct FGameplayTagContainer                               Tags_Robot;                                              // 0x01F0(0x0020) Edit, BlueprintVisible, DisableEditOnInstance
		struct FGameplayTagContainer                               Tags_Beast;                                              // 0x0210(0x0020) Edit, BlueprintVisible, DisableEditOnInstance
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Passive_Beastmaster_Ranged3; // 0x0230(0x0028)
		class UBPEventHub_Beastmaster_C*                           OwnerEventHub;                                           // 0x0258(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDataTableValueHandle                               PetEffectDuration;                                       // 0x0260(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		void OnCausedDeath_Ranged3(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
		void OnActivated();
		void HandleTriggeredAbility(class AActor* DamagedActor);
		void ClassModUnique03_KillSkillTrigger(class AActor* DamagedActor);
		void ExecuteUbergraph_Passive_Beastmaster_Ranged3(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
