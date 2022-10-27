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
	 * 		RVA    -> 0x04EC2500
	 * 		Name   -> Function BP_RankLibrary.BP_RankLibrary_C.GetRankIconForLevel
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            bpp__Level__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            bpp__TeamId__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     bpp____WorldContext__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTexture2D*                                  bpp__RankIcon__pf                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBP_RankLibrary_C::STATIC_GetRankIconForLevel(int32_t bpp__Level__pf, int32_t bpp__TeamId__pf, class UObject* bpp____WorldContext__pf, class UTexture2D** bpp__RankIcon__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RankLibrary.BP_RankLibrary_C.GetRankIconForLevel");
		
		UBP_RankLibrary_C_GetRankIconForLevel_Params params {};
		params.bpp__Level__pf = bpp__Level__pf;
		params.bpp__TeamId__pf = bpp__TeamId__pf;
		params.bpp____WorldContext__pf = bpp____WorldContext__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__RankIcon__pf != nullptr)
			*bpp__RankIcon__pf = params.bpp__RankIcon__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04EC2400
	 * 		Name   -> Function BP_RankLibrary.BP_RankLibrary_C.GetRankBandForLevel
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            bpp__PlayerLevel__pf                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     bpp____WorldContext__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTexture2D*                                  bpp__TextureOut__pf                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBP_RankLibrary_C::STATIC_GetRankBandForLevel(int32_t bpp__PlayerLevel__pf, class UObject* bpp____WorldContext__pf, class UTexture2D** bpp__TextureOut__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RankLibrary.BP_RankLibrary_C.GetRankBandForLevel");
		
		UBP_RankLibrary_C_GetRankBandForLevel_Params params {};
		params.bpp__PlayerLevel__pf = bpp__PlayerLevel__pf;
		params.bpp____WorldContext__pf = bpp____WorldContext__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__TextureOut__pf != nullptr)
			*bpp__TextureOut__pf = params.bpp__TextureOut__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04EC2300
	 * 		Name   -> Function BP_RankLibrary.BP_RankLibrary_C.GetRankBandForExp
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            bpp__PlayerxExperience__pfT                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     bpp____WorldContext__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTexture2D*                                  bpp__TextureOut__pf                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBP_RankLibrary_C::STATIC_GetRankBandForExp(int32_t bpp__PlayerxExperience__pfT, class UObject* bpp____WorldContext__pf, class UTexture2D** bpp__TextureOut__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RankLibrary.BP_RankLibrary_C.GetRankBandForExp");
		
		UBP_RankLibrary_C_GetRankBandForExp_Params params {};
		params.bpp__PlayerxExperience__pfT = bpp__PlayerxExperience__pfT;
		params.bpp____WorldContext__pf = bpp____WorldContext__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__TextureOut__pf != nullptr)
			*bpp__TextureOut__pf = params.bpp__TextureOut__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04EC2200
	 * 		Name   -> Function BP_RankLibrary.BP_RankLibrary_C.GetRankBandColorForExp
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            bpp__PlayerExperience__pf                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     bpp____WorldContext__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                bpp__RankColor__pf                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBP_RankLibrary_C::STATIC_GetRankBandColorForExp(int32_t bpp__PlayerExperience__pf, class UObject* bpp____WorldContext__pf, struct FLinearColor* bpp__RankColor__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RankLibrary.BP_RankLibrary_C.GetRankBandColorForExp");
		
		UBP_RankLibrary_C_GetRankBandColorForExp_Params params {};
		params.bpp__PlayerExperience__pf = bpp__PlayerExperience__pf;
		params.bpp____WorldContext__pf = bpp____WorldContext__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__RankColor__pf != nullptr)
			*bpp__RankColor__pf = params.bpp__RankColor__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_RankLibrary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_RankLibrary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BP_RankLibrary.BP_RankLibrary_C");
		return ptr;
	}

}


