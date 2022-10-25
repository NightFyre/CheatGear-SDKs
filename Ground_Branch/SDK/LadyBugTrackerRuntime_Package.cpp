/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * 		Name   -> PredefinedFunction UBugTrackerSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBugTrackerSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LadyBugTrackerRuntime.BugTrackerSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBugTrackerUserSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBugTrackerUserSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LadyBugTrackerRuntime.BugTrackerUserSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIssueCollection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIssueCollection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LadyBugTrackerRuntime.IssueCollection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LadyBugTrackerRuntime.IssueConstructor.GetLevelNameFromSreamingLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ULevelStreaming*                             LevelStreaming                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UIssueConstructor::GetLevelNameFromSreamingLevel(class ULevelStreaming* LevelStreaming)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LadyBugTrackerRuntime.IssueConstructor.GetLevelNameFromSreamingLevel");
		
		UIssueConstructor_GetLevelNameFromSreamingLevel_Params params {};
		params.LevelStreaming = LevelStreaming;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LadyBugTrackerRuntime.IssueConstructor.GetLevelName
	 * 		Flags  -> ()
	 */
	class FString UIssueConstructor::GetLevelName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LadyBugTrackerRuntime.IssueConstructor.GetLevelName");
		
		UIssueConstructor_GetLevelName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LadyBugTrackerRuntime.IssueConstructor.GetCamera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Rotation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UIssueConstructor::GetCamera(struct FVector* Location, struct FRotator* Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LadyBugTrackerRuntime.IssueConstructor.GetCamera");
		
		UIssueConstructor_GetCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Location != nullptr)
			*Location = params.Location;
		if (Rotation != nullptr)
			*Rotation = params.Rotation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LadyBugTrackerRuntime.IssueConstructor.ConstructIssue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIssueData*                                  Issue                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EIssueProfile                                      Profile                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIssueConstructor::ConstructIssue(class UIssueData* Issue, EIssueProfile Profile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LadyBugTrackerRuntime.IssueConstructor.ConstructIssue");
		
		UIssueConstructor_ConstructIssue_Params params {};
		params.Issue = Issue;
		params.Profile = Profile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIssueConstructor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIssueConstructor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LadyBugTrackerRuntime.IssueConstructor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LadyBugTrackerRuntime.IssueData.SetCustomFieldValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIssueData::SetCustomFieldValue(const class FString& FieldName, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LadyBugTrackerRuntime.IssueData.SetCustomFieldValue");
		
		UIssueData_SetCustomFieldValue_Params params {};
		params.FieldName = FieldName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LadyBugTrackerRuntime.IssueData.SetCameraTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Rotation                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UIssueData::SetCameraTransform(const struct FVector& Location, const struct FRotator& Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LadyBugTrackerRuntime.IssueData.SetCameraTransform");
		
		UIssueData_SetCameraTransform_Params params {};
		params.Location = Location;
		params.Rotation = Rotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LadyBugTrackerRuntime.IssueData.GetLevelName
	 * 		Flags  -> ()
	 */
	class FString UIssueData::GetLevelName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LadyBugTrackerRuntime.IssueData.GetLevelName");
		
		UIssueData_GetLevelName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LadyBugTrackerRuntime.IssueData.GetCustomFieldValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UIssueData::GetCustomFieldValue(const class FString& FieldName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LadyBugTrackerRuntime.IssueData.GetCustomFieldValue");
		
		UIssueData_GetCustomFieldValue_Params params {};
		params.FieldName = FieldName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LadyBugTrackerRuntime.IssueData.GetCameraTransform
	 * 		Flags  -> ()
	 */
	struct FTransform UIssueData::GetCameraTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LadyBugTrackerRuntime.IssueData.GetCameraTransform");
		
		UIssueData_GetCameraTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIssueData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIssueData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LadyBugTrackerRuntime.IssueData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFeedbackData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFeedbackData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LadyBugTrackerRuntime.FeedbackData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LadyBugTrackerRuntime.RuntimeUtilities.SendFeedback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFeedbackData*                               Feedback                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Username                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PasswordOrToken                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFail                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void URuntimeUtilities::SendFeedback(class UFeedbackData* Feedback, const class FString& Username, const class FString& PasswordOrToken, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFail)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LadyBugTrackerRuntime.RuntimeUtilities.SendFeedback");
		
		URuntimeUtilities_SendFeedback_Params params {};
		params.Feedback = Feedback;
		params.Username = Username;
		params.PasswordOrToken = PasswordOrToken;
		params.OnSuccess = OnSuccess;
		params.OnFail = OnFail;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LadyBugTrackerRuntime.RuntimeUtilities.SendAttachment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            IssueId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      FullPath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ContentMimeType                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Username                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PasswordOrToken                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFail                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void URuntimeUtilities::SendAttachment(int32_t IssueId, const class FString& FullPath, const class FString& Filename, const class FString& ContentMimeType, const class FString& Username, const class FString& PasswordOrToken, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFail)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LadyBugTrackerRuntime.RuntimeUtilities.SendAttachment");
		
		URuntimeUtilities_SendAttachment_Params params {};
		params.IssueId = IssueId;
		params.FullPath = FullPath;
		params.Filename = Filename;
		params.ContentMimeType = ContentMimeType;
		params.Username = Username;
		params.PasswordOrToken = PasswordOrToken;
		params.OnSuccess = OnSuccess;
		params.OnFail = OnFail;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LadyBugTrackerRuntime.RuntimeUtilities.ReportIssueData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIssueData*                                  Issue                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              Attachments                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bTakeScreenshots                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAttachLogs                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URuntimeUtilities::ReportIssueData(class UIssueData* Issue, TArray<class FString> Attachments, bool bTakeScreenshots, bool bAttachLogs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LadyBugTrackerRuntime.RuntimeUtilities.ReportIssueData");
		
		URuntimeUtilities_ReportIssueData_Params params {};
		params.Issue = Issue;
		params.Attachments = Attachments;
		params.bTakeScreenshots = bTakeScreenshots;
		params.bAttachLogs = bAttachLogs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LadyBugTrackerRuntime.RuntimeUtilities.ReportIssue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Summary                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              Attachments                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bTakeScreenshots                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAttachLogs                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URuntimeUtilities::ReportIssue(const class FString& Summary, TArray<class FString> Attachments, bool bTakeScreenshots, bool bAttachLogs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LadyBugTrackerRuntime.RuntimeUtilities.ReportIssue");
		
		URuntimeUtilities_ReportIssue_Params params {};
		params.Summary = Summary;
		params.Attachments = Attachments;
		params.bTakeScreenshots = bTakeScreenshots;
		params.bAttachLogs = bAttachLogs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LadyBugTrackerRuntime.RuntimeUtilities.GetCategories
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFail                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void URuntimeUtilities::GetCategories(const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFail)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LadyBugTrackerRuntime.RuntimeUtilities.GetCategories");
		
		URuntimeUtilities_GetCategories_Params params {};
		params.OnSuccess = OnSuccess;
		params.OnFail = OnFail;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LadyBugTrackerRuntime.RuntimeUtilities.CreateIssue
	 * 		Flags  -> ()
	 */
	class UIssueData* URuntimeUtilities::CreateIssue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LadyBugTrackerRuntime.RuntimeUtilities.CreateIssue");
		
		URuntimeUtilities_CreateIssue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LadyBugTrackerRuntime.RuntimeUtilities.CreateFeedback
	 * 		Flags  -> ()
	 */
	class UFeedbackData* URuntimeUtilities::CreateFeedback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LadyBugTrackerRuntime.RuntimeUtilities.CreateFeedback");
		
		URuntimeUtilities_CreateFeedback_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LadyBugTrackerRuntime.RuntimeUtilities.AddScreenshot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFeedbackData*                               Feedback                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInShowUI                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            DesiredWidth                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            DesiredHeight                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URuntimeUtilities::AddScreenshot(class UFeedbackData* Feedback, const struct FLatentActionInfo& LatentInfo, bool* bSuccess, bool bInShowUI, int32_t DesiredWidth, int32_t DesiredHeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LadyBugTrackerRuntime.RuntimeUtilities.AddScreenshot");
		
		URuntimeUtilities_AddScreenshot_Params params {};
		params.Feedback = Feedback;
		params.LatentInfo = LatentInfo;
		params.bInShowUI = bInShowUI;
		params.DesiredWidth = DesiredWidth;
		params.DesiredHeight = DesiredHeight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSuccess != nullptr)
			*bSuccess = params.bSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LadyBugTrackerRuntime.RuntimeUtilities.AddLog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFeedbackData*                               Feedback                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URuntimeUtilities::AddLog(class UFeedbackData* Feedback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LadyBugTrackerRuntime.RuntimeUtilities.AddLog");
		
		URuntimeUtilities_AddLog_Params params {};
		params.Feedback = Feedback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LadyBugTrackerRuntime.RuntimeUtilities.AddCustomField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFeedbackData*                               Feedback                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Field                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URuntimeUtilities::AddCustomField(class UFeedbackData* Feedback, const class FString& Field, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LadyBugTrackerRuntime.RuntimeUtilities.AddCustomField");
		
		URuntimeUtilities_AddCustomField_Params params {};
		params.Feedback = Feedback;
		params.Field = Field;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URuntimeUtilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URuntimeUtilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LadyBugTrackerRuntime.RuntimeUtilities");
		return ptr;
	}

}


