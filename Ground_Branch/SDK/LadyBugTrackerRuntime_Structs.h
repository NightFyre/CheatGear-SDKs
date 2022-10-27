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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum LadyBugTrackerRuntime.EIssueProfile
	 */
	enum class EIssueProfile : uint8_t
	{
		Default  = 0,
		Game     = 1,
		Editor   = 2,
		Crash    = 3,
		Feedback = 4,
		MAX      = 5
	};

	/**
	 * Enum LadyBugTrackerRuntime.EIssueViewMode
	 */
	enum class EIssueViewMode : uint8_t
	{
		None   = 0,
		View   = 1,
		Edit   = 2,
		Report = 3,
		MAX    = 4
	};

	/**
	 * Enum LadyBugTrackerRuntime.EReportScreenShotMode
	 */
	enum class EReportScreenShotMode : uint8_t
	{
		None                = 0,
		EditorActiveWindow  = 1,
		EditorLevelViewport = 2,
		EditorAllWindows    = 3,
		Game                = 4,
		MAX                 = 5
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct LadyBugTrackerRuntime.EnumString
	 * Size -> 0x0010
	 */
	struct FEnumString
	{
	public:
		class FString                                              Value;                                                   // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.BugTrackerProfileSettings
	 * Size -> 0x0040
	 */
	struct FBugTrackerProfileSettings
	{
	public:
		struct FEnumString                                         DefaultCategory;                                         // 0x0000(0x0010) Edit, Config, NativeAccessSpecifierPublic
		struct FEnumString                                         DefaultPriority;                                         // 0x0010(0x0010) Edit, Config, NativeAccessSpecifierPublic
		struct FEnumString                                         DefaultSeverity;                                         // 0x0020(0x0010) Edit, Config, NativeAccessSpecifierPublic
		struct FEnumString                                         DefaultReproducibility;                                  // 0x0030(0x0010) Edit, Config, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.BugTrackerSettingsCustomField
	 * Size -> 0x0020
	 */
	struct FBugTrackerSettingsCustomField
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DefaultValue;                                            // 0x0010(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.IssueCustomField
	 * Size -> 0x0020
	 */
	struct FIssueCustomField
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Value;                                                   // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.IssueAttachment
	 * Size -> 0x0050
	 */
	struct FIssueAttachment
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O1DH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Filename;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ContentType;                                             // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              URL;                                                     // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           DateSubmitted;                                           // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Size;                                                    // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UserId;                                                  // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUpload;                                                 // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XAXM[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.IssueNote
	 * Size -> 0x0030
	 */
	struct FIssueNote
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6DE5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Text;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Reporter;                                                // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           DateSubmitted;                                           // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.IssueHistory
	 * Size -> 0x0050
	 */
	struct FIssueHistory
	{
	public:
		unsigned char                                              UnknownData_7BPG[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.CategoriesHelper
	 * Size -> 0x0010
	 */
	struct FCategoriesHelper
	{
	public:
		TArray<class FString>                                      Categories;                                              // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.IssueUserData
	 * Size -> 0x0048
	 */
	struct FIssueUserData
	{
	public:
		unsigned char                                              UnknownData_ADT2[0x48];                                  // 0x0000(0x0048) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.ProjectData
	 * Size -> 0x0020
	 */
	struct FProjectData
	{
	public:
		unsigned char                                              UnknownData_ZY5I[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.IssueCustomFieldDefinition
	 * Size -> 0x0068
	 */
	struct FIssueCustomFieldDefinition
	{
	public:
		unsigned char                                              UnknownData_1TE2[0x68];                                  // 0x0000(0x0068) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_Fault
	 * Size -> 0x0020
	 */
	struct FMantisConnect_Fault
	{
	public:
		class FString                                              FaultCode;                                               // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FaultString;                                             // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_ObjectRef
	 * Size -> 0x0018
	 */
	struct FMantisConnect_ObjectRef
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KO9W[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Name;                                                    // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_EnumAccessLevelsResponse
	 * Size -> 0x0010
	 */
	struct FMantisConnect_EnumAccessLevelsResponse
	{
	public:
		TArray<struct FMantisConnect_ObjectRef>                    Return;                                                  // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_AuthorizeBase
	 * Size -> 0x0020
	 */
	struct FMantisConnect_AuthorizeBase
	{
	public:
		class FString                                              Username;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Password;                                                // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_EnumAccessLevels
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FMantisConnect_EnumAccessLevels : public FMantisConnect_AuthorizeBase
	{	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_EnumPrioritiesResponse
	 * Size -> 0x0010
	 */
	struct FMantisConnect_EnumPrioritiesResponse
	{
	public:
		TArray<struct FMantisConnect_ObjectRef>                    Return;                                                  // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_EnumPriorities
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FMantisConnect_EnumPriorities : public FMantisConnect_AuthorizeBase
	{	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_EnumReproducibilitiesResponse
	 * Size -> 0x0010
	 */
	struct FMantisConnect_EnumReproducibilitiesResponse
	{
	public:
		TArray<struct FMantisConnect_ObjectRef>                    Return;                                                  // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_EnumReproducibilities
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FMantisConnect_EnumReproducibilities : public FMantisConnect_AuthorizeBase
	{	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_EnumResolutionsResponse
	 * Size -> 0x0010
	 */
	struct FMantisConnect_EnumResolutionsResponse
	{
	public:
		TArray<struct FMantisConnect_ObjectRef>                    Return;                                                  // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_EnumResolutions
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FMantisConnect_EnumResolutions : public FMantisConnect_AuthorizeBase
	{	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_EnumSeveritiesResponse
	 * Size -> 0x0010
	 */
	struct FMantisConnect_EnumSeveritiesResponse
	{
	public:
		TArray<struct FMantisConnect_ObjectRef>                    Return;                                                  // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_EnumSeverities
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FMantisConnect_EnumSeverities : public FMantisConnect_AuthorizeBase
	{	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_EnumStatusResponse
	 * Size -> 0x0010
	 */
	struct FMantisConnect_EnumStatusResponse
	{
	public:
		TArray<struct FMantisConnect_ObjectRef>                    Return;                                                  // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_EnumStatus
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FMantisConnect_EnumStatus : public FMantisConnect_AuthorizeBase
	{	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_ProjectDataBase
	 * Size -> 0x00A8
	 */
	struct FMantisConnect_ProjectDataBase
	{
	public:
		unsigned char                                              UnknownData_71D5[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ID;                                                      // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T14H[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Name;                                                    // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMantisConnect_ObjectRef                            Status;                                                  // 0x0020(0x0018) NativeAccessSpecifierPublic
		bool                                                       Enabled;                                                 // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PYWP[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMantisConnect_ObjectRef                            ViewState;                                               // 0x0040(0x0018) NativeAccessSpecifierPublic
		struct FMantisConnect_ObjectRef                            AccessMin;                                               // 0x0058(0x0018) NativeAccessSpecifierPublic
		class FString                                              FilePath;                                                // 0x0070(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0080(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       InheritGlobal;                                           // 0x0090(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0XD8[0x17];                                  // 0x0091(0x0017) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_ProjectData5
	 * Size -> 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
	 */
	struct FMantisConnect_ProjectData5 : public FMantisConnect_ProjectDataBase
	{
	public:
		TArray<struct FMantisConnect_ProjectDataBase>              Subprojects;                                             // 0x00A8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_ProjectData4
	 * Size -> 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
	 */
	struct FMantisConnect_ProjectData4 : public FMantisConnect_ProjectDataBase
	{
	public:
		TArray<struct FMantisConnect_ProjectData5>                 Subprojects;                                             // 0x00A8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_ProjectData3
	 * Size -> 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
	 */
	struct FMantisConnect_ProjectData3 : public FMantisConnect_ProjectDataBase
	{
	public:
		TArray<struct FMantisConnect_ProjectData4>                 Subprojects;                                             // 0x00A8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_ProjectData2
	 * Size -> 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
	 */
	struct FMantisConnect_ProjectData2 : public FMantisConnect_ProjectDataBase
	{
	public:
		TArray<struct FMantisConnect_ProjectData3>                 Subprojects;                                             // 0x00A8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_ProjectData1
	 * Size -> 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
	 */
	struct FMantisConnect_ProjectData1 : public FMantisConnect_ProjectDataBase
	{
	public:
		TArray<struct FMantisConnect_ProjectData2>                 Subprojects;                                             // 0x00A8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_ProjectData
	 * Size -> 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
	 */
	struct FMantisConnect_ProjectData : public FMantisConnect_ProjectDataBase
	{
	public:
		TArray<struct FMantisConnect_ProjectData1>                 Subprojects;                                             // 0x00A8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_ProjectsGetUserAccessibleResponse
	 * Size -> 0x0010
	 */
	struct FMantisConnect_ProjectsGetUserAccessibleResponse
	{
	public:
		TArray<struct FMantisConnect_ProjectData>                  Return;                                                  // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_ProjectsGetUserAccessible
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FMantisConnect_ProjectsGetUserAccessible : public FMantisConnect_AuthorizeBase
	{	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_ProjectVersionData
	 * Size -> 0x0028
	 */
	struct FMantisConnect_ProjectVersionData
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Released;                                                // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JS5H[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_ProjectGetVersionsResponse
	 * Size -> 0x0010
	 */
	struct FMantisConnect_ProjectGetVersionsResponse
	{
	public:
		TArray<struct FMantisConnect_ProjectVersionData>           Return;                                                  // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_ProjectGetVersions
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FMantisConnect_ProjectGetVersions : public FMantisConnect_AuthorizeBase
	{
	public:
		int32_t                                                    ProjectID;                                               // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CLPF[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_CustomFieldDefinitionData
	 * Size -> 0x0070
	 */
	struct FMantisConnect_CustomFieldDefinitionData
	{
	public:
		struct FMantisConnect_ObjectRef                            Field;                                                   // 0x0000(0x0018) NativeAccessSpecifierPublic
		int32_t                                                    Type;                                                    // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LS7Q[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PossibleValues;                                          // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DefaultValue;                                            // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ValidRegexp;                                             // 0x0040(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AccessLevelR;                                            // 0x0050(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AccessLevelRw;                                           // 0x0054(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LengthMin;                                               // 0x0058(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LengthMax;                                               // 0x005C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Advanced;                                                // 0x0060(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DisplayReport;                                           // 0x0061(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DisplayUpdate;                                           // 0x0062(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DisplayResolved;                                         // 0x0063(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DisplayClosed;                                           // 0x0064(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RequireReport;                                           // 0x0065(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RequireUpdate;                                           // 0x0066(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RequireResolved;                                         // 0x0067(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RequireClosed;                                           // 0x0068(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V6QO[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_ProjectGetCustomFieldsResponse
	 * Size -> 0x0010
	 */
	struct FMantisConnect_ProjectGetCustomFieldsResponse
	{
	public:
		TArray<struct FMantisConnect_CustomFieldDefinitionData>    Return;                                                  // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_ProjectGetCustomFields
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FMantisConnect_ProjectGetCustomFields : public FMantisConnect_AuthorizeBase
	{
	public:
		int32_t                                                    ProjectID;                                               // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X9X0[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_AccountData
	 * Size -> 0x0038
	 */
	struct FMantisConnect_AccountData
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BXV9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Name;                                                    // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RealName;                                                // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Email;                                                   // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_ProjectGetUsersResponse
	 * Size -> 0x0010
	 */
	struct FMantisConnect_ProjectGetUsersResponse
	{
	public:
		TArray<struct FMantisConnect_AccountData>                  Return;                                                  // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_ProjectGetUsers
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FMantisConnect_ProjectGetUsers : public FMantisConnect_AuthorizeBase
	{
	public:
		int32_t                                                    ProjectID;                                               // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Access;                                                  // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_ProjectGetIdFromNameResponse
	 * Size -> 0x0004
	 */
	struct FMantisConnect_ProjectGetIdFromNameResponse
	{
	public:
		int32_t                                                    Return;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_ProjectGetIdFromName
	 * Size -> 0x0010 (FullSize[0x0030] - InheritedSize[0x0020])
	 */
	struct FMantisConnect_ProjectGetIdFromName : public FMantisConnect_AuthorizeBase
	{
	public:
		class FString                                              ProjectName;                                             // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_ProjectGetCategoriesResponse
	 * Size -> 0x0010
	 */
	struct FMantisConnect_ProjectGetCategoriesResponse
	{
	public:
		TArray<class FString>                                      Return;                                                  // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_ProjectGetCategories
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FMantisConnect_ProjectGetCategories : public FMantisConnect_AuthorizeBase
	{
	public:
		int32_t                                                    ProjectID;                                               // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NX6S[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_AttachmentData
	 * Size -> 0x0050
	 */
	struct FMantisConnect_AttachmentData
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LPXP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Filename;                                                // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Size;                                                    // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CA3P[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ContentType;                                             // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           DateSubmitted;                                           // 0x0030(0x0008) ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DownloadUrl;                                             // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UserId;                                                  // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H428[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_RelationshipData
	 * Size -> 0x0028
	 */
	struct FMantisConnect_RelationshipData
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W6VX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMantisConnect_ObjectRef                            Type;                                                    // 0x0008(0x0018) NativeAccessSpecifierPublic
		int32_t                                                    TargetId;                                                // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F97Y[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_IssueNoteData
	 * Size -> 0x0090
	 */
	struct FMantisConnect_IssueNoteData
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7SOQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMantisConnect_AccountData                          Reporter;                                                // 0x0008(0x0038) Transient, NativeAccessSpecifierPublic
		class FString                                              Text;                                                    // 0x0040(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMantisConnect_ObjectRef                            ViewState;                                               // 0x0050(0x0018) Transient, NativeAccessSpecifierPublic
		struct FDateTime                                           DateSubmitted;                                           // 0x0068(0x0008) ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           LastModified;                                            // 0x0070(0x0008) ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TimeTracking;                                            // 0x0078(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NoteType;                                                // 0x007C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              NoteAttr;                                                // 0x0080(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_CustomFieldValueForIssueData
	 * Size -> 0x0028
	 */
	struct FMantisConnect_CustomFieldValueForIssueData
	{
	public:
		struct FMantisConnect_ObjectRef                            Field;                                                   // 0x0000(0x0018) NativeAccessSpecifierPublic
		class FString                                              Value;                                                   // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_IssueData
	 * Size -> 0x0298
	 */
	struct FMantisConnect_IssueData
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WJSA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMantisConnect_ObjectRef                            ViewState;                                               // 0x0008(0x0018) NativeAccessSpecifierPublic
		struct FDateTime                                           LastUpdated;                                             // 0x0020(0x0008) ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMantisConnect_ObjectRef                            Project;                                                 // 0x0028(0x0018) NativeAccessSpecifierPublic
		class FString                                              Category;                                                // 0x0040(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMantisConnect_ObjectRef                            Priority;                                                // 0x0050(0x0018) NativeAccessSpecifierPublic
		struct FMantisConnect_ObjectRef                            Severity;                                                // 0x0068(0x0018) NativeAccessSpecifierPublic
		struct FMantisConnect_ObjectRef                            Status;                                                  // 0x0080(0x0018) NativeAccessSpecifierPublic
		struct FMantisConnect_AccountData                          Reporter;                                                // 0x0098(0x0038) NativeAccessSpecifierPublic
		class FString                                              Summary;                                                 // 0x00D0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Version;                                                 // 0x00E0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Build;                                                   // 0x00F0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Platform;                                                // 0x0100(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Os;                                                      // 0x0110(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              OsBuild;                                                 // 0x0120(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMantisConnect_ObjectRef                            Reproducibility;                                         // 0x0130(0x0018) NativeAccessSpecifierPublic
		struct FDateTime                                           DateSubmitted;                                           // 0x0148(0x0008) ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SponsorshipTotal;                                        // 0x0150(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E2E2[0x4];                                   // 0x0154(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMantisConnect_AccountData                          Handler;                                                 // 0x0158(0x0038) NativeAccessSpecifierPublic
		struct FMantisConnect_ObjectRef                            Projection;                                              // 0x0190(0x0018) NativeAccessSpecifierPublic
		struct FMantisConnect_ObjectRef                            Eta;                                                     // 0x01A8(0x0018) NativeAccessSpecifierPublic
		struct FMantisConnect_ObjectRef                            Resolution;                                              // 0x01C0(0x0018) NativeAccessSpecifierPublic
		class FString                                              FixedInVersion;                                          // 0x01D8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TargetVersion;                                           // 0x01E8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x01F8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StepsToReproduce;                                        // 0x0208(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AdditionalInformation;                                   // 0x0218(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FMantisConnect_AttachmentData>               Attachments;                                             // 0x0228(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FMantisConnect_RelationshipData>             Relationships;                                           // 0x0238(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FMantisConnect_IssueNoteData>                Notes;                                                   // 0x0248(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FMantisConnect_CustomFieldValueForIssueData> CustomFields;                                            // 0x0258(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FDateTime                                           DueDate;                                                 // 0x0268(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FMantisConnect_AccountData>                  Monitors;                                                // 0x0270(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		bool                                                       Sticky;                                                  // 0x0280(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M96Q[0x7];                                   // 0x0281(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FMantisConnect_ObjectRef>                    Tags;                                                    // 0x0288(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_ProjectGetIssuesResponse
	 * Size -> 0x0010
	 */
	struct FMantisConnect_ProjectGetIssuesResponse
	{
	public:
		TArray<struct FMantisConnect_IssueData>                    Return;                                                  // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_ProjectGetIssues
	 * Size -> 0x0010 (FullSize[0x0030] - InheritedSize[0x0020])
	 */
	struct FMantisConnect_ProjectGetIssues : public FMantisConnect_AuthorizeBase
	{
	public:
		int32_t                                                    ProjectID;                                               // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PageNumber;                                              // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PerPage;                                                 // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O3FH[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_HistoryData
	 * Size -> 0x0050
	 */
	struct FMantisConnect_HistoryData
	{
	public:
		int32_t                                                    Date;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UserId;                                                  // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Username;                                                // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Field;                                                   // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Type;                                                    // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J7HG[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              OldValue;                                                // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              NewValue;                                                // 0x0040(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_IssueGetHistoryResponse
	 * Size -> 0x0010
	 */
	struct FMantisConnect_IssueGetHistoryResponse
	{
	public:
		TArray<struct FMantisConnect_HistoryData>                  Return;                                                  // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_IssueGetHistory
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FMantisConnect_IssueGetHistory : public FMantisConnect_AuthorizeBase
	{
	public:
		int32_t                                                    IssueId;                                                 // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VGHN[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_IssueNoteDeleteResponse
	 * Size -> 0x0001
	 */
	struct FMantisConnect_IssueNoteDeleteResponse
	{
	public:
		bool                                                       Return;                                                  // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_IssueNoteDelete
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FMantisConnect_IssueNoteDelete : public FMantisConnect_AuthorizeBase
	{
	public:
		int32_t                                                    IssueNoteId;                                             // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N38I[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_IssueNoteAddResponse
	 * Size -> 0x0004
	 */
	struct FMantisConnect_IssueNoteAddResponse
	{
	public:
		int32_t                                                    Return;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_IssueNoteAdd
	 * Size -> 0x0098 (FullSize[0x00B8] - InheritedSize[0x0020])
	 */
	struct FMantisConnect_IssueNoteAdd : public FMantisConnect_AuthorizeBase
	{
	public:
		int32_t                                                    IssueId;                                                 // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GZGY[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMantisConnect_IssueNoteData                        Note;                                                    // 0x0028(0x0090) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_IssueAttachmentGetResponse
	 * Size -> 0x0010
	 */
	struct FMantisConnect_IssueAttachmentGetResponse
	{
	public:
		class FString                                              Return;                                                  // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_IssueAttachmentGet
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FMantisConnect_IssueAttachmentGet : public FMantisConnect_AuthorizeBase
	{
	public:
		int32_t                                                    IssueAttachmentId;                                       // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H95T[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_IssueAttachmentAddResponse
	 * Size -> 0x0004
	 */
	struct FMantisConnect_IssueAttachmentAddResponse
	{
	public:
		int32_t                                                    Return;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_IssueAttachmentAdd
	 * Size -> 0x0038 (FullSize[0x0058] - InheritedSize[0x0020])
	 */
	struct FMantisConnect_IssueAttachmentAdd : public FMantisConnect_AuthorizeBase
	{
	public:
		int32_t                                                    IssueId;                                                 // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X73R[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Name;                                                    // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FileType;                                                // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Content;                                                 // 0x0048(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_IssueUpdateResponse
	 * Size -> 0x0001
	 */
	struct FMantisConnect_IssueUpdateResponse
	{
	public:
		bool                                                       Return;                                                  // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_IssueUpdate
	 * Size -> 0x02A0 (FullSize[0x02C0] - InheritedSize[0x0020])
	 */
	struct FMantisConnect_IssueUpdate : public FMantisConnect_AuthorizeBase
	{
	public:
		int32_t                                                    IssueId;                                                 // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I42N[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMantisConnect_IssueData                            Issue;                                                   // 0x0028(0x0298) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_IssueAddResponse
	 * Size -> 0x0004
	 */
	struct FMantisConnect_IssueAddResponse
	{
	public:
		int32_t                                                    Return;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_IssueAdd
	 * Size -> 0x0298 (FullSize[0x02B8] - InheritedSize[0x0020])
	 */
	struct FMantisConnect_IssueAdd : public FMantisConnect_AuthorizeBase
	{
	public:
		struct FMantisConnect_IssueData                            Issue;                                                   // 0x0020(0x0298) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_IssueGetResponse
	 * Size -> 0x0298
	 */
	struct FMantisConnect_IssueGetResponse
	{
	public:
		struct FMantisConnect_IssueData                            Return;                                                  // 0x0000(0x0298) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_IssueGet
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FMantisConnect_IssueGet : public FMantisConnect_AuthorizeBase
	{
	public:
		int32_t                                                    IssueId;                                                 // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E88G[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_UserData
	 * Size -> 0x0050
	 */
	struct FMantisConnect_UserData
	{
	public:
		struct FMantisConnect_AccountData                          AccountData;                                             // 0x0000(0x0038) NativeAccessSpecifierPublic
		int32_t                                                    AccessLevel;                                             // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PHOS[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Timezone;                                                // 0x0040(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_LoginResponse
	 * Size -> 0x0050
	 */
	struct FMantisConnect_LoginResponse
	{
	public:
		struct FMantisConnect_UserData                             Return;                                                  // 0x0000(0x0050) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_Login
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FMantisConnect_Login : public FMantisConnect_AuthorizeBase
	{	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_VersionResponse
	 * Size -> 0x0010
	 */
	struct FMantisConnect_VersionResponse
	{
	public:
		class FString                                              Return;                                                  // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LadyBugTrackerRuntime.MantisConnect_Version
	 * Size -> 0x0001
	 */
	struct FMantisConnect_Version
	{
	public:
		unsigned char                                              UnknownData_9TQP[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
