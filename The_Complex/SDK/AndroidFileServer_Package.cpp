/**
 * Name: The_Complex
 * Version: 9349459
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x01404020
	 * 		Name   -> Function AndroidFileServer.AndroidFileServerBPLibrary.StopFileServer
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bUSB                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bNetwork                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAndroidFileServerBPLibrary::STATIC_StopFileServer(bool bUSB, bool bNetwork)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AndroidFileServer.AndroidFileServerBPLibrary.StopFileServer");
		
		UAndroidFileServerBPLibrary_StopFileServer_Params params {};
		params.bUSB = bUSB;
		params.bNetwork = bNetwork;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01403F10
	 * 		Name   -> Function AndroidFileServer.AndroidFileServerBPLibrary.StartFileServer
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bUSB                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bNetwork                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Port                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAndroidFileServerBPLibrary::STATIC_StartFileServer(bool bUSB, bool bNetwork, int32_t Port)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AndroidFileServer.AndroidFileServerBPLibrary.StartFileServer");
		
		UAndroidFileServerBPLibrary_StartFileServer_Params params {};
		params.bUSB = bUSB;
		params.bNetwork = bNetwork;
		params.Port = Port;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01403ED0
	 * 		Name   -> Function AndroidFileServer.AndroidFileServerBPLibrary.IsFileServerRunning
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	EAFSActiveType UAndroidFileServerBPLibrary::STATIC_IsFileServerRunning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AndroidFileServer.AndroidFileServerBPLibrary.IsFileServerRunning");
		
		UAndroidFileServerBPLibrary_IsFileServerRunning_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAndroidFileServerBPLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAndroidFileServerBPLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AndroidFileServer.AndroidFileServerBPLibrary");
		return ptr;
	}

}


