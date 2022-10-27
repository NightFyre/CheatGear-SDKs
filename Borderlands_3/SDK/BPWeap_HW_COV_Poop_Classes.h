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
	 * BlueprintGeneratedClass BPWeap_HW_COV_Poop.BPWeap_HW_COV_Poop_C
	 * Size -> 0x0018 (FullSize[0x0A00] - InheritedSize[0x09E8])
	 */
	class ABPWeap_HW_COV_Poop_C : public ABPWeap_HW_COV_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x09E8(0x0008) Transient, DuplicateTransient
		class UOakDialogComponent*                                 OakDialog;                                               // 0x09F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class AOakCharacter*                                       MyOakCharacter;                                          // 0x09F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void TryIdleAudio();
		void UserConstructionScript();
		void Notify_ReloadStarted(bool bAutoReload);
		void WeaponAttached();
		void EquipEventNotify();
		void WeaponPutDownEvent(class AWeapon* EventWeapon);
		void OnKilledEnemy_Event(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
		void ExecuteUbergraph_BPWeap_HW_COV_Poop(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
