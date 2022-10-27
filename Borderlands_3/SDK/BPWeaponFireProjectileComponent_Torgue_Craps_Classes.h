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
	 * BlueprintGeneratedClass BPWeaponFireProjectileComponent_Torgue_Craps.BPWeaponFireProjectileComponent_Torgue_Craps_C
	 * Size -> 0x001C (FullSize[0x099C] - InheritedSize[0x0980])
	 */
	class UBPWeaponFireProjectileComponent_Torgue_Craps_C : public UBPWeaponFireProjectileComponent_Torgue_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0980(0x0008) Transient, DuplicateTransient
		int32_t                                                    MaxMagazineSize;                                         // 0x0988(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CrapsShot;                                               // 0x098C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TKGZ[0x3];                                   // 0x098D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CrapsNumber;                                             // 0x0990(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       NumberChosen;                                            // 0x0994(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EUAB[0x3];                                   // 0x0995(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CrapsNumberExtra;                                        // 0x0998(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		class UClass* GetShotLightProjectileData();
		void ReloadComplete(class AWeapon* EventWeapon, bool bCompleted);
		void WeaponUsed();
		void ChooseCrapsNumber();
		void CheckCrapsShot();
		void K2_OnActivated();
		void ExecuteUbergraph_BPWeaponFireProjectileComponent_Torgue_Craps(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
