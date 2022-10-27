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
	 * BlueprintGeneratedClass BPWeap_SM_Hyp_Handsome.BPWeap_SM_Hyp_Handsome_C
	 * Size -> 0x001C (FullSize[0x0A00] - InheritedSize[0x09E4])
	 */
	class ABPWeap_SM_Hyp_Handsome_C : public ABPWeap_SM_Hyperion_C
	{
	public:
		unsigned char                                              UnknownData_7ZKG[0x4];                                   // 0x09E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x09E8(0x0008) Transient, DuplicateTransient
		class UOakDialogComponent*                                 OakDialog;                                               // 0x09F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class AOakCharacter*                                       MyOakCharacter;                                          // 0x09F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void TryAdvancingAudio();
		void TryIdleAudio();
		void Tediore_WeaponData(float* DamageRadius, class UClass** DamageTypeClass, int32_t* NumMirvProjectiles, float* FireRate, float* LoadedAmmo, int32_t* ThrowType);
		void UserConstructionScript();
		void Notify_ReloadStarted(bool bAutoReload);
		void WeaponAttached();
		void EquipEventNotify();
		void WeaponPutDownEvent(class AWeapon* EventWeapon);
		void OnKilledEnemy_Event(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
		void ExecuteUbergraph_BPWeap_SM_Hyp_Handsome(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
