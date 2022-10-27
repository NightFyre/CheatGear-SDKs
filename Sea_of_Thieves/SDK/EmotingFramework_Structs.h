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
	 * Enum EmotingFramework.EDiceType
	 */
	enum class EDiceType : uint8_t
	{
		Dice4  = 0,
		Dice6  = 1,
		Dice8  = 2,
		Dice10 = 3,
		Dice12 = 4,
		Dice20 = 5,
		MAX    = 6
	};

	/**
	 * Enum EmotingFramework.EEmoteFlourishType
	 */
	enum class EEmoteFlourishType : uint8_t
	{
		Invalid                     = 0,
		PrimaryWeaponSlotFlourish   = 1,
		SecondaryWeaponSlotFlourish = 2,
		MAX                         = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct EmotingFramework.EmoteId
	 * Size -> 0x0008
	 */
	struct FEmoteId
	{
	public:
		class FName                                                EmoteId;                                                 // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct EmotingFramework.EmoteData
	 * Size -> 0x00A0
	 */
	struct FEmoteData
	{
	public:
		struct FEmoteId                                            EmoteId;                                                 // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly
		class FText                                                EmoteDisplayName;                                        // 0x0008(0x0018) ELEMENT_SIZE_MISMATCH Edit
		unsigned char                                              UnknownData_I9N7[0x20];                                  // 0x0020(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FText                                                AudioDescription;                                        // 0x0040(0x0018) ELEMENT_SIZE_MISMATCH Edit
		unsigned char                                              UnknownData_JJ0Z[0x20];                                  // 0x0058(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		float                                                      DelayBeforeAllowingExit;                                 // 0x0078(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      VerticalOffsetFactorWhenZoomed;                          // 0x007C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HideNameplate;                                           // 0x0080(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZM8T[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UEmotePropData*                                      EmotePropDataAsset;                                      // 0x0088(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanPlayInSuccession;                                     // 0x0090(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       ShowDescriptionInTextChat;                               // 0x0091(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SN1B[0x6];                                   // 0x0092(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAthenaSpringArmComponentParams*                     CustomSpringArmParamsAsset;                              // 0x0098(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct EmotingFramework.EmotePropRandomObjectInfo
	 * Size -> 0x0030
	 */
	struct FEmotePropRandomObjectInfo
	{
	public:
		class UStaticMesh*                                         Mesh;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FTransform>                                  PossibleTransforms;                                      // 0x0008(0x0010) Edit, ZeroConstructor
		class FName                                                RandomParameterName;                                     // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FInt32Range                                         RandomParameterRange;                                    // 0x0020(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct EmotingFramework.EmotePropRandomObjectResult
	 * Size -> 0x0050
	 */
	struct FEmotePropRandomObjectResult
	{
	public:
		class UStaticMesh*                                         Mesh;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HasTransformValue;                                       // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RWCC[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0010(0x0030) IsPlainOldData, NoDestructor
		class FName                                                TextureParameterName;                                    // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TextureParameterValue;                                   // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5OF7[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EmotingFramework.EventEmoteEndRequested
	 * Size -> 0x000C
	 */
	struct FEventEmoteEndRequested
	{
	public:
		class FName                                                EmoteIdentifier;                                         // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       EndForcedEmote;                                          // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7QI3[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EmotingFramework.EventEndEmoteAnimation
	 * Size -> 0x0001
	 */
	struct FEventEndEmoteAnimation
	{
	public:
		unsigned char                                              UnknownData_3ZMH[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EmotingFramework.EventEmoteSwapped
	 * Size -> 0x00A0
	 */
	struct FEventEmoteSwapped
	{
	public:
		struct FEmoteData                                          EmoteData;                                               // 0x0000(0x00A0)
	};

	/**
	 * ScriptStruct EmotingFramework.EventEmoteCompleted
	 * Size -> 0x000C
	 */
	struct FEventEmoteCompleted
	{
	public:
		class FName                                                EmoteName;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		uint32_t                                                   EmoteDuration;                                           // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct EmotingFramework.EventEmoteStarted
	 * Size -> 0x00A0
	 */
	struct FEventEmoteStarted
	{
	public:
		struct FEmoteData                                          EmoteData;                                               // 0x0000(0x00A0) BlueprintVisible, BlueprintReadOnly
	};

	/**
	 * ScriptStruct EmotingFramework.EventEmoteRequested
	 * Size -> 0x00B0
	 */
	struct FEventEmoteRequested
	{
	public:
		struct FEmoteData                                          EmoteData;                                               // 0x0000(0x00A0)
		class FName                                                ForcedEmoteIdentifier;                                   // 0x00A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ForcedEmote;                                             // 0x00A8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3VYE[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EmotingFramework.EventDisableLookAtEmoteCamera
	 * Size -> 0x0001
	 */
	struct FEventDisableLookAtEmoteCamera
	{
	public:
		unsigned char                                              UnknownData_CAG3[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EmotingFramework.EventEnableLookAtEmoteCamera
	 * Size -> 0x0008
	 */
	struct FEventEnableLookAtEmoteCamera
	{
	public:
		TWeakObjectPtr<class AActor>                               LookAtTarget;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper
	};

	/**
	 * ScriptStruct EmotingFramework.EmoteDiceOutcomeTelemetryEvent
	 * Size -> 0x0014
	 */
	struct FEmoteDiceOutcomeTelemetryEvent
	{
	public:
		int32_t                                                    MaxLimit;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    RollNumber;                                              // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             OrientationUsed;                                         // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct EmotingFramework.EmoteRandomObjectOutcomeTelemetryEvent
	 * Size -> 0x0060
	 */
	struct FEmoteRandomObjectOutcomeTelemetryEvent
	{
	public:
		class FString                                              MeshName;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		struct FTransform                                          Transform;                                               // 0x0010(0x0030) IsPlainOldData, NoDestructor
		class FString                                              TextureParameterName;                                    // 0x0040(0x0010) ZeroConstructor, HasGetValueTypeHash
		int32_t                                                    TextureParameterValue;                                   // 0x0050(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JR2C[0xC];                                   // 0x0054(0x000C) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
