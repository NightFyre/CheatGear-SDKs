#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * DynamicClass CC_BASE_HIJAB.CC_BASE_HIJAB_C
	 * Size -> 0x0008 (FullSize[0x04A0] - InheritedSize[0x0498])
	 */
	class UCC_BASE_HIJAB_C : public UCC_BASE_Character_Parent_C
	{
	public:
		class USharedCosmeticState*                                K2Node_Event_NewState;                                   // 0x0498(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void UpdateHijabMorphs(ECarrierArmour bpp__ArmourCarrier__pf, const class FName& bpp__TorsoMorph__pf, class FName* bpp__Morph__pf);
		void BlueprintInitCosmetic(class UClass* bpp__VariationClass__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
