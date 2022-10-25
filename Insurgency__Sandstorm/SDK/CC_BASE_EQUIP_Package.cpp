/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x04F35FD0
	 * 		Name   -> Function CC_BASE_EQUIP.CC_BASE_EQUIP_C.UpdateVariation
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UCC_BASE_EQUIP_C::UpdateVariation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CC_BASE_EQUIP.CC_BASE_EQUIP_C.UpdateVariation");
		
		UCC_BASE_EQUIP_C_UpdateVariation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F35F40
	 * 		Name   -> Function CC_BASE_EQUIP.CC_BASE_EQUIP_C.UpdateEquipmentVariation
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMeshComponent*                              bpp__EquipmentMesh__pf                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCC_BASE_EQUIP_C::UpdateEquipmentVariation(class UMeshComponent* bpp__EquipmentMesh__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CC_BASE_EQUIP.CC_BASE_EQUIP_C.UpdateEquipmentVariation");
		
		UCC_BASE_EQUIP_C_UpdateEquipmentVariation_Params params {};
		params.bpp__EquipmentMesh__pf = bpp__EquipmentMesh__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F35DA0
	 * 		Name   -> Function CC_BASE_EQUIP.CC_BASE_EQUIP_C.GetEquipmentMesh
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UMeshComponent*                              bpp__EquipmentMesh__pf                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCC_BASE_EQUIP_C::GetEquipmentMesh(class UMeshComponent** bpp__EquipmentMesh__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CC_BASE_EQUIP.CC_BASE_EQUIP_C.GetEquipmentMesh");
		
		UCC_BASE_EQUIP_C_GetEquipmentMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__EquipmentMesh__pf != nullptr)
			*bpp__EquipmentMesh__pf = params.bpp__EquipmentMesh__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F35920
	 * 		Name   -> Function CC_BASE_EQUIP.CC_BASE_EQUIP_C.CreateStoreEquipmentDynamic
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UCosmeticVariation*                          bpp__Variation__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UMaterialInstance*>                   bpp__ColourMaterials__pf                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UMaterialInstance*>                   bpp__CamoMaterials__pf                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            bpp__MaterialArrayValue__pf                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UMaterialInstanceDynamic*>            bpp__DynamicArray__pf                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMeshComponent*                              bpp__Mesh__pf                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        bpp__SlotName__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCC_BASE_EQUIP_C::CreateStoreEquipmentDynamic(class UCosmeticVariation* bpp__Variation__pf, TArray<class UMaterialInstance*>* bpp__ColourMaterials__pf, TArray<class UMaterialInstance*>* bpp__CamoMaterials__pf, int32_t bpp__MaterialArrayValue__pf, TArray<class UMaterialInstanceDynamic*>* bpp__DynamicArray__pf, class UMeshComponent* bpp__Mesh__pf, const class FName& bpp__SlotName__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CC_BASE_EQUIP.CC_BASE_EQUIP_C.CreateStoreEquipmentDynamic");
		
		UCC_BASE_EQUIP_C_CreateStoreEquipmentDynamic_Params params {};
		params.bpp__Variation__pf = bpp__Variation__pf;
		params.bpp__MaterialArrayValue__pf = bpp__MaterialArrayValue__pf;
		params.bpp__Mesh__pf = bpp__Mesh__pf;
		params.bpp__SlotName__pf = bpp__SlotName__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__ColourMaterials__pf != nullptr)
			*bpp__ColourMaterials__pf = params.bpp__ColourMaterials__pf;
		if (bpp__CamoMaterials__pf != nullptr)
			*bpp__CamoMaterials__pf = params.bpp__CamoMaterials__pf;
		if (bpp__DynamicArray__pf != nullptr)
			*bpp__DynamicArray__pf = params.bpp__DynamicArray__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F35470
	 * 		Name   -> Function CC_BASE_EQUIP.CC_BASE_EQUIP_C.BlueprintInitCosmetic
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		class UClass*                                      bpp__VariationClass__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCC_BASE_EQUIP_C::BlueprintInitCosmetic(class UClass* bpp__VariationClass__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CC_BASE_EQUIP.CC_BASE_EQUIP_C.BlueprintInitCosmetic");
		
		UCC_BASE_EQUIP_C_BlueprintInitCosmetic_Params params {};
		params.bpp__VariationClass__pf = bpp__VariationClass__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCC_BASE_EQUIP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCC_BASE_EQUIP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass CC_BASE_EQUIP.CC_BASE_EQUIP_C");
		return ptr;
	}

}


