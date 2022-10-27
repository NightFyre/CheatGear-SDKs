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
	 * BlueprintGeneratedClass BPWeaponFireProjectile_MAL_SM_DestructoSpin.BPWeaponFireProjectile_MAL_SM_DestructoSpin_C
	 * Size -> 0x0020 (FullSize[0x0978] - InheritedSize[0x0958])
	 */
	class UBPWeaponFireProjectile_MAL_SM_DestructoSpin_C : public UWeaponFireProjectileComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0958(0x0008) Transient, DuplicateTransient
		class AWeapon*                                             MyWeapon;                                                // 0x0960(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              Mode_0_DmgType;                                          // 0x0968(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              Mode_1_DmgType;                                          // 0x0970(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void K2_OnActivated();
		void EvaluateShot();
		void ExecuteUbergraph_BPWeaponFireProjectile_MAL_SM_DestructoSpin(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
