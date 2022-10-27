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
	 * 		RVA    -> 0x04E1B2E0
	 * 		Name   -> Function BP_FuncLibrary_Region.BP_FuncLibrary_Region_C.GetRegionTextFromName
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        bpp__RegionName__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     bpp____WorldContext__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        bpp__Output__pf                                            (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UBP_FuncLibrary_Region_C::STATIC_GetRegionTextFromName(const class FName& bpp__RegionName__pf, class UObject* bpp____WorldContext__pf, class FText* bpp__Output__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FuncLibrary_Region.BP_FuncLibrary_Region_C.GetRegionTextFromName");
		
		UBP_FuncLibrary_Region_C_GetRegionTextFromName_Params params {};
		params.bpp__RegionName__pf = bpp__RegionName__pf;
		params.bpp____WorldContext__pf = bpp____WorldContext__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__Output__pf != nullptr)
			*bpp__Output__pf = params.bpp__Output__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_FuncLibrary_Region_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_FuncLibrary_Region_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BP_FuncLibrary_Region.BP_FuncLibrary_Region_C");
		return ptr;
	}

}


