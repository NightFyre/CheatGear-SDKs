/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * 		Name   -> PredefinedFunction UAnimNotify_DialogEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_DialogEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxDialog.AnimNotify_DialogEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCharacterEchoDataBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharacterEchoDataBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxDialog.CharacterEchoDataBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxDialog.DialogActionBlueprintImplementation.Execute
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FDialogContext                              Context                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UDialogActionBlueprintImplementation::Execute(const struct FDialogContext& Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxDialog.DialogActionBlueprintImplementation.Execute");
		
		UDialogActionBlueprintImplementation_Execute_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDialogActionBlueprintImplementation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDialogActionBlueprintImplementation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxDialog.DialogActionBlueprintImplementation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxDialogDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxDialogDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxDialog.GbxDialogDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDialogActionFunction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDialogActionFunction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxDialog.DialogActionFunction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDialogAudioComponentProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDialogAudioComponentProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxDialog.DialogAudioComponentProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDialogAudioComponentProvider_OcclusionResistant.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDialogAudioComponentProvider_OcclusionResistant::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxDialog.DialogAudioComponentProvider_OcclusionResistant");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDialogBehaviorPreset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDialogBehaviorPreset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxDialog.DialogBehaviorPreset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDialogBlackboard.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDialogBlackboard::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxDialog.DialogBlackboard");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UQuietTimePredicate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQuietTimePredicate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxDialog.QuietTimePredicate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UQuietTimePredicate_BlockStuff.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQuietTimePredicate_BlockStuff::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxDialog.QuietTimePredicate_BlockStuff");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDialogControlSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDialogControlSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxDialog.DialogControlSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDialogEnumType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDialogEnumType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxDialog.DialogEnumType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDialogEnumValue.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDialogEnumValue::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxDialog.DialogEnumValue");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005FFF70
	 * 		Name   -> Function GbxDialog.DialogEnumValueInterface.GetEnumValue
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class UDialogEnumType*                             EnumType                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDialogEnumValue* UDialogEnumValueInterface::GetEnumValue(class UDialogEnumType* EnumType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxDialog.DialogEnumValueInterface.GetEnumValue");
		
		UDialogEnumValueInterface_GetEnumValue_Params params {};
		params.EnumType = EnumType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDialogEnumValueInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDialogEnumValueInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxDialog.DialogEnumValueInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDialogEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDialogEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxDialog.DialogEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDialogEventList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDialogEventList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxDialog.DialogEventList");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDialogLineData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDialogLineData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxDialog.DialogLineData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDialogLookupSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDialogLookupSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxDialog.DialogLookupSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDialogNameTagMoodData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDialogNameTagMoodData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxDialog.DialogNameTagMoodData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDialogNameTag.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDialogNameTag::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxDialog.DialogNameTag");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDialogParameter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDialogParameter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxDialog.DialogParameter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00603E30
	 * 		Name   -> Function GbxDialog.DialogPerformanceData.PlayWwiseEventPreview
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UDialogPerformanceData::PlayWwiseEventPreview()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxDialog.DialogPerformanceData.PlayWwiseEventPreview");
		
		UDialogPerformanceData_PlayWwiseEventPreview_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDialogPerformanceData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDialogPerformanceData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxDialog.DialogPerformanceData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDialogScriptData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDialogScriptData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxDialog.DialogScriptData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDialogSelectorFunction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDialogSelectorFunction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxDialog.DialogSelectorFunction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxDialog.DialogSelectorImplementation.PerformTest
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FDialogContext                              Context                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		EDialogDecisionTestResult                          Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDialogSelectorImplementation::PerformTest(const struct FDialogContext& Context, EDialogDecisionTestResult* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxDialog.DialogSelectorImplementation.PerformTest");
		
		UDialogSelectorImplementation_PerformTest_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDialogSelectorImplementation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDialogSelectorImplementation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxDialog.DialogSelectorImplementation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDialogSelectorImplementation_CheckDistance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDialogSelectorImplementation_CheckDistance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxDialog.DialogSelectorImplementation_CheckDistance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDialogSelectorImplementation_CheckNameTag.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDialogSelectorImplementation_CheckNameTag::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxDialog.DialogSelectorImplementation_CheckNameTag");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDialogSelectorImplementation_Equality.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDialogSelectorImplementation_Equality::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxDialog.DialogSelectorImplementation_Equality");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDialogSelectorImplementation_IsPreferredPlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDialogSelectorImplementation_IsPreferredPlayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxDialog.DialogSelectorImplementation_IsPreferredPlayer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00602520
	 * 		Name   -> Function GbxDialog.DialogSpeakerInterface.CanPerformThisDialog
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UDialogPerformanceData*                      Performance                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDialogSpeakerInterface::CanPerformThisDialog(class UDialogPerformanceData* Performance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxDialog.DialogSpeakerInterface.CanPerformThisDialog");
		
		UDialogSpeakerInterface_CanPerformThisDialog_Params params {};
		params.Performance = Performance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDialogSpeakerInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDialogSpeakerInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxDialog.DialogSpeakerInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDialogStyle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDialogStyle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxDialog.DialogStyle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDialogSystemEchoManagerInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDialogSystemEchoManagerInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxDialog.DialogSystemEchoManagerInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005D70B0
	 * 		Name   -> Function GbxDialog.DialogTimeSlotData.PreviewAudio
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UDialogTimeSlotData::PreviewAudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxDialog.DialogTimeSlotData.PreviewAudio");
		
		UDialogTimeSlotData_PreviewAudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDialogTimeSlotData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDialogTimeSlotData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxDialog.DialogTimeSlotData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameDialogSystemCustomizationInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameDialogSystemCustomizationInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxDialog.GameDialogSystemCustomizationInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006048F0
	 * 		Name   -> Function GbxDialog.GbxDialogBlueprintLibrary.WaitForDialog
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FDialogConversation                         Conversation                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGbxDialogBlueprintLibrary::STATIC_WaitForDialog(const struct FDialogConversation& Conversation, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogBlueprintLibrary.WaitForDialog");
		
		UGbxDialogBlueprintLibrary_WaitForDialog_Params params {};
		params.Conversation = Conversation;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00604790
	 * 		Name   -> Function GbxDialog.GbxDialogBlueprintLibrary.TestDialogSelector
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDialogSelectorFunction*                     Selector                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDialogContext                              InputParameters                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UGbxDialogBlueprintLibrary::STATIC_TestDialogSelector(class UObject* WorldContextObject, class UDialogSelectorFunction* Selector, const struct FDialogContext& InputParameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogBlueprintLibrary.TestDialogSelector");
		
		UGbxDialogBlueprintLibrary_TestDialogSelector_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Selector = Selector;
		params.InputParameters = InputParameters;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006046D0
	 * 		Name   -> Function GbxDialog.GbxDialogBlueprintLibrary.StopActiveDialog
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIncludeDeathDialog                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxDialogBlueprintLibrary::STATIC_StopActiveDialog(class UObject* Target, bool bIncludeDeathDialog)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogBlueprintLibrary.StopActiveDialog");
		
		UGbxDialogBlueprintLibrary_StopActiveDialog_Params params {};
		params.Target = Target;
		params.bIncludeDeathDialog = bIncludeDeathDialog;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00604590
	 * 		Name   -> Function GbxDialog.GbxDialogBlueprintLibrary.SetNextDialogPlayerHints
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDialogNameTag*                              NameTag                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxDialogBlueprintLibrary::STATIC_SetNextDialogPlayerHints(class UObject* WorldContextObject, class AActor* Actor, class UDialogNameTag* NameTag, const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogBlueprintLibrary.SetNextDialogPlayerHints");
		
		UGbxDialogBlueprintLibrary_SetNextDialogPlayerHints_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Actor = Actor;
		params.NameTag = NameTag;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00604460
	 * 		Name   -> Function GbxDialog.GbxDialogBlueprintLibrary.SetDialogGameCustomizationMetadata
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SequenceID                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Cookie                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxDialogBlueprintLibrary::STATIC_SetDialogGameCustomizationMetadata(class UObject* WorldContextObject, int32_t SequenceID, class UObject* Object, int32_t Cookie)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogBlueprintLibrary.SetDialogGameCustomizationMetadata");
		
		UGbxDialogBlueprintLibrary_SetDialogGameCustomizationMetadata_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.SequenceID = SequenceID;
		params.Object = Object;
		params.Cookie = Cookie;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00604310
	 * 		Name   -> Function GbxDialog.GbxDialogBlueprintLibrary.SetDialogFlag
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDialogEnumValue*                            DialogEnumValue                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxDialogBlueprintLibrary::STATIC_SetDialogFlag(class UObject* WorldContextObject, class UDialogEnumValue* DialogEnumValue, bool Value, float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogBlueprintLibrary.SetDialogFlag");
		
		UGbxDialogBlueprintLibrary_SetDialogFlag_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DialogEnumValue = DialogEnumValue;
		params.Value = Value;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00604120
	 * 		Name   -> Function GbxDialog.GbxDialogBlueprintLibrary.SetDialogContextParameter
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FDialogContext                              Context                                                    (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UDialogParameter*                            Parameter                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ObjectValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FloatValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bBoolValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxDialogBlueprintLibrary::STATIC_SetDialogContextParameter(struct FDialogContext* Context, class UDialogParameter* Parameter, class UObject* ObjectValue, float FloatValue, bool bBoolValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogBlueprintLibrary.SetDialogContextParameter");
		
		UGbxDialogBlueprintLibrary_SetDialogContextParameter_Params params {};
		params.Parameter = Parameter;
		params.ObjectValue = ObjectValue;
		params.FloatValue = FloatValue;
		params.bBoolValue = bBoolValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Context != nullptr)
			*Context = params.Context;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00603FD0
	 * 		Name   -> Function GbxDialog.GbxDialogBlueprintLibrary.SetConversationPlayerHints
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FDialogConversation                         Conversation                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDialogNameTag*                              NameTag                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxDialogBlueprintLibrary::STATIC_SetConversationPlayerHints(const struct FDialogConversation& Conversation, class AActor* Actor, class UDialogNameTag* NameTag, const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogBlueprintLibrary.SetConversationPlayerHints");
		
		UGbxDialogBlueprintLibrary_SetConversationPlayerHints_Params params {};
		params.Conversation = Conversation;
		params.Actor = Actor;
		params.NameTag = NameTag;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00603E50
	 * 		Name   -> Function GbxDialog.GbxDialogBlueprintLibrary.ResolveDialogTimeSlotReference
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FDialogTimeSlotReference                    Reference                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		class UDialogTimeSlotData*                         TimeSlot                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDialogScriptData*                           Script                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxDialogBlueprintLibrary::STATIC_ResolveDialogTimeSlotReference(const struct FDialogTimeSlotReference& Reference, class UDialogTimeSlotData** TimeSlot, class UDialogScriptData** Script)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogBlueprintLibrary.ResolveDialogTimeSlotReference");
		
		UGbxDialogBlueprintLibrary_ResolveDialogTimeSlotReference_Params params {};
		params.Reference = Reference;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TimeSlot != nullptr)
			*TimeSlot = params.TimeSlot;
		if (Script != nullptr)
			*Script = params.Script;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00603C70
	 * 		Name   -> Function GbxDialog.GbxDialogBlueprintLibrary.PlaceRegionalDialogHold
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        HoldName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UQuietTimePredicate*                         Rules                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxDialogBlueprintLibrary::STATIC_PlaceRegionalDialogHold(class UObject* WorldContextObject, const class FName& HoldName, const struct FVector& Location, float Radius, class UQuietTimePredicate* Rules, float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogBlueprintLibrary.PlaceRegionalDialogHold");
		
		UGbxDialogBlueprintLibrary_PlaceRegionalDialogHold_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.HoldName = HoldName;
		params.Location = Location;
		params.Radius = Radius;
		params.Rules = Rules;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00603B30
	 * 		Name   -> Function GbxDialog.GbxDialogBlueprintLibrary.PlaceGlobalDialogHold
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        HoldName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UQuietTimePredicate*                         Rules                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxDialogBlueprintLibrary::STATIC_PlaceGlobalDialogHold(class UObject* WorldContextObject, const class FName& HoldName, class UQuietTimePredicate* Rules, float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogBlueprintLibrary.PlaceGlobalDialogHold");
		
		UGbxDialogBlueprintLibrary_PlaceGlobalDialogHold_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.HoldName = HoldName;
		params.Rules = Rules;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006039B0
	 * 		Name   -> Function GbxDialog.GbxDialogBlueprintLibrary.NewDialogConversation
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      KeyActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDialogNameTag*                              KeySpeakerName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     KeyLocation                                                (Parm, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FDialogConversation UGbxDialogBlueprintLibrary::STATIC_NewDialogConversation(class UObject* WorldContextObject, class AActor* KeyActor, class UDialogNameTag* KeySpeakerName, const struct FVector& KeyLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogBlueprintLibrary.NewDialogConversation");
		
		UGbxDialogBlueprintLibrary_NewDialogConversation_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.KeyActor = KeyActor;
		params.KeySpeakerName = KeySpeakerName;
		params.KeyLocation = KeyLocation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006038C0
	 * 		Name   -> Function GbxDialog.GbxDialogBlueprintLibrary.NewDialogContext
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	struct FDialogContext UGbxDialogBlueprintLibrary::STATIC_NewDialogContext()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogBlueprintLibrary.NewDialogContext");
		
		UGbxDialogBlueprintLibrary_NewDialogContext_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006037B0
	 * 		Name   -> Function GbxDialog.GbxDialogBlueprintLibrary.InterruptDialogInRadius
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Origin                                                     (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxDialogBlueprintLibrary::STATIC_InterruptDialogInRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogBlueprintLibrary.InterruptDialogInRadius");
		
		UGbxDialogBlueprintLibrary_InterruptDialogInRadius_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Origin = Origin;
		params.Radius = Radius;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00603720
	 * 		Name   -> Function GbxDialog.GbxDialogBlueprintLibrary.InterruptConversation
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FDialogConversation                         Conversation                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxDialogBlueprintLibrary::STATIC_InterruptConversation(const struct FDialogConversation& Conversation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogBlueprintLibrary.InterruptConversation");
		
		UGbxDialogBlueprintLibrary_InterruptConversation_Params params {};
		params.Conversation = Conversation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00603660
	 * 		Name   -> Function GbxDialog.GbxDialogBlueprintLibrary.GetDialogFlag
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDialogEnumValue*                            DialogEnumValue                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGbxDialogBlueprintLibrary::STATIC_GetDialogFlag(class UObject* WorldContextObject, class UDialogEnumValue* DialogEnumValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogBlueprintLibrary.GetDialogFlag");
		
		UGbxDialogBlueprintLibrary_GetDialogFlag_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DialogEnumValue = DialogEnumValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006034F0
	 * 		Name   -> Function GbxDialog.GbxDialogBlueprintLibrary.GetDialogContextParameterSummary
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FDialogContext                              Context                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	TArray<class FString> UGbxDialogBlueprintLibrary::STATIC_GetDialogContextParameterSummary(const struct FDialogContext& Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogBlueprintLibrary.GetDialogContextParameterSummary");
		
		UGbxDialogBlueprintLibrary_GetDialogContextParameterSummary_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006032C0
	 * 		Name   -> Function GbxDialog.GbxDialogBlueprintLibrary.GetDialogContextParameter
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FDialogContext                              Context                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UDialogParameter*                            Parameter                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ObjectValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FloatValue                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bBoolValue                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxDialogBlueprintLibrary::STATIC_GetDialogContextParameter(const struct FDialogContext& Context, class UDialogParameter* Parameter, class UObject** ObjectValue, float* FloatValue, bool* bBoolValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogBlueprintLibrary.GetDialogContextParameter");
		
		UGbxDialogBlueprintLibrary_GetDialogContextParameter_Params params {};
		params.Context = Context;
		params.Parameter = Parameter;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ObjectValue != nullptr)
			*ObjectValue = params.ObjectValue;
		if (FloatValue != nullptr)
			*FloatValue = params.FloatValue;
		if (bBoolValue != nullptr)
			*bBoolValue = params.bBoolValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00603220
	 * 		Name   -> Function GbxDialog.GbxDialogBlueprintLibrary.GetConversationStatus
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FDialogConversation                         Conversation                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EGbxDialogConversationStatus UGbxDialogBlueprintLibrary::STATIC_GetConversationStatus(const struct FDialogConversation& Conversation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogBlueprintLibrary.GetConversationStatus");
		
		UGbxDialogBlueprintLibrary_GetConversationStatus_Params params {};
		params.Conversation = Conversation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00602F70
	 * 		Name   -> Function GbxDialog.GbxDialogBlueprintLibrary.FinishTriggerDialog
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDialogEvent*                                Event                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDialogContext                              Context                                                    (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FDialogConversation                         ContinueConversation                                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDialogConversation                         Conversation                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartDelay                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SequenceID                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGbxDialogBlueprintLibrary::STATIC_FinishTriggerDialog(class UObject* WorldContextObject, class UDialogEvent* Event, struct FDialogContext* Context, const struct FDialogConversation& ContinueConversation, struct FDialogConversation* Conversation, float StartDelay, int32_t* SequenceID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogBlueprintLibrary.FinishTriggerDialog");
		
		UGbxDialogBlueprintLibrary_FinishTriggerDialog_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Event = Event;
		params.ContinueConversation = ContinueConversation;
		params.StartDelay = StartDelay;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Context != nullptr)
			*Context = params.Context;
		if (Conversation != nullptr)
			*Conversation = params.Conversation;
		if (SequenceID != nullptr)
			*SequenceID = params.SequenceID;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00602BE0
	 * 		Name   -> Function GbxDialog.GbxDialogBlueprintLibrary.FinishSpeak
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDialogTimeSlotReference                    TimeSlotRef                                                (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		class UGbxDialogComponent*                         OptionalSpeaker                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDialogContext                              Context                                                    (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FDialogConversation                         ContinueConversation                                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDialogConversation                         Conversation                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartDelay                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SequenceID                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OverrideMaxWait                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGbxDialogBlueprintLibrary::STATIC_FinishSpeak(class UObject* WorldContextObject, const struct FDialogTimeSlotReference& TimeSlotRef, class UGbxDialogComponent* OptionalSpeaker, struct FDialogContext* Context, const struct FDialogConversation& ContinueConversation, struct FDialogConversation* Conversation, float StartDelay, int32_t* SequenceID, float OverrideMaxWait)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogBlueprintLibrary.FinishSpeak");
		
		UGbxDialogBlueprintLibrary_FinishSpeak_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.TimeSlotRef = TimeSlotRef;
		params.OptionalSpeaker = OptionalSpeaker;
		params.ContinueConversation = ContinueConversation;
		params.StartDelay = StartDelay;
		params.OverrideMaxWait = OverrideMaxWait;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Context != nullptr)
			*Context = params.Context;
		if (Conversation != nullptr)
			*Conversation = params.Conversation;
		if (SequenceID != nullptr)
			*SequenceID = params.SequenceID;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00602A90
	 * 		Name   -> Function GbxDialog.GbxDialogBlueprintLibrary.FindOrCreateNamedSpeaker
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UDialogNameTag*                              NameTag                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIncludePureEchoSpeakers                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCreateIfNotFound                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGbxDialogComponent*                         Speaker                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGbxDialogBlueprintLibrary::STATIC_FindOrCreateNamedSpeaker(class UDialogNameTag* NameTag, bool bIncludePureEchoSpeakers, bool bCreateIfNotFound, class UGbxDialogComponent** Speaker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogBlueprintLibrary.FindOrCreateNamedSpeaker");
		
		UGbxDialogBlueprintLibrary_FindOrCreateNamedSpeaker_Params params {};
		params.NameTag = NameTag;
		params.bIncludePureEchoSpeakers = bIncludePureEchoSpeakers;
		params.bCreateIfNotFound = bCreateIfNotFound;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Speaker != nullptr)
			*Speaker = params.Speaker;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00602860
	 * 		Name   -> Function GbxDialog.GbxDialogBlueprintLibrary.EnqueueDialogPerformance
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGbxDialogComponent*                         Speaker                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDialogPerformanceData*                      Performance                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartDelay                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDialogConversation                         ContinueConversation                                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDialogConversation                         Conversation                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            DialogPlaybackSequence                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGbxDialogBlueprintLibrary::STATIC_EnqueueDialogPerformance(class UObject* WorldContextObject, class UGbxDialogComponent* Speaker, class UDialogPerformanceData* Performance, float StartDelay, const struct FDialogConversation& ContinueConversation, struct FDialogConversation* Conversation, int32_t* DialogPlaybackSequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogBlueprintLibrary.EnqueueDialogPerformance");
		
		UGbxDialogBlueprintLibrary_EnqueueDialogPerformance_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Speaker = Speaker;
		params.Performance = Performance;
		params.StartDelay = StartDelay;
		params.ContinueConversation = ContinueConversation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Conversation != nullptr)
			*Conversation = params.Conversation;
		if (DialogPlaybackSequence != nullptr)
			*DialogPlaybackSequence = params.DialogPlaybackSequence;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006026F0
	 * 		Name   -> Function GbxDialog.GbxDialogBlueprintLibrary.DeactivateDialogScript
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDialogScriptData*                           Script                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxDialogBlueprintLibrary::STATIC_DeactivateDialogScript(class UObject* WorldContextObject, class UDialogScriptData* Script)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogBlueprintLibrary.DeactivateDialogScript");
		
		UGbxDialogBlueprintLibrary_DeactivateDialogScript_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Script = Script;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00602670
	 * 		Name   -> Function GbxDialog.GbxDialogBlueprintLibrary.ConvertBoolToDialogTestResult
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EDialogDecisionTestResult UGbxDialogBlueprintLibrary::STATIC_ConvertBoolToDialogTestResult(bool bValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogBlueprintLibrary.ConvertBoolToDialogTestResult");
		
		UGbxDialogBlueprintLibrary_ConvertBoolToDialogTestResult_Params params {};
		params.bValue = bValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006025C0
	 * 		Name   -> Function GbxDialog.GbxDialogBlueprintLibrary.CancelDialogBlockingHold
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        HoldName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxDialogBlueprintLibrary::STATIC_CancelDialogBlockingHold(class UObject* WorldContextObject, const class FName& HoldName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogBlueprintLibrary.CancelDialogBlockingHold");
		
		UGbxDialogBlueprintLibrary_CancelDialogBlockingHold_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.HoldName = HoldName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00602400
	 * 		Name   -> Function GbxDialog.GbxDialogBlueprintLibrary.BindToDialogSequenceFinished
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PlayingSequenceID                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGbxDialogBlueprintLibrary::STATIC_BindToDialogSequenceFinished(class UObject* WorldContextObject, int32_t PlayingSequenceID, const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogBlueprintLibrary.BindToDialogSequenceFinished");
		
		UGbxDialogBlueprintLibrary_BindToDialogSequenceFinished_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PlayingSequenceID = PlayingSequenceID;
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006022B0
	 * 		Name   -> Function GbxDialog.GbxDialogBlueprintLibrary.BindToDialogNotify
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PlayingSequenceID                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        NotifyName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGbxDialogBlueprintLibrary::STATIC_BindToDialogNotify(class UObject* WorldContextObject, int32_t PlayingSequenceID, const class FName& NotifyName, const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogBlueprintLibrary.BindToDialogNotify");
		
		UGbxDialogBlueprintLibrary_BindToDialogNotify_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PlayingSequenceID = PlayingSequenceID;
		params.NotifyName = NotifyName;
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00602140
	 * 		Name   -> Function GbxDialog.GbxDialogBlueprintLibrary.ActivateDialogScript
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDialogScriptData*                           Script                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxDialogBlueprintLibrary::STATIC_ActivateDialogScript(class UObject* WorldContextObject, class UDialogScriptData* Script)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogBlueprintLibrary.ActivateDialogScript");
		
		UGbxDialogBlueprintLibrary_ActivateDialogScript_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Script = Script;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxDialogBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxDialogBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxDialog.GbxDialogBlueprintLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00607BA0
	 * 		Name   -> Function GbxDialog.GbxDialogComponent.StopPerformance
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public)
	 * Parameters:
	 * 		int32_t                                            DialogThreadID                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIncludeDeathDialog                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxDialogComponent::StopPerformance(int32_t DialogThreadID, bool bIncludeDeathDialog)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogComponent.StopPerformance");
		
		UGbxDialogComponent_StopPerformance_Params params {};
		params.DialogThreadID = DialogThreadID;
		params.bIncludeDeathDialog = bIncludeDeathDialog;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00607AB0
	 * 		Name   -> Function GbxDialog.GbxDialogComponent.StartPerformance
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public)
	 * Parameters:
	 * 		int32_t                                            DialogThreadID                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            DialogSequenceID                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDialogPerformanceData*                      Performance                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxDialogComponent::StartPerformance(int32_t DialogThreadID, int32_t DialogSequenceID, class UDialogPerformanceData* Performance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogComponent.StartPerformance");
		
		UGbxDialogComponent_StartPerformance_Params params {};
		params.DialogThreadID = DialogThreadID;
		params.DialogSequenceID = DialogSequenceID;
		params.Performance = Performance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00607A90
	 * 		Name   -> Function GbxDialog.GbxDialogComponent.OnRep_InitialDialogInProgress
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UGbxDialogComponent::OnRep_InitialDialogInProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogComponent.OnRep_InitialDialogInProgress");
		
		UGbxDialogComponent_OnRep_InitialDialogInProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00607960
	 * 		Name   -> Function GbxDialog.GbxDialogComponent.IsSpeakerClearToPlayDialog
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UDialogStyle*                                ProposedStyle                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bProposingEcho                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDialogConversation                         ProposedConversation                                       (Parm, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGbxDialogComponent::IsSpeakerClearToPlayDialog(class UDialogStyle* ProposedStyle, bool bProposingEcho, const struct FDialogConversation& ProposedConversation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogComponent.IsSpeakerClearToPlayDialog");
		
		UGbxDialogComponent_IsSpeakerClearToPlayDialog_Params params {};
		params.ProposedStyle = ProposedStyle;
		params.bProposingEcho = bProposingEcho;
		params.ProposedConversation = ProposedConversation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006078D0
	 * 		Name   -> Function GbxDialog.GbxDialogComponent.IsSpeakerActive
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               bIncludePendingVO                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGbxDialogComponent::IsSpeakerActive(bool bIncludePendingVO)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogComponent.IsSpeakerActive");
		
		UGbxDialogComponent_IsSpeakerActive_Params params {};
		params.bIncludePendingVO = bIncludePendingVO;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxDialogComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxDialogComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxDialog.GbxDialogComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxDialogSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxDialogSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxDialog.GbxDialogSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006077F0
	 * 		Name   -> Function GbxDialog.GlobalDialogParametersProviderInterface.InitDialogContext
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
	 * Parameters:
	 * 		struct FDialogContext                              Parameters                                                 (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGlobalDialogParametersProviderInterface::InitDialogContext(struct FDialogContext* Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxDialog.GlobalDialogParametersProviderInterface.InitDialogContext");
		
		UGlobalDialogParametersProviderInterface_InitDialogContext_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Parameters != nullptr)
			*Parameters = params.Parameters;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGlobalDialogParametersProviderInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGlobalDialogParametersProviderInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxDialog.GlobalDialogParametersProviderInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneDialogTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneDialogTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxDialog.MovieSceneDialogTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneDialogSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneDialogSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxDialog.MovieSceneDialogSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPerformanceEchoDataBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPerformanceEchoDataBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxDialog.PerformanceEchoDataBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APureEchoSpeakerHost.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APureEchoSpeakerHost::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxDialog.PureEchoSpeakerHost");
		return ptr;
	}

}


