#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * Class Sentry.SentryAttachment
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class USentryAttachment : public UObject
	{
	public:
		unsigned char                                              UnknownData_NYQ4[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		void InitializeWithPath(const class FString& Path, const class FString& Filename, const class FString& ContentType);
		void InitializeWithData(TArray<unsigned char> Data, const class FString& Filename, const class FString& ContentType);
		class FString GetPath();
		class FString GetFilename();
		TArray<unsigned char> GetData();
		class FString GetContentType();
		static UClass* StaticClass();
	};

	/**
	 * Class Sentry.SentryBreadcrumb
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class USentryBreadcrumb : public UObject
	{
	public:
		unsigned char                                              UnknownData_4KXI[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetType(const class FString& Type);
		void SetMessage(const class FString& Message);
		void SetLevel(ESentryLevel Level);
		void SetData(TMap<class FString, class FString> Data);
		void SetCategory(const class FString& Category);
		class FString GetType();
		class FString GetMessage();
		ESentryLevel GetLevel();
		TMap<class FString, class FString> GetData();
		class FString GetCategory();
		static UClass* StaticClass();
	};

	/**
	 * Class Sentry.SentryEvent
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class USentryEvent : public UObject
	{
	public:
		unsigned char                                              UnknownData_YC8S[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetMessage(const class FString& Message);
		void SetLevel(ESentryLevel Level);
		class FString GetMessage();
		ESentryLevel GetLevel();
		static UClass* StaticClass();
	};

	/**
	 * Class Sentry.SentryId
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class USentryId : public UObject
	{
	public:
		unsigned char                                              UnknownData_U0FQ[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sentry.SentryLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USentryLibrary : public UBlueprintFunctionLibrary
	{
	public:
		TArray<unsigned char> STATIC_StringToBytesArray(const class FString& InString);
		class FString STATIC_SaveStringToFile(const class FString& InString, const class FString& Filename);
		class USentryUserFeedback* STATIC_CreateSentryUserFeedback(class USentryId* EventId, const class FString& Name, const class FString& Email, const class FString& Comments);
		class USentryUser* STATIC_CreateSentryUser(const class FString& Email, const class FString& ID, const class FString& UserName, const class FString& IpAddress, TMap<class FString, class FString> Data);
		class USentryEvent* STATIC_CreateSentryEvent(const class FString& Message, ESentryLevel Level);
		class USentryBreadcrumb* STATIC_CreateSentryBreadcrumb(const class FString& Message, const class FString& Type, const class FString& Category, TMap<class FString, class FString> Data, ESentryLevel Level);
		class USentryAttachment* STATIC_CreateSentryAttachmentWithPath(const class FString& Path, const class FString& Filename, const class FString& ContentType);
		class USentryAttachment* STATIC_CreateSentryAttachmentWithData(TArray<unsigned char> Data, const class FString& Filename, const class FString& ContentType);
		void STATIC_Crash();
		class FString STATIC_ByteArrayToString(TArray<unsigned char> Array);
		void STATIC_Assert();
		static UClass* StaticClass();
	};

	/**
	 * Class Sentry.SentryScope
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class USentryScope : public UObject
	{
	public:
		unsigned char                                              UnknownData_EQ9S[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetTagValue(const class FString& Key, const class FString& Value);
		void SetTags(TMap<class FString, class FString> Tags);
		void SetLevel(ESentryLevel Level);
		void SetFingerprint(TArray<class FString> Fingerprint);
		void SetExtraValue(const class FString& Key, const class FString& Value);
		void SetExtras(TMap<class FString, class FString> Extras);
		void SetEnvironment(const class FString& Environment);
		void SetDist(const class FString& Dist);
		void SetContext(const class FString& Key, TMap<class FString, class FString> Values);
		void RemoveTag(const class FString& Key);
		void RemoveExtra(const class FString& Key);
		void RemoveContext(const class FString& Key);
		class FString GetTagValue(const class FString& Key);
		TMap<class FString, class FString> GetTags();
		ESentryLevel GetLevel();
		TArray<class FString> GetFingerprint();
		class FString GetExtraValue(const class FString& Key);
		TMap<class FString, class FString> GetExtras();
		class FString GetEnvironment();
		class FString GetDist();
		void ClearBreadcrumbs();
		void ClearAttachments();
		void Clear();
		void AddBreadcrumb(class USentryBreadcrumb* Breadcrumb);
		void AddAttachment(class USentryAttachment* Attachment);
		static UClass* StaticClass();
	};

	/**
	 * Class Sentry.SentrySettings
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class USentrySettings : public UObject
	{
	public:
		class FString                                              DsnUrl;                                                  // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       InitAutomatically;                                       // 0x0038(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KOGO[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sentry.SentrySubsystem
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class USentrySubsystem : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_MUFS[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetUser(class USentryUser* User);
		void SetTag(const class FString& Key, const class FString& Value);
		void SetLevel(ESentryLevel Level);
		void SetContext(const class FString& Key, TMap<class FString, class FString> Values);
		void RemoveUser();
		void RemoveTag(const class FString& Key);
		void Initialize();
		void ConfigureScope(const class FScriptDelegate& OnConfigureScope);
		void Close();
		void ClearBreadcrumbs();
		void CaptureUserFeedbackWithParams(class USentryId* EventId, const class FString& Email, const class FString& Comments, const class FString& Name);
		void CaptureUserFeedback(class USentryUserFeedback* UserFeedback);
		class USentryId* CaptureMessageWithScope(const class FString& Message, const class FScriptDelegate& OnConfigureScope, ESentryLevel Level);
		class USentryId* CaptureMessage(const class FString& Message, ESentryLevel Level);
		class USentryId* CaptureEventWithScope(class USentryEvent* Event, const class FScriptDelegate& OnConfigureScope);
		class USentryId* CaptureEvent(class USentryEvent* Event);
		void AddBreadcrumbWithParams(const class FString& Message, const class FString& Category, const class FString& Type, TMap<class FString, class FString> Data, ESentryLevel Level);
		void AddBreadcrumb(class USentryBreadcrumb* Breadcrumb);
		static UClass* StaticClass();
	};

	/**
	 * Class Sentry.SentryUser
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class USentryUser : public UObject
	{
	public:
		unsigned char                                              UnknownData_9UWT[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetUsername(const class FString& UserName);
		void SetIpAddress(const class FString& IpAddress);
		void SetId(const class FString& ID);
		void SetEmail(const class FString& Email);
		void SetData(TMap<class FString, class FString> Data);
		class FString GetUsername();
		class FString GetIpAddress();
		class FString GetId();
		class FString GetEmail();
		TMap<class FString, class FString> GetData();
		static UClass* StaticClass();
	};

	/**
	 * Class Sentry.SentryUserFeedback
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class USentryUserFeedback : public UObject
	{
	public:
		unsigned char                                              UnknownData_YO2M[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetName(const class FString& Name);
		void SetEmail(const class FString& Email);
		void SetComment(const class FString& Comments);
		void Initialize(class USentryId* EventId);
		class FString GetName();
		class FString GetEmail();
		class FString GetComment();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
