/**
 * Name: Sea_of_Thieves
 * Version: 9505844
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0311CC80
	 * 		Name   -> Function RenderToTexture.RenderToTextureFunctionLibrary.GetRenderToTexture
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        Identifier                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class URenderToTextureSceneDetails* URenderToTextureFunctionLibrary::STATIC_GetRenderToTexture(const class FName& Identifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RenderToTexture.RenderToTextureFunctionLibrary.GetRenderToTexture");
		
		URenderToTextureFunctionLibrary_GetRenderToTexture_Params params {};
		params.Identifier = Identifier;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0311CA80
	 * 		Name   -> Function RenderToTexture.RenderToTextureFunctionLibrary.CreateRenderToTexture
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Identifier                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      ClassToSpawn                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FIntPoint                                   Resolution                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bForceLinearGamma                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bCaptureAlpha                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class URenderToTextureSceneDetails* URenderToTextureFunctionLibrary::STATIC_CreateRenderToTexture(class UObject* WorldContext, const class FName& Identifier, class UClass* ClassToSpawn, const struct FIntPoint& Resolution, bool bForceLinearGamma, bool bCaptureAlpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RenderToTexture.RenderToTextureFunctionLibrary.CreateRenderToTexture");
		
		URenderToTextureFunctionLibrary_CreateRenderToTexture_Params params {};
		params.WorldContext = WorldContext;
		params.Identifier = Identifier;
		params.ClassToSpawn = ClassToSpawn;
		params.Resolution = Resolution;
		params.bForceLinearGamma = bForceLinearGamma;
		params.bCaptureAlpha = bCaptureAlpha;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URenderToTextureFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URenderToTextureFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RenderToTexture.RenderToTextureFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0311CD00
	 * 		Name   -> Function RenderToTexture.RenderToTextureSceneDetails.GetTexture
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UTextureRenderTarget2D* URenderToTextureSceneDetails::GetTexture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RenderToTexture.RenderToTextureSceneDetails.GetTexture");
		
		URenderToTextureSceneDetails_GetTexture_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0311CC50
	 * 		Name   -> Function RenderToTexture.RenderToTextureSceneDetails.GetInstance
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class AActor* URenderToTextureSceneDetails::GetInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RenderToTexture.RenderToTextureSceneDetails.GetInstance");
		
		URenderToTextureSceneDetails_GetInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0311CC30
	 * 		Name   -> Function RenderToTexture.RenderToTextureSceneDetails.DestroyTexture
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void URenderToTextureSceneDetails::DestroyTexture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RenderToTexture.RenderToTextureSceneDetails.DestroyTexture");
		
		URenderToTextureSceneDetails_DestroyTexture_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URenderToTextureSceneDetails.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URenderToTextureSceneDetails::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RenderToTexture.RenderToTextureSceneDetails");
		return ptr;
	}

}


