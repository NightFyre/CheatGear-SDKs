#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function ObjectMessaging.ObjectMessagingFunctions.UnregisterEventsForObject
	 */
	struct UObjectMessagingFunctions_UnregisterEventsForObject_Params
	{
	public:
		struct FObjectMessagingObjectScoper                        ObjectScoper;                                            // 0x0000(0x0050)  (Parm, OutParm, ReferenceParm)
		class UObject*                                             EventSource;                                             // 0x0050(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ObjectMessaging.ObjectMessagingFunctions.UnregisterEvents
	 */
	struct UObjectMessagingFunctions_UnregisterEvents_Params
	{
	public:
		struct FObjectMessagingObjectScoper                        ObjectScoper;                                            // 0x0000(0x0050)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ObjectMessaging.ObjectMessagingFunctions.UnregisterEventFromHandle
	 */
	struct UObjectMessagingFunctions_UnregisterEventFromHandle_Params
	{
	public:
		struct FObjectMessagingDispatcherHandle                    Dispatcher;                                              // 0x0000(0x0008)  (Parm, OutParm, ReferenceParm)
		struct FObjectMessagingHandle                              Handle;                                                  // 0x0008(0x0048)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ObjectMessaging.ObjectMessagingFunctions.UnregisterEvent
	 */
	struct UObjectMessagingFunctions_UnregisterEvent_Params
	{
	public:
		struct FObjectMessagingDispatcher                          Dispatcher;                                              // 0x0000(0x00A0)  (Parm, OutParm, ReferenceParm)
		struct FObjectMessagingHandle                              Handle;                                                  // 0x00A0(0x0048)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ObjectMessaging.ObjectMessagingFunctions.RegisterEventWithObjectScoper
	 */
	struct UObjectMessagingFunctions_RegisterEventWithObjectScoper_Params
	{
	public:
		class UObject*                                             EventSource;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FObjectMessagingObjectScoper                        ObjectScoper;                                            // 0x0008(0x0050)  (Parm, OutParm, ReferenceParm)
		class UObject*                                             FunctionOwner;                                           // 0x0058(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              FunctionName;                                            // 0x0060(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		class UStruct*                                             EventType;                                               // 0x0070(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ObjectMessaging.ObjectMessagingFunctions.RegisterEventFromHandle
	 */
	struct UObjectMessagingFunctions_RegisterEventFromHandle_Params
	{
	public:
		struct FObjectMessagingDispatcherHandle                    MessageDispatcher;                                       // 0x0000(0x0008)  (Parm, OutParm, ReferenceParm)
		struct FObjectMessagingHandle                              Handle;                                                  // 0x0008(0x0048)  (Parm, OutParm, ReferenceParm)
		class UObject*                                             FunctionOwner;                                           // 0x0050(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              FunctionName;                                            // 0x0058(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		class UStruct*                                             EventType;                                               // 0x0068(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ObjectMessaging.ObjectMessagingFunctions.RegisterEvent
	 */
	struct UObjectMessagingFunctions_RegisterEvent_Params
	{
	public:
		struct FObjectMessagingDispatcher                          MessageDispatcher;                                       // 0x0000(0x00A0)  (Parm, OutParm, ReferenceParm)
		struct FObjectMessagingHandle                              Handle;                                                  // 0x00A0(0x0048)  (Parm, OutParm, ReferenceParm)
		class UObject*                                             FunctionOwner;                                           // 0x00E8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              FunctionName;                                            // 0x00F0(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		class UStruct*                                             EventType;                                               // 0x0100(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ObjectMessaging.ObjectMessagingFunctions.IsObjectMessagingDispatcherValid
	 */
	struct UObjectMessagingFunctions_IsObjectMessagingDispatcherValid_Params
	{
	public:
		struct FObjectMessagingDispatcherHandle                    Handle;                                                  // 0x0000(0x0008)  (Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ObjectMessaging.ObjectMessagingFunctions.IsHandleRegistered
	 */
	struct UObjectMessagingFunctions_IsHandleRegistered_Params
	{
	public:
		struct FObjectMessagingHandle                              Handle;                                                  // 0x0000(0x0048)  (Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ObjectMessaging.ObjectMessagingFunctions.GetObjectMessagingDispatcherFromActor
	 */
	struct UObjectMessagingFunctions_GetObjectMessagingDispatcherFromActor_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FObjectMessagingDispatcherHandle                    ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ObjectMessaging.ObjectMessagingFunctions.GetObjectMessagingDispatcher
	 */
	struct UObjectMessagingFunctions_GetObjectMessagingDispatcher_Params
	{
	public:
		unsigned char                                              UnknownData_F5JX[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FObjectMessagingDispatcherHandle                    ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ObjectMessaging.ObjectMessagingFunctions.FireEventWithDataFromHandle
	 */
	struct UObjectMessagingFunctions_FireEventWithDataFromHandle_Params
	{
	public:
		struct FObjectMessagingDispatcherHandle                    MessageDispatcher;                                       // 0x0000(0x0008)  (Parm, OutParm, ReferenceParm)
		class UStruct*                                             EventDataStruct;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              Scope;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              ScopeId;                                                 // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FGenericStruct                                      Value;                                                   // 0x0030(0x0004)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ObjectMessaging.ObjectMessagingFunctions.FireEventWithData
	 */
	struct UObjectMessagingFunctions_FireEventWithData_Params
	{
	public:
		struct FObjectMessagingDispatcher                          MessageDispatcher;                                       // 0x0000(0x00A0)  (Parm, OutParm, ReferenceParm)
		class UStruct*                                             EventDataStruct;                                         // 0x00A0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              Scope;                                                   // 0x00A8(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              ScopeId;                                                 // 0x00B8(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FGenericStruct                                      Value;                                                   // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
