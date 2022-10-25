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
	 * BlueprintGeneratedClass BPWeap_PS_VLA.BPWeap_PS_VLA_C
	 * Size -> 0x0010 (FullSize[0x09E8] - InheritedSize[0x09D8])
	 */
	class ABPWeap_PS_VLA_C : public ABPWeap_VLA_BaseWeapon_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x09D8(0x0008) Transient, DuplicateTransient
		class UWeaponAmmoPoolComponent*                            AmmoPool_Mode2;                                          // 0x09E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void ModeSwitchStarted();
		void Notify_ReloadStarted(bool bAutoReload);
		void ExecuteUbergraph_BPWeap_PS_VLA(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
