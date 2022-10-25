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
	 * 		RVA    -> 0x04FB0CA0
	 * 		Name   -> Function CV_COMB_BASE.CV_COMB_BASE_C.UpdateCombColourStruct
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FLinearColor                                bpp__NewColour__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EColourChannels                                    bpp__EColourChannel__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FColourStruct                               bpp__ColourStruct__pf                                      (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCV_COMB_BASE_C::UpdateCombColourStruct(const struct FLinearColor& bpp__NewColour__pf, EColourChannels bpp__EColourChannel__pf, struct FColourStruct* bpp__ColourStruct__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CV_COMB_BASE.CV_COMB_BASE_C.UpdateCombColourStruct");
		
		UCV_COMB_BASE_C_UpdateCombColourStruct_Params params {};
		params.bpp__NewColour__pf = bpp__NewColour__pf;
		params.bpp__EColourChannel__pf = bpp__EColourChannel__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__ColourStruct__pf != nullptr)
			*bpp__ColourStruct__pf = params.bpp__ColourStruct__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FB0A70
	 * 		Name   -> Function CV_COMB_BASE.CV_COMB_BASE_C.GetColorFromVariation
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      bpp__Class__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                bpp__MasklessColour__pf                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                bpp__LayerxOne__pfT                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                bpp__LayerxTwo__pfT                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                bpp__LayerxThree__pfT                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                bpp__LayerxFour__pfT                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCV_COMB_BASE_C::GetColorFromVariation(class UClass* bpp__Class__pf, struct FLinearColor* bpp__MasklessColour__pf, struct FLinearColor* bpp__LayerxOne__pfT, struct FLinearColor* bpp__LayerxTwo__pfT, struct FLinearColor* bpp__LayerxThree__pfT, struct FLinearColor* bpp__LayerxFour__pfT)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CV_COMB_BASE.CV_COMB_BASE_C.GetColorFromVariation");
		
		UCV_COMB_BASE_C_GetColorFromVariation_Params params {};
		params.bpp__Class__pf = bpp__Class__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__MasklessColour__pf != nullptr)
			*bpp__MasklessColour__pf = params.bpp__MasklessColour__pf;
		if (bpp__LayerxOne__pfT != nullptr)
			*bpp__LayerxOne__pfT = params.bpp__LayerxOne__pfT;
		if (bpp__LayerxTwo__pfT != nullptr)
			*bpp__LayerxTwo__pfT = params.bpp__LayerxTwo__pfT;
		if (bpp__LayerxThree__pfT != nullptr)
			*bpp__LayerxThree__pfT = params.bpp__LayerxThree__pfT;
		if (bpp__LayerxFour__pfT != nullptr)
			*bpp__LayerxFour__pfT = params.bpp__LayerxFour__pfT;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F95AC0
	 * 		Name   -> Function CV_COMB_BASE.CV_COMB_BASE_C.BlueprintCosmeticItemMeshLoaded
	 * 		Flags  -> (Native, Event, Public, HasOutParms)
	 * Parameters:
	 * 		class UINSSkeletalMeshComponent*                   bpp__SkeletalMesh__pf                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCharacterCosmeticAttachedModel             bpp__CosmeticModel__pf__const                              (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__bFirstPerson__pf__const                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__bBodyMesh__pf__const                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCV_COMB_BASE_C::BlueprintCosmeticItemMeshLoaded(class UINSSkeletalMeshComponent* bpp__SkeletalMesh__pf, const struct FCharacterCosmeticAttachedModel& bpp__CosmeticModel__pf__const, bool bpp__bFirstPerson__pf__const, bool bpp__bBodyMesh__pf__const)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CV_COMB_BASE.CV_COMB_BASE_C.BlueprintCosmeticItemMeshLoaded");
		
		UCV_COMB_BASE_C_BlueprintCosmeticItemMeshLoaded_Params params {};
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
	 * 		Name   -> PredefinedFunction UCV_COMB_BASE_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCV_COMB_BASE_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass CV_COMB_BASE.CV_COMB_BASE_C");
		return ptr;
	}

}


