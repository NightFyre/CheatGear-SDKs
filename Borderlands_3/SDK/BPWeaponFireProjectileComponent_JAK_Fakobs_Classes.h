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
	 * BlueprintGeneratedClass BPWeaponFireProjectileComponent_JAK_Fakobs.BPWeaponFireProjectileComponent_JAK_Fakobs_C
	 * Size -> 0x0008 (FullSize[0x0988] - InheritedSize[0x0980])
	 */
	class UBPWeaponFireProjectileComponent_JAK_Fakobs_C : public UWeaponJAKFireProjectileComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0980(0x0008) Transient, DuplicateTransient

	public:
		void ReceiveBeginPlay();
		void UsedWeapon(unsigned char InputChannel);
		void ExecuteUbergraph_BPWeaponFireProjectileComponent_JAK_Fakobs(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
