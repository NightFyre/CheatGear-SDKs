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
	 * BlueprintGeneratedClass BPWeap_PS_MAL_SuckerPunch.BPWeap_PS_MAL_SuckerPunch_C
	 * Size -> 0x0018 (FullSize[0x0A68] - InheritedSize[0x0A50])
	 */
	class ABPWeap_PS_MAL_SuckerPunch_C : public ABPWeap_PS_MAL_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A50(0x0008) Transient, DuplicateTransient
		class UOakDialogComponent*                                 OakDialog;                                               // 0x0A58(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class AOakCharacter*                                       MyOakCharacter;                                          // 0x0A60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void TryIdleAudio();
		void UserConstructionScript();
		void WeaponAttached();
		void EquipEventNotify();
		void WeaponPutDownEvent(class AWeapon* EventWeapon);
		void OnKilledEnemy_Event(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
		void Notify_ReloadStarted(bool bAutoReload);
		void ExecuteUbergraph_BPWeap_PS_MAL_SuckerPunch(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
