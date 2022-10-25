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
	 * BlueprintGeneratedClass Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C
	 * Size -> 0x0078 (FullSize[0x0170] - InheritedSize[0x00F8])
	 */
	class UAbility_BloodyHarvest_Terror_C : public UOakAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00F8(0x0008) Transient, DuplicateTransient
		float                                                      TerrorDuration;                                          // 0x0100(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_AM6M[0x4];                                   // 0x0104(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameResourcePoolReference                          ResourcePool_Terror;                                     // 0x0108(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, ContainsInstancedReference
		struct FGbxAbilityResourceController_ResourcePoolDelegate  RsrcCntrlr_GbxAbilityResourceController_ResourcePoolDelegate_Ability_BloodyHarvest_Insanity; // 0x0120(0x0028)
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_BloodyHarvest_Terror; // 0x0148(0x0028)

	public:
		void ForceResetAllTerror();
		void SetTerrorResourcePool();
		void GetTerrorResourcePoolValues(bool* IsValid, float* Terror_Current_Value);
		void RemoveTerror();
		void ApplyTerror3_Presentation();
		void ApplyTerror2_Presentation();
		void ApplyTerror1_Presentation();
		void RemoveTerror3_Presentation();
		void RemoveTerror2_Presentation();
		void RemoveTerror1_Presentation();
		void ApplyTerror();
		void Terror();
		void Update_Terror(const struct FGameResourcePoolReference& ResourcePool);
		void OnDeath_Terror(class AActor* DamageReceiver, class AActor* DamageCauser);
		void OnActivated();
		void OnDeactivated();
		void ExecuteUbergraph_Ability_BloodyHarvest_Terror(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
