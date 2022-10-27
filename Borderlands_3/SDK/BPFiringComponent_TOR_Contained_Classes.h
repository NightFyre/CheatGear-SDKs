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
	 * BlueprintGeneratedClass BPFiringComponent_TOR_Contained.BPFiringComponent_TOR_Contained_C
	 * Size -> 0x000C (FullSize[0x098C] - InheritedSize[0x0980])
	 */
	class UBPFiringComponent_TOR_Contained_C : public UBPWeaponFireProjectileComponent_Torgue_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0980(0x0008) Transient, DuplicateTransient
		float                                                      StackingBonus;                                           // 0x0988(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void NotifyReloadStarted_Event(class AWeapon* EventWeapon, bool bAutoReload);
		void K2_OnDeactivated();
		void ExecuteUbergraph_BPFiringComponent_TOR_Contained(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
