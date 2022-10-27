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
	 * DynamicClass CV_BASE_Dynamic_Character_Parent.CV_BASE_Dynamic_Character_Parent_C
	 * Size -> 0x0088 (FullSize[0x0350] - InheritedSize[0x02C8])
	 */
	class UCV_BASE_Dynamic_Character_Parent_C : public UCosmeticVariation
	{
	public:
		struct FColourStruct                                       Colour;                                                  // 0x02C8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsBaseCamo;                                             // 0x0318(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LZ75[0x3];                                   // 0x0319(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CamoScaleMultiplier;                                     // 0x031C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RandomCamoShift;                                         // 0x0320(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SVE1[0x7];                                   // 0x0321(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              CamoTexture[0x28];                                       // 0x0328(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		void SetColourBaseParameters(int32_t bpp__Index__pf, const class FName& bpp__ParameterName__pf__const, struct FLinearColor* bpp__ColourValue__pf);
		void CreateVariationDynamicMaterial(class UMeshComponent* bpp__SkeletalMesh__pf, int32_t bpp__MatID__pf, class UMaterialInterface* bpp__OptionalMaterial__pf, class UMaterialInstanceDynamic** bpp__DynamicMaterial__pf);
		void BlueprintInitVariation(class UCosmeticItem* bpp__OuterCosmetic__pf);
		void ApplyCamoTexture(class UMaterialInstanceDynamic* bpp__DynamicMaterial__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
