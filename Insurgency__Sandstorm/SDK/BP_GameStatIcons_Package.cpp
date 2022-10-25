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
	 * 		RVA    -> 0x04E1B0E0
	 * 		Name   -> Function BP_GameStatIcons.BP_GameStatIcons_C.GetPlayerClassNameIcon
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        bpp__ClassKey__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     bpp____WorldContext__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__bFound__pf                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        bpp__Text__pf                                              (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		class UTexture2D*                                  bpp__Icon__pf                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBP_GameStatIcons_C::STATIC_GetPlayerClassNameIcon(const class FName& bpp__ClassKey__pf, class UObject* bpp____WorldContext__pf, bool* bpp__bFound__pf, class FText* bpp__Text__pf, class UTexture2D** bpp__Icon__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameStatIcons.BP_GameStatIcons_C.GetPlayerClassNameIcon");
		
		UBP_GameStatIcons_C_GetPlayerClassNameIcon_Params params {};
		params.bpp__ClassKey__pf = bpp__ClassKey__pf;
		params.bpp____WorldContext__pf = bpp____WorldContext__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__bFound__pf != nullptr)
			*bpp__bFound__pf = params.bpp__bFound__pf;
		if (bpp__Text__pf != nullptr)
			*bpp__Text__pf = params.bpp__Text__pf;
		if (bpp__Icon__pf != nullptr)
			*bpp__Icon__pf = params.bpp__Icon__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_GameStatIcons_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_GameStatIcons_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BP_GameStatIcons.BP_GameStatIcons_C");
		return ptr;
	}

}


