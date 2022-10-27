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
	 * 		Name   -> PredefinedFunction UServiceMessagingDispatcherInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UServiceMessagingDispatcherInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ServiceMessaging.ServiceMessagingDispatcherInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031AA4E0
	 * 		Name   -> Function ServiceMessaging.ServiceMessagingFunctions.GetServiceMessagingDispatcherFromActor
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FObjectMessagingDispatcherHandle UServiceMessagingFunctions::STATIC_GetServiceMessagingDispatcherFromActor(class UObject* Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServiceMessaging.ServiceMessagingFunctions.GetServiceMessagingDispatcherFromActor");
		
		UServiceMessagingFunctions_GetServiceMessagingDispatcherFromActor_Params params {};
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031AA440
	 * 		Name   -> Function ServiceMessaging.ServiceMessagingFunctions.GetServiceMessagingDispatcher
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 */
	struct FObjectMessagingDispatcherHandle UServiceMessagingFunctions::STATIC_GetServiceMessagingDispatcher()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServiceMessaging.ServiceMessagingFunctions.GetServiceMessagingDispatcher");
		
		UServiceMessagingFunctions_GetServiceMessagingDispatcher_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UServiceMessagingFunctions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UServiceMessagingFunctions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ServiceMessaging.ServiceMessagingFunctions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031AA570
	 * 		Name   -> Function ServiceMessaging.ServiceMessagingListenerTestObject.TestFunctionWithMessage
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		struct FServiceMessagingTestMessage                InMessage                                                  (Parm, OutParm)
	 */
	void UServiceMessagingListenerTestObject::TestFunctionWithMessage(struct FServiceMessagingTestMessage* InMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServiceMessaging.ServiceMessagingListenerTestObject.TestFunctionWithMessage");
		
		UServiceMessagingListenerTestObject_TestFunctionWithMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InMessage != nullptr)
			*InMessage = params.InMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UServiceMessagingListenerTestObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UServiceMessagingListenerTestObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ServiceMessaging.ServiceMessagingListenerTestObject");
		return ptr;
	}

}


