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
	 * BlueprintGeneratedClass WeaponType_Hardpoints_Bearfist_HeavyPunch.WeaponType_Hardpoints_Bearfist_HeavyPunch_C
	 * Size -> 0x0018 (FullSize[0x0AC8] - InheritedSize[0x0AB0])
	 */
	class AWeaponType_Hardpoints_Bearfist_HeavyPunch_C : public AWeaponType_Hardpoints_BearFist_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0AB0(0x0008) Transient, DuplicateTransient
		class UIronBearWeaponUseComponent_Jackhammer*              IronBearWeaponUseComponent_Jackhammer;                   // 0x0AB8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FRandomStream                                       RandomStream;                                            // 0x0AC0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		void DoMod1Effect(class UDamageSource* InDamageSource, class AActor* InDamageCauser);
		void UserConstructionScript();
		void CausedDamage_BearFist(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
		void BndEvt__IronBearWeaponUseComponent_Jackhammer_K2Node_ComponentBoundEvent_0_WeaponUsedEvent__DelegateSignature_WeaponType_Hardpoints_Bearfist_HeavyPunch();
		void ExecuteUbergraph_WeaponType_Hardpoints_Bearfist_HeavyPunch(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
