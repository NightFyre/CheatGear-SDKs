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
	 * DynamicClass CC_BASE_EQUIP.CC_BASE_EQUIP_C
	 * Size -> 0x0038 (FullSize[0x0488] - InheritedSize[0x0450])
	 */
	class UCC_BASE_EQUIP_C : public UCosmeticItem
	{
	public:
		TArray<class UMaterialInstance*>                           ColorMaterials;                                          // 0x0450(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UMaterialInstance*>                           CamoMaterials;                                           // 0x0460(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMeshComponent*                                      EquipmentMesh;                                           // 0x0470(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              K2Node_Event_VariationClass;                             // 0x0478(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMeshComponent*                                      CallFunc_GetEquipmentMesh_EquipmentMesh;                 // 0x0480(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void UpdateVariation();
		void UpdateEquipmentVariation(class UMeshComponent* bpp__EquipmentMesh__pf);
		void GetEquipmentMesh(class UMeshComponent** bpp__EquipmentMesh__pf);
		void CreateStoreEquipmentDynamic(class UCosmeticVariation* bpp__Variation__pf, TArray<class UMaterialInstance*>* bpp__ColourMaterials__pf, TArray<class UMaterialInstance*>* bpp__CamoMaterials__pf, int32_t bpp__MaterialArrayValue__pf, TArray<class UMaterialInstanceDynamic*>* bpp__DynamicArray__pf, class UMeshComponent* bpp__Mesh__pf, const class FName& bpp__SlotName__pf);
		void BlueprintInitCosmetic(class UClass* bpp__VariationClass__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
