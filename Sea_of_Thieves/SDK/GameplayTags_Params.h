#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag
	 */
	struct UGameplayTagAssetInterface_HasMatchingGameplayTag_Params
	{
	public:
		struct FGameplayTag                                        TagToCheck;                                              // 0x0000(0x0008)  (Parm)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GameplayTags.GameplayTagAssetInterface.HasAnyMatchingGameplayTags
	 */
	struct UGameplayTagAssetInterface_HasAnyMatchingGameplayTags_Params
	{
	public:
		struct FGameplayTagContainer                               TagContainer;                                            // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm)
		bool                                                       bCountEmptyAsMatch;                                      // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0029(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GameplayTags.GameplayTagAssetInterface.HasAllMatchingGameplayTags
	 */
	struct UGameplayTagAssetInterface_HasAllMatchingGameplayTags_Params
	{
	public:
		struct FGameplayTagContainer                               TagContainer;                                            // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm)
		bool                                                       bCountEmptyAsMatch;                                      // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0029(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GameplayTags.GameplayTagAssetInterface.GetOwnedGameplayTags
	 */
	struct UGameplayTagAssetInterface_GetOwnedGameplayTags_Params
	{
	public:
		struct FGameplayTagContainer                               TagContainer;                                            // 0x0000(0x0028)  (Parm, OutParm)
	};

	/**
	 * Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag
	 */
	struct UBlueprintGameplayTagLibrary_MakeLiteralGameplayTag_Params
	{
	public:
		struct FGameplayTag                                        Value;                                                   // 0x0000(0x0008)  (Parm)
		struct FGameplayTag                                        ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery
	 */
	struct UBlueprintGameplayTagLibrary_MakeGameplayTagQuery_Params
	{
	public:
		struct FGameplayTagQuery                                   TagQuery;                                                // 0x0000(0x0048)  (Parm)
		struct FGameplayTagQuery                                   ReturnValue;                                             // 0x0048(0x0048)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function GameplayTags.BlueprintGameplayTagLibrary.HasAllMatchingGameplayTags
	 */
	struct UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Params
	{
	public:
		unsigned char                                              UnknownData_L6RE[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayTagContainer                               OtherContainer;                                          // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm)
		bool                                                       bCountEmptyAsMatch;                                      // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0039(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GameplayTags.BlueprintGameplayTagLibrary.GetNumGameplayTagsInContainer
	 */
	struct UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer_Params
	{
	public:
		struct FGameplayTagContainer                               TagContainer;                                            // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm)
		int32_t                                                    ReturnValue;                                             // 0x0028(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GameplayTags.BlueprintGameplayTagLibrary.DoGameplayTagsMatch
	 */
	struct UBlueprintGameplayTagLibrary_DoGameplayTagsMatch_Params
	{
	public:
		struct FGameplayTag                                        TagOne;                                                  // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm)
		struct FGameplayTag                                        TagTwo;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm)
		EGameplayTagMatchType                                      TagOneMatchType;                                         // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EGameplayTagMatchType                                      TagTwoMatchType;                                         // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0012(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GameplayTags.BlueprintGameplayTagLibrary.DoesTagAssetInterfaceHaveTag
	 */
	struct UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Params
	{
	public:
		unsigned char                                              UnknownData_HETC[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		EGameplayTagMatchType                                      ContainerTagsMatchType;                                  // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_O2MO[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayTag                                        Tag;                                                     // 0x0014(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm)
		EGameplayTagMatchType                                      TagMatchType;                                            // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x001D(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchTagQuery
	 */
	struct UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Params
	{
	public:
		struct FGameplayTagContainer                               TagContainer;                                            // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm)
		struct FGameplayTagQuery                                   TagQuery;                                                // 0x0028(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0070(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchAnyTagsInContainer
	 */
	struct UBlueprintGameplayTagLibrary_DoesContainerMatchAnyTagsInContainer_Params
	{
	public:
		struct FGameplayTagContainer                               TagContainer;                                            // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm)
		struct FGameplayTagContainer                               OtherContainer;                                          // 0x0028(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm)
		bool                                                       bCountEmptyAsMatch;                                      // 0x0050(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0051(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchAllTagsInContainer
	 */
	struct UBlueprintGameplayTagLibrary_DoesContainerMatchAllTagsInContainer_Params
	{
	public:
		struct FGameplayTagContainer                               TagContainer;                                            // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm)
		struct FGameplayTagContainer                               OtherContainer;                                          // 0x0028(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm)
		bool                                                       bCountEmptyAsMatch;                                      // 0x0050(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0051(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerHaveTag
	 */
	struct UBlueprintGameplayTagLibrary_DoesContainerHaveTag_Params
	{
	public:
		struct FGameplayTagContainer                               TagContainer;                                            // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm)
		EGameplayTagMatchType                                      ContainerTagsMatchType;                                  // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CWCT[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayTag                                        Tag;                                                     // 0x002C(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm)
		EGameplayTagMatchType                                      TagMatchType;                                            // 0x0034(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0035(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GameplayTags.BlueprintGameplayTagLibrary.AppendGameplayTagContainers
	 */
	struct UBlueprintGameplayTagLibrary_AppendGameplayTagContainers_Params
	{
	public:
		struct FGameplayTagContainer                               InTagContainer;                                          // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm)
		struct FGameplayTagContainer                               InOutTagContainer;                                       // 0x0028(0x0028)  (Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GameplayTags.GameplayTagsManager.RequestGameplayTag
	 */
	struct UGameplayTagsManager_RequestGameplayTag_Params
	{
	public:
		class FName                                                TagName;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ErrorIfNotFound;                                         // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_I1QS[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayTag                                        ReturnValue;                                             // 0x000C(0x0008)  (Parm, OutParm, ReturnParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
