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
	 * Class CohtmlPlugin.CohtmlAssetReferencer
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCohtmlAssetReferencer : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CohtmlPlugin.CohtmlAtlasContainedTextures
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UCohtmlAtlasContainedTextures : public UObject
	{
	public:
		unsigned char                                              Textures[0x50];                                          // 0x0028(0x0050) UNKNOWN PROPERTY: SetProperty CohtmlPlugin.CohtmlAtlasContainedTextures.Textures

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CohtmlPlugin.CohtmlTextureAtlasDetails
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UCohtmlTextureAtlasDetails : public UObject
	{
	public:
		class FString                                              AtlasPath;                                               // 0x0028(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Width;                                                   // 0x0038(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Height;                                                  // 0x003C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PixelFormat;                                             // 0x0040(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxAtlasWidth;                                           // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxAtlasHeight;                                          // 0x0054(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxTextureWidth;                                         // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxTextureHeight;                                        // 0x005C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CohtmlPlugin.CohtmlAudioWrapper
	 * Size -> 0x0308 (FullSize[0x0330] - InheritedSize[0x0028])
	 */
	class UCohtmlAudioWrapper : public UObject
	{
	public:
		class UObject*                                             Owner;                                                   // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<int32_t, struct FCohtmlSound>                         Sounds;                                                  // 0x0030(0x0050) ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TPUA[0x2B0];                                 // 0x0080(0x02B0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CohtmlPlugin.CohtmlBaseComponent
	 * Size -> 0x00C0 (FullSize[0x0238] - InheritedSize[0x0178])
	 */
	class UCohtmlBaseComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             ReadyForBindings;                                        // 0x0178(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             BindingsReleased;                                        // 0x0188(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             ScriptingReady;                                          // 0x0198(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       bEnableComplexCSSSupport;                                // 0x01A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KQ2Z[0x7];                                   // 0x01A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTextureRenderTarget2D*                              Texture;                                                 // 0x01B0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETextureFilter                                             Filter;                                                  // 0x01B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReceiveInput;                                           // 0x01B9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDelayedUpdate;                                          // 0x01BA(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3TB7[0x1D];                                  // 0x01BB(0x001D) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCohtmlAudioWrapper*                                 AudioWrapper;                                            // 0x01D8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DRHC[0x58];                                  // 0x01E0(0x0058) MISSED OFFSET (PADDING)

	public:
		void UpdateWholeDataModelFromStruct(class UStructProperty* Struct);
		void UpdateWholeDataModelFromObject(class UObject* Model);
		void TriggerJSEvent(const class FString& Name, class UCohtmlJSEvent* EventData);
		void SynchronizeModels();
		void ShowPaintRects(bool show);
		void SetSoundAttenuation(const struct FSoundAttenuationSettings& Settings);
		void Resize(int32_t Width, int32_t Height);
		void Reload();
		void Load(const class FString& Path);
		bool IsReadyToCreateView();
		bool IsReadyForBindings();
		bool HasRequestedView();
		void EndDebugFrameSave();
		void EnableRendering(bool bEnabled);
		void EnableDelayedUpdate(bool bEnabled);
		void DebugSaveNextFrame();
		class UCohtmlJSEvent* CreateJSEvent();
		void CreateDataModelFromStruct(const class FString& Name, class UStructProperty* Arg);
		void CreateDataModelFromObject(const class FString& Name, class UObject* Model);
		void BeginDebugFrameSave();
		static UClass* StaticClass();
	};

	/**
	 * Class CohtmlPlugin.CohtmlBlueprintFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCohtmlBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_TriggerJSEvent(class UCohtmlBaseComponent* Component, const class FString& EventName, class UCohtmlJSEvent* JSEvent);
		class UCohtmlJSEvent* STATIC_CreateJSEvent(class UObject* WorldContextObject);
		void STATIC_AddStructArg(class UCohtmlJSEvent* JSEvent, class UStructProperty* Arg);
		void STATIC_AddString(class UCohtmlJSEvent* JSEvent, const class FString& Arg);
		void STATIC_AddObject(class UCohtmlJSEvent* JSEvent, class UObject* Arg);
		void STATIC_AddInt32(class UCohtmlJSEvent* JSEvent, int32_t Arg);
		void STATIC_AddFloat(class UCohtmlJSEvent* JSEvent, float Arg);
		void STATIC_AddByte(class UCohtmlJSEvent* JSEvent, unsigned char Arg);
		void STATIC_AddBool(class UCohtmlJSEvent* JSEvent, bool Arg);
		void STATIC_AddArrayOfStructs(class UCohtmlJSEvent* JSEvent, TArray<int32_t> Arg);
		void STATIC_AddArray(class UCohtmlJSEvent* JSEvent, TArray<int32_t> Arg, int32_t ArrayType);
		static UClass* StaticClass();
	};

	/**
	 * Class CohtmlPlugin.CohtmlComponent
	 * Size -> 0x0038 (FullSize[0x0270] - InheritedSize[0x0238])
	 */
	class UCohtmlComponent : public UCohtmlBaseComponent
	{
	public:
		class FString                                              URL;                                                     // 0x0238(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Width;                                                   // 0x0248(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Height;                                                  // 0x024C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ManualTexture;                                           // 0x0250(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F8VK[0x7];                                   // 0x0251(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                PrimitiveName;                                           // 0x0258(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3BAD[0x10];                                  // 0x0260(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CohtmlPlugin.CohtmlEventHelpers
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCohtmlEventHelpers : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CohtmlPlugin.CohtmlGameHUD
	 * Size -> 0x00A8 (FullSize[0x0620] - InheritedSize[0x0578])
	 */
	class ACohtmlGameHUD : public AHUD
	{
	public:
		class UCohtmlHUD*                                          CohtmlHUD;                                               // 0x0578(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCohtmlHUD*                                          CohtmlHUDInternal;                                       // 0x0580(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0QIR[0x98];                                  // 0x0588(0x0098) MISSED OFFSET (PADDING)

	public:
		void SetupView(const class FString& PageUrl, bool bEnableComplexCSSSupport, bool bDelayedUpdate);
		static UClass* StaticClass();
	};

	/**
	 * Class CohtmlPlugin.CohtmlHUD
	 * Size -> 0x0030 (FullSize[0x0268] - InheritedSize[0x0238])
	 */
	class UCohtmlHUD : public UCohtmlBaseComponent
	{
	public:
		struct FSoftObjectPath                                     HUDMaterialName;                                         // 0x0238(0x0018) HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterial*                                           HUDMaterial;                                             // 0x0250(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInstanceDynamic*                            HUDMaterialInstance;                                     // 0x0258(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T1N7[0x8];                                   // 0x0260(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CohtmlPlugin.CohtmlInputActor
	 * Size -> 0x0058 (FullSize[0x04B0] - InheritedSize[0x0458])
	 */
	class ACohtmlInputActor : public AActor
	{
	public:
		class FScriptMulticastDelegate                             OnCohtmlInputActorMouseButtonDown;                       // 0x0458(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCohtmlInputActorMouseButtonUp;                         // 0x0468(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCohtmlInputActorKeyDown;                               // 0x0478(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCohtmlInputActorKeyUp;                                 // 0x0488(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6I8T[0x18];                                  // 0x0498(0x0018) MISSED OFFSET (PADDING)

	public:
		void ToggleCohtmlInputFocus();
		void SetLineTraceMode(ECohtmlInputWidgetLineTraceMode Mode);
		void SetInputPropagationBehaviour(ECohtmlInputPropagationBehaviour Propagation);
		void SetCohtmlViewFocus(class UCohtmlBaseComponent* NewFocusedView);
		void SetCohtmlInputFocus(bool FocusUI);
		bool IsCohtmlFocused();
		void Initialize(ECollisionChannel CollisionChannel, ETextureAddress AddressMode, ECohtmlInputWidgetRaycastQuality RaycastQuality, int32_t UVChannel);
		ECohtmlInputPropagationBehaviour GetInputPropagationBehaviour();
		void AlwaysAcceptMouseInput(bool bAccept);
		static UClass* StaticClass();
	};

	/**
	 * Class CohtmlPlugin.CohtmlJSEvent
	 * Size -> 0x0090 (FullSize[0x00B8] - InheritedSize[0x0028])
	 */
	class UCohtmlJSEvent : public UObject
	{
	public:
		unsigned char                                              UnknownData_989A[0x80];                                  // 0x0028(0x0080) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UStruct*>                                     StructTypes;                                             // 0x00A8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic

	public:
		void AddText(const class FText& Text);
		void AddStructArg(class UStructProperty* Arg);
		void AddString(const class FString& str);
		void AddObject(class UObject* Object);
		void AddName(const class FName& Name);
		void AddInt32(int32_t integer);
		void AddFloat(float fl);
		void AddByte(unsigned char byte);
		void AddBool(bool B);
		void AddArray(TArray<int32_t> Array);
		static UClass* StaticClass();
	};

	/**
	 * Class CohtmlPlugin.CohtmlSettings
	 * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
	 */
	class UCohtmlSettings : public UObject
	{
	public:
		bool                                                       EnableLiveReload;                                        // 0x0028(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CYDX[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    DevToolsPort;                                            // 0x002C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnableLocalization;                                      // 0x0030(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnableBreakIterator;                                     // 0x0031(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HandleInputOnHTMLBody;                                   // 0x0032(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3M4Y[0x5];                                   // 0x0033(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      InputTransparentCssClasses;                              // 0x0038(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		float                                                      ScrollDelta;                                             // 0x0048(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShowWarningsOnScreen;                                    // 0x004C(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECohtmlSettingsSeverity                                    LogSeverity;                                             // 0x004D(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRespectTitleSafeZone;                                   // 0x004E(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRespectLetterboxing;                                    // 0x004F(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       TickWhileGameIsPaused;                                   // 0x0050(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseLowerCaseNamesForAutoExposedProperties;              // 0x0051(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECohtmlMSAA                                                MSAA;                                                    // 0x0052(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z3GL[0x5];                                   // 0x0053(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSingleFormatFallbacks>                      FallbacksForAllFormats;                                  // 0x0058(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		bool                                                       bUseInputPreprocessor;                                   // 0x0068(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3LMZ[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FProtocolPathDef>                            ProtocolPathDefs;                                        // 0x0070(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MKIN[0x8];                                   // 0x0080(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CohtmlPlugin.CohtmlSystem
	 * Size -> 0x0040 (FullSize[0x0498] - InheritedSize[0x0458])
	 */
	class ACohtmlSystem : public AActor
	{
	public:
		unsigned char                                              UnknownData_DG48[0x40];                                  // 0x0458(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CohtmlPlugin.CohtmlWidget
	 * Size -> 0x00F0 (FullSize[0x01F0] - InheritedSize[0x0100])
	 */
	class UCohtmlWidget : public UWidget
	{
	public:
		unsigned char                                              UnknownData_CHG0[0x18];                                  // 0x0100(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              Owner;                                                   // 0x0118(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             ReadyForBindings;                                        // 0x0120(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             BindingsReleased;                                        // 0x0130(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             ScriptingReady;                                          // 0x0140(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       bEnableComplexCSSSupport;                                // 0x0150(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETextureFilter                                             Filter;                                                  // 0x0151(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReceiveInput;                                           // 0x0152(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECohtmlInputPropagationBehaviour                           InputPropagationBehaviour;                               // 0x0153(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGammaCorrectedMaterial;                                 // 0x0154(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SQV0[0x3];                                   // 0x0155(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TickPeriodInMinimizedGame;                               // 0x0158(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_84GF[0x4];                                   // 0x015C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCohtmlAudioWrapper*                                 AudioWrapper;                                            // 0x0160(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9NN6[0x78];                                  // 0x0168(0x0078) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              URL;                                                     // 0x01E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void UpdateWholeDataModelFromStruct(class UStructProperty* Struct);
		void UpdateWholeDataModelFromObject(class UObject* Model);
		void TriggerJSEvent(const class FString& Name, class UCohtmlJSEvent* EventData);
		void SynchronizeModels();
		void ShowPaintRects(bool show);
		void SetSoundAttenuation(const struct FSoundAttenuationSettings& Settings);
		void SetInputPropagationBehaviour(ECohtmlInputPropagationBehaviour Propagation);
		void Reload();
		void Load(const class FString& Path);
		bool IsReadyToCreateView();
		bool IsReadyForBindings();
		bool HasRequestedView();
		class UTextureRenderTarget2D* GetRenderTexture();
		ECohtmlInputPropagationBehaviour GetInputPropagationBehaviour();
		class UCohtmlJSEvent* CreateJSEvent();
		void CreateDataModelFromStruct(const class FString& Name, class UStructProperty* Struct);
		void CreateDataModelFromObject(const class FString& Name, class UObject* Model);
		static UClass* StaticClass();
	};

	/**
	 * Class CohtmlPlugin.HummingbirdBaseComponent
	 * Size -> 0x0000 (FullSize[0x0238] - InheritedSize[0x0238])
	 */
	class UHummingbirdBaseComponent : public UCohtmlBaseComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CohtmlPlugin.HummingbirdComponent
	 * Size -> 0x0000 (FullSize[0x0270] - InheritedSize[0x0270])
	 */
	class UHummingbirdComponent : public UCohtmlComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CohtmlPlugin.HummingbirdGameHUD
	 * Size -> 0x0000 (FullSize[0x0620] - InheritedSize[0x0620])
	 */
	class AHummingbirdGameHUD : public ACohtmlGameHUD
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CohtmlPlugin.HummingbirdHUD
	 * Size -> 0x0000 (FullSize[0x0268] - InheritedSize[0x0268])
	 */
	class UHummingbirdHUD : public UCohtmlHUD
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CohtmlPlugin.HummingbirdInputActor
	 * Size -> 0x0000 (FullSize[0x04B0] - InheritedSize[0x04B0])
	 */
	class AHummingbirdInputActor : public ACohtmlInputActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CohtmlPlugin.HummingbirdSystem
	 * Size -> 0x0000 (FullSize[0x0498] - InheritedSize[0x0498])
	 */
	class AHummingbirdSystem : public ACohtmlSystem
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
