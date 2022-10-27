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
	 * BlueprintGeneratedClass BPWeaponFireProjectile_Smog.BPWeaponFireProjectile_Smog_C
	 * Size -> 0x0010 (FullSize[0x0968] - InheritedSize[0x0958])
	 */
	class UBPWeaponFireProjectile_Smog_C : public UWeaponFireProjectileComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0958(0x0008) Transient, DuplicateTransient
		class UOakDamageCauserComponent*                           OakDamageCauser;                                         // 0x0960(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		class UClass* GetShotLightProjectileData();
		void OnCausedDeath_Event(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
		void K2_OnActivated();
		void K2_OnDeactivated();
		void ExecuteUbergraph_BPWeaponFireProjectile_Smog(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
