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
	 * BlueprintGeneratedClass BPWeaponFireProjectileComponent_Heckle.BPWeaponFireProjectileComponent_Heckle_C
	 * Size -> 0x0058 (FullSize[0x09B0] - InheritedSize[0x0958])
	 */
	class UBPWeaponFireProjectileComponent_Heckle_C : public UWeaponFireProjectileComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0958(0x0008) Transient, DuplicateTransient
		struct FGameplayTagContainer                               TagContainer;                                            // 0x0960(0x0020) Edit, BlueprintVisible, DisableEditOnInstance
		class UFiringPattern*                                      DefaultPattern;                                          // 0x0980(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              DefaultProjectile;                                       // 0x0988(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    DefaultProjectilePerShot;                                // 0x0990(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_709U[0x4];                                   // 0x0994(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DefaultDamageType;                                       // 0x0998(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PoweredUp;                                               // 0x09A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JRKR[0x7];                                   // 0x09A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              PowerElement;                                            // 0x09A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void ReloadStarted(class AWeapon* EventWeapon, bool bAutoReload);
		void PowersCombined();
		void K2_OnDeactivated();
		void CheckPlayers();
		void K2_OnActivated();
		void ExecuteUbergraph_BPWeaponFireProjectileComponent_Heckle(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
