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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AServiceProviderGameState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AServiceProviderGameState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameService.ServiceProviderGameState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameServiceLifecycleInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameServiceLifecycleInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameService.GameServiceLifecycleInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0323D630
	 * 		Name   -> Function GameService.GameServiceMapFunctions.UnregisterService
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FGameServiceMap                             ServiceMap                                                 (Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     Service                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGameServiceMapFunctions::STATIC_UnregisterService(struct FGameServiceMap* ServiceMap, class UObject* Service)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameService.GameServiceMapFunctions.UnregisterService");
		
		UGameServiceMapFunctions_UnregisterService_Params params {};
		params.Service = Service;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ServiceMap != nullptr)
			*ServiceMap = params.ServiceMap;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0323D3E0
	 * 		Name   -> Function GameService.GameServiceMapFunctions.RegisterService
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FGameServiceMap                             ServiceMap                                                 (Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     Service                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UGameServiceMapFunctions::STATIC_RegisterService(struct FGameServiceMap* ServiceMap, class UObject* Service, class UClass* Class)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameService.GameServiceMapFunctions.RegisterService");
		
		UGameServiceMapFunctions_RegisterService_Params params {};
		params.Service = Service;
		params.Class = Class;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ServiceMap != nullptr)
			*ServiceMap = params.ServiceMap;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0323D1A0
	 * 		Name   -> Function GameService.GameServiceMapFunctions.GetService
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FGameServiceMap                             ServiceMap                                                 (Parm, OutParm, ReferenceParm)
	 * 		class UClass*                                      Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	class UObject* UGameServiceMapFunctions::STATIC_GetService(struct FGameServiceMap* ServiceMap, class UClass* Class)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameService.GameServiceMapFunctions.GetService");
		
		UGameServiceMapFunctions_GetService_Params params {};
		params.Class = Class;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ServiceMap != nullptr)
			*ServiceMap = params.ServiceMap;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0323CFC0
	 * 		Name   -> Function GameService.GameServiceMapFunctions.GetNumServices
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FGameServiceMap                             ServiceMap                                                 (Parm, OutParm, ReferenceParm)
	 */
	int32_t UGameServiceMapFunctions::STATIC_GetNumServices(struct FGameServiceMap* ServiceMap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameService.GameServiceMapFunctions.GetNumServices");
		
		UGameServiceMapFunctions_GetNumServices_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ServiceMap != nullptr)
			*ServiceMap = params.ServiceMap;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameServiceMapFunctions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameServiceMapFunctions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameService.GameServiceMapFunctions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0323D5A0
	 * 		Name   -> Function GameService.GameServiceProviderInterface.UnregisterService
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     Service                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGameServiceProviderInterface::UnregisterService(class UObject* Service)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameService.GameServiceProviderInterface.UnregisterService");
		
		UGameServiceProviderInterface_UnregisterService_Params params {};
		params.Service = Service;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0323D320
	 * 		Name   -> Function GameService.GameServiceProviderInterface.RegisterService
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     Service                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UGameServiceProviderInterface::RegisterService(class UObject* Service, class UClass* Class)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameService.GameServiceProviderInterface.RegisterService");
		
		UGameServiceProviderInterface_RegisterService_Params params {};
		params.Service = Service;
		params.Class = Class;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0323D100
	 * 		Name   -> Function GameService.GameServiceProviderInterface.GetService
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	class UObject* UGameServiceProviderInterface::GetService(class UClass* Class)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameService.GameServiceProviderInterface.GetService");
		
		UGameServiceProviderInterface_GetService_Params params {};
		params.Class = Class;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameServiceProviderInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameServiceProviderInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameService.GameServiceProviderInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameServiceTickInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameServiceTickInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameService.GameServiceTickInterface");
		return ptr;
	}

}


