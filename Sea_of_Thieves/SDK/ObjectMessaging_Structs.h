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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct ObjectMessaging.ObjectMessagingObjectScoper
	 * Size -> 0x0050
	 */
	struct FObjectMessagingObjectScoper
	{
	public:
		unsigned char                                              UnknownData_509X[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ObjectMessaging.ObjectMessagingDispatcherHandle
	 * Size -> 0x0008
	 */
	struct FObjectMessagingDispatcherHandle
	{
	public:
		unsigned char                                              UnknownData_DVLG[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ObjectMessaging.ObjectMessagingHandle
	 * Size -> 0x0048
	 */
	struct FObjectMessagingHandle
	{
	public:
		unsigned char                                              UnknownData_PNMV[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStruct*                                             EventType;                                               // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PQEB[0x38];                                  // 0x0010(0x0038) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ObjectMessaging.ObjectMessagingDispatcher
	 * Size -> 0x00A0
	 */
	struct FObjectMessagingDispatcher
	{
	public:
		unsigned char                                              UnknownData_K4IN[0xA0];                                  // 0x0000(0x00A0) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
