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
	 * DynamicClass CC_BASE_EYECOLOUR.CC_BASE_EYECOLOUR_C
	 * Size -> 0x0018 (FullSize[0x0468] - InheritedSize[0x0450])
	 */
	class UCC_BASE_EYECOLOUR_C : public UCosmeticItem
	{
	public:
		class UMaterialInstance*                                   EyeMaterial;                                             // 0x0450(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECosmeticEyeColor                                          EyeColor;                                                // 0x0458(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WYW5[0x7];                                   // 0x0459(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USharedCosmeticState*                                K2Node_Event_NewState;                                   // 0x0460(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void BlueprintInitSharedState(class USharedCosmeticState* bpp__NewState__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
