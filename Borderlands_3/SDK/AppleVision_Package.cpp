/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x008D50E0
	 * 		Name   -> Function AppleVision.AppleVisionDetectFacesAsyncTaskBlueprintProxy.CreateProxyObjectForDetectFaces
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UTexture*                                    SourceImage                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAppleVisionDetectFacesAsyncTaskBlueprintProxy* UAppleVisionDetectFacesAsyncTaskBlueprintProxy::STATIC_CreateProxyObjectForDetectFaces(class UTexture* SourceImage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AppleVision.AppleVisionDetectFacesAsyncTaskBlueprintProxy.CreateProxyObjectForDetectFaces");
		
		UAppleVisionDetectFacesAsyncTaskBlueprintProxy_CreateProxyObjectForDetectFaces_Params params {};
		params.SourceImage = SourceImage;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAppleVisionDetectFacesAsyncTaskBlueprintProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAppleVisionDetectFacesAsyncTaskBlueprintProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AppleVision.AppleVisionDetectFacesAsyncTaskBlueprintProxy");
		return ptr;
	}

}


