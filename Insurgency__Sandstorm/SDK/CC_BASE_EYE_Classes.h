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
	 * DynamicClass CC_BASE_EYE.CC_BASE_EYE_C
	 * Size -> 0x0018 (FullSize[0x04B0] - InheritedSize[0x0498])
	 */
	class UCC_BASE_EYE_C : public UCC_BASE_Character_Parent_C
	{
	public:
		class FName                                                EyewearHeadMorph;                                        // 0x0498(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                EyewearMorphSuffix;                                      // 0x04A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USharedCosmeticState*                                K2Node_Event_NewState;                                   // 0x04A8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void BlueprintInitCosmetic(class UClass* bpp__VariationClass__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
