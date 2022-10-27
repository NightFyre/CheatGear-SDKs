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
	 * Class EmotingFramework.EmoteCameraInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEmoteCameraInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmotingFramework.EmoteCard
	 * Size -> 0x0140 (FullSize[0x0508] - InheritedSize[0x03C8])
	 */
	class AEmoteCard : public AActor
	{
	public:
		unsigned char                                              UnknownData_3RNU[0x8];                                   // 0x03C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            DynamicCardSelectionMaterialInstance;                    // 0x03D0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MeshComponent;                                           // 0x03D8(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                RandomCardParameterName;                                 // 0x03E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FInt32Range                                         RandomCardParameterRange;                                // 0x03E8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WEUC[0x110];                                 // 0x03F8(0x0110) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmotingFramework.EmoteCoin
	 * Size -> 0x0118 (FullSize[0x04E0] - InheritedSize[0x03C8])
	 */
	class AEmoteCoin : public AActor
	{
	public:
		unsigned char                                              UnknownData_T23S[0x118];                                 // 0x03C8(0x0118) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmotingFramework.EmotePropData
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEmotePropData : public UDataAsset
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmotingFramework.EmoteRandomFromListAsset
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UEmoteRandomFromListAsset : public UDataAsset
	{
	public:
		TArray<struct FEmoteData>                                  EmoteDataList;                                           // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmotingFramework.EmotePropDiceData
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UEmotePropDiceData : public UEmotePropData
	{
	public:
		EDiceType                                                  DiceType;                                                // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4W5O[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmotingFramework.EmoteDice
	 * Size -> 0x0120 (FullSize[0x04E8] - InheritedSize[0x03C8])
	 */
	class AEmoteDice : public AActor
	{
	public:
		unsigned char                                              UnknownData_D8MF[0x120];                                 // 0x03C8(0x0120) MISSED OFFSET (PADDING)

	public:
		void SetDiceMesh(EDiceType DiceType);
		void SendTelemetryData(const struct FTransform& OrientationUsed, int32_t RollNumber, EDiceType DiceType);
		void RollDice(int32_t RollNumber, EDiceType DiceType);
		static UClass* StaticClass();
	};

	/**
	 * Class EmotingFramework.EmoteIdListingAsset
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UEmoteIdListingAsset : public UDataAsset
	{
	public:
		TArray<class FName>                                        EmoteIds;                                                // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmotingFramework.EmotePropRandomObjectData
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UEmotePropRandomObjectData : public UEmotePropData
	{
	public:
		TArray<struct FEmotePropRandomObjectInfo>                  PossibleObjects;                                         // 0x0028(0x0010) Edit, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmotingFramework.EmoteRandomObject
	 * Size -> 0x0130 (FullSize[0x04F8] - InheritedSize[0x03C8])
	 */
	class AEmoteRandomObject : public AActor
	{
	public:
		unsigned char                                              UnknownData_6MRQ[0x8];                                   // 0x03C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMeshComponent*                                MeshComponent;                                           // 0x03D0(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            DynamicMaterialInstance;                                 // 0x03D8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_EQL4[0x118];                                 // 0x03E0(0x0118) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmotingFramework.EmoteSettings
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UEmoteSettings : public UDeveloperSettings
	{
	public:
		int32_t                                                    NumPages;                                                // 0x0038(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ExpandedAndCompactEmoteRadialNumPages;                   // 0x003C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmotingFramework.EmoteZoomInAnalogInputId
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UEmoteZoomInAnalogInputId : public UAnalogInputId
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmotingFramework.EmoteZoomMouseAnalogInputId
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UEmoteZoomMouseAnalogInputId : public UAnalogInputId
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmotingFramework.EmoteZoomOutAnalogInputId
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UEmoteZoomOutAnalogInputId : public UAnalogInputId
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
