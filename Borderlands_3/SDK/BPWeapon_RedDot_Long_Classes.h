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
	 * BlueprintGeneratedClass BPWeapon_RedDot_Long.BPWeapon_RedDot_Long_C
	 * Size -> 0x0008 (FullSize[0x03E8] - InheritedSize[0x03E0])
	 */
	class UBPWeapon_RedDot_Long_C : public UWeaponRedDotComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03E0(0x0008) Transient, DuplicateTransient

	public:
		void ExecuteUbergraph_BPWeapon_RedDot_Long(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
