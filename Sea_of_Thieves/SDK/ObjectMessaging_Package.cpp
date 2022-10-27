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
	 * 		Name   -> PredefinedFunction UObjectMessagingDispatcherInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UObjectMessagingDispatcherInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ObjectMessaging.ObjectMessagingDispatcherInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UObjectMessagingDispatcherComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UObjectMessagingDispatcherComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ObjectMessaging.ObjectMessagingDispatcherComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UObjectMessagingInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UObjectMessagingInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ObjectMessaging.ObjectMessagingInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0312E7B0
	 * 		Name   -> Function ObjectMessaging.ObjectMessagingFunctions.UnregisterEventsForObject
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FObjectMessagingObjectScoper                ObjectScoper                                               (Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     EventSource                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UObjectMessagingFunctions::STATIC_UnregisterEventsForObject(struct FObjectMessagingObjectScoper* ObjectScoper, class UObject* EventSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectMessaging.ObjectMessagingFunctions.UnregisterEventsForObject");
		
		UObjectMessagingFunctions_UnregisterEventsForObject_Params params {};
		params.EventSource = EventSource;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ObjectScoper != nullptr)
			*ObjectScoper = params.ObjectScoper;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0312E6C0
	 * 		Name   -> Function ObjectMessaging.ObjectMessagingFunctions.UnregisterEvents
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FObjectMessagingObjectScoper                ObjectScoper                                               (Parm, OutParm, ReferenceParm)
	 */
	void UObjectMessagingFunctions::STATIC_UnregisterEvents(struct FObjectMessagingObjectScoper* ObjectScoper)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectMessaging.ObjectMessagingFunctions.UnregisterEvents");
		
		UObjectMessagingFunctions_UnregisterEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ObjectScoper != nullptr)
			*ObjectScoper = params.ObjectScoper;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0312E5B0
	 * 		Name   -> Function ObjectMessaging.ObjectMessagingFunctions.UnregisterEventFromHandle
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FObjectMessagingDispatcherHandle            Dispatcher                                                 (Parm, OutParm, ReferenceParm)
	 * 		struct FObjectMessagingHandle                      Handle                                                     (Parm, OutParm, ReferenceParm)
	 */
	void UObjectMessagingFunctions::STATIC_UnregisterEventFromHandle(struct FObjectMessagingDispatcherHandle* Dispatcher, struct FObjectMessagingHandle* Handle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectMessaging.ObjectMessagingFunctions.UnregisterEventFromHandle");
		
		UObjectMessagingFunctions_UnregisterEventFromHandle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Dispatcher != nullptr)
			*Dispatcher = params.Dispatcher;
		if (Handle != nullptr)
			*Handle = params.Handle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0312E4C0
	 * 		Name   -> Function ObjectMessaging.ObjectMessagingFunctions.UnregisterEvent
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FObjectMessagingDispatcher                  Dispatcher                                                 (Parm, OutParm, ReferenceParm)
	 * 		struct FObjectMessagingHandle                      Handle                                                     (Parm, OutParm, ReferenceParm)
	 */
	void UObjectMessagingFunctions::STATIC_UnregisterEvent(struct FObjectMessagingDispatcher* Dispatcher, struct FObjectMessagingHandle* Handle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectMessaging.ObjectMessagingFunctions.UnregisterEvent");
		
		UObjectMessagingFunctions_UnregisterEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Dispatcher != nullptr)
			*Dispatcher = params.Dispatcher;
		if (Handle != nullptr)
			*Handle = params.Handle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0312E2B0
	 * 		Name   -> Function ObjectMessaging.ObjectMessagingFunctions.RegisterEventWithObjectScoper
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     EventSource                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FObjectMessagingObjectScoper                ObjectScoper                                               (Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     FunctionOwner                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      FunctionName                                               (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UStruct*                                     EventType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UObjectMessagingFunctions::STATIC_RegisterEventWithObjectScoper(class UObject* EventSource, struct FObjectMessagingObjectScoper* ObjectScoper, class UObject* FunctionOwner, const class FString& FunctionName, class UStruct* EventType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectMessaging.ObjectMessagingFunctions.RegisterEventWithObjectScoper");
		
		UObjectMessagingFunctions_RegisterEventWithObjectScoper_Params params {};
		params.EventSource = EventSource;
		params.FunctionOwner = FunctionOwner;
		params.FunctionName = FunctionName;
		params.EventType = EventType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ObjectScoper != nullptr)
			*ObjectScoper = params.ObjectScoper;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0312E0C0
	 * 		Name   -> Function ObjectMessaging.ObjectMessagingFunctions.RegisterEventFromHandle
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FObjectMessagingDispatcherHandle            MessageDispatcher                                          (Parm, OutParm, ReferenceParm)
	 * 		struct FObjectMessagingHandle                      Handle                                                     (Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     FunctionOwner                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      FunctionName                                               (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UStruct*                                     EventType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UObjectMessagingFunctions::STATIC_RegisterEventFromHandle(struct FObjectMessagingDispatcherHandle* MessageDispatcher, struct FObjectMessagingHandle* Handle, class UObject* FunctionOwner, const class FString& FunctionName, class UStruct* EventType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectMessaging.ObjectMessagingFunctions.RegisterEventFromHandle");
		
		UObjectMessagingFunctions_RegisterEventFromHandle_Params params {};
		params.FunctionOwner = FunctionOwner;
		params.FunctionName = FunctionName;
		params.EventType = EventType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MessageDispatcher != nullptr)
			*MessageDispatcher = params.MessageDispatcher;
		if (Handle != nullptr)
			*Handle = params.Handle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0312DEF0
	 * 		Name   -> Function ObjectMessaging.ObjectMessagingFunctions.RegisterEvent
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FObjectMessagingDispatcher                  MessageDispatcher                                          (Parm, OutParm, ReferenceParm)
	 * 		struct FObjectMessagingHandle                      Handle                                                     (Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     FunctionOwner                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      FunctionName                                               (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UStruct*                                     EventType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UObjectMessagingFunctions::STATIC_RegisterEvent(struct FObjectMessagingDispatcher* MessageDispatcher, struct FObjectMessagingHandle* Handle, class UObject* FunctionOwner, const class FString& FunctionName, class UStruct* EventType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectMessaging.ObjectMessagingFunctions.RegisterEvent");
		
		UObjectMessagingFunctions_RegisterEvent_Params params {};
		params.FunctionOwner = FunctionOwner;
		params.FunctionName = FunctionName;
		params.EventType = EventType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MessageDispatcher != nullptr)
			*MessageDispatcher = params.MessageDispatcher;
		if (Handle != nullptr)
			*Handle = params.Handle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0312DE60
	 * 		Name   -> Function ObjectMessaging.ObjectMessagingFunctions.IsObjectMessagingDispatcherValid
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FObjectMessagingDispatcherHandle            Handle                                                     (Parm, OutParm, ReferenceParm)
	 */
	bool UObjectMessagingFunctions::STATIC_IsObjectMessagingDispatcherValid(struct FObjectMessagingDispatcherHandle* Handle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectMessaging.ObjectMessagingFunctions.IsObjectMessagingDispatcherValid");
		
		UObjectMessagingFunctions_IsObjectMessagingDispatcherValid_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Handle != nullptr)
			*Handle = params.Handle;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0312DDB0
	 * 		Name   -> Function ObjectMessaging.ObjectMessagingFunctions.IsHandleRegistered
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FObjectMessagingHandle                      Handle                                                     (Parm, OutParm, ReferenceParm)
	 */
	bool UObjectMessagingFunctions::STATIC_IsHandleRegistered(struct FObjectMessagingHandle* Handle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectMessaging.ObjectMessagingFunctions.IsHandleRegistered");
		
		UObjectMessagingFunctions_IsHandleRegistered_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Handle != nullptr)
			*Handle = params.Handle;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0312DD20
	 * 		Name   -> Function ObjectMessaging.ObjectMessagingFunctions.GetObjectMessagingDispatcherFromActor
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FObjectMessagingDispatcherHandle UObjectMessagingFunctions::STATIC_GetObjectMessagingDispatcherFromActor(class UObject* Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectMessaging.ObjectMessagingFunctions.GetObjectMessagingDispatcherFromActor");
		
		UObjectMessagingFunctions_GetObjectMessagingDispatcherFromActor_Params params {};
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0312DC80
	 * 		Name   -> Function ObjectMessaging.ObjectMessagingFunctions.GetObjectMessagingDispatcher
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	struct FObjectMessagingDispatcherHandle UObjectMessagingFunctions::STATIC_GetObjectMessagingDispatcher()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectMessaging.ObjectMessagingFunctions.GetObjectMessagingDispatcher");
		
		UObjectMessagingFunctions_GetObjectMessagingDispatcher_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0312DAB0
	 * 		Name   -> Function ObjectMessaging.ObjectMessagingFunctions.FireEventWithDataFromHandle
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FObjectMessagingDispatcherHandle            MessageDispatcher                                          (Parm, OutParm, ReferenceParm)
	 * 		class UStruct*                                     EventDataStruct                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Scope                                                      (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      ScopeId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FGenericStruct                              Value                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void UObjectMessagingFunctions::STATIC_FireEventWithDataFromHandle(struct FObjectMessagingDispatcherHandle* MessageDispatcher, class UStruct* EventDataStruct, const class FString& Scope, const class FString& ScopeId, struct FGenericStruct* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectMessaging.ObjectMessagingFunctions.FireEventWithDataFromHandle");
		
		UObjectMessagingFunctions_FireEventWithDataFromHandle_Params params {};
		params.EventDataStruct = EventDataStruct;
		params.Scope = Scope;
		params.ScopeId = ScopeId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MessageDispatcher != nullptr)
			*MessageDispatcher = params.MessageDispatcher;
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0312D900
	 * 		Name   -> Function ObjectMessaging.ObjectMessagingFunctions.FireEventWithData
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FObjectMessagingDispatcher                  MessageDispatcher                                          (Parm, OutParm, ReferenceParm)
	 * 		class UStruct*                                     EventDataStruct                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Scope                                                      (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      ScopeId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FGenericStruct                              Value                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void UObjectMessagingFunctions::STATIC_FireEventWithData(struct FObjectMessagingDispatcher* MessageDispatcher, class UStruct* EventDataStruct, const class FString& Scope, const class FString& ScopeId, struct FGenericStruct* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectMessaging.ObjectMessagingFunctions.FireEventWithData");
		
		UObjectMessagingFunctions_FireEventWithData_Params params {};
		params.EventDataStruct = EventDataStruct;
		params.Scope = Scope;
		params.ScopeId = ScopeId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MessageDispatcher != nullptr)
			*MessageDispatcher = params.MessageDispatcher;
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UObjectMessagingFunctions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UObjectMessagingFunctions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ObjectMessaging.ObjectMessagingFunctions");
		return ptr;
	}

}


