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
	 * Class EnhancedInput.EnhancedInputActionDelegateBinding
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UEnhancedInputActionDelegateBinding : public UInputDelegateBinding
	{
	public:
		TArray<struct FBlueprintEnhancedInputActionBinding>        InputActionDelegateBindings;                             // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.EnhancedInputActionValueBinding
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UEnhancedInputActionValueBinding : public UInputDelegateBinding
	{
	public:
		TArray<struct FBlueprintEnhancedInputActionBinding>        InputActionValueBindings;                                // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.EnhancedInputComponent
	 * Size -> 0x0030 (FullSize[0x0168] - InheritedSize[0x0138])
	 */
	class UEnhancedInputComponent : public UInputComponent
	{
	public:
		unsigned char                                              UnknownData_UPZV[0x30];                                  // 0x0138(0x0030) MISSED OFFSET (PADDING)

	public:
		struct FInputActionValue GetBoundActionValue(class UInputAction* Action);
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.EnhancedInputLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEnhancedInputLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_RequestRebuildControlMappingsUsingContext(class UInputMappingContext* Context, bool bForceImmediately);
		struct FInputActionValue STATIC_MakeInputActionValue(float X, float Y, float Z, const struct FInputActionValue& MatchValueType);
		struct FInputActionValue STATIC_GetBoundActionValue(class AActor* Actor, class UInputAction* Action);
		class FString STATIC_Conv_InputActionValueToString(const struct FInputActionValue& ActionValue);
		bool STATIC_Conv_InputActionValueToBool(const struct FInputActionValue& InValue);
		struct FVector STATIC_Conv_InputActionValueToAxis3D(const struct FInputActionValue& ActionValue);
		struct FVector2D STATIC_Conv_InputActionValueToAxis2D(const struct FInputActionValue& InValue);
		float STATIC_Conv_InputActionValueToAxis1D(const struct FInputActionValue& InValue);
		void STATIC_BreakInputActionValue(const struct FInputActionValue& InActionValue, float* X, float* Y, float* Z);
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.EnhancedInputSubsystemInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEnhancedInputSubsystemInterface : public UInterface
	{
	public:
		void RequestRebuildControlMappings(const struct FModifyContextOptions& Options, EInputMappingRebuildType RebuildType);
		int32_t RemovePlayerMappedKey(const class FName& MappingName, const struct FModifyContextOptions& Options);
		void RemovePlayerMappableConfig(class UPlayerMappableInputConfig* Config, const struct FModifyContextOptions& Options);
		void RemoveMappingContext(class UInputMappingContext* MappingContext, const struct FModifyContextOptions& Options);
		EMappingQueryResult QueryMapKeyInContextSet(TArray<class UInputMappingContext*> PrioritizedActiveContexts, class UInputMappingContext* InputContext, class UInputAction* Action, const struct FKey& Key, TArray<struct FMappingQueryIssue>* OutIssues, EMappingQueryIssue BlockingIssues);
		EMappingQueryResult QueryMapKeyInActiveContextSet(class UInputMappingContext* InputContext, class UInputAction* Action, const struct FKey& Key, TArray<struct FMappingQueryIssue>* OutIssues, EMappingQueryIssue BlockingIssues);
		TArray<struct FKey> QueryKeysMappedToAction(class UInputAction* Action);
		void InjectInputVectorForAction(class UInputAction* Action, const struct FVector& Value, TArray<class UInputModifier*> Modifiers, TArray<class UInputTrigger*> Triggers);
		void InjectInputForAction(class UInputAction* Action, const struct FInputActionValue& RawValue, TArray<class UInputModifier*> Modifiers, TArray<class UInputTrigger*> Triggers);
		bool HasMappingContext(class UInputMappingContext* MappingContext);
		void ClearAllMappings();
		int32_t AddPlayerMappedKey(const class FName& MappingName, const struct FKey& NewKey, const struct FModifyContextOptions& Options);
		void AddPlayerMappableConfig(class UPlayerMappableInputConfig* Config, const struct FModifyContextOptions& Options);
		void AddMappingContext(class UInputMappingContext* MappingContext, int32_t Priority, const struct FModifyContextOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.EnhancedInputLocalPlayerSubsystem
	 * Size -> 0x0100 (FullSize[0x0130] - InheritedSize[0x0030])
	 */
	class UEnhancedInputLocalPlayerSubsystem : public ULocalPlayerSubsystem
	{
	public:
		unsigned char                                              UnknownData_EECQ[0x100];                                 // 0x0030(0x0100) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.EnhancedInputEngineSubsystem
	 * Size -> 0x0108 (FullSize[0x0138] - InheritedSize[0x0030])
	 */
	class UEnhancedInputEngineSubsystem : public UEngineSubsystem
	{
	public:
		unsigned char                                              UnknownData_RXPY[0x100];                                 // 0x0030(0x0100) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UEnhancedPlayerInput*                                PlayerInput;                                             // 0x0130(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.EnhancedPlayerInput
	 * Size -> 0x0248 (FullSize[0x06E0] - InheritedSize[0x0498])
	 */
	class UEnhancedPlayerInput : public UPlayerInput
	{
	public:
		TMap<class UInputMappingContext*, int32_t>                 AppliedInputContexts;                                    // 0x0498(0x0050) Transient, NativeAccessSpecifierPrivate
		TArray<struct FEnhancedActionKeyMapping>                   EnhancedActionMappings;                                  // 0x04E8(0x0010) ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Y3G2[0x50];                                  // 0x04F8(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UInputAction*, struct FInputActionInstance>     ActionInstanceData;                                      // 0x0548(0x0050) Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RNV4[0x50];                                  // 0x0598(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<struct FKey, struct FVector>                          KeysPressedThisTick;                                     // 0x05E8(0x0050) Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GO0I[0xA8];                                  // 0x0638(0x00A8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputAction
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class UInputAction : public UDataAsset
	{
	public:
		bool                                                       bConsumeInput;                                           // 0x0030(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTriggerWhenPaused;                                      // 0x0031(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReserveAllMappings;                                     // 0x0032(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInputActionValueType                                      ValueType;                                               // 0x0033(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1GDC[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UInputTrigger*>                               Triggers;                                                // 0x0038(0x0010) Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class UInputModifier*>                              Modifiers;                                               // 0x0048(0x0010) Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputDebugKeyDelegateBinding
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UInputDebugKeyDelegateBinding : public UInputDelegateBinding
	{
	public:
		TArray<struct FBlueprintInputDebugKeyDelegateBinding>      InputDebugKeyDelegateBindings;                           // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputMappingContext
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class UInputMappingContext : public UDataAsset
	{
	public:
		class FText                                                ContextDescription;                                      // 0x0030(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TArray<struct FEnhancedActionKeyMapping>                   Mappings;                                                // 0x0048(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected

	public:
		void UnmapKey(class UInputAction* Action, const struct FKey& Key);
		void UnmapAll();
		void UnmapAction(class UInputAction* Action);
		struct FEnhancedActionKeyMapping MapKey(class UInputAction* Action, const struct FKey& ToKey);
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputModifier
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UInputModifier : public UObject
	{
	public:
		struct FInputActionValue ModifyRaw(class UEnhancedPlayerInput* PlayerInput, const struct FInputActionValue& CurrentValue, float DeltaTime);
		struct FLinearColor GetVisualizationColor(const struct FInputActionValue& SampleValue, const struct FInputActionValue& FinalValue);
		EModifierExecutionPhase GetExecutionPhase();
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputModifierDeadZone
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UInputModifierDeadZone : public UInputModifier
	{
	public:
		float                                                      LowerThreshold;                                          // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UpperThreshold;                                          // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDeadZoneType                                              Type;                                                    // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9BW8[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputModifierScalar
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UInputModifierScalar : public UInputModifier
	{
	public:
		struct FVector                                             Scalar;                                                  // 0x0028(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputModifierNegate
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UInputModifierNegate : public UInputModifier
	{
	public:
		bool                                                       bX;                                                      // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bY;                                                      // 0x0029(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bZ;                                                      // 0x002A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6FSQ[0x5];                                   // 0x002B(0x0005) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputModifierSmooth
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UInputModifierSmooth : public UInputModifier
	{
	public:
		unsigned char                                              UnknownData_4MSO[0x30];                                  // 0x0028(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputModifierResponseCurveExponential
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UInputModifierResponseCurveExponential : public UInputModifier
	{
	public:
		struct FVector                                             CurveExponent;                                           // 0x0028(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputModifierResponseCurveUser
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UInputModifierResponseCurveUser : public UInputModifier
	{
	public:
		class UCurveFloat*                                         ResponseX;                                               // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         ResponseY;                                               // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         ResponseZ;                                               // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputModifierFOVScaling
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UInputModifierFOVScaling : public UInputModifier
	{
	public:
		float                                                      FOVScale;                                                // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFOVScalingType                                            FOVScalingType;                                          // 0x002C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3A0O[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputModifierToWorldSpace
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UInputModifierToWorldSpace : public UInputModifier
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputModifierSwizzleAxis
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UInputModifierSwizzleAxis : public UInputModifier
	{
	public:
		EInputAxisSwizzle                                          Order;                                                   // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PQSU[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputModifierCollection
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UInputModifierCollection : public UInputModifier
	{
	public:
		TArray<class UInputModifier*>                              Modifiers;                                               // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic
		bool                                                       bPermitValueTypeModification;                            // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0OCP[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputTrigger
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UInputTrigger : public UObject
	{
	public:
		float                                                      ActuationThreshold;                                      // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RAJF[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInputActionValue                                   LastValue;                                               // 0x0030(0x0020) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic

	public:
		ETriggerState UpdateState(class UEnhancedPlayerInput* PlayerInput, const struct FInputActionValue& ModifiedValue, float DeltaTime);
		bool IsActuated(const struct FInputActionValue& ForValue);
		ETriggerType GetTriggerType();
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputTriggerTimedBase
	 * Size -> 0x0008 (FullSize[0x0058] - InheritedSize[0x0050])
	 */
	class UInputTriggerTimedBase : public UInputTrigger
	{
	public:
		float                                                      HeldDuration;                                            // 0x0050(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAffectedByTimeDilation;                                 // 0x0054(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z6T3[0x3];                                   // 0x0055(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputTriggerDown
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	class UInputTriggerDown : public UInputTrigger
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputTriggerPressed
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	class UInputTriggerPressed : public UInputTrigger
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputTriggerReleased
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	class UInputTriggerReleased : public UInputTrigger
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputTriggerHold
	 * Size -> 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
	 */
	class UInputTriggerHold : public UInputTriggerTimedBase
	{
	public:
		unsigned char                                              UnknownData_GA3J[0x4];                                   // 0x0058(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HoldTimeThreshold;                                       // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsOneShot;                                              // 0x0060(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5RRS[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputTriggerHoldAndRelease
	 * Size -> 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
	 */
	class UInputTriggerHoldAndRelease : public UInputTriggerTimedBase
	{
	public:
		float                                                      HoldTimeThreshold;                                       // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YYU3[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputTriggerTap
	 * Size -> 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
	 */
	class UInputTriggerTap : public UInputTriggerTimedBase
	{
	public:
		float                                                      TapReleaseTimeThreshold;                                 // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H0IS[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputTriggerPulse
	 * Size -> 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
	 */
	class UInputTriggerPulse : public UInputTriggerTimedBase
	{
	public:
		unsigned char                                              UnknownData_CL65[0x4];                                   // 0x0058(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bTriggerOnStart;                                         // 0x005C(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9HDH[0x3];                                   // 0x005D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Interval;                                                // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TriggerLimit;                                            // 0x0064(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputTriggerChordAction
	 * Size -> 0x0008 (FullSize[0x0058] - InheritedSize[0x0050])
	 */
	class UInputTriggerChordAction : public UInputTrigger
	{
	public:
		class UInputAction*                                        ChordAction;                                             // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputTriggerChordBlocker
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class UInputTriggerChordBlocker : public UInputTriggerChordAction
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.PlayerMappableInputConfig
	 * Size -> 0x0080 (FullSize[0x00B0] - InheritedSize[0x0030])
	 */
	class UPlayerMappableInputConfig : public UPrimaryDataAsset
	{
	public:
		class FName                                                ConfigName;                                              // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FText                                                ConfigDisplayName;                                       // 0x0038(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		bool                                                       bIsDeprecated;                                           // 0x0050(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_F6QZ[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             MetaData;                                                // 0x0058(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TMap<class UInputMappingContext*, int32_t>                 Contexts;                                                // 0x0060(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected

	public:
		void ResetToDefault();
		bool IsDeprecated();
		TArray<struct FEnhancedActionKeyMapping> GetPlayerMappableKeys();
		class UObject* GetMetadata();
		TMap<class UInputMappingContext*, int32_t> GetMappingContexts();
		struct FEnhancedActionKeyMapping GetMappingByName(const class FName& MappingName);
		TArray<struct FEnhancedActionKeyMapping> GetKeysBoundToAction(class UInputAction* InAction);
		class FText GetDisplayName();
		class FName GetConfigName();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
