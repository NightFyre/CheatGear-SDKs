#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * Class LadyBugTrackerRuntime.BugTrackerSettings
	 * Size -> 0x01F8 (FullSize[0x0220] - InheritedSize[0x0028])
	 */
	class UBugTrackerSettings : public UObject
	{
	public:
		class FString                                              Provider;                                                // 0x0028(0x0010) Edit, ZeroConstructor, Config, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Host;                                                    // 0x0038(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ProjectName;                                             // 0x0048(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftClassPath                                      ConstructorClass;                                        // 0x0058(0x0018) Edit, ZeroConstructor, Config, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBugTrackerProfileSettings                          DefaultProfile;                                          // 0x0070(0x0040) Edit, Config, NativeAccessSpecifierPublic
		struct FBugTrackerProfileSettings                          EditorProfile;                                           // 0x00B0(0x0040) Edit, Config, NativeAccessSpecifierPublic
		struct FBugTrackerProfileSettings                          GameProfile;                                             // 0x00F0(0x0040) Edit, Config, NativeAccessSpecifierPublic
		struct FBugTrackerProfileSettings                          CrashProfile;                                            // 0x0130(0x0040) Edit, Config, NativeAccessSpecifierPublic
		struct FBugTrackerProfileSettings                          FeedbackProfile;                                         // 0x0170(0x0040) Edit, Config, NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         MapRenameOldToNew;                                       // 0x01B0(0x0050) Edit, Config, NativeAccessSpecifierPublic
		TArray<struct FBugTrackerSettingsCustomField>              CustomFields;                                            // 0x0200(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		class FString                                              AndroidStorage;                                          // 0x0210(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LadyBugTrackerRuntime.BugTrackerUserSettings
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UBugTrackerUserSettings : public UObject
	{
	public:
		class FString                                              Username;                                                // 0x0028(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Password;                                                // 0x0038(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRememberMe;                                             // 0x0048(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B0ZP[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              EditImageTool;                                           // 0x0050(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LadyBugTrackerRuntime.IssueCollection
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UIssueCollection : public UObject
	{
	public:
		TArray<class UIssueData*>                                  Issues;                                                  // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LadyBugTrackerRuntime.IssueConstructor
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIssueConstructor : public UObject
	{
	public:
		class FString GetLevelNameFromSreamingLevel(class ULevelStreaming* LevelStreaming);
		class FString GetLevelName();
		bool GetCamera(struct FVector* Location, struct FRotator* Rotation);
		void ConstructIssue(class UIssueData* Issue, EIssueProfile Profile);
		static UClass* StaticClass();
	};

	/**
	 * Class LadyBugTrackerRuntime.IssueData
	 * Size -> 0x01C8 (FullSize[0x01F0] - InheritedSize[0x0028])
	 */
	class UIssueData : public UObject
	{
	public:
		unsigned char                                              UnknownData_8DZX[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              URL;                                                     // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ID;                                                      // 0x0040(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UULR[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Project;                                                 // 0x0048(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Reporter;                                                // 0x0058(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEnumString                                         Handler;                                                 // 0x0068(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              Summary;                                                 // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0088(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StepsToReproduce;                                        // 0x0098(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AdditionalInformation;                                   // 0x00A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEnumString                                         Category;                                                // 0x00B8(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FEnumString                                         Severity;                                                // 0x00C8(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FEnumString                                         Status;                                                  // 0x00D8(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FEnumString                                         Priority;                                                // 0x00E8(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FDateTime                                           DateSubmitted;                                           // 0x00F8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           LastUpdated;                                             // 0x0100(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEnumString                                         Resolution;                                              // 0x0108(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FEnumString                                         TargetVersion;                                           // 0x0118(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FEnumString                                         ProductVersion;                                          // 0x0128(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FEnumString                                         FixedInVersion;                                          // 0x0138(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FEnumString                                         Reproducibility;                                         // 0x0148(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              Platform;                                                // 0x0158(0x0010) Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Os;                                                      // 0x0168(0x0010) Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              OsBuild;                                                 // 0x0178(0x0010) Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Tags;                                                    // 0x0188(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FIssueCustomField>                           CustomFields;                                            // 0x0198(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FIssueAttachment>                            Attachments;                                             // 0x01A8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FIssueNote>                                  Notes;                                                   // 0x01B8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FIssueHistory>                               History;                                                 // 0x01C8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bGoto;                                                   // 0x01D8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RLKV[0x17];                                  // 0x01D9(0x0017) MISSED OFFSET (PADDING)

	public:
		bool SetCustomFieldValue(const class FString& FieldName, const class FString& Value);
		void SetCameraTransform(const struct FVector& Location, const struct FRotator& Rotation);
		class FString GetLevelName();
		class FString GetCustomFieldValue(const class FString& FieldName);
		struct FTransform GetCameraTransform();
		static UClass* StaticClass();
	};

	/**
	 * Class LadyBugTrackerRuntime.FeedbackData
	 * Size -> 0x0000 (FullSize[0x01F0] - InheritedSize[0x01F0])
	 */
	class UFeedbackData : public UIssueData
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LadyBugTrackerRuntime.RuntimeUtilities
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class URuntimeUtilities : public UBlueprintFunctionLibrary
	{
	public:
		void SendFeedback(class UFeedbackData* Feedback, const class FString& Username, const class FString& PasswordOrToken, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFail);
		void SendAttachment(int32_t IssueId, const class FString& FullPath, const class FString& Filename, const class FString& ContentMimeType, const class FString& Username, const class FString& PasswordOrToken, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFail);
		bool ReportIssueData(class UIssueData* Issue, TArray<class FString> Attachments, bool bTakeScreenshots, bool bAttachLogs);
		bool ReportIssue(const class FString& Summary, TArray<class FString> Attachments, bool bTakeScreenshots, bool bAttachLogs);
		void GetCategories(const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFail);
		class UIssueData* CreateIssue();
		class UFeedbackData* CreateFeedback();
		void AddScreenshot(class UFeedbackData* Feedback, const struct FLatentActionInfo& LatentInfo, bool* bSuccess, bool bInShowUI, int32_t DesiredWidth, int32_t DesiredHeight);
		bool AddLog(class UFeedbackData* Feedback);
		void AddCustomField(class UFeedbackData* Feedback, const class FString& Field, const class FString& Value);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
