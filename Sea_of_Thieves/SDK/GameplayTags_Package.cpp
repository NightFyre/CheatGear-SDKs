/**
 * Name: Sea_of_Thieves
 * Version: 9505844
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEditableGameplayTagQuery.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditableGameplayTagQuery::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQuery");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEditableGameplayTagQueryExpression.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditableGameplayTagQueryExpression::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEditableGameplayTagQueryExpression_AnyTagsMatch.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditableGameplayTagQueryExpression_AnyTagsMatch::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEditableGameplayTagQueryExpression_AllTagsMatch.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditableGameplayTagQueryExpression_AllTagsMatch::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEditableGameplayTagQueryExpression_NoTagsMatch.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditableGameplayTagQueryExpression_NoTagsMatch::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEditableGameplayTagQueryExpression_AnyExprMatch.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditableGameplayTagQueryExpression_AnyExprMatch::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEditableGameplayTagQueryExpression_AllExprMatch.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditableGameplayTagQueryExpression_AllExprMatch::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEditableGameplayTagQueryExpression_NoExprMatch.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditableGameplayTagQueryExpression_NoExprMatch::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02220600
	 * 		Name   -> Function GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FGameplayTag                                TagToCheck                                                 (Parm)
	 */
	bool UGameplayTagAssetInterface::HasMatchingGameplayTag(const struct FGameplayTag& TagToCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag");
		
		UGameplayTagAssetInterface_HasMatchingGameplayTag_Params params {};
		params.TagToCheck = TagToCheck;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022204C0
	 * 		Name   -> Function GameplayTags.GameplayTagAssetInterface.HasAnyMatchingGameplayTags
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FGameplayTagContainer                       TagContainer                                               (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		bool                                               bCountEmptyAsMatch                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UGameplayTagAssetInterface::HasAnyMatchingGameplayTags(const struct FGameplayTagContainer& TagContainer, bool bCountEmptyAsMatch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayTags.GameplayTagAssetInterface.HasAnyMatchingGameplayTags");
		
		UGameplayTagAssetInterface_HasAnyMatchingGameplayTags_Params params {};
		params.TagContainer = TagContainer;
		params.bCountEmptyAsMatch = bCountEmptyAsMatch;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022201F0
	 * 		Name   -> Function GameplayTags.GameplayTagAssetInterface.HasAllMatchingGameplayTags
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FGameplayTagContainer                       TagContainer                                               (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		bool                                               bCountEmptyAsMatch                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UGameplayTagAssetInterface::HasAllMatchingGameplayTags(const struct FGameplayTagContainer& TagContainer, bool bCountEmptyAsMatch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayTags.GameplayTagAssetInterface.HasAllMatchingGameplayTags");
		
		UGameplayTagAssetInterface_HasAllMatchingGameplayTags_Params params {};
		params.TagContainer = TagContainer;
		params.bCountEmptyAsMatch = bCountEmptyAsMatch;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02220120
	 * 		Name   -> Function GameplayTags.GameplayTagAssetInterface.GetOwnedGameplayTags
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FGameplayTagContainer                       TagContainer                                               (Parm, OutParm)
	 */
	void UGameplayTagAssetInterface::GetOwnedGameplayTags(struct FGameplayTagContainer* TagContainer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayTags.GameplayTagAssetInterface.GetOwnedGameplayTags");
		
		UGameplayTagAssetInterface_GetOwnedGameplayTags_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TagContainer != nullptr)
			*TagContainer = params.TagContainer;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameplayTagAssetInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayTagAssetInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayTags.GameplayTagAssetInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02220800
	 * 		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGameplayTag                                Value                                                      (Parm)
	 */
	struct FGameplayTag UBlueprintGameplayTagLibrary::STATIC_MakeLiteralGameplayTag(const struct FGameplayTag& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag");
		
		UBlueprintGameplayTagLibrary_MakeLiteralGameplayTag_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02220690
	 * 		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGameplayTagQuery                           TagQuery                                                   (Parm)
	 */
	struct FGameplayTagQuery UBlueprintGameplayTagLibrary::STATIC_MakeGameplayTagQuery(const struct FGameplayTagQuery& TagQuery)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery");
		
		UBlueprintGameplayTagLibrary_MakeGameplayTagQuery_Params params {};
		params.TagQuery = TagQuery;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02220330
	 * 		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.HasAllMatchingGameplayTags
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGameplayTagContainer                       OtherContainer                                             (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		bool                                               bCountEmptyAsMatch                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UBlueprintGameplayTagLibrary::STATIC_HasAllMatchingGameplayTags(const struct FGameplayTagContainer& OtherContainer, bool bCountEmptyAsMatch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.HasAllMatchingGameplayTags");
		
		UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Params params {};
		params.OtherContainer = OtherContainer;
		params.bCountEmptyAsMatch = bCountEmptyAsMatch;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02220050
	 * 		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.GetNumGameplayTagsInContainer
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGameplayTagContainer                       TagContainer                                               (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	int32_t UBlueprintGameplayTagLibrary::STATIC_GetNumGameplayTagsInContainer(const struct FGameplayTagContainer& TagContainer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.GetNumGameplayTagsInContainer");
		
		UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer_Params params {};
		params.TagContainer = TagContainer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0221F690
	 * 		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.DoGameplayTagsMatch
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGameplayTag                                TagOne                                                     (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		struct FGameplayTag                                TagTwo                                                     (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		EGameplayTagMatchType                              TagOneMatchType                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EGameplayTagMatchType                              TagTwoMatchType                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBlueprintGameplayTagLibrary::STATIC_DoGameplayTagsMatch(const struct FGameplayTag& TagOne, const struct FGameplayTag& TagTwo, EGameplayTagMatchType TagOneMatchType, EGameplayTagMatchType TagTwoMatchType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.DoGameplayTagsMatch");
		
		UBlueprintGameplayTagLibrary_DoGameplayTagsMatch_Params params {};
		params.TagOne = TagOne;
		params.TagTwo = TagTwo;
		params.TagOneMatchType = TagOneMatchType;
		params.TagTwoMatchType = TagTwoMatchType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0221FEE0
	 * 		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.DoesTagAssetInterfaceHaveTag
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		EGameplayTagMatchType                              ContainerTagsMatchType                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Tag                                                        (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		EGameplayTagMatchType                              TagMatchType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBlueprintGameplayTagLibrary::STATIC_DoesTagAssetInterfaceHaveTag(EGameplayTagMatchType ContainerTagsMatchType, const struct FGameplayTag& Tag, EGameplayTagMatchType TagMatchType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.DoesTagAssetInterfaceHaveTag");
		
		UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Params params {};
		params.ContainerTagsMatchType = ContainerTagsMatchType;
		params.Tag = Tag;
		params.TagMatchType = TagMatchType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0221FD50
	 * 		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchTagQuery
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGameplayTagContainer                       TagContainer                                               (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		struct FGameplayTagQuery                           TagQuery                                                   (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	bool UBlueprintGameplayTagLibrary::STATIC_DoesContainerMatchTagQuery(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagQuery& TagQuery)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchTagQuery");
		
		UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Params params {};
		params.TagContainer = TagContainer;
		params.TagQuery = TagQuery;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0221FB90
	 * 		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchAnyTagsInContainer
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGameplayTagContainer                       TagContainer                                               (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		struct FGameplayTagContainer                       OtherContainer                                             (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		bool                                               bCountEmptyAsMatch                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UBlueprintGameplayTagLibrary::STATIC_DoesContainerMatchAnyTagsInContainer(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagContainer& OtherContainer, bool bCountEmptyAsMatch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchAnyTagsInContainer");
		
		UBlueprintGameplayTagLibrary_DoesContainerMatchAnyTagsInContainer_Params params {};
		params.TagContainer = TagContainer;
		params.OtherContainer = OtherContainer;
		params.bCountEmptyAsMatch = bCountEmptyAsMatch;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0221F9D0
	 * 		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchAllTagsInContainer
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGameplayTagContainer                       TagContainer                                               (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		struct FGameplayTagContainer                       OtherContainer                                             (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		bool                                               bCountEmptyAsMatch                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UBlueprintGameplayTagLibrary::STATIC_DoesContainerMatchAllTagsInContainer(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagContainer& OtherContainer, bool bCountEmptyAsMatch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchAllTagsInContainer");
		
		UBlueprintGameplayTagLibrary_DoesContainerMatchAllTagsInContainer_Params params {};
		params.TagContainer = TagContainer;
		params.OtherContainer = OtherContainer;
		params.bCountEmptyAsMatch = bCountEmptyAsMatch;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0221F820
	 * 		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerHaveTag
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGameplayTagContainer                       TagContainer                                               (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		EGameplayTagMatchType                              ContainerTagsMatchType                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Tag                                                        (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		EGameplayTagMatchType                              TagMatchType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBlueprintGameplayTagLibrary::STATIC_DoesContainerHaveTag(const struct FGameplayTagContainer& TagContainer, EGameplayTagMatchType ContainerTagsMatchType, const struct FGameplayTag& Tag, EGameplayTagMatchType TagMatchType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerHaveTag");
		
		UBlueprintGameplayTagLibrary_DoesContainerHaveTag_Params params {};
		params.TagContainer = TagContainer;
		params.ContainerTagsMatchType = ContainerTagsMatchType;
		params.Tag = Tag;
		params.TagMatchType = TagMatchType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0221F520
	 * 		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.AppendGameplayTagContainers
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGameplayTagContainer                       InTagContainer                                             (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		struct FGameplayTagContainer                       InOutTagContainer                                          (Parm, OutParm, ReferenceParm)
	 */
	bool UBlueprintGameplayTagLibrary::STATIC_AppendGameplayTagContainers(const struct FGameplayTagContainer& InTagContainer, struct FGameplayTagContainer* InOutTagContainer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.AppendGameplayTagContainers");
		
		UBlueprintGameplayTagLibrary_AppendGameplayTagContainers_Params params {};
		params.InTagContainer = InTagContainer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InOutTagContainer != nullptr)
			*InOutTagContainer = params.InOutTagContainer;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlueprintGameplayTagLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlueprintGameplayTagLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayTags.BlueprintGameplayTagLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02220890
	 * 		Name   -> Function GameplayTags.GameplayTagsManager.RequestGameplayTag
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        TagName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ErrorIfNotFound                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FGameplayTag UGameplayTagsManager::RequestGameplayTag(const class FName& TagName, bool ErrorIfNotFound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayTags.GameplayTagsManager.RequestGameplayTag");
		
		UGameplayTagsManager_RequestGameplayTag_Params params {};
		params.TagName = TagName;
		params.ErrorIfNotFound = ErrorIfNotFound;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameplayTagsManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayTagsManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayTags.GameplayTagsManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameplayTagsSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayTagsSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayTags.GameplayTagsSettings");
		return ptr;
	}

}


