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
	 * 		RVA    -> 0x04F3A890
	 * 		Name   -> Function CC_BASE_HAND.CC_BASE_HAND_C.BlueprintInitCosmetic
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      bpp__VariationClass__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCC_BASE_HAND_C::BlueprintInitCosmetic(class UClass* bpp__VariationClass__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CC_BASE_HAND.CC_BASE_HAND_C.BlueprintInitCosmetic");
		
		UCC_BASE_HAND_C_BlueprintInitCosmetic_Params params {};
		params.bpp__VariationClass__pf = bpp__VariationClass__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F3A640
	 * 		Name   -> Function CC_BASE_HAND.CC_BASE_HAND_C.BlueprintCosmeticMeshLoaded
	 * 		Flags  -> (Native, Event, Public, HasOutParms)
	 * Parameters:
	 * 		class UINSSkeletalMeshComponent*                   bpp__SkeletalMesh__pf                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCharacterCosmeticAttachedModel             bpp__CosmeticModel__pf__const                              (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__bFirstPerson__pf__const                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__bBodyMesh__pf__const                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCC_BASE_HAND_C::BlueprintCosmeticMeshLoaded(class UINSSkeletalMeshComponent* bpp__SkeletalMesh__pf, const struct FCharacterCosmeticAttachedModel& bpp__CosmeticModel__pf__const, bool bpp__bFirstPerson__pf__const, bool bpp__bBodyMesh__pf__const)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CC_BASE_HAND.CC_BASE_HAND_C.BlueprintCosmeticMeshLoaded");
		
		UCC_BASE_HAND_C_BlueprintCosmeticMeshLoaded_Params params {};
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCC_BASE_HAND_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCC_BASE_HAND_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass CC_BASE_HAND.CC_BASE_HAND_C");
		return ptr;
	}

}


