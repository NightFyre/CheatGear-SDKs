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
	 * 		RVA    -> 0x050010C0
	 * 		Name   -> Function MapImageLookupFunctions.MapImageLookupFunctions_C.GetMapThumbnail
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      bpp__MapName__pf__const                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     bpp____WorldContext__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTexture2D*                                  bpp__NewParam__pf                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMapImageLookupFunctions_C::STATIC_GetMapThumbnail(const class FString& bpp__MapName__pf__const, class UObject* bpp____WorldContext__pf, class UTexture2D** bpp__NewParam__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapImageLookupFunctions.MapImageLookupFunctions_C.GetMapThumbnail");
		
		UMapImageLookupFunctions_C_GetMapThumbnail_Params params {};
		params.bpp__MapName__pf__const = bpp__MapName__pf__const;
		params.bpp____WorldContext__pf = bpp____WorldContext__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__NewParam__pf != nullptr)
			*bpp__NewParam__pf = params.bpp__NewParam__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05000FA0
	 * 		Name   -> Function MapImageLookupFunctions.MapImageLookupFunctions_C.GetGamemodeDiagram
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      bpp__Gamemode__pf__const                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     bpp____WorldContext__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTexture2D*                                  bpp__Texture__pf                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMapImageLookupFunctions_C::STATIC_GetGamemodeDiagram(const class FString& bpp__Gamemode__pf__const, class UObject* bpp____WorldContext__pf, class UTexture2D** bpp__Texture__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapImageLookupFunctions.MapImageLookupFunctions_C.GetGamemodeDiagram");
		
		UMapImageLookupFunctions_C_GetGamemodeDiagram_Params params {};
		params.bpp__Gamemode__pf__const = bpp__Gamemode__pf__const;
		params.bpp____WorldContext__pf = bpp____WorldContext__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__Texture__pf != nullptr)
			*bpp__Texture__pf = params.bpp__Texture__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapImageLookupFunctions_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapImageLookupFunctions_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass MapImageLookupFunctions.MapImageLookupFunctions_C");
		return ptr;
	}

}


