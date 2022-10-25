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
	 * DynamicClass CC_BASE_FACEWEAR_Balaclava.CC_BASE_FACEWEAR_Balaclava_C
	 * Size -> 0x0008 (FullSize[0x0540] - InheritedSize[0x0538])
	 */
	class UCC_BASE_FACEWEAR_Balaclava_C : public UCC_BASE_FACEWEAR_C
	{
	public:
		class USharedCosmeticState*                                K2Node_Event_NewState;                                   // 0x0538(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void BlueprintInitCosmetic(class UClass* bpp__VariationClass__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
