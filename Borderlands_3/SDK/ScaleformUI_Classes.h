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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class ScaleformUI.GFxMoviePlayer
	 * Size -> 0x01E8 (FullSize[0x0210] - InheritedSize[0x0028])
	 */
	class UGFxMoviePlayer : public UObject
	{
	public:
		class FString                                              SwfAssetName;                                            // 0x0028(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGFxObject*                                          Root;                                                    // 0x0038(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDisplayWithHudOff : 1;                                  // 0x0040(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEnableGammaCorrection : 1;                              // 0x0040(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAllowInput : 1;                                         // 0x0040(0x0001) BIT_FIELD Edit, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAllowFocus : 1;                                         // 0x0040(0x0001) BIT_FIELD Edit, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCloseOnLevelChange : 1;                                 // 0x0040(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOnlyOwnerFocusable : 1;                                 // 0x0040(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDiscardNonOwnerInput : 1;                               // 0x0040(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCaptureKeyboardInput : 1;                               // 0x0040(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCaptureMouseInput : 1;                                  // 0x0041(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCaptureGamepadInput : 1;                                // 0x0041(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCaptureTouchInput : 1;                                  // 0x0041(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsSplitscreenLayoutModified : 1;                        // 0x0041(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bShowDefaultMouseCursor : 1;                             // 0x0041(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bBlurLesserMovies : 1;                                   // 0x0041(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bHideLesserMovies : 1;                                   // 0x0041(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsPriorityBlurred : 1;                                  // 0x0041(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsPriorityHidden : 1;                                   // 0x0042(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIgnoreVisibilityEffect : 1;                             // 0x0042(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIgnoreBlurEffect : 1;                                   // 0x0042(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bRefreshed : 1;                                          // 0x0042(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bPerformHitTest : 1;                                     // 0x0042(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCacheThisDefinition : 1;                                // 0x0042(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSkipUnnamedObjectsDuringPopulation : 1;                 // 0x0042(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_98AP[0x1];                                   // 0x0043(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EGFxHitTestType                                            HitTestType;                                             // 0x0044(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NLRO[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTextureRenderTarget2D*                              RenderTexture;                                           // 0x0048(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             ExternalInterface;                                       // 0x0050(0x0008) BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FKey>                                        CaptureKeys;                                             // 0x0058(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FKey>                                        FocusIgnoreKeys;                                         // 0x0068(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FExternalTexture>                            ExternalTextures;                                        // 0x0078(0x0010) BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		EGFxRenderTextureMode                                      RenderTextureMode;                                       // 0x0088(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Priority;                                                // 0x0089(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IAIC[0x6];                                   // 0x008A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGFxWidgetBinding>                           WidgetBindings;                                          // 0x0090(0x0010) BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    SplitscreenLayoutYAdjust;                                // 0x00A0(0x0004) BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RMQT[0xC];                                   // 0x00A4(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnFsCommand;                                             // 0x00B0(0x0010) BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnStartCommand;                                          // 0x00C0(0x0010) BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WNNW[0x10];                                  // 0x00D0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCloseCommand;                                          // 0x00E0(0x0010) BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTickCommand;                                           // 0x00F0(0x0010) BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFocusGainedCommand;                                    // 0x0100(0x0010) BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFocusLostCommand;                                      // 0x0110(0x0010) BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8LIB[0xD4];                                  // 0x0120(0x00D4) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bIgnoresSafeFrameScaling;                                // 0x01F4(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIgnoresHDRCalibration;                                  // 0x01F5(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1VU1[0x2];                                   // 0x01F6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UGFxObject*>                                  CachedMovieClipsArray;                                   // 0x01F8(0x0010) BlueprintReadOnly, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HWFX[0x8];                                   // 0x0208(0x0008) MISSED OFFSET (PADDING)

	public:
		bool Start(bool bRefresh);
		void SetVisible(bool bVisible);
		void SetVisibility(const class FString& MovieClipName, bool bVisible);
		void SetViewScaleMode(EGFxScaleMode ScaleMode);
		void SetViewport(int32_t X, int32_t Y, int32_t Width, int32_t Height);
		void SetView3D(const struct FTransform& ViewTransform);
		void SetVariableValueArray(const class FString& MovieClipName, const class FString& MemberName, TArray<struct FASValue> Value);
		void SetVariableValue(const class FString& MovieClipName, const class FString& MemberName, const struct FASValue& Value);
		void SetTimingMode(EGFxTimingMode TimingMode);
		void SetScale(const class FString& MovieClipName, float XScale, float YScale);
		void SetPosition(const class FString& MovieClipName, float X, float Y);
		void SetPerspective3D(const struct FASPerspectiveTransform& PerspectiveTransform);
		void SetPause(bool bPausePlayback);
		void SetMovieCanReceiveInput(bool bCanReceiveInput);
		void SetMovieCanReceiveFocus(bool bCanReceiveFocus);
		void SetFocusIgnoreKeys(TArray<struct FKey> Keys);
		void SetExternalTexture(const class FString& Resource, class UTexture* Texture);
		void SetDisplayTransform(const class FString& MovieClipName, const struct FTransform& DisplayTransform);
		void SetDisplayInfo(const class FString& MovieClipName, const struct FASDisplayInfo& Info);
		void SetColorTransform(const class FString& MovieClipName, const struct FASColorTransform& UnrealColorTransform);
		void SetCaptureKeys(TArray<struct FKey> Keys);
		void SetAlignment(EGFxAlign Align);
		void ReceiveGFxCommand(const class FString& Command, const class FString& Arguments);
		class UGFxMoviePlayer* STATIC_OpenMovie(class USwfMovie* SwfMovie, class UObject* ExternalScriptInterface, class UTextureRenderTarget2D* RenderToTexture, class UGFxMoviePlayer* MoviePlayer, bool DisplayWithHudOff, bool bRefresh);
		void OnTick(float DeltaTime);
		void OnStart();
		void OnGameTick(float DeltaTime);
		void OnFocusLost(int32_t LocalPlayerIndex);
		void OnFocusGained(int32_t LocalPlayerIndex);
		void OnClose();
		bool IsVisible();
		bool IsPaused();
		struct FASValue Invoke(const class FString& MovieClipName, const class FString& FunctionName, TArray<struct FASValue> Params);
		void GotoAndStopI(const class FString& MovieClipName, int32_t Frame);
		void GotoAndStop(const class FString& MovieClipName, const class FString& Frame);
		void GotoAndPlayI(const class FString& MovieClipName, int32_t Frame);
		void GotoAndPlay(const class FString& MovieClipName, const class FString& Frame);
		bool GetVisibility(const class FString& MovieClipName);
		struct FTransform GetView3D();
		TArray<struct FASValue> GetVariableValueArray(const class FString& MovieClipName, const class FString& MemberName);
		struct FASValue GetVariableValue(const class FString& MovieClipName, const class FString& MemberName);
		bool GetScale(const class FString& MovieClipName, float* XScale, float* YScale);
		bool GetPosition(const class FString& MovieClipName, float* X, float* Y);
		struct FASPerspectiveTransform GetPerspective3D();
		class UGFxObject* GetMovieClip(const class FString& MovieClipName);
		struct FTransform GetDisplayTransform(const class FString& MovieClipName);
		struct FASDisplayInfo GetDisplayInfo(const class FString& MovieClipName);
		struct FASColorTransform GetColorTransform(const class FString& MovieClipName);
		void Close();
		static UClass* StaticClass();
	};

	/**
	 * Class ScaleformUI.GFxObject
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UGFxObject : public UObject
	{
	public:
		unsigned char                                              UnknownData_5OOA[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetVisible(bool bVisible);
		void SetScale(float XScale, float YScale);
		void SetPosition(float X, float Y);
		void SetMemberValueArray(class UGFxMoviePlayer* MoviePlayer, const class FString& MemberName, TArray<struct FASValue> Input);
		void SetMemberValue(const class FString& MemberName, const struct FASValue& Input);
		void SetDisplayTransform(const struct FTransform& DisplayTransform);
		void SetDisplayInfo(const struct FASDisplayInfo& UnrealDisplayInfo);
		void SetColorTransform(const struct FASColorTransform& UnrealColorTransform);
		struct FASValue Invoke(const class FString& FunctionName, TArray<struct FASValue> Params);
		void GotoAndStopI(int32_t FrameNumber);
		void GotoAndStop(const class FString& FrameString);
		void GotoAndPlayI(int32_t FrameNumber);
		void GotoAndPlay(const class FString& FrameString);
		bool GetVisible();
		bool GetScale(float* XScale, float* YScale);
		bool GetPosition(float* X, float* Y);
		TArray<struct FASValue> GetMemberValueArray(const class FString& MemberName);
		struct FASValue GetMemberValue(const class FString& MemberName);
		struct FTransform GetDisplayTransform();
		struct FASDisplayInfo GetDisplayInfo();
		struct FASColorTransform GetColorTransform();
		static UClass* StaticClass();
	};

	/**
	 * Class ScaleformUI.ScaleformBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UScaleformBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class UGFxMoviePlayer* STATIC_OpenMovie(class USwfMovie* Movie, class UObject* ExternalInterface, class UTextureRenderTarget2D* RenderTexture, class UGFxMoviePlayer* MoviePlayer, bool DisplayWithHudOff, bool StartPaused);
		struct FASValue STATIC_InvokeNoParams(class UGFxMoviePlayer* MoviePlayer, const class FString& FunctionName);
		struct FASValue STATIC_Invoke(class UGFxMoviePlayer* MoviePlayer, const class FString& FunctionName, TArray<struct FASValue> Params);
		class UGFxObject* STATIC_GetVariable(class UGFxMoviePlayer* MoviePlayer, const class FString& VariablePath);
		class UGFxObject* STATIC_GetMovieClip(class UGFxMoviePlayer* MoviePlayer, const class FString& MovieClipName);
		class UGFxObject* STATIC_GetMember(class UGFxMoviePlayer* MoviePlayer, const class FString& MemberName);
		void STATIC_GetAllGFxMoviePlayerOfClass(class UObject* WorldContextObject, TArray<class UGFxMoviePlayer*> FoundGFxMoviePlayer, class UClass* GFxMoviePlayerClass, bool VisibleOnly);
		void STATIC_CloseMovie(class UGFxMoviePlayer* MoviePlayer);
		static UClass* StaticClass();
	};

	/**
	 * Class ScaleformUI.SwfMovie
	 * Size -> 0x00D0 (FullSize[0x00F8] - InheritedSize[0x0028])
	 */
	class USwfMovie : public UObject
	{
	public:
		unsigned char                                              bUseGFxExport : 1;                                       // 0x0028(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOptimizeForMobiles : 1;                                 // 0x0028(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSetSRGBOnImportedTextures : 1;                          // 0x0028(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bPackTextures : 1;                                       // 0x0028(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6LZR[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PackTextureSize;                                         // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bArePackedTextures4k : 1;                                // 0x0030(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bForceSquarePacking : 1;                                 // 0x0030(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N4VQ[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EFlashTextureRescale                                       TextureRescale;                                          // 0x0034(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3GEB[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              TextureFormat;                                           // 0x0038(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bReplaceImages : 1;                                      // 0x0048(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_32J9[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SourceFile;                                              // 0x0050(0x0010) Edit, ZeroConstructor, EditConst, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseOrderedLoading : 1;                                  // 0x0060(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bLoadImageFiles : 1;                                     // 0x0060(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2ELI[0x3];                                   // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TextureLoadPriority;                                     // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      FontMappings;                                            // 0x0068(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		class FString                                              SourceFileTimestamp;                                     // 0x0078(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   ImportTimeStamp;                                         // 0x0088(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      RawData;                                                 // 0x0090(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UObject*>                                     ReferencedAssets;                                        // 0x00A0(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<struct FScaleformTextureReference>                  SoftReferencedTextures;                                  // 0x00B0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2K2E[0x10];                                  // 0x00C0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FFlashNativeBindingInfo>                     InstanceNameAndPathBindings;                             // 0x00D0(0x0010) Edit, ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<struct FFlashNativeBindingInfo>                     TransientInstanceNameAndPathBindings;                    // 0x00E0(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_07WZ[0x8];                                   // 0x00F0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
