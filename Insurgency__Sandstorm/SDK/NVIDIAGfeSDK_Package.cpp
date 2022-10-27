/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x009F0900
	 * 		Name   -> Function NVIDIAGfeSDK.HighlightsFunctionLibrary.Poll
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UHighlightsFunctionLibrary::STATIC_Poll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NVIDIAGfeSDK.HighlightsFunctionLibrary.Poll");
		
		UHighlightsFunctionLibrary_Poll_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009EFAC0
	 * 		Name   -> Function NVIDIAGfeSDK.HighlightsFunctionLibrary.ChekIfHighlightsAvailable
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FGfeSDKCreateResponse                       InitProperties                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               VideoGranted                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ScreenshotsGranted                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGfeSDKPermission                                  Video                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGfeSDKPermission                                  Screenshots                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHighlightsFunctionLibrary::STATIC_ChekIfHighlightsAvailable(const struct FGfeSDKCreateResponse& InitProperties, bool* VideoGranted, bool* ScreenshotsGranted, EGfeSDKPermission* Video, EGfeSDKPermission* Screenshots)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NVIDIAGfeSDK.HighlightsFunctionLibrary.ChekIfHighlightsAvailable");
		
		UHighlightsFunctionLibrary_ChekIfHighlightsAvailable_Params params {};
		params.InitProperties = InitProperties;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (VideoGranted != nullptr)
			*VideoGranted = params.VideoGranted;
		if (ScreenshotsGranted != nullptr)
			*ScreenshotsGranted = params.ScreenshotsGranted;
		if (Video != nullptr)
			*Video = params.Video;
		if (Screenshots != nullptr)
			*Screenshots = params.Screenshots;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHighlightsFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHighlightsFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NVIDIAGfeSDK.HighlightsFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F0770
	 * 		Name   -> Function NVIDIAGfeSDK.InitHighlights.InitHighlights
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InGameName                                                 (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Video                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Screenshots                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UInitHighlights* UInitHighlights::STATIC_InitHighlights(class UObject* WorldContextObject, const class FString& InGameName, bool Video, bool Screenshots)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NVIDIAGfeSDK.InitHighlights.InitHighlights");
		
		UInitHighlights_InitHighlights_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.InGameName = InGameName;
		params.Video = Video;
		params.Screenshots = Screenshots;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInitHighlights.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInitHighlights::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NVIDIAGfeSDK.InitHighlights");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009EFF30
	 * 		Name   -> Function NVIDIAGfeSDK.HighlightsConfigureAsync.HighlightsConfigure
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGfeSDKHighlightConfigParams                ConfigParams                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UHighlightsConfigureAsync* UHighlightsConfigureAsync::STATIC_HighlightsConfigure(class UObject* WorldContextObject, const struct FGfeSDKHighlightConfigParams& ConfigParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NVIDIAGfeSDK.HighlightsConfigureAsync.HighlightsConfigure");
		
		UHighlightsConfigureAsync_HighlightsConfigure_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ConfigParams = ConfigParams;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHighlightsConfigureAsync.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHighlightsConfigureAsync::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NVIDIAGfeSDK.HighlightsConfigureAsync");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F0210
	 * 		Name   -> Function NVIDIAGfeSDK.HighlightsOpenGroupAsync.HighlightsOpenGroup
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGfeSDKHighlightOpenGroupParams             Params                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UHighlightsOpenGroupAsync* UHighlightsOpenGroupAsync::STATIC_HighlightsOpenGroup(class UObject* WorldContextObject, const struct FGfeSDKHighlightOpenGroupParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NVIDIAGfeSDK.HighlightsOpenGroupAsync.HighlightsOpenGroup");
		
		UHighlightsOpenGroupAsync_HighlightsOpenGroup_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHighlightsOpenGroupAsync.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHighlightsOpenGroupAsync::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NVIDIAGfeSDK.HighlightsOpenGroupAsync");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009EFE00
	 * 		Name   -> Function NVIDIAGfeSDK.HighlightsCloseGroupAsync.HighlightsCloseGroup
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      GroupId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               DestroyHighlights                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UHighlightsCloseGroupAsync* UHighlightsCloseGroupAsync::STATIC_HighlightsCloseGroup(class UObject* WorldContextObject, const class FString& GroupId, bool DestroyHighlights)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NVIDIAGfeSDK.HighlightsCloseGroupAsync.HighlightsCloseGroup");
		
		UHighlightsCloseGroupAsync_HighlightsCloseGroup_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.GroupId = GroupId;
		params.DestroyHighlights = DestroyHighlights;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHighlightsCloseGroupAsync.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHighlightsCloseGroupAsync::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NVIDIAGfeSDK.HighlightsCloseGroupAsync");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F0490
	 * 		Name   -> Function NVIDIAGfeSDK.HighlightsSetScreenshotAsync.HighlightsSetScreenshot
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      GroupId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      HighlightId                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UHighlightsSetScreenshotAsync* UHighlightsSetScreenshotAsync::STATIC_HighlightsSetScreenshot(class UObject* WorldContextObject, const class FString& GroupId, const class FString& HighlightId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NVIDIAGfeSDK.HighlightsSetScreenshotAsync.HighlightsSetScreenshot");
		
		UHighlightsSetScreenshotAsync_HighlightsSetScreenshot_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.GroupId = GroupId;
		params.HighlightId = HighlightId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHighlightsSetScreenshotAsync.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHighlightsSetScreenshotAsync::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NVIDIAGfeSDK.HighlightsSetScreenshotAsync");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F05C0
	 * 		Name   -> Function NVIDIAGfeSDK.HighlightsSetVideoAsync.HighlightsSetVideo
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      GroupId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      HighlightId                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StartDelta                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            EndDelta                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UHighlightsSetVideoAsync* UHighlightsSetVideoAsync::STATIC_HighlightsSetVideo(class UObject* WorldContextObject, const class FString& GroupId, const class FString& HighlightId, int32_t StartDelta, int32_t EndDelta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NVIDIAGfeSDK.HighlightsSetVideoAsync.HighlightsSetVideo");
		
		UHighlightsSetVideoAsync_HighlightsSetVideo_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.GroupId = GroupId;
		params.HighlightId = HighlightId;
		params.StartDelta = StartDelta;
		params.EndDelta = EndDelta;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHighlightsSetVideoAsync.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHighlightsSetVideoAsync::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NVIDIAGfeSDK.HighlightsSetVideoAsync");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F0380
	 * 		Name   -> Function NVIDIAGfeSDK.HighlightsSummaryAsync.HighlightsOpenSummary
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGfeSDKHighlightSummaryParams               Params                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UHighlightsSummaryAsync* UHighlightsSummaryAsync::STATIC_HighlightsOpenSummary(class UObject* WorldContextObject, const struct FGfeSDKHighlightSummaryParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NVIDIAGfeSDK.HighlightsSummaryAsync.HighlightsOpenSummary");
		
		UHighlightsSummaryAsync_HighlightsOpenSummary_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHighlightsSummaryAsync.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHighlightsSummaryAsync::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NVIDIAGfeSDK.HighlightsSummaryAsync");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F00A0
	 * 		Name   -> Function NVIDIAGfeSDK.HighlightsGetNumberAsync.HighlightsGetNumberOfHighlights
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      GroupId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGfeSDKHighlightType                               TagFilter                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGfeSDKHighlightSignificance                       SignificanceFilter                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UHighlightsGetNumberAsync* UHighlightsGetNumberAsync::STATIC_HighlightsGetNumberOfHighlights(class UObject* WorldContextObject, const class FString& GroupId, EGfeSDKHighlightType TagFilter, EGfeSDKHighlightSignificance SignificanceFilter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NVIDIAGfeSDK.HighlightsGetNumberAsync.HighlightsGetNumberOfHighlights");
		
		UHighlightsGetNumberAsync_HighlightsGetNumberOfHighlights_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.GroupId = GroupId;
		params.TagFilter = TagFilter;
		params.SignificanceFilter = SignificanceFilter;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHighlightsGetNumberAsync.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHighlightsGetNumberAsync::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NVIDIAGfeSDK.HighlightsGetNumberAsync");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009EFCF0
	 * 		Name   -> Function NVIDIAGfeSDK.RequestPermissionsAsync.GFERequestPermissions
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Video                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Screenshots                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class URequestPermissionsAsync* URequestPermissionsAsync::STATIC_GFERequestPermissions(class UObject* WorldContextObject, bool Video, bool Screenshots)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NVIDIAGfeSDK.RequestPermissionsAsync.GFERequestPermissions");
		
		URequestPermissionsAsync_GFERequestPermissions_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Video = Video;
		params.Screenshots = Screenshots;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URequestPermissionsAsync.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URequestPermissionsAsync::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NVIDIAGfeSDK.RequestPermissionsAsync");
		return ptr;
	}

}


