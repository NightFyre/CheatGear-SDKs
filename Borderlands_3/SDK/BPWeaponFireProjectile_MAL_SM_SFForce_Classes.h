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
	 * BlueprintGeneratedClass BPWeaponFireProjectile_MAL_SM_SFForce.BPWeaponFireProjectile_MAL_SM_SFForce_C
	 * Size -> 0x0020 (FullSize[0x0958] - InheritedSize[0x0938])
	 */
	class UBPWeaponFireProjectile_MAL_SM_SFForce_C : public UWeaponFireBeamComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0938(0x0008) Transient, DuplicateTransient
		class AWeapon*                                             MyWeapon;                                                // 0x0940(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              Mode_0_DmgType;                                          // 0x0948(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              Mode_1_DmgType;                                          // 0x0950(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void K2_OnActivated();
		void EvaluateShot();
		void NotifyUseStarted_Event();
		void NotifyUseFinished_Event();
		void ExecuteUbergraph_BPWeaponFireProjectile_MAL_SM_SFForce(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
