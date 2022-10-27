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
	 * 		RVA    -> 0x04F35E40
	 * 		Name   -> Function CC_BASE_Character_Parent.CC_BASE_Character_Parent_C.SetMorph
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      bpp__Mesh__pf                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        bpp__Morph__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__Apply__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCC_BASE_Character_Parent_C::SetMorph(class USkeletalMeshComponent* bpp__Mesh__pf, const class FName& bpp__Morph__pf, bool bpp__Apply__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CC_BASE_Character_Parent.CC_BASE_Character_Parent_C.SetMorph");
		
		UCC_BASE_Character_Parent_C_SetMorph_Params params {};
		params.bpp__Mesh__pf = bpp__Mesh__pf;
		params.bpp__Morph__pf = bpp__Morph__pf;
		params.bpp__Apply__pf = bpp__Apply__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F35B90
	 * 		Name   -> Function CC_BASE_Character_Parent.CC_BASE_Character_Parent_C.GenerateHeadgearMorphName
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        bpp__LocalMorphSuffix__pf                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        bpp__Morph__pf                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCC_BASE_Character_Parent_C::GenerateHeadgearMorphName(const class FName& bpp__LocalMorphSuffix__pf, class FName* bpp__Morph__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CC_BASE_Character_Parent.CC_BASE_Character_Parent_C.GenerateHeadgearMorphName");
		
		UCC_BASE_Character_Parent_C_GenerateHeadgearMorphName_Params params {};
		params.bpp__LocalMorphSuffix__pf = bpp__LocalMorphSuffix__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__Morph__pf != nullptr)
			*bpp__Morph__pf = params.bpp__Morph__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F35880
	 * 		Name   -> Function CC_BASE_Character_Parent.CC_BASE_Character_Parent_C.CheckMenuProfile
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bpp__Profile__pf                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCC_BASE_Character_Parent_C::CheckMenuProfile(bool* bpp__Profile__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CC_BASE_Character_Parent.CC_BASE_Character_Parent_C.CheckMenuProfile");
		
		UCC_BASE_Character_Parent_C_CheckMenuProfile_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__Profile__pf != nullptr)
			*bpp__Profile__pf = params.bpp__Profile__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F35630
	 * 		Name   -> Function CC_BASE_Character_Parent.CC_BASE_Character_Parent_C.CheckEyeHeadgearMorph
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        bpp__Name__pf                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__NoMorph__pf                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCC_BASE_Character_Parent_C::CheckEyeHeadgearMorph(class FName* bpp__Name__pf, bool* bpp__NoMorph__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CC_BASE_Character_Parent.CC_BASE_Character_Parent_C.CheckEyeHeadgearMorph");
		
		UCC_BASE_Character_Parent_C_CheckEyeHeadgearMorph_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__Name__pf != nullptr)
			*bpp__Name__pf = params.bpp__Name__pf;
		if (bpp__NoMorph__pf != nullptr)
			*bpp__NoMorph__pf = params.bpp__NoMorph__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F35590
	 * 		Name   -> Function CC_BASE_Character_Parent.CC_BASE_Character_Parent_C.CheckEquipment
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		ECarrierArmour                                     bpp__EquipmentCombination__pf                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCC_BASE_Character_Parent_C::CheckEquipment(ECarrierArmour* bpp__EquipmentCombination__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CC_BASE_Character_Parent.CC_BASE_Character_Parent_C.CheckEquipment");
		
		UCC_BASE_Character_Parent_C_CheckEquipment_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__EquipmentCombination__pf != nullptr)
			*bpp__EquipmentCombination__pf = params.bpp__EquipmentCombination__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F35500
	 * 		Name   -> Function CC_BASE_Character_Parent.CC_BASE_Character_Parent_C.BlueprintInitSharedState
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		class USharedCosmeticState*                        bpp__NewState__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCC_BASE_Character_Parent_C::BlueprintInitSharedState(class USharedCosmeticState* bpp__NewState__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CC_BASE_Character_Parent.CC_BASE_Character_Parent_C.BlueprintInitSharedState");
		
		UCC_BASE_Character_Parent_C_BlueprintInitSharedState_Params params {};
		params.bpp__NewState__pf = bpp__NewState__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F35260
	 * 		Name   -> Function CC_BASE_Character_Parent.CC_BASE_Character_Parent_C.AttachmentSetMorph
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FCharacterCosmeticAttachedModel             bpp__Attachment__pf__const                                 (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		class FName                                        bpp__MorphxTargetxName__pfTT                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FMorphTargetPair>                    bpp__MorphxArray__pfT                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCharacterCosmeticAttachedModel             bpp__CharacterCosmeticAttachedModel__pf                    (Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UCC_BASE_Character_Parent_C::AttachmentSetMorph(const struct FCharacterCosmeticAttachedModel& bpp__Attachment__pf__const, const class FName& bpp__MorphxTargetxName__pfTT, TArray<struct FMorphTargetPair>* bpp__MorphxArray__pfT, struct FCharacterCosmeticAttachedModel* bpp__CharacterCosmeticAttachedModel__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CC_BASE_Character_Parent.CC_BASE_Character_Parent_C.AttachmentSetMorph");
		
		UCC_BASE_Character_Parent_C_AttachmentSetMorph_Params params {};
		params.bpp__Attachment__pf__const = bpp__Attachment__pf__const;
		params.bpp__MorphxTargetxName__pfTT = bpp__MorphxTargetxName__pfTT;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__MorphxArray__pfT != nullptr)
			*bpp__MorphxArray__pfT = params.bpp__MorphxArray__pfT;
		if (bpp__CharacterCosmeticAttachedModel__pf != nullptr)
			*bpp__CharacterCosmeticAttachedModel__pf = params.bpp__CharacterCosmeticAttachedModel__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F34E40
	 * 		Name   -> Function CC_BASE_Character_Parent.CC_BASE_Character_Parent_C.AttachmentSetMaterialSlot
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            bpp__Array__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        bpp__MaterialxSlotxName__pfTT                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCharacterCosmeticAttachedModel             bpp__AttachmentReference__pf__const                        (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		struct FCharacterCosmeticAttachedModel             bpp__CharacterCosmeticAttachedModel__pf                    (Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UCC_BASE_Character_Parent_C::AttachmentSetMaterialSlot(int32_t bpp__Array__pf, const class FName& bpp__MaterialxSlotxName__pfTT, const struct FCharacterCosmeticAttachedModel& bpp__AttachmentReference__pf__const, struct FCharacterCosmeticAttachedModel* bpp__CharacterCosmeticAttachedModel__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CC_BASE_Character_Parent.CC_BASE_Character_Parent_C.AttachmentSetMaterialSlot");
		
		UCC_BASE_Character_Parent_C_AttachmentSetMaterialSlot_Params params {};
		params.bpp__Array__pf = bpp__Array__pf;
		params.bpp__MaterialxSlotxName__pfTT = bpp__MaterialxSlotxName__pfTT;
		params.bpp__AttachmentReference__pf__const = bpp__AttachmentReference__pf__const;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__CharacterCosmeticAttachedModel__pf != nullptr)
			*bpp__CharacterCosmeticAttachedModel__pf = params.bpp__CharacterCosmeticAttachedModel__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F35040
	 * 		Name   -> Function CC_BASE_Character_Parent.CC_BASE_Character_Parent_C.AttachmentSetMaterial
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            bpp__Array__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        bpp__MaterialxSlotxName__pfTT                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMaterialInterface*                          bpp__Material__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCharacterCosmeticAttachedModel             bpp__AttachmentReference__pf                               (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		struct FCharacterCosmeticAttachedModel             bpp__CharacterCosmeticAttachedModel__pf                    (Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UCC_BASE_Character_Parent_C::AttachmentSetMaterial(int32_t bpp__Array__pf, const class FName& bpp__MaterialxSlotxName__pfTT, class UMaterialInterface* bpp__Material__pf, const struct FCharacterCosmeticAttachedModel& bpp__AttachmentReference__pf, struct FCharacterCosmeticAttachedModel* bpp__CharacterCosmeticAttachedModel__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CC_BASE_Character_Parent.CC_BASE_Character_Parent_C.AttachmentSetMaterial");
		
		UCC_BASE_Character_Parent_C_AttachmentSetMaterial_Params params {};
		params.bpp__Array__pf = bpp__Array__pf;
		params.bpp__MaterialxSlotxName__pfTT = bpp__MaterialxSlotxName__pfTT;
		params.bpp__Material__pf = bpp__Material__pf;
		params.bpp__AttachmentReference__pf = bpp__AttachmentReference__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__CharacterCosmeticAttachedModel__pf != nullptr)
			*bpp__CharacterCosmeticAttachedModel__pf = params.bpp__CharacterCosmeticAttachedModel__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F34CC0
	 * 		Name   -> Function CC_BASE_Character_Parent.CC_BASE_Character_Parent_C.AttachmentBreakMake
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FCharacterCosmeticAttachedModel             bpp__Attachment__pf                                        (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		struct FCharacterCosmeticAttachedModel             bpp__Reference__pf                                         (Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UCC_BASE_Character_Parent_C::AttachmentBreakMake(const struct FCharacterCosmeticAttachedModel& bpp__Attachment__pf, struct FCharacterCosmeticAttachedModel* bpp__Reference__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CC_BASE_Character_Parent.CC_BASE_Character_Parent_C.AttachmentBreakMake");
		
		UCC_BASE_Character_Parent_C_AttachmentBreakMake_Params params {};
		params.bpp__Attachment__pf = bpp__Attachment__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__Reference__pf != nullptr)
			*bpp__Reference__pf = params.bpp__Reference__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCC_BASE_Character_Parent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCC_BASE_Character_Parent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass CC_BASE_Character_Parent.CC_BASE_Character_Parent_C");
		return ptr;
	}

}


