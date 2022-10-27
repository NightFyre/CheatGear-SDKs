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
	 * BlueprintGeneratedClass Action_IronBear_BearFist_AutoBear_L.Action_IronBear_BearFist_AutoBear_L_C
	 * Size -> 0x0020 (FullSize[0x0238] - InheritedSize[0x0218])
	 */
	class UAction_IronBear_BearFist_AutoBear_L_C : public UOakAction_Anim
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0218(0x0008) Transient, DuplicateTransient
		class ABPChar_IronBear_C*                                  IronBear;                                                // 0x0220(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AWeaponType_Hardpoints_BearFist_C*                   BearFist;                                                // 0x0228(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWeaponSlotData*                                     WeaponSlot;                                              // 0x0230(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnServerBegin(class AActor* Actor);
		void IronBearMeleeNotify();
		void ExecuteUbergraph_Action_IronBear_BearFist_AutoBear_L(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
