#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * Enum PrefabricatorRuntime.EPrefabricatorPivotPosition
	 */
	enum class EPrefabricatorPivotPosition : uint8_t
	{
		ExtremeLeft  = 0,
		ExtremeRight = 1,
		Center       = 2,
		MAX          = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct PrefabricatorRuntime.PrefabricatorPropertyAssetMapping
	 * Size -> 0x0038
	 */
	struct FPrefabricatorPropertyAssetMapping
	{
	public:
		struct FSoftObjectPath                                     AssetReference;                                          // 0x0000(0x0018) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AssetClassName;                                          // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                AssetObjectPath;                                         // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseQuotes;                                              // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4WA7[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PrefabricatorRuntime.PrefabricatorComponentData
	 * Size -> 0x0050
	 */
	struct FPrefabricatorComponentData
	{
	public:
		struct FTransform                                          RelativeTransform;                                       // 0x0000(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class FString                                              ComponentName;                                           // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPrefabricatorProperty*>                      Properties;                                              // 0x0040(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PrefabricatorRuntime.PrefabricatorActorData
	 * Size -> 0x0090
	 */
	struct FPrefabricatorActorData
	{
	public:
		struct FGuid                                               PrefabItemID;                                            // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          RelativeTransform;                                       // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class FString                                              ClassPath;                                               // 0x0040(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftClassPath                                      ClassPathRef;                                            // 0x0050(0x0018) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPrefabricatorProperty*>                      Properties;                                              // 0x0068(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FPrefabricatorComponentData>                 Components;                                              // 0x0078(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UTQ1[0x8];                                   // 0x0088(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PrefabricatorRuntime.PrefabricatorAssetCollectionItem
	 * Size -> 0x0030
	 */
	struct FPrefabricatorAssetCollectionItem
	{
	public:
		unsigned char                                              PrefabAsset[0x28];                                       // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		float                                                      Weight;                                                  // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OE7B[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
