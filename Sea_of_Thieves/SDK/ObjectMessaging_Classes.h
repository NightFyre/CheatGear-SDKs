#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class ObjectMessaging.ObjectMessagingDispatcherInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UObjectMessagingDispatcherInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ObjectMessaging.ObjectMessagingDispatcherComponent
	 * Size -> 0x00A8 (FullSize[0x0170] - InheritedSize[0x00C8])
	 */
	class UObjectMessagingDispatcherComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_8EFC[0xA8];                                  // 0x00C8(0x00A8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ObjectMessaging.ObjectMessagingInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UObjectMessagingInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ObjectMessaging.ObjectMessagingFunctions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UObjectMessagingFunctions : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_UnregisterEventsForObject(struct FObjectMessagingObjectScoper* ObjectScoper, class UObject* EventSource);
		void STATIC_UnregisterEvents(struct FObjectMessagingObjectScoper* ObjectScoper);
		void STATIC_UnregisterEventFromHandle(struct FObjectMessagingDispatcherHandle* Dispatcher, struct FObjectMessagingHandle* Handle);
		void STATIC_UnregisterEvent(struct FObjectMessagingDispatcher* Dispatcher, struct FObjectMessagingHandle* Handle);
		void STATIC_RegisterEventWithObjectScoper(class UObject* EventSource, struct FObjectMessagingObjectScoper* ObjectScoper, class UObject* FunctionOwner, const class FString& FunctionName, class UStruct* EventType);
		void STATIC_RegisterEventFromHandle(struct FObjectMessagingDispatcherHandle* MessageDispatcher, struct FObjectMessagingHandle* Handle, class UObject* FunctionOwner, const class FString& FunctionName, class UStruct* EventType);
		void STATIC_RegisterEvent(struct FObjectMessagingDispatcher* MessageDispatcher, struct FObjectMessagingHandle* Handle, class UObject* FunctionOwner, const class FString& FunctionName, class UStruct* EventType);
		bool STATIC_IsObjectMessagingDispatcherValid(struct FObjectMessagingDispatcherHandle* Handle);
		bool STATIC_IsHandleRegistered(struct FObjectMessagingHandle* Handle);
		struct FObjectMessagingDispatcherHandle STATIC_GetObjectMessagingDispatcherFromActor(class UObject* Object);
		struct FObjectMessagingDispatcherHandle STATIC_GetObjectMessagingDispatcher();
		void STATIC_FireEventWithDataFromHandle(struct FObjectMessagingDispatcherHandle* MessageDispatcher, class UStruct* EventDataStruct, const class FString& Scope, const class FString& ScopeId, struct FGenericStruct* Value);
		void STATIC_FireEventWithData(struct FObjectMessagingDispatcher* MessageDispatcher, class UStruct* EventDataStruct, const class FString& Scope, const class FString& ScopeId, struct FGenericStruct* Value);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
