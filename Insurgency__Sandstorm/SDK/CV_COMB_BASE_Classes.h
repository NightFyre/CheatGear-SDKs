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
	 * DynamicClass CV_COMB_BASE.CV_COMB_BASE_C
	 * Size -> 0x0140 (FullSize[0x0490] - InheritedSize[0x0350])
	 */
	class UCV_COMB_BASE_C : public UCV_BASE_Dynamic_Character_Parent_C
	{
	public:
		class UClass*                                              Primary_Color_Variation;                                 // 0x0350(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Secondary_Color_Variation;                               // 0x0358(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<EColourChannels, EColourChannels>                     SecondaryColorMap;                                       // 0x0360(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FColourStruct                                       PatternColour;                                           // 0x03B0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bComboPattern;                                           // 0x0400(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F4KS[0x7];                                   // 0x0401(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UINSSkeletalMeshComponent*                           K2Node_Event_SkeletalMesh;                               // 0x0408(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCharacterCosmeticAttachedModel                     K2Node_Event_CosmeticModel;                              // 0x0410(0x0070) Transient, DuplicateTransient, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       K2Node_Event_bFirstPerson;                               // 0x0480(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_Event_bBodyMesh;                                  // 0x0481(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ED5Y[0x6];                                   // 0x0482(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            CallFunc_CreateVariationDynamicMaterial_DynamicMaterial; // 0x0488(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void UpdateCombColourStruct(const struct FLinearColor& bpp__NewColour__pf, EColourChannels bpp__EColourChannel__pf, struct FColourStruct* bpp__ColourStruct__pf);
		void GetColorFromVariation(class UClass* bpp__Class__pf, struct FLinearColor* bpp__MasklessColour__pf, struct FLinearColor* bpp__LayerxOne__pfT, struct FLinearColor* bpp__LayerxTwo__pfT, struct FLinearColor* bpp__LayerxThree__pfT, struct FLinearColor* bpp__LayerxFour__pfT);
		void BlueprintCosmeticItemMeshLoaded(class UINSSkeletalMeshComponent* bpp__SkeletalMesh__pf, const struct FCharacterCosmeticAttachedModel& bpp__CosmeticModel__pf__const, bool bpp__bFirstPerson__pf__const, bool bpp__bBodyMesh__pf__const);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
