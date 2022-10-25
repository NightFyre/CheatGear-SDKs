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
	 * BlueprintGeneratedClass Passive_Beastmaster_DLCSkill_3.Passive_Beastmaster_DLCSkill_2_C
	 * Size -> 0x00A8 (FullSize[0x0258] - InheritedSize[0x01B0])
	 */
	class UPassive_Beastmaster_DLCSkill_2_C : public UOakPassiveAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01B0(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ResourcePoolDelegate  RsrcCntrlr_GbxAbilityResourceController_ResourcePoolDelegate_Passive_Beastmaster_DLCSkill_3; // 0x01B8(0x0028)
		struct FDataTableValueHandle                               CooldownTime;                                            // 0x01E0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FDataTableValueHandle                               Damage;                                                  // 0x01F8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		class ABPChar_Beastmaster_C*                               Beastmaster;                                             // 0x0210(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDataTableValueHandle                               Radius;                                                  // 0x0218(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Passive_Beastmaster_DLCSkill_3; // 0x0230(0x0028)

	public:
		void DamageCalc(float* res);
		void OnActivated();
		void DLCSkill2_TriggerSkill(const struct FGameResourcePoolReference& ResourcePool);
		void OnPetSpawned(class AOakCharacter* Pet);
		void ExecuteUbergraph_Passive_Beastmaster_DLCSkill_3(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
