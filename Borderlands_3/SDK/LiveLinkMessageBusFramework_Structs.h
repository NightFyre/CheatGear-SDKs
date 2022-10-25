#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * ScriptStruct LiveLinkMessageBusFramework.LiveLinkClearSubject
	 * Size -> 0x0008
	 */
	struct FLiveLinkClearSubject
	{
	public:
		class FName                                                SubjectName;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LiveLinkMessageBusFramework.LiveLinkHeartbeatMessage
	 * Size -> 0x0001
	 */
	struct FLiveLinkHeartbeatMessage
	{
	public:
		unsigned char                                              UnknownData_VA5Z[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LiveLinkMessageBusFramework.LiveLinkConnectMessage
	 * Size -> 0x0001
	 */
	struct FLiveLinkConnectMessage
	{
	public:
		unsigned char                                              UnknownData_8YH1[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LiveLinkMessageBusFramework.LiveLinkPongMessage
	 * Size -> 0x0030
	 */
	struct FLiveLinkPongMessage
	{
	public:
		class FString                                              ProviderName;                                            // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MachineName;                                             // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               PollRequest;                                             // 0x0020(0x0010) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LiveLinkMessageBusFramework.LiveLinkPingMessage
	 * Size -> 0x0010
	 */
	struct FLiveLinkPingMessage
	{
	public:
		struct FGuid                                               PollRequest;                                             // 0x0000(0x0010) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LiveLinkMessageBusFramework.LiveLinkSubjectFrameMessage
	 * Size -> 0x0090
	 */
	struct FLiveLinkSubjectFrameMessage
	{
	public:
		class FName                                                SubjectName;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FTransform>                                  Transforms;                                              // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FLiveLinkCurveElement>                       Curves;                                                  // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FLiveLinkMetaData                                   MetaData;                                                // 0x0028(0x0060) NativeAccessSpecifierPublic
		double                                                     Time;                                                    // 0x0088(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LiveLinkMessageBusFramework.LiveLinkSubjectDataMessage
	 * Size -> 0x0028
	 */
	struct FLiveLinkSubjectDataMessage
	{
	public:
		struct FLiveLinkRefSkeleton                                RefSkeleton;                                             // 0x0000(0x0020) NativeAccessSpecifierPublic
		class FName                                                SubjectName;                                             // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
