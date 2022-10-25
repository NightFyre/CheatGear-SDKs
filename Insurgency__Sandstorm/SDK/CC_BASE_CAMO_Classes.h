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
	 * DynamicClass CC_BASE_CAMO.CC_BASE_CAMO_C
	 * Size -> 0x00B8 (FullSize[0x0508] - InheritedSize[0x0450])
	 */
	class UCC_BASE_CAMO_C : public UCosmeticItem
	{
	public:
		struct FColourStruct                                       CamoColor;                                               // 0x0450(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CamoScaleMultiplier;                                     // 0x04A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RandomCamoShift;                                         // 0x04A4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6EHM[0x3];                                   // 0x04A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture*                                            CamoTexture;                                             // 0x04A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USharedCosmeticState*                                K2Node_Event_NewState;                                   // 0x04B0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCosmeticColorGroup                                 K2Node_MakeStruct_CosmeticColorGroup;                    // 0x04B8(0x0050) Transient, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic

	public:
		void BlueprintInitSharedState(class USharedCosmeticState* bpp__NewState__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
