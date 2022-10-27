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
	 * BlueprintGeneratedClass Ability_PS_JAK_Trickshot.Ability_PS_JAK_Trickshot_C
	 * Size -> 0x0038 (FullSize[0x0130] - InheritedSize[0x00F8])
	 */
	class UAbility_PS_JAK_Trickshot_C : public UOakAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00F8(0x0008) Transient, DuplicateTransient
		class UBPWeaponFireProjectileComponent_JAK_C*              MyFireComponent;                                         // 0x0100(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_BinaryOperator; // 0x0108(0x0028)

	public:
		void OnRegistered();
		void OnCausedDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
		void ReloadEndedDelegate(class AWeapon* EventWeapon, bool bCompleted);
		void OnDeactivated();
		void OnUnregistered();
		void OnPaused();
		void ExecuteUbergraph_Ability_PS_JAK_Trickshot(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
