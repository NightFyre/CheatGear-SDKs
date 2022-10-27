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
	 * Class GameLiveStreaming.GameLiveStreamingFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGameLiveStreamingFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_StopBroadcastingGame();
		void STATIC_StartBroadcastingGame(int32_t FrameRate, float ScreenScaling, bool bEnableWebCam, int32_t DesiredWebCamWidth, int32_t DesiredWebCamHeight, bool bMirrorWebCamImage, bool bCaptureAudioFromComputer, bool bCaptureAudioFromMicrophone, bool bDrawSimpleWebCamVideo);
		bool STATIC_IsBroadcastingGame();
		static UClass* StaticClass();
	};

	/**
	 * Class GameLiveStreaming.QueryLiveStreamsCallbackProxy
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UQueryLiveStreamsCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnQueriedLiveStreams;                                    // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		unsigned char                                              UnknownData_QLBB[0x10];                                  // 0x0038(0x0010) MISSED OFFSET (PADDING)

	public:
		class UQueryLiveStreamsCallbackProxy* STATIC_QueryLiveStreams(const class FString& GameName);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
