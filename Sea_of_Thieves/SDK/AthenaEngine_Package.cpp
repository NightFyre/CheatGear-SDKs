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
	 * 		RVA    -> 0x03149950
	 * 		Name   -> Function AthenaEngine.ForceFeedbackCondition.CanPlayForceFeedback
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AActor*                                      InOwner                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UForceFeedbackCondition::CanPlayForceFeedback(class AActor* InOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaEngine.ForceFeedbackCondition.CanPlayForceFeedback");
		
		UForceFeedbackCondition_CanPlayForceFeedback_Params params {};
		params.InOwner = InOwner;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UForceFeedbackCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UForceFeedbackCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaEngine.ForceFeedbackCondition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAthenaEngineInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAthenaEngineInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaEngine.AthenaEngineInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBoxedRpcDispatcherInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBoxedRpcDispatcherInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaEngine.BoxedRpcDispatcherInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03149E50
	 * 		Name   -> Function AthenaEngine.BoxedRpcDispatcherComponent.Server_SendRpc
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		struct FSerialisedRpc                              Event                                                      (ConstParm, Parm, ReferenceParm)
	 */
	void UBoxedRpcDispatcherComponent::Server_SendRpc(const struct FSerialisedRpc& Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaEngine.BoxedRpcDispatcherComponent.Server_SendRpc");
		
		UBoxedRpcDispatcherComponent_Server_SendRpc_Params params {};
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03149D20
	 * 		Name   -> Function AthenaEngine.BoxedRpcDispatcherComponent.NetMulticastExcludeServer_SendRpc
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Protected)
	 * Parameters:
	 * 		struct FSerialisedRpc                              Event                                                      (ConstParm, Parm, ReferenceParm)
	 */
	void UBoxedRpcDispatcherComponent::NetMulticastExcludeServer_SendRpc(const struct FSerialisedRpc& Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaEngine.BoxedRpcDispatcherComponent.NetMulticastExcludeServer_SendRpc");
		
		UBoxedRpcDispatcherComponent_NetMulticastExcludeServer_SendRpc_Params params {};
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03149A30
	 * 		Name   -> Function AthenaEngine.BoxedRpcDispatcherComponent.Client_SendRpc
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient)
	 * Parameters:
	 * 		struct FSerialisedRpc                              Event                                                      (ConstParm, Parm, ReferenceParm)
	 */
	void UBoxedRpcDispatcherComponent::Client_SendRpc(const struct FSerialisedRpc& Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaEngine.BoxedRpcDispatcherComponent.Client_SendRpc");
		
		UBoxedRpcDispatcherComponent_Client_SendRpc_Params params {};
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBoxedRpcDispatcherComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBoxedRpcDispatcherComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaEngine.BoxedRpcDispatcherComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03149AD0
	 * 		Name   -> Function AthenaEngine.DynamicColourPointLightComponent.DeactivateLight
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Blend                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDynamicColourPointLightComponent::DeactivateLight(bool Blend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaEngine.DynamicColourPointLightComponent.DeactivateLight");
		
		UDynamicColourPointLightComponent_DeactivateLight_Params params {};
		params.Blend = Blend;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03149890
	 * 		Name   -> Function AthenaEngine.DynamicColourPointLightComponent.ActivateLight
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Blend                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDynamicColourPointLightComponent::ActivateLight(bool Blend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaEngine.DynamicColourPointLightComponent.ActivateLight");
		
		UDynamicColourPointLightComponent_ActivateLight_Params params {};
		params.Blend = Blend;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDynamicColourPointLightComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDynamicColourPointLightComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaEngine.DynamicColourPointLightComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEmptyObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEmptyObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaEngine.EmptyObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameInstanceSessionIdProviderInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameInstanceSessionIdProviderInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaEngine.GameInstanceSessionIdProviderInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNestedWorldRootDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNestedWorldRootDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaEngine.NestedWorldRootDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnlinePlayerPermissionsRetrieverInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlinePlayerPermissionsRetrieverInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaEngine.OnlinePlayerPermissionsRetrieverInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPersistentAssetCollectionDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPersistentAssetCollectionDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaEngine.PersistentAssetCollectionDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03149F80
	 * 		Name   -> Function AthenaEngine.PlayModeHelpers.SetPlayModeVariantOverride
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		EPlayModeVariant                                   NewPlayModeVariantOverride                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayModeHelpers::STATIC_SetPlayModeVariantOverride(EPlayModeVariant NewPlayModeVariantOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaEngine.PlayModeHelpers.SetPlayModeVariantOverride");
		
		UPlayModeHelpers_SetPlayModeVariantOverride_Params params {};
		params.NewPlayModeVariantOverride = NewPlayModeVariantOverride;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03149F10
	 * 		Name   -> Function AthenaEngine.PlayModeHelpers.SetPlayModeOverride
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		EPlayMode                                          NewPlayModeOverride                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayModeHelpers::STATIC_SetPlayModeOverride(EPlayMode NewPlayModeOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaEngine.PlayModeHelpers.SetPlayModeOverride");
		
		UPlayModeHelpers_SetPlayModeOverride_Params params {};
		params.NewPlayModeOverride = NewPlayModeOverride;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03149BE0
	 * 		Name   -> Function AthenaEngine.PlayModeHelpers.GetPlayModeVariant
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	EPlayModeVariant UPlayModeHelpers::STATIC_GetPlayModeVariant(class UObject* WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaEngine.PlayModeHelpers.GetPlayModeVariant");
		
		UPlayModeHelpers_GetPlayModeVariant_Params params {};
		params.WorldContext = WorldContext;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03149B60
	 * 		Name   -> Function AthenaEngine.PlayModeHelpers.GetPlayMode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	EPlayMode UPlayModeHelpers::STATIC_GetPlayMode(class UObject* WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaEngine.PlayModeHelpers.GetPlayMode");
		
		UPlayModeHelpers_GetPlayMode_Params params {};
		params.WorldContext = WorldContext;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03149A10
	 * 		Name   -> Function AthenaEngine.PlayModeHelpers.ClearPlayModeVariantOverride
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UPlayModeHelpers::STATIC_ClearPlayModeVariantOverride()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaEngine.PlayModeHelpers.ClearPlayModeVariantOverride");
		
		UPlayModeHelpers_ClearPlayModeVariantOverride_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031499F0
	 * 		Name   -> Function AthenaEngine.PlayModeHelpers.ClearPlayModeOverride
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UPlayModeHelpers::STATIC_ClearPlayModeOverride()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaEngine.PlayModeHelpers.ClearPlayModeOverride");
		
		UPlayModeHelpers_ClearPlayModeOverride_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayModeHelpers.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayModeHelpers::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaEngine.PlayModeHelpers");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayModeInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayModeInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaEngine.PlayModeInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimitiveCollisionExtentAdjustOverTimeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimitiveCollisionExtentAdjustOverTimeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaEngine.PrimitiveCollisionExtentAdjustOverTimeComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBoxCollisionExtentAdjustOverTimeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBoxCollisionExtentAdjustOverTimeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaEngine.BoxCollisionExtentAdjustOverTimeComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USphereCollisionExtentAdjustOverTimeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USphereCollisionExtentAdjustOverTimeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaEngine.SphereCollisionExtentAdjustOverTimeComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UResourceProviderInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UResourceProviderInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaEngine.ResourceProviderInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0314A020
	 * 		Name   -> Function AthenaEngine.RotateMeshToActorComponent.SnapMeshToLookAtActor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void URotateMeshToActorComponent::SnapMeshToLookAtActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaEngine.RotateMeshToActorComponent.SnapMeshToLookAtActor");
		
		URotateMeshToActorComponent_SnapMeshToLookAtActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03149C60
	 * 		Name   -> Function AthenaEngine.RotateMeshToActorComponent.Initialise
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMeshComponent*                              InMeshToRotate                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      InActorToRotateTo                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URotateMeshToActorComponent::Initialise(class UMeshComponent* InMeshToRotate, class AActor* InActorToRotateTo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaEngine.RotateMeshToActorComponent.Initialise");
		
		URotateMeshToActorComponent_Initialise_Params params {};
		params.InMeshToRotate = InMeshToRotate;
		params.InActorToRotateTo = InActorToRotateTo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URotateMeshToActorComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URotateMeshToActorComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaEngine.RotateMeshToActorComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URotateMeshToLocalPlayerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URotateMeshToLocalPlayerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaEngine.RotateMeshToLocalPlayerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UServicesStampIdInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UServicesStampIdInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaEngine.ServicesStampIdInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USkeletalMeshAggregateTickComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkeletalMeshAggregateTickComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaEngine.SkeletalMeshAggregateTickComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStringToAssetClassMap.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStringToAssetClassMap::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaEngine.StringToAssetClassMap");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USyncedRandomRetrievalInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USyncedRandomRetrievalInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaEngine.SyncedRandomRetrievalInterface");
		return ptr;
	}

}


