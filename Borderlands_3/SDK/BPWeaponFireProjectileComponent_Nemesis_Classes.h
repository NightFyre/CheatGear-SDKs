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
	 * BlueprintGeneratedClass BPWeaponFireProjectileComponent_Nemesis.BPWeaponFireProjectileComponent_Nemesis_C
	 * Size -> 0x0010 (FullSize[0x0968] - InheritedSize[0x0958])
	 */
	class UBPWeaponFireProjectileComponent_Nemesis_C : public UWeaponFireProjectileComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0958(0x0008) Transient, DuplicateTransient
		class UClass*                                              CachedElement;                                           // 0x0960(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void K2_OnActivated();
		void ElementalSwitch();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BPWeaponFireProjectileComponent_Nemesis(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
