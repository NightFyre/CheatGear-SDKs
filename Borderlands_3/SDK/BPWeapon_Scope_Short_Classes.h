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
	 * BlueprintGeneratedClass BPWeapon_Scope_Short.BPWeapon_Scope_Short_C
	 * Size -> 0x0008 (FullSize[0x03F8] - InheritedSize[0x03F0])
	 */
	class UBPWeapon_Scope_Short_C : public UWeaponScopeComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03F0(0x0008) Transient, DuplicateTransient

	public:
		void ExecuteUbergraph_BPWeapon_Scope_Short(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
