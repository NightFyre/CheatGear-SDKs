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
	 * DynamicClass CC_BASE_SKINTONE.CC_BASE_SKINTONE_C
	 * Size -> 0x0018 (FullSize[0x0468] - InheritedSize[0x0450])
	 */
	class UCC_BASE_SKINTONE_C : public UCosmeticItem
	{
	public:
		struct FLinearColor                                        SkinColor;                                               // 0x0450(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USharedCosmeticState*                                K2Node_Event_NewState;                                   // 0x0460(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void BlueprintInitSharedState(class USharedCosmeticState* bpp__NewState__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
