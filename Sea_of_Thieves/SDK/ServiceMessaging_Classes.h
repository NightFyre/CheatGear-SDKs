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
	 * Class ServiceMessaging.ServiceMessagingDispatcherInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UServiceMessagingDispatcherInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ServiceMessaging.ServiceMessagingFunctions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UServiceMessagingFunctions : public UBlueprintFunctionLibrary
	{
	public:
		struct FObjectMessagingDispatcherHandle STATIC_GetServiceMessagingDispatcherFromActor(class UObject* Object);
		struct FObjectMessagingDispatcherHandle STATIC_GetServiceMessagingDispatcher();
		static UClass* StaticClass();
	};

	/**
	 * Class ServiceMessaging.ServiceMessagingListenerTestObject
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UServiceMessagingListenerTestObject : public UObject
	{
	public:
		unsigned char                                              UnknownData_YJF4[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		void TestFunctionWithMessage(struct FServiceMessagingTestMessage* InMessage);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
