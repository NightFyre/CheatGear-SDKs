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
	 * 		RVA    -> 0x04E1AFA0
	 * 		Name   -> Function BP_FuncLibrary_Modes.BP_FuncLibrary_Modes_C.GetGamemodeTextFromName
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        bpp__Name__pf                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     bpp____WorldContext__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        bpp__Output__pf                                            (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UBP_FuncLibrary_Modes_C::STATIC_GetGamemodeTextFromName(const class FName& bpp__Name__pf, class UObject* bpp____WorldContext__pf, class FText* bpp__Output__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FuncLibrary_Modes.BP_FuncLibrary_Modes_C.GetGamemodeTextFromName");
		
		UBP_FuncLibrary_Modes_C_GetGamemodeTextFromName_Params params {};
		params.bpp__Name__pf = bpp__Name__pf;
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
	 * 		RVA    -> 0x04E1AE60
	 * 		Name   -> Function BP_FuncLibrary_Modes.BP_FuncLibrary_Modes_C.GetGamemodeLocalizedName
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        bpp__GameMode__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     bpp____WorldContext__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        bpp__Name__pf                                              (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UBP_FuncLibrary_Modes_C::STATIC_GetGamemodeLocalizedName(const class FName& bpp__GameMode__pf, class UObject* bpp____WorldContext__pf, class FText* bpp__Name__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FuncLibrary_Modes.BP_FuncLibrary_Modes_C.GetGamemodeLocalizedName");
		
		UBP_FuncLibrary_Modes_C_GetGamemodeLocalizedName_Params params {};
		params.bpp__GameMode__pf = bpp__GameMode__pf;
		params.bpp____WorldContext__pf = bpp____WorldContext__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__Name__pf != nullptr)
			*bpp__Name__pf = params.bpp__Name__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E1AD00
	 * 		Name   -> Function BP_FuncLibrary_Modes.BP_FuncLibrary_Modes_C.GetGamemodeClassFromName
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        bpp__Name__pf                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     bpp____WorldContext__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__bFound__pf                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      bpp__Class__pf                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBP_FuncLibrary_Modes_C::STATIC_GetGamemodeClassFromName(const class FName& bpp__Name__pf, class UObject* bpp____WorldContext__pf, bool* bpp__bFound__pf, class UClass** bpp__Class__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FuncLibrary_Modes.BP_FuncLibrary_Modes_C.GetGamemodeClassFromName");
		
		UBP_FuncLibrary_Modes_C_GetGamemodeClassFromName_Params params {};
		params.bpp__Name__pf = bpp__Name__pf;
		params.bpp____WorldContext__pf = bpp____WorldContext__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__bFound__pf != nullptr)
			*bpp__bFound__pf = params.bpp__bFound__pf;
		if (bpp__Class__pf != nullptr)
			*bpp__Class__pf = params.bpp__Class__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_FuncLibrary_Modes_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_FuncLibrary_Modes_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BP_FuncLibrary_Modes.BP_FuncLibrary_Modes_C");
		return ptr;
	}

}


