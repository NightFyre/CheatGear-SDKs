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
	 * 		RVA    -> 0x04E16B30
	 * 		Name   -> Function BP_FuncLibrary_Competitive.BP_FuncLibrary_Competitive_C.GetTierTexture
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            bpp__Tier__pf                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            bpp__Division__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     bpp____WorldContext__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTexture2D*                                  bpp__TierIcon__pf                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBP_FuncLibrary_Competitive_C::STATIC_GetTierTexture(int32_t bpp__Tier__pf, int32_t bpp__Division__pf, class UObject* bpp____WorldContext__pf, class UTexture2D** bpp__TierIcon__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FuncLibrary_Competitive.BP_FuncLibrary_Competitive_C.GetTierTexture");
		
		UBP_FuncLibrary_Competitive_C_GetTierTexture_Params params {};
		params.bpp__Tier__pf = bpp__Tier__pf;
		params.bpp__Division__pf = bpp__Division__pf;
		params.bpp____WorldContext__pf = bpp____WorldContext__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__TierIcon__pf != nullptr)
			*bpp__TierIcon__pf = params.bpp__TierIcon__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E16A30
	 * 		Name   -> Function BP_FuncLibrary_Competitive.BP_FuncLibrary_Competitive_C.GetTierBandTexture
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            bpp__Tier__pf                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     bpp____WorldContext__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTexture2D*                                  bpp__TierBand__pf                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBP_FuncLibrary_Competitive_C::STATIC_GetTierBandTexture(int32_t bpp__Tier__pf, class UObject* bpp____WorldContext__pf, class UTexture2D** bpp__TierBand__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FuncLibrary_Competitive.BP_FuncLibrary_Competitive_C.GetTierBandTexture");
		
		UBP_FuncLibrary_Competitive_C_GetTierBandTexture_Params params {};
		params.bpp__Tier__pf = bpp__Tier__pf;
		params.bpp____WorldContext__pf = bpp____WorldContext__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__TierBand__pf != nullptr)
			*bpp__TierBand__pf = params.bpp__TierBand__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E16410
	 * 		Name   -> Function BP_FuncLibrary_Competitive.BP_FuncLibrary_Competitive_C.GetCompTierName
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            bpp__Tier__pf                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__bAppendDivision__pf                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            bpp__Division__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     bpp____WorldContext__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        bpp__TierName__pf                                          (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UBP_FuncLibrary_Competitive_C::STATIC_GetCompTierName(int32_t bpp__Tier__pf, bool bpp__bAppendDivision__pf, int32_t bpp__Division__pf, class UObject* bpp____WorldContext__pf, class FText* bpp__TierName__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FuncLibrary_Competitive.BP_FuncLibrary_Competitive_C.GetCompTierName");
		
		UBP_FuncLibrary_Competitive_C_GetCompTierName_Params params {};
		params.bpp__Tier__pf = bpp__Tier__pf;
		params.bpp__bAppendDivision__pf = bpp__bAppendDivision__pf;
		params.bpp__Division__pf = bpp__Division__pf;
		params.bpp____WorldContext__pf = bpp____WorldContext__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__TierName__pf != nullptr)
			*bpp__TierName__pf = params.bpp__TierName__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_FuncLibrary_Competitive_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_FuncLibrary_Competitive_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BP_FuncLibrary_Competitive.BP_FuncLibrary_Competitive_C");
		return ptr;
	}

}


