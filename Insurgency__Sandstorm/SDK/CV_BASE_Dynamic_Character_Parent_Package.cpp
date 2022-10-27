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
	 * 		RVA    -> 0x04F95EE0
	 * 		Name   -> Function CV_BASE_Dynamic_Character_Parent.CV_BASE_Dynamic_Character_Parent_C.SetColourBaseParameters
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            bpp__Index__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        bpp__ParameterName__pf__const                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                bpp__ColourValue__pf                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCV_BASE_Dynamic_Character_Parent_C::SetColourBaseParameters(int32_t bpp__Index__pf, const class FName& bpp__ParameterName__pf__const, struct FLinearColor* bpp__ColourValue__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CV_BASE_Dynamic_Character_Parent.CV_BASE_Dynamic_Character_Parent_C.SetColourBaseParameters");
		
		UCV_BASE_Dynamic_Character_Parent_C_SetColourBaseParameters_Params params {};
		params.bpp__Index__pf = bpp__Index__pf;
		params.bpp__ParameterName__pf__const = bpp__ParameterName__pf__const;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__ColourValue__pf != nullptr)
			*bpp__ColourValue__pf = params.bpp__ColourValue__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F95D90
	 * 		Name   -> Function CV_BASE_Dynamic_Character_Parent.CV_BASE_Dynamic_Character_Parent_C.CreateVariationDynamicMaterial
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UMeshComponent*                              bpp__SkeletalMesh__pf                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            bpp__MatID__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMaterialInterface*                          bpp__OptionalMaterial__pf                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMaterialInstanceDynamic*                    bpp__DynamicMaterial__pf                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCV_BASE_Dynamic_Character_Parent_C::CreateVariationDynamicMaterial(class UMeshComponent* bpp__SkeletalMesh__pf, int32_t bpp__MatID__pf, class UMaterialInterface* bpp__OptionalMaterial__pf, class UMaterialInstanceDynamic** bpp__DynamicMaterial__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CV_BASE_Dynamic_Character_Parent.CV_BASE_Dynamic_Character_Parent_C.CreateVariationDynamicMaterial");
		
		UCV_BASE_Dynamic_Character_Parent_C_CreateVariationDynamicMaterial_Params params {};
		params.bpp__SkeletalMesh__pf = bpp__SkeletalMesh__pf;
		params.bpp__MatID__pf = bpp__MatID__pf;
		params.bpp__OptionalMaterial__pf = bpp__OptionalMaterial__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__DynamicMaterial__pf != nullptr)
			*bpp__DynamicMaterial__pf = params.bpp__DynamicMaterial__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F95C80
	 * 		Name   -> Function CV_BASE_Dynamic_Character_Parent.CV_BASE_Dynamic_Character_Parent_C.BlueprintInitVariation
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UCosmeticItem*                               bpp__OuterCosmetic__pf                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCV_BASE_Dynamic_Character_Parent_C::BlueprintInitVariation(class UCosmeticItem* bpp__OuterCosmetic__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CV_BASE_Dynamic_Character_Parent.CV_BASE_Dynamic_Character_Parent_C.BlueprintInitVariation");
		
		UCV_BASE_Dynamic_Character_Parent_C_BlueprintInitVariation_Params params {};
		params.bpp__OuterCosmetic__pf = bpp__OuterCosmetic__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F95A30
	 * 		Name   -> Function CV_BASE_Dynamic_Character_Parent.CV_BASE_Dynamic_Character_Parent_C.ApplyCamoTexture
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMaterialInstanceDynamic*                    bpp__DynamicMaterial__pf                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCV_BASE_Dynamic_Character_Parent_C::ApplyCamoTexture(class UMaterialInstanceDynamic* bpp__DynamicMaterial__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CV_BASE_Dynamic_Character_Parent.CV_BASE_Dynamic_Character_Parent_C.ApplyCamoTexture");
		
		UCV_BASE_Dynamic_Character_Parent_C_ApplyCamoTexture_Params params {};
		params.bpp__DynamicMaterial__pf = bpp__DynamicMaterial__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCV_BASE_Dynamic_Character_Parent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCV_BASE_Dynamic_Character_Parent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass CV_BASE_Dynamic_Character_Parent.CV_BASE_Dynamic_Character_Parent_C");
		return ptr;
	}

}


