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
	 * Function ServiceMessaging.ServiceMessagingFunctions.GetServiceMessagingDispatcherFromActor
	 */
	struct UServiceMessagingFunctions_GetServiceMessagingDispatcherFromActor_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FObjectMessagingDispatcherHandle                    ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ServiceMessaging.ServiceMessagingFunctions.GetServiceMessagingDispatcher
	 */
	struct UServiceMessagingFunctions_GetServiceMessagingDispatcher_Params
	{
	public:
		unsigned char                                              UnknownData_27NV[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FObjectMessagingDispatcherHandle                    ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ServiceMessaging.ServiceMessagingListenerTestObject.TestFunctionWithMessage
	 */
	struct UServiceMessagingListenerTestObject_TestFunctionWithMessage_Params
	{
	public:
		struct FServiceMessagingTestMessage                        InMessage;                                               // 0x0000(0x0004)  (Parm, OutParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
