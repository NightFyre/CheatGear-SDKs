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
	 * BlueprintGeneratedClass Ability_All_Passive_TerrorCritDamage.Ability_All_Passive_TerrorCritDamage_C
	 * Size -> 0x0020 (FullSize[0x0118] - InheritedSize[0x00F8])
	 */
	class UAbility_All_Passive_TerrorCritDamage_C : public UOakAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00F8(0x0008) Transient, DuplicateTransient
		class ABPChar_Player_C*                                    Player;                                                  // 0x0100(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        GenerateTerrorRate;                                      // 0x0108(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FTimerHandle                                        GenerateTerrorDuration;                                  // 0x0110(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		void OnActivated();
		void ExecuteUbergraph_Ability_All_Passive_TerrorCritDamage(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
