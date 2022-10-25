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
	 * 		RVA    -> 0x04F3AD10
	 * 		Name   -> Function CC_BASE_HEAD.CC_BASE_HEAD_C.Update Scarification
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UINSSkeletalMeshComponent*                   bpp__SkeletalMesh__pf                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__Condition__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        bpp__MaterialSlotName__pf                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCC_BASE_HEAD_C::Update_Scarification(class UINSSkeletalMeshComponent* bpp__SkeletalMesh__pf, bool bpp__Condition__pf, const class FName& bpp__MaterialSlotName__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CC_BASE_HEAD.CC_BASE_HEAD_C.Update Scarification");
		
		UCC_BASE_HEAD_C_Update_Scarification_Params params {};
		params.bpp__SkeletalMesh__pf = bpp__SkeletalMesh__pf;
		params.bpp__Condition__pf = bpp__Condition__pf;
		params.bpp__MaterialSlotName__pf = bpp__MaterialSlotName__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F3AB70
	 * 		Name   -> Function CC_BASE_HEAD.CC_BASE_HEAD_C.SetupTattoos
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bpp__FirstPerson__pf                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCC_BASE_HEAD_C::SetupTattoos(bool bpp__FirstPerson__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CC_BASE_HEAD.CC_BASE_HEAD_C.SetupTattoos");
		
		UCC_BASE_HEAD_C_SetupTattoos_Params params {};
		params.bpp__FirstPerson__pf = bpp__FirstPerson__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F3A9B0
	 * 		Name   -> Function CC_BASE_HEAD.CC_BASE_HEAD_C.CreateArmsDynamicMaterials
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bpp__FirstPerson__pf                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMaterialInstanceDynamic*                    bpp__DynamicMaterial__pf                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCC_BASE_HEAD_C::CreateArmsDynamicMaterials(bool bpp__FirstPerson__pf, class UMaterialInstanceDynamic** bpp__DynamicMaterial__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CC_BASE_HEAD.CC_BASE_HEAD_C.CreateArmsDynamicMaterials");
		
		UCC_BASE_HEAD_C_CreateArmsDynamicMaterials_Params params {};
		params.bpp__FirstPerson__pf = bpp__FirstPerson__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__DynamicMaterial__pf != nullptr)
			*bpp__DynamicMaterial__pf = params.bpp__DynamicMaterial__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F3A920
	 * 		Name   -> Function CC_BASE_HEAD.CC_BASE_HEAD_C.BlueprintInitCosmetic
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      bpp__VariationClass__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCC_BASE_HEAD_C::BlueprintInitCosmetic(class UClass* bpp__VariationClass__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CC_BASE_HEAD.CC_BASE_HEAD_C.BlueprintInitCosmetic");
		
		UCC_BASE_HEAD_C_BlueprintInitCosmetic_Params params {};
		params.bpp__VariationClass__pf = bpp__VariationClass__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F3A640
	 * 		Name   -> Function CC_BASE_HEAD.CC_BASE_HEAD_C.BlueprintCosmeticMeshLoaded
	 * 		Flags  -> (Native, Event, Public, HasOutParms)
	 * Parameters:
	 * 		class UINSSkeletalMeshComponent*                   bpp__SkeletalMesh__pf                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCharacterCosmeticAttachedModel             bpp__CosmeticModel__pf__const                              (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__bFirstPerson__pf__const                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__bBodyMesh__pf__const                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCC_BASE_HEAD_C::BlueprintCosmeticMeshLoaded(class UINSSkeletalMeshComponent* bpp__SkeletalMesh__pf, const struct FCharacterCosmeticAttachedModel& bpp__CosmeticModel__pf__const, bool bpp__bFirstPerson__pf__const, bool bpp__bBodyMesh__pf__const)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CC_BASE_HEAD.CC_BASE_HEAD_C.BlueprintCosmeticMeshLoaded");
		
		UCC_BASE_HEAD_C_BlueprintCosmeticMeshLoaded_Params params {};
		params.bpp__SkeletalMesh__pf = bpp__SkeletalMesh__pf;
		params.bpp__CosmeticModel__pf__const = bpp__CosmeticModel__pf__const;
		params.bpp__bFirstPerson__pf__const = bpp__bFirstPerson__pf__const;
		params.bpp__bBodyMesh__pf__const = bpp__bBodyMesh__pf__const;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F3A5A0
	 * 		Name   -> Function CC_BASE_HEAD.CC_BASE_HEAD_C.Attached Mesh Index
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            bpp__Output__pf                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCC_BASE_HEAD_C::Attached_Mesh_Index(int32_t* bpp__Output__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CC_BASE_HEAD.CC_BASE_HEAD_C.Attached Mesh Index");
		
		UCC_BASE_HEAD_C_Attached_Mesh_Index_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__Output__pf != nullptr)
			*bpp__Output__pf = params.bpp__Output__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F3A510
	 * 		Name   -> Function CC_BASE_HEAD.CC_BASE_HEAD_C.Apply Head Morph if Needed
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      bpp__Mesh__pf                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCC_BASE_HEAD_C::Apply_Head_Morph_if_Needed(class USkeletalMeshComponent* bpp__Mesh__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CC_BASE_HEAD.CC_BASE_HEAD_C.Apply Head Morph if Needed");
		
		UCC_BASE_HEAD_C_Apply_Head_Morph_if_Needed_Params params {};
		params.bpp__Mesh__pf = bpp__Mesh__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCC_BASE_HEAD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCC_BASE_HEAD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass CC_BASE_HEAD.CC_BASE_HEAD_C");
		return ptr;
	}

}


