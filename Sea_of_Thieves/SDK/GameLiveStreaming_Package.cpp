/**
 * Name: Sea_of_Thieves
 * Version: 9505844
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x023E2740
	 * 		Name   -> Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StopBroadcastingGame
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UGameLiveStreamingFunctionLibrary::STATIC_StopBroadcastingGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StopBroadcastingGame");
		
		UGameLiveStreamingFunctionLibrary_StopBroadcastingGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023E24B0
	 * 		Name   -> Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StartBroadcastingGame
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            FrameRate                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ScreenScaling                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bEnableWebCam                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            DesiredWebCamWidth                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            DesiredWebCamHeight                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bMirrorWebCamImage                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bCaptureAudioFromComputer                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bCaptureAudioFromMicrophone                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bDrawSimpleWebCamVideo                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGameLiveStreamingFunctionLibrary::STATIC_StartBroadcastingGame(int32_t FrameRate, float ScreenScaling, bool bEnableWebCam, int32_t DesiredWebCamWidth, int32_t DesiredWebCamHeight, bool bMirrorWebCamImage, bool bCaptureAudioFromComputer, bool bCaptureAudioFromMicrophone, bool bDrawSimpleWebCamVideo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StartBroadcastingGame");
		
		UGameLiveStreamingFunctionLibrary_StartBroadcastingGame_Params params {};
		params.FrameRate = FrameRate;
		params.ScreenScaling = ScreenScaling;
		params.bEnableWebCam = bEnableWebCam;
		params.DesiredWebCamWidth = DesiredWebCamWidth;
		params.DesiredWebCamHeight = DesiredWebCamHeight;
		params.bMirrorWebCamImage = bMirrorWebCamImage;
		params.bCaptureAudioFromComputer = bCaptureAudioFromComputer;
		params.bCaptureAudioFromMicrophone = bCaptureAudioFromMicrophone;
		params.bDrawSimpleWebCamVideo = bDrawSimpleWebCamVideo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023E23E0
	 * 		Name   -> Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.IsBroadcastingGame
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UGameLiveStreamingFunctionLibrary::STATIC_IsBroadcastingGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.IsBroadcastingGame");
		
		UGameLiveStreamingFunctionLibrary_IsBroadcastingGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameLiveStreamingFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameLiveStreamingFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameLiveStreaming.GameLiveStreamingFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023E2410
	 * 		Name   -> Function GameLiveStreaming.QueryLiveStreamsCallbackProxy.QueryLiveStreams
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      GameName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	class UQueryLiveStreamsCallbackProxy* UQueryLiveStreamsCallbackProxy::STATIC_QueryLiveStreams(const class FString& GameName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLiveStreaming.QueryLiveStreamsCallbackProxy.QueryLiveStreams");
		
		UQueryLiveStreamsCallbackProxy_QueryLiveStreams_Params params {};
		params.GameName = GameName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UQueryLiveStreamsCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQueryLiveStreamsCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameLiveStreaming.QueryLiveStreamsCallbackProxy");
		return ptr;
	}

}


