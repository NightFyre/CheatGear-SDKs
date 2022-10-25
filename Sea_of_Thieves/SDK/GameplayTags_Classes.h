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
	 * Class GameplayTags.EditableGameplayTagQuery
	 * Size -> 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
	 */
	class UEditableGameplayTagQuery : public UObject
	{
	public:
		class FString                                              UserDescription;                                         // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		unsigned char                                              UnknownData_UMLI[0x10];                                  // 0x0038(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UEditableGameplayTagQueryExpression*                 RootExpression;                                          // 0x0048(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FGameplayTagQuery                                   TagQueryExportText_Helper;                               // 0x0050(0x0048)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayTags.EditableGameplayTagQueryExpression
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEditableGameplayTagQueryExpression : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UEditableGameplayTagQueryExpression_AnyTagsMatch : public UEditableGameplayTagQueryExpression
	{
	public:
		struct FGameplayTagContainer                               Tags;                                                    // 0x0028(0x0028) Edit, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UEditableGameplayTagQueryExpression_AllTagsMatch : public UEditableGameplayTagQueryExpression
	{
	public:
		struct FGameplayTagContainer                               Tags;                                                    // 0x0028(0x0028) Edit, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UEditableGameplayTagQueryExpression_NoTagsMatch : public UEditableGameplayTagQueryExpression
	{
	public:
		struct FGameplayTagContainer                               Tags;                                                    // 0x0028(0x0028) Edit, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UEditableGameplayTagQueryExpression_AnyExprMatch : public UEditableGameplayTagQueryExpression
	{
	public:
		TArray<class UEditableGameplayTagQueryExpression*>         Expressions;                                             // 0x0028(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UEditableGameplayTagQueryExpression_AllExprMatch : public UEditableGameplayTagQueryExpression
	{
	public:
		TArray<class UEditableGameplayTagQueryExpression*>         Expressions;                                             // 0x0028(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UEditableGameplayTagQueryExpression_NoExprMatch : public UEditableGameplayTagQueryExpression
	{
	public:
		TArray<class UEditableGameplayTagQueryExpression*>         Expressions;                                             // 0x0028(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayTags.GameplayTagAssetInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGameplayTagAssetInterface : public UInterface
	{
	public:
		bool HasMatchingGameplayTag(const struct FGameplayTag& TagToCheck);
		bool HasAnyMatchingGameplayTags(const struct FGameplayTagContainer& TagContainer, bool bCountEmptyAsMatch);
		bool HasAllMatchingGameplayTags(const struct FGameplayTagContainer& TagContainer, bool bCountEmptyAsMatch);
		void GetOwnedGameplayTags(struct FGameplayTagContainer* TagContainer);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayTags.BlueprintGameplayTagLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBlueprintGameplayTagLibrary : public UBlueprintFunctionLibrary
	{
	public:
		struct FGameplayTag STATIC_MakeLiteralGameplayTag(const struct FGameplayTag& Value);
		struct FGameplayTagQuery STATIC_MakeGameplayTagQuery(const struct FGameplayTagQuery& TagQuery);
		bool STATIC_HasAllMatchingGameplayTags(const struct FGameplayTagContainer& OtherContainer, bool bCountEmptyAsMatch);
		int32_t STATIC_GetNumGameplayTagsInContainer(const struct FGameplayTagContainer& TagContainer);
		bool STATIC_DoGameplayTagsMatch(const struct FGameplayTag& TagOne, const struct FGameplayTag& TagTwo, EGameplayTagMatchType TagOneMatchType, EGameplayTagMatchType TagTwoMatchType);
		bool STATIC_DoesTagAssetInterfaceHaveTag(EGameplayTagMatchType ContainerTagsMatchType, const struct FGameplayTag& Tag, EGameplayTagMatchType TagMatchType);
		bool STATIC_DoesContainerMatchTagQuery(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagQuery& TagQuery);
		bool STATIC_DoesContainerMatchAnyTagsInContainer(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagContainer& OtherContainer, bool bCountEmptyAsMatch);
		bool STATIC_DoesContainerMatchAllTagsInContainer(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagContainer& OtherContainer, bool bCountEmptyAsMatch);
		bool STATIC_DoesContainerHaveTag(const struct FGameplayTagContainer& TagContainer, EGameplayTagMatchType ContainerTagsMatchType, const struct FGameplayTag& Tag, EGameplayTagMatchType TagMatchType);
		bool STATIC_AppendGameplayTagContainers(const struct FGameplayTagContainer& InTagContainer, struct FGameplayTagContainer* InOutTagContainer);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayTags.GameplayTagsManager
	 * Size -> 0x0148 (FullSize[0x0170] - InheritedSize[0x0028])
	 */
	class UGameplayTagsManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_KTN0[0x118];                                 // 0x0028(0x0118) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UDataTable*>                                  GameplayTagTables;                                       // 0x0140(0x0010) ZeroConstructor
		unsigned char                                              UnknownData_Z92J[0x20];                                  // 0x0150(0x0020) MISSED OFFSET (PADDING)

	public:
		struct FGameplayTag RequestGameplayTag(const class FName& TagName, bool ErrorIfNotFound);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayTags.GameplayTagsSettings
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UGameplayTagsSettings : public UObject
	{
	public:
		TArray<class FString>                                      GameplayTags;                                            // 0x0028(0x0010) Edit, ZeroConstructor, Config

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
