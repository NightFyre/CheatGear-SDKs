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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum AthenaEngine.EPlayModeVariant
	 */
	enum class EPlayModeVariant : uint8_t
	{
		Normal  = 0,
		Creator = 1,
		Invalid = 2,
		MAX     = 3,
		MAX01   = 4
	};

	/**
	 * Enum AthenaEngine.EPlayMode
	 */
	enum class EPlayMode : uint8_t
	{
		Adventure      = 0,
		Contest        = 1,
		Tutorial       = 2,
		NotSelectedYet = 3,
		MAX            = 4,
		Invalid        = 5,
		MAX01          = 6
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct AthenaEngine.SerialisedRpc
	 * Size -> 0x0020
	 */
	struct FSerialisedRpc
	{
	public:
		unsigned char                                              UnknownData_Y2GS[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UScriptStruct*                                       ContentsType;                                            // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaEngine.StringAssetClassPairFeatureOverride
	 * Size -> 0x0028
	 */
	struct FStringAssetClassPairFeatureOverride
	{
	public:
		class FName                                                FeatureName;                                             // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TAssetPtr<class UClass>                                    AssetClass;                                              // 0x0008(0x001C) ELEMENT_SIZE_MISMATCH Edit, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_8DS5[0x4];                                   // 0x0024(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	};

	/**
	 * ScriptStruct AthenaEngine.StringAssetClassPair
	 * Size -> 0x0040
	 */
	struct FStringAssetClassPair
	{
	public:
		class FString                                              String;                                                  // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash
		TAssetPtr<class UClass>                                    AssetClass;                                              // 0x0010(0x001C) ELEMENT_SIZE_MISMATCH Edit, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_0OPS[0x4];                                   // 0x002C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TArray<struct FStringAssetClassPairFeatureOverride>        FeatureOverrides;                                        // 0x0030(0x0010) Edit, ZeroConstructor, AdvancedDisplay
	};

	/**
	 * ScriptStruct AthenaEngine.BoxedRpc
	 * Size -> 0x0010
	 */
	struct FBoxedRpc
	{
	public:
		unsigned char                                              UnknownData_CL1G[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UScriptStruct*                                       Type;                                                    // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaEngine.PlayModeDefiniton
	 * Size -> 0x0028
	 */
	struct FPlayModeDefiniton
	{
	public:
		TArray<class FString>                                      Tags;                                                    // 0x0000(0x0010) ZeroConstructor
		TArray<class FString>                                      States;                                                  // 0x0010(0x0010) ZeroConstructor
		int32_t                                                    CrewMin;                                                 // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CrewMax;                                                 // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaEngine.ServicesStampId
	 * Size -> 0x0010
	 */
	struct FServicesStampId
	{
	public:
		class FString                                              StampId;                                                 // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaEngine.ActorComponentSelector
	 * Size -> 0x0010
	 */
	struct FActorComponentSelector
	{
	public:
		class FName                                                ComponentName;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UActorComponent*                                     CachedComponent;                                         // 0x0008(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaEngine.PlaySoundRpc
	 * Size -> 0x0010 (FullSize[0x0020] - InheritedSize[0x0010])
	 */
	struct FPlaySoundRpc : public FBoxedRpc
	{
	public:
		class UWwiseEvent*                                         WwiseEvent;                                              // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PlayOnTarget;                                            // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BDGT[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaEngine.EventCancelForceFeedback
	 * Size -> 0x0010
	 */
	struct FEventCancelForceFeedback
	{
	public:
		class UForceFeedbackEffect*                                ForceFeedbackEffect;                                     // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                Tag;                                                     // 0x0008(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaEngine.EventTriggerForceFeedback
	 * Size -> 0x0018
	 */
	struct FEventTriggerForceFeedback
	{
	public:
		class UForceFeedbackEffect*                                ForceFeedbackEffect;                                     // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Looping;                                                 // 0x0008(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8WR4[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Tag;                                                     // 0x000C(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4HJ5[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaEngine.AthenaAsyncAssetLoaderWrapper
	 * Size -> 0x0018
	 */
	struct FAthenaAsyncAssetLoaderWrapper
	{
	public:
		unsigned char                                              UnknownData_D2HV[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaEngine.EventMeshAssigned
	 * Size -> 0x0001
	 */
	struct FEventMeshAssigned
	{
	public:
		unsigned char                                              UnknownData_HRQY[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaEngine.InlineUserDefinedStructDetails
	 * Size -> 0x0008
	 */
	struct FInlineUserDefinedStructDetails
	{
	public:
		class UScriptStruct*                                       Struct;                                                  // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaEngine.NativeAndUserDefinedStructSelector
	 * Size -> 0x0008
	 */
	struct FNativeAndUserDefinedStructSelector
	{
	public:
		class UScriptStruct*                                       Struct;                                                  // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
