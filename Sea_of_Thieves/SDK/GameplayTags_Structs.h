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
	 * Enum GameplayTags.EGameplayTagQueryExprType
	 */
	enum class EGameplayTagQueryExprType : uint8_t
	{
		Undefined    = 0,
		AnyTagsMatch = 1,
		AllTagsMatch = 2,
		NoTagsMatch  = 3,
		AnyExprMatch = 4,
		AllExprMatch = 5,
		NoExprMatch  = 6,
		MAX          = 7
	};

	/**
	 * Enum GameplayTags.EGameplayContainerMatchType
	 */
	enum class EGameplayContainerMatchType : uint8_t
	{
		Any = 0,
		All = 1,
		MAX = 2
	};

	/**
	 * Enum GameplayTags.EGameplayTagMatchType
	 */
	enum class EGameplayTagMatchType : uint8_t
	{
		Explicit          = 0,
		IncludeParentTags = 1,
		MAX               = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct GameplayTags.GameplayTag
	 * Size -> 0x0008
	 */
	struct FGameplayTag
	{
	public:
		class FName                                                TagName;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct GameplayTags.GameplayTagQuery
	 * Size -> 0x0048
	 */
	struct FGameplayTagQuery
	{
	public:
		int32_t                                                    TokenStreamVersion;                                      // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XX4N[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameplayTag>                                TagDictionary;                                           // 0x0008(0x0010) ZeroConstructor
		TArray<unsigned char>                                      QueryTokenStream;                                        // 0x0018(0x0010) ZeroConstructor
		class FString                                              UserDescription;                                         // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              AutoDescription;                                         // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct GameplayTags.GameplayTagContainer
	 * Size -> 0x0028
	 */
	struct FGameplayTagContainer
	{
	public:
		unsigned char                                              UnknownData_JWTF[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameplayTag>                                GameplayTags;                                            // 0x0008(0x0010) BlueprintVisible, ZeroConstructor, Protected
		TArray<class FName>                                        Tags;                                                    // 0x0018(0x0010) ZeroConstructor, Deprecated
	};

	/**
	 * ScriptStruct GameplayTags.GameplayTagNode
	 * Size -> 0x0078
	 */
	struct FGameplayTagNode
	{
	public:
		unsigned char                                              UnknownData_OKRR[0x78];                                  // 0x0000(0x0078) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayTags.GameplayTagTableRow
	 * Size -> 0x0048
	 */
	struct FGameplayTagTableRow : public FTableRowBase
	{
	public:
		class FString                                              Tag;                                                     // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FText                                                CategoryText;                                            // 0x0010(0x0018) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible
		unsigned char                                              UnknownData_7DPU[0x20];                                  // 0x0028(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
