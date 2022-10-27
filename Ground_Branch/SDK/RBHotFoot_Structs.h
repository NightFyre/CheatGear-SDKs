#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * Enum RBHotFoot.EHGGizmoMethod
	 */
	enum class EHGGizmoMethod : uint8_t
	{
		GM_Translate = 0,
		GM_Rotate    = 1,
		GM_Scale     = 2,
		GM_MAX       = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct RBHotFoot.HFActorSaveData
	 * Size -> 0x0070
	 */
	struct FHFActorSaveData
	{
	public:
		class FString                                              ActorClass;                                              // 0x0000(0x0010) ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ActorName;                                               // 0x0010(0x0008) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WMAW[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          ActorTransform;                                          // 0x0020(0x0030) SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TArray<class FName>                                        ActorTags;                                               // 0x0050(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      ActorData;                                               // 0x0060(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RBHotFoot.HFSharedProperty
	 * Size -> 0x0060
	 */
	struct FHFSharedProperty
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Type;                                                    // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SharedValue;                                             // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Widget[0x28];                                            // 0x0030(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		bool                                                       bMultipleValues;                                         // 0x0058(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SR95[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
