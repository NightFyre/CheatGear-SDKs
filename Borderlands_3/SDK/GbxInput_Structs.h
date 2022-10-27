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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum GbxInput.EGbxButtonEvent
	 */
	enum class EGbxButtonEvent : uint8_t
	{
		Pressed  = 0,
		Released = 1,
		MAX      = 2
	};

	/**
	 * Enum GbxInput.EGbxInputEvent_Button_PressHoldRelease_Events
	 */
	enum class EGbxInputEvent_Button_PressHoldRelease_Events : uint8_t
	{
		Pressed                                    = 0,
		Held                                       = 1,
		Released                                   = 2,
		EGbxInputEvent_Button_PressHoldRelease_MAX = 3
	};

	/**
	 * Enum GbxInput.EGbxInputEvent_Button_PressPulse_Events
	 */
	enum class EGbxInputEvent_Button_PressPulse_Events : uint8_t
	{
		Pressed                              = 0,
		InitialPulse                         = 1,
		Pulse                                = 2,
		Released                             = 3,
		EGbxInputEvent_Button_PressPulse_MAX = 4
	};

	/**
	 * Enum GbxInput.EGbxInputEvent_Button_PressRelease_Events
	 */
	enum class EGbxInputEvent_Button_PressRelease_Events : uint8_t
	{
		Pressed                                = 0,
		Released                               = 1,
		EGbxInputEvent_Button_PressRelease_MAX = 2
	};

	/**
	 * Enum GbxInput.EGbxInputRebindPlatformSupportType
	 */
	enum class EGbxInputRebindPlatformSupportType : uint8_t
	{
		PC_Only        = 0,
		Console_Only   = 1,
		PC_And_Console = 2,
		MAX            = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct GbxInput.BlueprintGbxInputActionReceiverDelegateBinding_Continuous_Vector
	 * Size -> 0x0020
	 */
	struct FBlueprintGbxInputActionReceiverDelegateBinding_Continuous_Vector
	{
	public:
		class UGbxInputActionData_Continuous_Vector*               Action;                                                  // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FunctionNameToBind;                                      // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               BindingID;                                               // 0x0010(0x0010) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxInput.BlueprintGbxInputActionReceiverDelegateBinding_Discrete
	 * Size -> 0x0028
	 */
	struct FBlueprintGbxInputActionReceiverDelegateBinding_Discrete
	{
	public:
		class UGbxInputActionData_Discrete*                        Action;                                                  // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInputEvent                                                InputEvent;                                              // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q6VB[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                FunctionNameToBind;                                      // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               BindingID;                                               // 0x0018(0x0010) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxInput.GbxInputKey
	 * Size -> 0x0010
	 */
	struct FGbxInputKey
	{
	public:
		unsigned char                                              UnknownData_M82B[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                KeyName;                                                 // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct GbxInput.GbxInputButton
	 * Size -> 0x0010 (FullSize[0x0020] - InheritedSize[0x0010])
	 */
	struct FGbxInputButton : public FGbxInputKey
	{
	public:
		TArray<struct FKey>                                        Keys;                                                    // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct GbxInput.GbxInputAxisKey
	 * Size -> 0x0028
	 */
	struct FGbxInputAxisKey
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018) Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Scale3D;                                                 // 0x0018(0x000C) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RR3X[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxInput.GbxInputAxis
	 * Size -> 0x0010 (FullSize[0x0020] - InheritedSize[0x0010])
	 */
	struct FGbxInputAxis : public FGbxInputKey
	{
	public:
		TArray<struct FGbxInputAxisKey>                            Keys;                                                    // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct GbxInput.GbxInputActionMappedEventParam
	 * Size -> 0x0008
	 */
	struct FGbxInputActionMappedEventParam
	{
	public:
		class FName                                                ParamName;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct GbxInput.GbxInputActionMappedEventParam_String
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FGbxInputActionMappedEventParam_String : public FGbxInputActionMappedEventParam
	{
	public:
		class FString                                              Value;                                                   // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct GbxInput.GbxInputActionMappedEventParam_Name
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FGbxInputActionMappedEventParam_Name : public FGbxInputActionMappedEventParam
	{
	public:
		class FName                                                Value;                                                   // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct GbxInput.GbxInputActionMappedEventParam_Int
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FGbxInputActionMappedEventParam_Int : public FGbxInputActionMappedEventParam
	{
	public:
		int32_t                                                    Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_V7H9[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxInput.GbxInputActionMappedEventParam_Float
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FGbxInputActionMappedEventParam_Float : public FGbxInputActionMappedEventParam
	{
	public:
		float                                                      Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_R38G[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxInput.GbxInputActionMappedEventData
	 * Size -> 0x0070
	 */
	struct FGbxInputActionMappedEventData
	{
	public:
		TArray<struct FGbxInputButton>                             Buttons;                                                 // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FGbxInputAxis>                               Axes;                                                    // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<class UGbxInputKeyRebindData*>                      Bindings;                                                // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FGbxInputActionMappedEventParam_String>      StringParams;                                            // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FGbxInputActionMappedEventParam_Name>        NameParams;                                              // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FGbxInputActionMappedEventParam_Int>         IntParams;                                               // 0x0050(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FGbxInputActionMappedEventParam_Float>       FloatParams;                                             // 0x0060(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct GbxInput.GbxInputActionMap
	 * Size -> 0x0018
	 */
	struct FGbxInputActionMap
	{
	public:
		class UGbxInputActionData*                                 InputActionData;                                         // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FGbxInputActionMappedEventData>              Events;                                                  // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct GbxInput.GbxInputActionEventLookupList
	 * Size -> 0x0010
	 */
	struct FGbxInputActionEventLookupList
	{
	public:
		TArray<struct FGbxInputActionMap>                          InputActionMaps;                                         // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct GbxInput.GbxInputRebind_Button
	 * Size -> 0x0030
	 */
	struct FGbxInputRebind_Button
	{
	public:
		class UGbxInputKeyRebindData_Button*                       Binding;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGbxInputButton                                     BUTTON;                                                  // 0x0008(0x0020) Edit, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_D3EB[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxInput.GbxInputRebind_Axis
	 * Size -> 0x0030
	 */
	struct FGbxInputRebind_Axis
	{
	public:
		class UGbxInputKeyRebindData_Axis*                         Binding;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGbxInputAxis                                       AXIS;                                                    // 0x0008(0x0020) Edit, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6DKL[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxInput.GbxInputEventExecOutput_FastPath
	 * Size -> 0x0018
	 */
	struct FGbxInputEventExecOutput_FastPath
	{
	public:
		bool                                                       bUsesFastpath;                                           // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FPUF[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxInputActionData*                                 DirectActionData;                                        // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bConsumeEvent;                                           // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EM64[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxInput.GbxInputEventExecOutput
	 * Size -> 0x0038
	 */
	struct FGbxInputEventExecOutput
	{
	public:
		class FName                                                EventName;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ExecFunctionName;                                        // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsBound;                                                // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NWH6[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxInputEventExecOutput_FastPath                   FastPathData;                                            // 0x0018(0x0018) NoDestructor, NativeAccessSpecifierPublic
		class UFunction*                                           ExecFunction;                                            // 0x0030(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxInput.GbxInputEvent
	 * Size -> 0x0048
	 */
	struct FGbxInputEvent
	{
	public:
		unsigned char                                              UnknownData_G7DR[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGbxInputEventExecOutput>                    ExecOutputs;                                             // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		class UBlueprintGeneratedClass*                            SelfClass;                                               // 0x0020(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxInputComponent*                                  Component;                                               // 0x0028(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UGbxInputActionData_Discrete*>                PendingDiscreteActions;                                  // 0x0030(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		bool                                                       bBlockParentClassEvent;                                  // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_O2U1[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxInput.GbxInputEvent_Axis_Core
	 * Size -> 0x0028 (FullSize[0x0070] - InheritedSize[0x0048])
	 */
	struct FGbxInputEvent_Axis_Core : public FGbxInputEvent
	{
	public:
		struct FGbxInputAxis                                       AXIS;                                                    // 0x0048(0x0020) Edit, NativeAccessSpecifierPrivate
		class UGbxInputKeyRebindData_Axis*                         RebindData;                                              // 0x0068(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct GbxInput.GbxInputEvent_Axis_Basic
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	struct FGbxInputEvent_Axis_Basic : public FGbxInputEvent_Axis_Core
	{	};

	/**
	 * ScriptStruct GbxInput.GbxInputEvent_Button_Core
	 * Size -> 0x0030 (FullSize[0x0078] - InheritedSize[0x0048])
	 */
	struct FGbxInputEvent_Button_Core : public FGbxInputEvent
	{
	public:
		struct FGbxInputButton                                     BUTTON;                                                  // 0x0048(0x0020) Edit, NativeAccessSpecifierPrivate
		class UGbxInputKeyRebindData_Button*                       RebindData;                                              // 0x0068(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_24NG[0x8];                                   // 0x0070(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxInput.GbxInputEvent_Button_PressHoldRelease
	 * Size -> 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
	 */
	struct FGbxInputEvent_Button_PressHoldRelease : public FGbxInputEvent_Button_Core
	{
	public:
		unsigned char                                              UnknownData_8V0Y[0x4];                                   // 0x0078(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HoldTime;                                                // 0x007C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct GbxInput.GbxInputEvent_Button_PressPulse
	 * Size -> 0x0020 (FullSize[0x0098] - InheritedSize[0x0078])
	 */
	struct FGbxInputEvent_Button_PressPulse : public FGbxInputEvent_Button_Core
	{
	public:
		float                                                      DelayBeforeInitialPulse;                                 // 0x0078(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      BaseDelayBetweenPulses;                                  // 0x007C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      PulseDelayAcceleration;                                  // 0x0080(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      FinalDelayBetweenPulses;                                 // 0x0084(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QE42[0x10];                                  // 0x0088(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxInput.GbxInputEvent_Button_PressRelease
	 * Size -> 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
	 */
	struct FGbxInputEvent_Button_PressRelease : public FGbxInputEvent_Button_Core
	{	};

	/**
	 * ScriptStruct GbxInput.GbxInputEventHelper_SigFunc_Button_PressPulse_Data
	 * Size -> 0x0004
	 */
	struct FGbxInputEventHelper_SigFunc_Button_PressPulse_Data
	{
	public:
		float                                                      NextPulseDelay;                                          // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxInput.GbxInputEventHelper_SigFunc_Axis_Data
	 * Size -> 0x000C
	 */
	struct FGbxInputEventHelper_SigFunc_Axis_Data
	{
	public:
		struct FVector                                             Val;                                                     // 0x0000(0x000C) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
