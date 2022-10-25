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
	 * BlueprintGeneratedClass Ability_Weapon_Fearmonger.Ability_Weapon_Fearmonger_C
	 * Size -> 0x0040 (FullSize[0x0138] - InheritedSize[0x00F8])
	 */
	class UAbility_Weapon_Fearmonger_C : public UOakAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00F8(0x0008) Transient, DuplicateTransient
		class ABPChar_Player_C*                                    Player;                                                  // 0x0100(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        CheckTerror;                                             // 0x0108(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FGbxAbilityResourceController_ResourcePoolDelegate  RsrcCntrlr_GbxAbilityResourceController_ResourcePoolDelegate_Ability_Weapon_Fearmonger; // 0x0110(0x0028)

	public:
		void OnRegistered();
		void TerrorUpdated(const struct FGameResourcePoolReference& ResourcePool);
		void ExecuteUbergraph_Ability_Weapon_Fearmonger(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
