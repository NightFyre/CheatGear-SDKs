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
	 * BlueprintGeneratedClass BPWeaponChargeComponent_BanditLauncher.BPWeaponChargeComponent_BanditLauncher_C
	 * Size -> 0x0010 (FullSize[0x0310] - InheritedSize[0x0300])
	 */
	class UBPWeaponChargeComponent_BanditLauncher_C : public UBPWeaponChargeComponent_MAL_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0300(0x0008) Transient, DuplicateTransient
		int32_t                                                    BaseAmmoCost;                                            // 0x0308(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    AmmoCostIncrease;                                        // 0x030C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void Event_Discharge();
		void Event_Charge1();
		void Event_Charge2();
		void Event_Charge3();
		void Event_Charge4();
		void Event_Charge5();
		void ExecuteUbergraph_BPWeaponChargeComponent_BanditLauncher(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
