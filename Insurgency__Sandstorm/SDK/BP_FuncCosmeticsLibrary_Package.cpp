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
	 * 		RVA    -> 0x04E16890
	 * 		Name   -> Function BP_FuncCosmeticsLibrary.BP_FuncCosmeticsLibrary_C.GetIconPatches
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		EAppearancePatchesSubSlot                          bpp__SubSlot__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     bpp____WorldContext__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTexture2D*                                  bpp__Icon__pf                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBP_FuncCosmeticsLibrary_C::STATIC_GetIconPatches(EAppearancePatchesSubSlot bpp__SubSlot__pf, class UObject* bpp____WorldContext__pf, class UTexture2D** bpp__Icon__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FuncCosmeticsLibrary.BP_FuncCosmeticsLibrary_C.GetIconPatches");
		
		UBP_FuncCosmeticsLibrary_C_GetIconPatches_Params params {};
		params.bpp__SubSlot__pf = bpp__SubSlot__pf;
		params.bpp____WorldContext__pf = bpp____WorldContext__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__Icon__pf != nullptr)
			*bpp__Icon__pf = params.bpp__Icon__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E16790
	 * 		Name   -> Function BP_FuncCosmeticsLibrary.BP_FuncCosmeticsLibrary_C.GetIconCharacter
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		EAppearanceCharacterSubSlot                        bpp__SubSlot__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     bpp____WorldContext__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTexture2D*                                  bpp__Icon__pf                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBP_FuncCosmeticsLibrary_C::STATIC_GetIconCharacter(EAppearanceCharacterSubSlot bpp__SubSlot__pf, class UObject* bpp____WorldContext__pf, class UTexture2D** bpp__Icon__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FuncCosmeticsLibrary.BP_FuncCosmeticsLibrary_C.GetIconCharacter");
		
		UBP_FuncCosmeticsLibrary_C_GetIconCharacter_Params params {};
		params.bpp__SubSlot__pf = bpp__SubSlot__pf;
		params.bpp____WorldContext__pf = bpp____WorldContext__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__Icon__pf != nullptr)
			*bpp__Icon__pf = params.bpp__Icon__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E165F0
	 * 		Name   -> Function BP_FuncCosmeticsLibrary.BP_FuncCosmeticsLibrary_C.GetIconAppearence
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		ECharacterAppearanceSlot                           bpp__AppearenceSlot__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            bpp__CosmeticSlot__pf                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     bpp____WorldContext__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTexture2D*                                  bpp__IconAppearance__pf                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTexture2D*                                  bpp__IconCosmetic__pf                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBP_FuncCosmeticsLibrary_C::STATIC_GetIconAppearence(ECharacterAppearanceSlot bpp__AppearenceSlot__pf, int32_t bpp__CosmeticSlot__pf, class UObject* bpp____WorldContext__pf, class UTexture2D** bpp__IconAppearance__pf, class UTexture2D** bpp__IconCosmetic__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FuncCosmeticsLibrary.BP_FuncCosmeticsLibrary_C.GetIconAppearence");
		
		UBP_FuncCosmeticsLibrary_C_GetIconAppearence_Params params {};
		params.bpp__AppearenceSlot__pf = bpp__AppearenceSlot__pf;
		params.bpp__CosmeticSlot__pf = bpp__CosmeticSlot__pf;
		params.bpp____WorldContext__pf = bpp____WorldContext__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__IconAppearance__pf != nullptr)
			*bpp__IconAppearance__pf = params.bpp__IconAppearance__pf;
		if (bpp__IconCosmetic__pf != nullptr)
			*bpp__IconCosmetic__pf = params.bpp__IconCosmetic__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_FuncCosmeticsLibrary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_FuncCosmeticsLibrary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BP_FuncCosmeticsLibrary.BP_FuncCosmeticsLibrary_C");
		return ptr;
	}

}


