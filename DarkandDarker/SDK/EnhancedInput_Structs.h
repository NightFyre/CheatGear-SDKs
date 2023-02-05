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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum EnhancedInput.EInputMappingRebuildType
	 */
	enum class EInputMappingRebuildType : uint8_t
	{
		None             = 0,
		Rebuild          = 1,
		RebuildWithFlush = 2,
		MAX              = 3
	};

	/**
	 * Enum EnhancedInput.EInputActionValueType
	 */
	enum class EInputActionValueType : uint8_t
	{
		Boolean = 0,
		Axis1D  = 1,
		Axis2D  = 2,
		Axis3D  = 3,
		MAX     = 4
	};

	/**
	 * Enum EnhancedInput.EMappingQueryResult
	 */
	enum class EMappingQueryResult : uint8_t
	{
		Error_EnhancedInputNotEnabled         = 0,
		Error_InputContextNotInActiveContexts = 1,
		Error_InvalidAction                   = 2,
		NotMappable                           = 3,
		MappingAvailable                      = 4,
		MAX                                   = 5
	};

	/**
	 * Enum EnhancedInput.EMappingQueryIssue
	 */
	enum class EMappingQueryIssue : uint8_t
	{
		NoIssue                           = 0,
		ReservedByAction                  = 1,
		HidesExistingMapping              = 2,
		HiddenByExistingMapping           = 3,
		CollisionWithMappingInSameContext = 4,
		ForcesTypePromotion               = 5,
		ForcesTypeDemotion                = 6,
		MAX                               = 7
	};

	/**
	 * Enum EnhancedInput.EModifierExecutionPhase
	 */
	enum class EModifierExecutionPhase : uint8_t
	{
		PerInput   = 0,
		FinalValue = 1,
		NumPhases  = 2,
		MAX        = 3
	};

	/**
	 * Enum EnhancedInput.EDeadZoneType
	 */
	enum class EDeadZoneType : uint8_t
	{
		Axial  = 0,
		Radial = 1,
		MAX    = 2
	};

	/**
	 * Enum EnhancedInput.EFOVScalingType
	 */
	enum class EFOVScalingType : uint8_t
	{
		Standard       = 0,
		UE4_BackCompat = 1,
		MAX            = 2
	};

	/**
	 * Enum EnhancedInput.EInputAxisSwizzle
	 */
	enum class EInputAxisSwizzle : uint8_t
	{
		YXZ = 0,
		ZYX = 1,
		XZY = 2,
		YZX = 3,
		ZXY = 4,
		MAX = 5
	};

	/**
	 * Enum EnhancedInput.ETriggerState
	 */
	enum class ETriggerState : uint8_t
	{
		None      = 0,
		Ongoing   = 1,
		Triggered = 2,
		MAX       = 3
	};

	/**
	 * Enum EnhancedInput.ETriggerEvent
	 */
	enum class ETriggerEvent : uint8_t
	{
		None      = 0,
		Triggered = 1,
		Started   = 2,
		Ongoing   = 3,
		Canceled  = 4,
		Completed = 5,
		MAX       = 6
	};

	/**
	 * Enum EnhancedInput.ETriggerType
	 */
	enum class ETriggerType : uint8_t
	{
		Explicit = 0,
		Implicit = 1,
		Blocker  = 2,
		MAX      = 3
	};

	/**
	 * Enum EnhancedInput.ETriggerEventsSupported
	 */
	enum class ETriggerEventsSupported : uint8_t
	{
		None            = 0,
		Instant         = 1,
		Uninterruptible = 2,
		Ongoing         = 3,
		All             = 4,
		MAX             = 5
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct EnhancedInput.BlueprintEnhancedInputActionBinding
	 * Size -> 0x0018
	 */
	struct FBlueprintEnhancedInputActionBinding
	{
	public:
		class UInputAction*                                        InputAction;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETriggerEvent                                              TriggerEvent;                                            // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BI1P[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                FunctionNameToBind;                                      // 0x000C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ENB6[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EnhancedInput.PlayerMappableKeyOptions
	 * Size -> 0x0038
	 */
	struct FPlayerMappableKeyOptions
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                DisplayName;                                             // 0x0008(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                DisplayCategory;                                         // 0x0020(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EnhancedInput.EnhancedActionKeyMapping
	 * Size -> 0x0088
	 */
	struct FEnhancedActionKeyMapping
	{
	public:
		class UInputAction*                                        Action;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKey                                                Key;                                                     // 0x0008(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsPlayerMappable : 1;                                   // 0x0020(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EO0U[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPlayerMappableKeyOptions                           PlayerMappableOptions;                                   // 0x0028(0x0038) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       bShouldBeIgnored : 1;                                    // 0x0060(0x0001) BIT_FIELD Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SPD0[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UInputTrigger*>                               Triggers;                                                // 0x0068(0x0010) Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class UInputModifier*>                              Modifiers;                                               // 0x0078(0x0010) Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EnhancedInput.InputActionInstance
	 * Size -> 0x0088
	 */
	struct FInputActionInstance
	{
	public:
		class UInputAction*                                        SourceAction;                                            // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EQ5P[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UInputTrigger*>                               Triggers;                                                // 0x0018(0x0010) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		TArray<class UInputModifier*>                              Modifiers;                                               // 0x0028(0x0010) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		TArray<class UInputModifier*>                              PerInputModifiers;                                       // 0x0038(0x0010) ZeroConstructor, Deprecated, Protected, NativeAccessSpecifierProtected
		TArray<class UInputModifier*>                              FinalValueModifiers;                                     // 0x0048(0x0010) ZeroConstructor, Deprecated, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_P8E6[0x20];                                  // 0x0058(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ElapsedProcessedTime;                                    // 0x0078(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ElapsedTriggeredTime;                                    // 0x007C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LastTriggeredWorldTime;                                  // 0x0080(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ETriggerEvent                                              TriggerEvent;                                            // 0x0084(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YRO4[0x3];                                   // 0x0085(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EnhancedInput.BlueprintInputDebugKeyDelegateBinding
	 * Size -> 0x0030
	 */
	struct FBlueprintInputDebugKeyDelegateBinding
	{
	public:
		struct FInputChord                                         InputChord;                                              // 0x0000(0x0020) HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInputEvent                                                InputKeyEvent;                                           // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IM6G[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                FunctionNameToBind;                                      // 0x0024(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bExecuteWhenPaused;                                      // 0x002C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_22TH[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EnhancedInput.InputActionValue
	 * Size -> 0x0020
	 */
	struct FInputActionValue
	{
	public:
		unsigned char                                              UnknownData_X31J[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EnhancedInput.ModifyContextOptions
	 * Size -> 0x0001
	 */
	struct FModifyContextOptions
	{
	public:
		bool                                                       bIgnoreAllPressedKeysUntilRelease : 1;                   // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceImmediately : 1;                                   // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EnhancedInput.MappingQueryIssue
	 * Size -> 0x0018
	 */
	struct FMappingQueryIssue
	{
	public:
		EMappingQueryIssue                                         Issue;                                                   // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H1AY[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInputMappingContext*                                BlockingContext;                                         // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInputAction*                                        BlockingAction;                                          // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
