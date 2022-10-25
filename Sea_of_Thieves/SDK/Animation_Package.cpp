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
	 * 		Name   -> PredefinedFunction UCharacterAnimationInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharacterAnimationInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.CharacterAnimationInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimationData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimationData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.AnimationData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimationServerData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimationServerData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.AnimationServerData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAnimationInstanceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAnimationInstanceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.AIAnimationInstanceInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimationDataConsumerInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimationDataConsumerInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.AnimationDataConsumerInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03236E40
	 * 		Name   -> Function Animation.AnimationDataFunctionLib.UnwrapAnimDataEntryStruct
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FAnimDataEntryStructWrapper                 Wrapper                                                    (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		class UScriptStruct*                               DestinationStruct                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGenericStruct                              Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UAnimationDataFunctionLib::STATIC_UnwrapAnimDataEntryStruct(const struct FAnimDataEntryStructWrapper& Wrapper, class UScriptStruct* DestinationStruct, struct FGenericStruct* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animation.AnimationDataFunctionLib.UnwrapAnimDataEntryStruct");
		
		UAnimationDataFunctionLib_UnwrapAnimDataEntryStruct_Params params {};
		params.Wrapper = Wrapper;
		params.DestinationStruct = DestinationStruct;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03235CD0
	 * 		Name   -> Function Animation.AnimationDataFunctionLib.MakeAnimationData
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UClass*                                      Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	class UAnimationData* UAnimationDataFunctionLib::STATIC_MakeAnimationData(class UClass* Class)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animation.AnimationDataFunctionLib.MakeAnimationData");
		
		UAnimationDataFunctionLib_MakeAnimationData_Params params {};
		params.Class = Class;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03235340
	 * 		Name   -> Function Animation.AnimationDataFunctionLib.GetAnimDataEntryStructAsStructWrapper
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UAnimationData*                              AnimationDataObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UScriptStruct*                               TheClass                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FAnimDataEntryStructWrapper UAnimationDataFunctionLib::STATIC_GetAnimDataEntryStructAsStructWrapper(class UAnimationData* AnimationDataObject, class UScriptStruct* TheClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animation.AnimationDataFunctionLib.GetAnimDataEntryStructAsStructWrapper");
		
		UAnimationDataFunctionLib_GetAnimDataEntryStructAsStructWrapper_Params params {};
		params.AnimationDataObject = AnimationDataObject;
		params.TheClass = TheClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03234F80
	 * 		Name   -> Function Animation.AnimationDataFunctionLib.CheckAnimDataClassTypeForDuplicateAnimDataEntryStructs
	 * 		Flags  -> (Final, Native, Static, Public)
	 * Parameters:
	 * 		class UClass*                                      InClass                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UAnimationDataFunctionLib::STATIC_CheckAnimDataClassTypeForDuplicateAnimDataEntryStructs(class UClass* InClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animation.AnimationDataFunctionLib.CheckAnimDataClassTypeForDuplicateAnimDataEntryStructs");
		
		UAnimationDataFunctionLib_CheckAnimDataClassTypeForDuplicateAnimDataEntryStructs_Params params {};
		params.InClass = InClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimationDataFunctionLib.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimationDataFunctionLib::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.AnimationDataFunctionLib");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimationDataOverriderInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimationDataOverriderInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.AnimationDataOverriderInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimationDataStoreId.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimationDataStoreId::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.AnimationDataStoreId");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimationDataStoreOverrideId.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimationDataStoreOverrideId::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.AnimationDataStoreOverrideId");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimationDataStore.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimationDataStore::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.AnimationDataStore");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03235C40
	 * 		Name   -> Function Animation.AnimationDataStoreAsset.LookupAnimationData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      AnimDataId                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	class UAnimationData* UAnimationDataStoreAsset::LookupAnimationData(class UClass* AnimDataId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animation.AnimationDataStoreAsset.LookupAnimationData");
		
		UAnimationDataStoreAsset_LookupAnimationData_Params params {};
		params.AnimDataId = AnimDataId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03235450
	 * 		Name   -> Function Animation.AnimationDataStoreAsset.GetAnimationDataClass
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAnimationDataStoreAssetEntry               Entry                                                      (Parm, OutParm, ReferenceParm)
	 */
	class UClass* UAnimationDataStoreAsset::STATIC_GetAnimationDataClass(struct FAnimationDataStoreAssetEntry* Entry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animation.AnimationDataStoreAsset.GetAnimationDataClass");
		
		UAnimationDataStoreAsset_GetAnimationDataClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Entry != nullptr)
			*Entry = params.Entry;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimationDataStoreAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimationDataStoreAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.AnimationDataStoreAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimationDataStoreWeakReferenceAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimationDataStoreWeakReferenceAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.AnimationDataStoreWeakReferenceAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimationDataStoreLoaderInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimationDataStoreLoaderInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.AnimationDataStoreLoaderInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimationDataStoreComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimationDataStoreComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.AnimationDataStoreComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x032354F0
	 * 		Name   -> Function Animation.AnimationDataStoreInterface.GetAnimationDataForId
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UClass*                                      AnimDataId                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	class UAnimationData* UAnimationDataStoreInterface::GetAnimationDataForId(class UClass* AnimDataId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animation.AnimationDataStoreInterface.GetAnimationDataForId");
		
		UAnimationDataStoreInterface_GetAnimationDataForId_Params params {};
		params.AnimDataId = AnimDataId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimationDataStoreInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimationDataStoreInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.AnimationDataStoreInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimationEditorSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimationEditorSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.AnimationEditorSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimationLookAtInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimationLookAtInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.AnimationLookAtInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimationStateId.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimationStateId::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.AnimationStateId");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_DestroyAllCosmeticItems.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_DestroyAllCosmeticItems::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.AnimNotify_DestroyAllCosmeticItems");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_DestroyCosmeticItem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_DestroyCosmeticItem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.AnimNotify_DestroyCosmeticItem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_DetachAndMaintainWorldPosition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_DetachAndMaintainWorldPosition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.AnimNotify_DetachAndMaintainWorldPosition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_PlayAnimationForCosmetic.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_PlayAnimationForCosmetic::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.AnimNotify_PlayAnimationForCosmetic");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_PlayMontage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_PlayMontage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.AnimNotify_PlayMontage");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_SetCosmeticItemVisibility.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_SetCosmeticItemVisibility::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.AnimNotify_SetCosmeticItemVisibility");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_SetLookAtEnabled.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_SetLookAtEnabled::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.AnimNotify_SetLookAtEnabled");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_SpawnCosmeticItem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_SpawnCosmeticItem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.AnimNotify_SpawnCosmeticItem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_StateComplete.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_StateComplete::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.AnimNotify_StateComplete");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_SwitchCosmeticItemAttachment.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_SwitchCosmeticItemAttachment::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.AnimNotify_SwitchCosmeticItemAttachment");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_ToggleIK.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_ToggleIK::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.AnimNotify_ToggleIK");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotifyCondition_FeatureConfigValidation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotifyCondition_FeatureConfigValidation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.AnimNotifyCondition_FeatureConfigValidation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotifyState_HideMeshByBoneForDuration.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotifyState_HideMeshByBoneForDuration::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.AnimNotifyState_HideMeshByBoneForDuration");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotifyState_PropagateCurveValuesToMaterials.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotifyState_PropagateCurveValuesToMaterials::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.AnimNotifyState_PropagateCurveValuesToMaterials");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotifyState_SetLookAtDisabledForDuration.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotifyState_SetLookAtDisabledForDuration::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.AnimNotifyState_SetLookAtDisabledForDuration");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotifyState_SetLookAtEnabledForDuration.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotifyState_SetLookAtEnabledForDuration::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.AnimNotifyState_SetLookAtEnabledForDuration");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotifyState_SetMeshInvisibleForDuration.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotifyState_SetMeshInvisibleForDuration::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.AnimNotifyState_SetMeshInvisibleForDuration");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotifyState_SpawnCosmeticItem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotifyState_SpawnCosmeticItem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.AnimNotifyState_SpawnCosmeticItem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotifyState_ToggleIK.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotifyState_ToggleIK::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.AnimNotifyState_ToggleIK");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAthenaAnimationControllableSocketsInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAthenaAnimationControllableSocketsInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.AthenaAnimationControllableSocketsInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCharacterIKInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharacterIKInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.CharacterIKInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPreviewCharacterAnimationInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPreviewCharacterAnimationInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.PreviewCharacterAnimationInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClientSkeletalMeshComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClientSkeletalMeshComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.ClientSkeletalMeshComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACosmeticItemActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACosmeticItemActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.CosmeticItemActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCosmeticItemAnimationInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCosmeticItemAnimationInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.CosmeticItemAnimationInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03236A60
	 * 		Name   -> Function Animation.CosmeticItemAnimationComponent.SpawnCosmeticItem
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      MeshComponent                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      ObjectToSpawn                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EWieldAnimationLocation                            SpawnLocation                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCosmeticItemAnimationSetDataAsset*          CosmeticData                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               SpawnHidden                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UCosmeticItemAnimationComponent::SpawnCosmeticItem(class USkeletalMeshComponent* MeshComponent, class UClass* ObjectToSpawn, EWieldAnimationLocation SpawnLocation, class UCosmeticItemAnimationSetDataAsset* CosmeticData, bool SpawnHidden)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animation.CosmeticItemAnimationComponent.SpawnCosmeticItem");
		
		UCosmeticItemAnimationComponent_SpawnCosmeticItem_Params params {};
		params.MeshComponent = MeshComponent;
		params.ObjectToSpawn = ObjectToSpawn;
		params.SpawnLocation = SpawnLocation;
		params.CosmeticData = CosmeticData;
		params.SpawnHidden = SpawnHidden;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03235250
	 * 		Name   -> Function Animation.CosmeticItemAnimationComponent.DestroyAllCosmeticItems
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UCosmeticItemAnimationComponent::DestroyAllCosmeticItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animation.CosmeticItemAnimationComponent.DestroyAllCosmeticItems");
		
		UCosmeticItemAnimationComponent_DestroyAllCosmeticItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCosmeticItemAnimationComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCosmeticItemAnimationComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.CosmeticItemAnimationComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCosmeticItemAnimationDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCosmeticItemAnimationDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.CosmeticItemAnimationDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCosmeticItemAnimationDataConsumerInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCosmeticItemAnimationDataConsumerInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.CosmeticItemAnimationDataConsumerInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03236E20
	 * 		Name   -> Function Animation.CosmeticItemAnimationInstance.UnregisterEvents
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UCosmeticItemAnimationInstance::UnregisterEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animation.CosmeticItemAnimationInstance.UnregisterEvents");
		
		UCosmeticItemAnimationInstance_UnregisterEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCosmeticItemAnimationInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCosmeticItemAnimationInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.CosmeticItemAnimationInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCosmeticItemAnimationSetDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCosmeticItemAnimationSetDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.CosmeticItemAnimationSetDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomAnimationHandlerInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomAnimationHandlerInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.CustomAnimationHandlerInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomAnimationInstanceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomAnimationInstanceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.CustomAnimationInstanceInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomAnimationInstanceProviderInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomAnimationInstanceProviderInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.CustomAnimationInstanceProviderInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomAnimationMontageInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomAnimationMontageInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.CustomAnimationMontageInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03235ED0
	 * 		Name   -> Function Animation.CustomAnimationMontageComponent.OnRep_ReplicatedData
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FCustomAnimationMontageComponentReplicatedData PriorData                                                  (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UCustomAnimationMontageComponent::OnRep_ReplicatedData(const struct FCustomAnimationMontageComponentReplicatedData& PriorData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animation.CustomAnimationMontageComponent.OnRep_ReplicatedData");
		
		UCustomAnimationMontageComponent_OnRep_ReplicatedData_Params params {};
		params.PriorData = PriorData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomAnimationMontageComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomAnimationMontageComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.CustomAnimationMontageComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomAnimationMontageDefinitionDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomAnimationMontageDefinitionDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.CustomAnimationMontageDefinitionDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomAnimationMontageDefinitionListingDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomAnimationMontageDefinitionListingDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.CustomAnimationMontageDefinitionListingDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomAnimationMontageIdListingDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomAnimationMontageIdListingDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.CustomAnimationMontageIdListingDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDockingAnimationInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDockingAnimationInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.DockingAnimationInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEmotePropDataInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEmotePropDataInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.EmotePropDataInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIndexedPlayableMontagesInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIndexedPlayableMontagesInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.IndexedPlayableMontagesInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03236960
	 * 		Name   -> Function Animation.LimbIKFunctionLibrary.SetTranslationStrength
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimbIK                                     LimbIK                                                     (Parm, OutParm, ReferenceParm)
	 * 		float                                              InRotationStrength                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULimbIKFunctionLibrary::STATIC_SetTranslationStrength(struct FLimbIK* LimbIK, float InRotationStrength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.SetTranslationStrength");
		
		ULimbIKFunctionLibrary_SetTranslationStrength_Params params {};
		params.InRotationStrength = InRotationStrength;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LimbIK != nullptr)
			*LimbIK = params.LimbIK;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03236810
	 * 		Name   -> Function Animation.LimbIKFunctionLibrary.SetTransform
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimbIK                                     LimbIK                                                     (Parm, OutParm, ReferenceParm)
	 * 		struct FTransform                                  InTransform                                                (ConstParm, Parm, IsPlainOldData, NoDestructor)
	 */
	void ULimbIKFunctionLibrary::STATIC_SetTransform(struct FLimbIK* LimbIK, const struct FTransform& InTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.SetTransform");
		
		ULimbIKFunctionLibrary_SetTransform_Params params {};
		params.InTransform = InTransform;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LimbIK != nullptr)
			*LimbIK = params.LimbIK;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03236710
	 * 		Name   -> Function Animation.LimbIKFunctionLibrary.SetRotationStrength
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimbIK                                     LimbIK                                                     (Parm, OutParm, ReferenceParm)
	 * 		float                                              InRotationStrength                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULimbIKFunctionLibrary::STATIC_SetRotationStrength(struct FLimbIK* LimbIK, float InRotationStrength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.SetRotationStrength");
		
		ULimbIKFunctionLibrary_SetRotationStrength_Params params {};
		params.InRotationStrength = InRotationStrength;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LimbIK != nullptr)
			*LimbIK = params.LimbIK;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03236600
	 * 		Name   -> Function Animation.LimbIKFunctionLibrary.SetParentBone
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimbIK                                     LimbIK                                                     (Parm, OutParm, ReferenceParm)
	 * 		class FName                                        Bone                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULimbIKFunctionLibrary::STATIC_SetParentBone(struct FLimbIK* LimbIK, const class FName& Bone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.SetParentBone");
		
		ULimbIKFunctionLibrary_SetParentBone_Params params {};
		params.Bone = Bone;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LimbIK != nullptr)
			*LimbIK = params.LimbIK;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03236500
	 * 		Name   -> Function Animation.LimbIKFunctionLibrary.SetIKSpace
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimbIK                                     LimbIK                                                     (Parm, OutParm, ReferenceParm)
	 * 		ELimbIKSpace                                       IKSpace                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULimbIKFunctionLibrary::STATIC_SetIKSpace(struct FLimbIK* LimbIK, ELimbIKSpace IKSpace)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.SetIKSpace");
		
		ULimbIKFunctionLibrary_SetIKSpace_Params params {};
		params.IKSpace = IKSpace;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LimbIK != nullptr)
			*LimbIK = params.LimbIK;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03236370
	 * 		Name   -> Function Animation.LimbIKFunctionLibrary.SetEnabled
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimbIK                                     LimbIK                                                     (Parm, OutParm, ReferenceParm)
	 * 		bool                                               Enabled                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ELimbIKSpace                                       IKSpace                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        ParentBone                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULimbIKFunctionLibrary::STATIC_SetEnabled(struct FLimbIK* LimbIK, bool Enabled, ELimbIKSpace IKSpace, const class FName& ParentBone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.SetEnabled");
		
		ULimbIKFunctionLibrary_SetEnabled_Params params {};
		params.Enabled = Enabled;
		params.IKSpace = IKSpace;
		params.ParentBone = ParentBone;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LimbIK != nullptr)
			*LimbIK = params.LimbIK;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03236270
	 * 		Name   -> Function Animation.LimbIKFunctionLibrary.SetBlendOutSpeed
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimbIK                                     LimbIK                                                     (Parm, OutParm, ReferenceParm)
	 * 		float                                              BlendOutSpeed                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULimbIKFunctionLibrary::STATIC_SetBlendOutSpeed(struct FLimbIK* LimbIK, float BlendOutSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.SetBlendOutSpeed");
		
		ULimbIKFunctionLibrary_SetBlendOutSpeed_Params params {};
		params.BlendOutSpeed = BlendOutSpeed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LimbIK != nullptr)
			*LimbIK = params.LimbIK;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03236170
	 * 		Name   -> Function Animation.LimbIKFunctionLibrary.SetBlendInSpeed
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimbIK                                     LimbIK                                                     (Parm, OutParm, ReferenceParm)
	 * 		float                                              BlendInSpeed                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULimbIKFunctionLibrary::STATIC_SetBlendInSpeed(struct FLimbIK* LimbIK, float BlendInSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.SetBlendInSpeed");
		
		ULimbIKFunctionLibrary_SetBlendInSpeed_Params params {};
		params.BlendInSpeed = BlendInSpeed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LimbIK != nullptr)
			*LimbIK = params.LimbIK;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03236070
	 * 		Name   -> Function Animation.LimbIKFunctionLibrary.SetAnimationOverride
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimbIK                                     LimbIK                                                     (Parm, OutParm, ReferenceParm)
	 * 		bool                                               AnimationOverride                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULimbIKFunctionLibrary::STATIC_SetAnimationOverride(struct FLimbIK* LimbIK, bool AnimationOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.SetAnimationOverride");
		
		ULimbIKFunctionLibrary_SetAnimationOverride_Params params {};
		params.AnimationOverride = AnimationOverride;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LimbIK != nullptr)
			*LimbIK = params.LimbIK;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03235F70
	 * 		Name   -> Function Animation.LimbIKFunctionLibrary.SetAlphaTarget
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimbIK                                     LimbIK                                                     (Parm, OutParm, ReferenceParm)
	 * 		float                                              AlphaTarget                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULimbIKFunctionLibrary::STATIC_SetAlphaTarget(struct FLimbIK* LimbIK, float AlphaTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.SetAlphaTarget");
		
		ULimbIKFunctionLibrary_SetAlphaTarget_Params params {};
		params.AlphaTarget = AlphaTarget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LimbIK != nullptr)
			*LimbIK = params.LimbIK;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03235B80
	 * 		Name   -> Function Animation.LimbIKFunctionLibrary.IsEnabled
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FLimbIK                                     LimbIK                                                     (Parm, OutParm, ReferenceParm)
	 */
	bool ULimbIKFunctionLibrary::STATIC_IsEnabled(struct FLimbIK* LimbIK)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.IsEnabled");
		
		ULimbIKFunctionLibrary_IsEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LimbIK != nullptr)
			*LimbIK = params.LimbIK;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03235A40
	 * 		Name   -> Function Animation.LimbIKFunctionLibrary.GetTranslationStrength
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FLimbIK                                     LimbIK                                                     (Parm, OutParm, ReferenceParm)
	 */
	float ULimbIKFunctionLibrary::STATIC_GetTranslationStrength(struct FLimbIK* LimbIK)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.GetTranslationStrength");
		
		ULimbIKFunctionLibrary_GetTranslationStrength_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LimbIK != nullptr)
			*LimbIK = params.LimbIK;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03235960
	 * 		Name   -> Function Animation.LimbIKFunctionLibrary.GetTransform
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FLimbIK                                     LimbIK                                                     (Parm, OutParm, ReferenceParm)
	 */
	struct FTransform ULimbIKFunctionLibrary::STATIC_GetTransform(struct FLimbIK* LimbIK)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.GetTransform");
		
		ULimbIKFunctionLibrary_GetTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LimbIK != nullptr)
			*LimbIK = params.LimbIK;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x032358A0
	 * 		Name   -> Function Animation.LimbIKFunctionLibrary.GetRotationStrength
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FLimbIK                                     LimbIK                                                     (Parm, OutParm, ReferenceParm)
	 */
	float ULimbIKFunctionLibrary::STATIC_GetRotationStrength(struct FLimbIK* LimbIK)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.GetRotationStrength");
		
		ULimbIKFunctionLibrary_GetRotationStrength_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LimbIK != nullptr)
			*LimbIK = params.LimbIK;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x032357D0
	 * 		Name   -> Function Animation.LimbIKFunctionLibrary.GetParentBone
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FLimbIK                                     LimbIK                                                     (Parm, OutParm, ReferenceParm)
	 */
	class FName ULimbIKFunctionLibrary::STATIC_GetParentBone(struct FLimbIK* LimbIK)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.GetParentBone");
		
		ULimbIKFunctionLibrary_GetParentBone_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LimbIK != nullptr)
			*LimbIK = params.LimbIK;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03235710
	 * 		Name   -> Function Animation.LimbIKFunctionLibrary.GetIKSpace
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FLimbIK                                     LimbIK                                                     (Parm, OutParm, ReferenceParm)
	 */
	ELimbIKSpace ULimbIKFunctionLibrary::STATIC_GetIKSpace(struct FLimbIK* LimbIK)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.GetIKSpace");
		
		ULimbIKFunctionLibrary_GetIKSpace_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LimbIK != nullptr)
			*LimbIK = params.LimbIK;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03235650
	 * 		Name   -> Function Animation.LimbIKFunctionLibrary.GetCurrentAlpha
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FLimbIK                                     LimbIK                                                     (Parm, OutParm, ReferenceParm)
	 */
	float ULimbIKFunctionLibrary::STATIC_GetCurrentAlpha(struct FLimbIK* LimbIK)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.GetCurrentAlpha");
		
		ULimbIKFunctionLibrary_GetCurrentAlpha_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LimbIK != nullptr)
			*LimbIK = params.LimbIK;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03235590
	 * 		Name   -> Function Animation.LimbIKFunctionLibrary.GetAnimationOverride
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FLimbIK                                     LimbIK                                                     (Parm, OutParm, ReferenceParm)
	 */
	bool ULimbIKFunctionLibrary::STATIC_GetAnimationOverride(struct FLimbIK* LimbIK)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.GetAnimationOverride");
		
		ULimbIKFunctionLibrary_GetAnimationOverride_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LimbIK != nullptr)
			*LimbIK = params.LimbIK;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03235280
	 * 		Name   -> Function Animation.LimbIKFunctionLibrary.GetAlphaTarget
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FLimbIK                                     LimbIK                                                     (Parm, OutParm, ReferenceParm)
	 */
	float ULimbIKFunctionLibrary::STATIC_GetAlphaTarget(struct FLimbIK* LimbIK)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.GetAlphaTarget");
		
		ULimbIKFunctionLibrary_GetAlphaTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LimbIK != nullptr)
			*LimbIK = params.LimbIK;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03234FF0
	 * 		Name   -> Function Animation.LimbIKFunctionLibrary.ConvertBoolToAlpha
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		bool                                               InBool                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float ULimbIKFunctionLibrary::STATIC_ConvertBoolToAlpha(bool InBool)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.ConvertBoolToAlpha");
		
		ULimbIKFunctionLibrary_ConvertBoolToAlpha_Params params {};
		params.InBool = InBool;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULimbIKFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULimbIKFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.LimbIKFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULoadableAnimationsInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoadableAnimationsInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.LoadableAnimationsInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03237300
	 * 		Name   -> Function Animation.LocomotionFunctionLib.UpdateControllerSpineRotation
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FRotator                                    CharacterRotation                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		float                                              AngleSpeedMax                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              AngleSpeedMin                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float ULocomotionFunctionLib::STATIC_UpdateControllerSpineRotation(const struct FRotator& CharacterRotation, float AngleSpeedMax, float AngleSpeedMin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animation.LocomotionFunctionLib.UpdateControllerSpineRotation");
		
		ULocomotionFunctionLib_UpdateControllerSpineRotation_Params params {};
		params.CharacterRotation = CharacterRotation;
		params.AngleSpeedMax = AngleSpeedMax;
		params.AngleSpeedMin = AngleSpeedMin;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x032370D0
	 * 		Name   -> Function Animation.LocomotionFunctionLib.UpdateCharacterSpeed
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Velocity                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		float                                              CurrentMaxWalkSpeed                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              WantedMovementSpeed                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              BaseMaxWalkSpeed                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              SpeedBlendValue                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsSwimming                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DeadZone                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FActorVelocityData ULocomotionFunctionLib::STATIC_UpdateCharacterSpeed(const struct FVector& Velocity, float CurrentMaxWalkSpeed, float WantedMovementSpeed, float BaseMaxWalkSpeed, float SpeedBlendValue, bool IsSwimming, float DeadZone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animation.LocomotionFunctionLib.UpdateCharacterSpeed");
		
		ULocomotionFunctionLib_UpdateCharacterSpeed_Params params {};
		params.Velocity = Velocity;
		params.CurrentMaxWalkSpeed = CurrentMaxWalkSpeed;
		params.WantedMovementSpeed = WantedMovementSpeed;
		params.BaseMaxWalkSpeed = BaseMaxWalkSpeed;
		params.SpeedBlendValue = SpeedBlendValue;
		params.IsSwimming = IsSwimming;
		params.DeadZone = DeadZone;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03236F70
	 * 		Name   -> Function Animation.LocomotionFunctionLib.UpdateCalculateRateAndCurrentYaw
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FRotator                                    CharacterRotation                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		float                                              LargeRate                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CurrentCharacterYaw                                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DeltaSeconds                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float ULocomotionFunctionLib::STATIC_UpdateCalculateRateAndCurrentYaw(const struct FRotator& CharacterRotation, float LargeRate, float* CurrentCharacterYaw, float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animation.LocomotionFunctionLib.UpdateCalculateRateAndCurrentYaw");
		
		ULocomotionFunctionLib_UpdateCalculateRateAndCurrentYaw_Params params {};
		params.CharacterRotation = CharacterRotation;
		params.LargeRate = LargeRate;
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentCharacterYaw != nullptr)
			*CurrentCharacterYaw = params.CurrentCharacterYaw;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULocomotionFunctionLib.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULocomotionFunctionLib::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.LocomotionFunctionLib");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNetworkSyncedAnimationInstanceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNetworkSyncedAnimationInstanceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.NetworkSyncedAnimationInstanceInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03235EB0
	 * 		Name   -> Function Animation.NetworkSyncedAnimationComponent.OnRep_PlayingAnimationIndex
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UNetworkSyncedAnimationComponent::OnRep_PlayingAnimationIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animation.NetworkSyncedAnimationComponent.OnRep_PlayingAnimationIndex");
		
		UNetworkSyncedAnimationComponent_OnRep_PlayingAnimationIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03235E90
	 * 		Name   -> Function Animation.NetworkSyncedAnimationComponent.OnRep_AnimationProgression
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UNetworkSyncedAnimationComponent::OnRep_AnimationProgression()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animation.NetworkSyncedAnimationComponent.OnRep_AnimationProgression");
		
		UNetworkSyncedAnimationComponent_OnRep_AnimationProgression_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNetworkSyncedAnimationComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNetworkSyncedAnimationComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.NetworkSyncedAnimationComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URemoteAnimPlayableInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URemoteAnimPlayableInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.RemoteAnimPlayableInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UServerAnimationDataStoreInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UServerAnimationDataStoreInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.ServerAnimationDataStoreInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USyncGroupAnimMetaData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USyncGroupAnimMetaData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.SyncGroupAnimMetaData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTransformBlendCurveComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTransformBlendCurveComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.TransformBlendCurveComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03236BF0
	 * 		Name   -> Function Animation.TurningFunctionLib.TurningUpdate
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CharacterMoving                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               DeadZone                                                   (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		float                                              TurnRate                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DelayedCounter                                             (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CounterMax                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               TurningLeft                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UTurningFunctionLib::STATIC_TurningUpdate(float DeltaSeconds, bool CharacterMoving, bool* DeadZone, float TurnRate, float* DelayedCounter, float CounterMax, bool* TurningLeft)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animation.TurningFunctionLib.TurningUpdate");
		
		UTurningFunctionLib_TurningUpdate_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		params.CharacterMoving = CharacterMoving;
		params.TurnRate = TurnRate;
		params.CounterMax = CounterMax;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DeadZone != nullptr)
			*DeadZone = params.DeadZone;
		if (DelayedCounter != nullptr)
			*DelayedCounter = params.DelayedCounter;
		if (TurningLeft != nullptr)
			*TurningLeft = params.TurningLeft;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTurningFunctionLib.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTurningFunctionLib::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.TurningFunctionLib");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03235D90
	 * 		Name   -> Function Animation.WaitForAnimationStateEntryProxy.OnEnteredState
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class FName                                        path                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWaitForAnimationStateEntryProxy::OnEnteredState(const class FName& path)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animation.WaitForAnimationStateEntryProxy.OnEnteredState");
		
		UWaitForAnimationStateEntryProxy_OnEnteredState_Params params {};
		params.path = path;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03235D50
	 * 		Name   -> Function Animation.WaitForAnimationStateEntryProxy.OnAnimationUpdated
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UWaitForAnimationStateEntryProxy::OnAnimationUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animation.WaitForAnimationStateEntryProxy.OnAnimationUpdated");
		
		UWaitForAnimationStateEntryProxy_OnAnimationUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x032350B0
	 * 		Name   -> Function Animation.WaitForAnimationStateEntryProxy.CreateProxy
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UAnimInstance*                               AnimInstance                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        TargetPath                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWaitForAnimationStateEntryProxy* UWaitForAnimationStateEntryProxy::STATIC_CreateProxy(class UAnimInstance* AnimInstance, const class FName& TargetPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animation.WaitForAnimationStateEntryProxy.CreateProxy");
		
		UWaitForAnimationStateEntryProxy_CreateProxy_Params params {};
		params.AnimInstance = AnimInstance;
		params.TargetPath = TargetPath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaitForAnimationStateEntryProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaitForAnimationStateEntryProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.WaitForAnimationStateEntryProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03235E10
	 * 		Name   -> Function Animation.WaitForAnimationStateExitProxy.OnExitState
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class FName                                        path                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWaitForAnimationStateExitProxy::OnExitState(const class FName& path)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animation.WaitForAnimationStateExitProxy.OnExitState");
		
		UWaitForAnimationStateExitProxy_OnExitState_Params params {};
		params.path = path;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03235D70
	 * 		Name   -> Function Animation.WaitForAnimationStateExitProxy.OnAnimationUpdated
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UWaitForAnimationStateExitProxy::OnAnimationUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animation.WaitForAnimationStateExitProxy.OnAnimationUpdated");
		
		UWaitForAnimationStateExitProxy_OnAnimationUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03235180
	 * 		Name   -> Function Animation.WaitForAnimationStateExitProxy.CreateProxy
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UAnimInstance*                               AnimInstance                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        TargetPath                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWaitForAnimationStateExitProxy* UWaitForAnimationStateExitProxy::STATIC_CreateProxy(class UAnimInstance* AnimInstance, const class FName& TargetPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animation.WaitForAnimationStateExitProxy.CreateProxy");
		
		UWaitForAnimationStateExitProxy_CreateProxy_Params params {};
		params.AnimInstance = AnimInstance;
		params.TargetPath = TargetPath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaitForAnimationStateExitProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaitForAnimationStateExitProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.WaitForAnimationStateExitProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeightedAnimationLoadOnDemandDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeightedAnimationLoadOnDemandDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.WeightedAnimationLoadOnDemandDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03235B00
	 * 		Name   -> Function Animation.WeightedAnimSequenceLoadOnDemand.Initialise
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UWeightedAnimationLoadOnDemandDataAsset*     InAnimationData                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeightedAnimSequenceLoadOnDemand::Initialise(class UWeightedAnimationLoadOnDemandDataAsset* InAnimationData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animation.WeightedAnimSequenceLoadOnDemand.Initialise");
		
		UWeightedAnimSequenceLoadOnDemand_Initialise_Params params {};
		params.InAnimationData = InAnimationData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03235080
	 * 		Name   -> Function Animation.WeightedAnimSequenceLoadOnDemand.CreateNewWeightedAnimSequenceLoadOnDemand
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class UWeightedAnimSequenceLoadOnDemand* UWeightedAnimSequenceLoadOnDemand::STATIC_CreateNewWeightedAnimSequenceLoadOnDemand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animation.WeightedAnimSequenceLoadOnDemand.CreateNewWeightedAnimSequenceLoadOnDemand");
		
		UWeightedAnimSequenceLoadOnDemand_CreateNewWeightedAnimSequenceLoadOnDemand_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeightedAnimSequenceLoadOnDemand.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeightedAnimSequenceLoadOnDemand::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.WeightedAnimSequenceLoadOnDemand");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x035D2270
	 * 		Name   -> Function Animation.DockableInterface.HandleDestroy
	 * 		Flags  -> (Native, Public)
	 */
	void UDockableInterface::HandleDestroy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animation.DockableInterface.HandleDestroy");
		
		UDockableInterface_HandleDestroy_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x035D2170
	 * 		Name   -> Function Animation.DockableInterface.GetDockableInfo
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	struct FDockableInfo UDockableInterface::GetDockableInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animation.DockableInterface.GetDockableInfo");
		
		UDockableInterface_GetDockableInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDockableInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDockableInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Animation.DockableInterface");
		return ptr;
	}

}


