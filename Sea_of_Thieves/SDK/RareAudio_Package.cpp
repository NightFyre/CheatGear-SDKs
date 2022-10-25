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
	 * 		Name   -> PredefinedFunction UWwiseEmitterComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWwiseEmitterComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RareAudio.WwiseEmitterComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotifyWwiseEmitterComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotifyWwiseEmitterComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RareAudio.AnimNotifyWwiseEmitterComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_WwiseSound.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_WwiseSound::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RareAudio.AnimNotify_WwiseSound");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_WwiseSoundMeshSwitch.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_WwiseSoundMeshSwitch::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RareAudio.AnimNotify_WwiseSoundMeshSwitch");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotifyState_WwiseSound.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotifyState_WwiseSound::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RareAudio.AnimNotifyState_WwiseSound");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD29C0
	 * 		Name   -> Function RareAudio.AudioEventToComponentMap.ClearMappings
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AAudioEventToComponentMap::ClearMappings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RareAudio.AudioEventToComponentMap.ClearMappings");
		
		AAudioEventToComponentMap_ClearMappings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD2720
	 * 		Name   -> Function RareAudio.AudioEventToComponentMap.AddMappingWithSingleEmitterComponent
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UWwiseEvent*                                 PlayEvent                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWwiseEvent*                                 StopEvent                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWwiseEmitterComponent*                      WwiseEmitterComponent                                      (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWwiseObjectPoolWrapper*                     WwiseEmitterPool                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAudioEventToComponentMap::AddMappingWithSingleEmitterComponent(class UWwiseEvent* PlayEvent, class UWwiseEvent* StopEvent, class UWwiseEmitterComponent** WwiseEmitterComponent, class UWwiseObjectPoolWrapper* WwiseEmitterPool)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RareAudio.AudioEventToComponentMap.AddMappingWithSingleEmitterComponent");
		
		AAudioEventToComponentMap_AddMappingWithSingleEmitterComponent_Params params {};
		params.PlayEvent = PlayEvent;
		params.StopEvent = StopEvent;
		params.WwiseEmitterPool = WwiseEmitterPool;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WwiseEmitterComponent != nullptr)
			*WwiseEmitterComponent = params.WwiseEmitterComponent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD23E0
	 * 		Name   -> Function RareAudio.AudioEventToComponentMap.AddMapping
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UWwiseEvent*                                 PlayEvent                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWwiseEvent*                                 StopEvent                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UWwiseEmitterComponent*>              WwiseEmitterComponents                                     (Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	 * 		class UWwiseObjectPoolWrapper*                     WwiseEmitterPool                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAudioEventToComponentMap::AddMapping(class UWwiseEvent* PlayEvent, class UWwiseEvent* StopEvent, TArray<class UWwiseEmitterComponent*>* WwiseEmitterComponents, class UWwiseObjectPoolWrapper* WwiseEmitterPool)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RareAudio.AudioEventToComponentMap.AddMapping");
		
		AAudioEventToComponentMap_AddMapping_Params params {};
		params.PlayEvent = PlayEvent;
		params.StopEvent = StopEvent;
		params.WwiseEmitterPool = WwiseEmitterPool;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WwiseEmitterComponents != nullptr)
			*WwiseEmitterComponents = params.WwiseEmitterComponents;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAudioEventToComponentMap.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAudioEventToComponentMap::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RareAudio.AudioEventToComponentMap");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD29E0
	 * 		Name   -> Function RareAudio.AudioEventToComponentMapComponent.ClearMappings
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UAudioEventToComponentMapComponent::ClearMappings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RareAudio.AudioEventToComponentMapComponent.ClearMappings");
		
		UAudioEventToComponentMapComponent_ClearMappings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD2870
	 * 		Name   -> Function RareAudio.AudioEventToComponentMapComponent.AddMappingWithSingleEmitterComponent
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UWwiseEvent*                                 PlayEvent                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWwiseEvent*                                 StopEvent                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWwiseEmitterComponent*                      WwiseEmitterComponent                                      (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWwiseObjectPoolWrapper*                     WwiseEmitterPool                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAudioEventToComponentMapComponent::AddMappingWithSingleEmitterComponent(class UWwiseEvent* PlayEvent, class UWwiseEvent* StopEvent, class UWwiseEmitterComponent** WwiseEmitterComponent, class UWwiseObjectPoolWrapper* WwiseEmitterPool)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RareAudio.AudioEventToComponentMapComponent.AddMappingWithSingleEmitterComponent");
		
		UAudioEventToComponentMapComponent_AddMappingWithSingleEmitterComponent_Params params {};
		params.PlayEvent = PlayEvent;
		params.StopEvent = StopEvent;
		params.WwiseEmitterPool = WwiseEmitterPool;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WwiseEmitterComponent != nullptr)
			*WwiseEmitterComponent = params.WwiseEmitterComponent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD2580
	 * 		Name   -> Function RareAudio.AudioEventToComponentMapComponent.AddMapping
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UWwiseEvent*                                 PlayEvent                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWwiseEvent*                                 StopEvent                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UWwiseEmitterComponent*>              WwiseEmitterComponents                                     (Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	 * 		class UWwiseObjectPoolWrapper*                     WwiseEmitterPool                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAudioEventToComponentMapComponent::AddMapping(class UWwiseEvent* PlayEvent, class UWwiseEvent* StopEvent, TArray<class UWwiseEmitterComponent*>* WwiseEmitterComponents, class UWwiseObjectPoolWrapper* WwiseEmitterPool)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RareAudio.AudioEventToComponentMapComponent.AddMapping");
		
		UAudioEventToComponentMapComponent_AddMapping_Params params {};
		params.PlayEvent = PlayEvent;
		params.StopEvent = StopEvent;
		params.WwiseEmitterPool = WwiseEmitterPool;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WwiseEmitterComponents != nullptr)
			*WwiseEmitterComponents = params.WwiseEmitterComponents;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioEventToComponentMapComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioEventToComponentMapComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RareAudio.AudioEventToComponentMapComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD59F0
	 * 		Name   -> Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseStopGlobalEvent
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UWwiseEvent*                                 Event                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              FadeTime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWwiseEmitterBlueprintLibrary::STATIC_WwiseStopGlobalEvent(class UWwiseEvent* Event, float FadeTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseStopGlobalEvent");
		
		UWwiseEmitterBlueprintLibrary_WwiseStopGlobalEvent_Params params {};
		params.Event = Event;
		params.FadeTime = FadeTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD5940
	 * 		Name   -> Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseSetState
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        StateGroup                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        StateValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWwiseEmitterBlueprintLibrary::STATIC_WwiseSetState(const class FName& StateGroup, const class FName& StateValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseSetState");
		
		UWwiseEmitterBlueprintLibrary_WwiseSetState_Params params {};
		params.StateGroup = StateGroup;
		params.StateValue = StateValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD5880
	 * 		Name   -> Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseSetGlobalRTPC
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        RTPCName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RTPCValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWwiseEmitterBlueprintLibrary::STATIC_WwiseSetGlobalRTPC(const class FName& RTPCName, float RTPCValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseSetGlobalRTPC");
		
		UWwiseEmitterBlueprintLibrary_WwiseSetGlobalRTPC_Params params {};
		params.RTPCName = RTPCName;
		params.RTPCValue = RTPCValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD56B0
	 * 		Name   -> Function RareAudio.WwiseEmitterBlueprintLibrary.WwisePostOneShotOnOwner
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWwiseObjectPoolWrapper*                     EmitterPool                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FWwiseEmitterCreationParams                 CreationParams                                             (Parm)
	 * 		struct FVector                                     Offset                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EEmitterRelationship                               Relationship                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWwiseEmitterBlueprintLibrary::STATIC_WwisePostOneShotOnOwner(class UObject* Owner, class UWwiseObjectPoolWrapper* EmitterPool, const struct FWwiseEmitterCreationParams& CreationParams, const struct FVector& Offset, EEmitterRelationship Relationship)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwisePostOneShotOnOwner");
		
		UWwiseEmitterBlueprintLibrary_WwisePostOneShotOnOwner_Params params {};
		params.Owner = Owner;
		params.EmitterPool = EmitterPool;
		params.CreationParams = CreationParams;
		params.Offset = Offset;
		params.Relationship = Relationship;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD5630
	 * 		Name   -> Function RareAudio.WwiseEmitterBlueprintLibrary.WwisePostGlobalEvent
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UWwiseEvent*                                 Event                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t UWwiseEmitterBlueprintLibrary::STATIC_WwisePostGlobalEvent(class UWwiseEvent* Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwisePostGlobalEvent");
		
		UWwiseEmitterBlueprintLibrary_WwisePostGlobalEvent_Params params {};
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD5420
	 * 		Name   -> Function RareAudio.WwiseEmitterBlueprintLibrary.WwisePostEventAtLocation
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FWwiseEmitter                               Emitter                                                    (Parm, OutParm)
	 * 		class UWwiseEvent*                                 Event                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Front                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UWwiseObjectPoolWrapper*                     EmitterPool                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EEmitterRelationship                               Relationship                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t UWwiseEmitterBlueprintLibrary::STATIC_WwisePostEventAtLocation(struct FWwiseEmitter* Emitter, class UWwiseEvent* Event, const struct FVector& Location, const struct FVector& Front, class UWwiseObjectPoolWrapper* EmitterPool, EEmitterRelationship Relationship)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwisePostEventAtLocation");
		
		UWwiseEmitterBlueprintLibrary_WwisePostEventAtLocation_Params params {};
		params.Event = Event;
		params.Location = Location;
		params.Front = Front;
		params.EmitterPool = EmitterPool;
		params.Relationship = Relationship;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Emitter != nullptr)
			*Emitter = params.Emitter;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD53A0
	 * 		Name   -> Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseIsGlobalEvent
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UWwiseEvent*                                 Event                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UWwiseEmitterBlueprintLibrary::STATIC_WwiseIsGlobalEvent(class UWwiseEvent* Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseIsGlobalEvent");
		
		UWwiseEmitterBlueprintLibrary_WwiseIsGlobalEvent_Params params {};
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD5230
	 * 		Name   -> Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseGetListenerInfo
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FWwiseListenerInfo                          InfoOut                                                    (Parm, OutParm)
	 * 		int32_t                                            Viewport                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UWwiseEmitterBlueprintLibrary::STATIC_WwiseGetListenerInfo(struct FWwiseListenerInfo* InfoOut, int32_t Viewport)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseGetListenerInfo");
		
		UWwiseEmitterBlueprintLibrary_WwiseGetListenerInfo_Params params {};
		params.Viewport = Viewport;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InfoOut != nullptr)
			*InfoOut = params.InfoOut;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD4FD0
	 * 		Name   -> Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseGetListenerEmitter
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FWwiseEmitter                               Emitter                                                    (Parm, OutParm)
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ListenerIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Offset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bFollowOrientaion                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UWwiseObjectPoolWrapper*                     EmitterPool                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UWwiseEmitterBlueprintLibrary::STATIC_WwiseGetListenerEmitter(struct FWwiseEmitter* Emitter, class UObject* WorldContextObject, int32_t ListenerIndex, const class FName& Name, const struct FVector& Offset, bool bFollowOrientaion, class UWwiseObjectPoolWrapper* EmitterPool)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseGetListenerEmitter");
		
		UWwiseEmitterBlueprintLibrary_WwiseGetListenerEmitter_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ListenerIndex = ListenerIndex;
		params.Name = Name;
		params.Offset = Offset;
		params.bFollowOrientaion = bFollowOrientaion;
		params.EmitterPool = EmitterPool;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Emitter != nullptr)
			*Emitter = params.Emitter;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD4EF0
	 * 		Name   -> Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseGetGlobalRTPC
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        RTPCName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RTPCValue                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UWwiseEmitterBlueprintLibrary::STATIC_WwiseGetGlobalRTPC(const class FName& RTPCName, float* RTPCValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseGetGlobalRTPC");
		
		UWwiseEmitterBlueprintLibrary_WwiseGetGlobalRTPC_Params params {};
		params.RTPCName = RTPCName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RTPCValue != nullptr)
			*RTPCValue = params.RTPCValue;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD4D50
	 * 		Name   -> Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterWaitToComplete
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FWwiseEmitter                               Emitter                                                    (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            PlayId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm)
	 */
	bool UWwiseEmitterBlueprintLibrary::STATIC_WwiseEmitterWaitToComplete(const struct FWwiseEmitter& Emitter, int32_t PlayId, class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterWaitToComplete");
		
		UWwiseEmitterBlueprintLibrary_WwiseEmitterWaitToComplete_Params params {};
		params.Emitter = Emitter;
		params.PlayId = PlayId;
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD4BF0
	 * 		Name   -> Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterStop
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FWwiseEmitter                               Emitter                                                    (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            PlayId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              FadeTime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UWwiseEmitterBlueprintLibrary::STATIC_WwiseEmitterStop(const struct FWwiseEmitter& Emitter, int32_t PlayId, float FadeTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterStop");
		
		UWwiseEmitterBlueprintLibrary_WwiseEmitterStop_Params params {};
		params.Emitter = Emitter;
		params.PlayId = PlayId;
		params.FadeTime = FadeTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD4A90
	 * 		Name   -> Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetSwitch
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FWwiseEmitter                               Emitter                                                    (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		class FName                                        SwitchGroup                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UWwiseEmitterBlueprintLibrary::STATIC_WwiseEmitterSetSwitch(const struct FWwiseEmitter& Emitter, const class FName& SwitchGroup, const class FName& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetSwitch");
		
		UWwiseEmitterBlueprintLibrary_WwiseEmitterSetSwitch_Params params {};
		params.Emitter = Emitter;
		params.SwitchGroup = SwitchGroup;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD4960
	 * 		Name   -> Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetRTPCOnAll
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FWwiseEmitter>                       Emitters                                                   (ConstParm, Parm, ZeroConstructor)
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UWwiseEmitterBlueprintLibrary::STATIC_WwiseEmitterSetRTPCOnAll(TArray<struct FWwiseEmitter> Emitters, const class FName& Name, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetRTPCOnAll");
		
		UWwiseEmitterBlueprintLibrary_WwiseEmitterSetRTPCOnAll_Params params {};
		params.Emitters = Emitters;
		params.Name = Name;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD4800
	 * 		Name   -> Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetRTPC
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FWwiseEmitter                               Emitter                                                    (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UWwiseEmitterBlueprintLibrary::STATIC_WwiseEmitterSetRTPC(const struct FWwiseEmitter& Emitter, const class FName& Name, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetRTPC");
		
		UWwiseEmitterBlueprintLibrary_WwiseEmitterSetRTPC_Params params {};
		params.Emitter = Emitter;
		params.Name = Name;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD46E0
	 * 		Name   -> Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetParams
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FWwiseEmitter                               Emitter                                                    (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		struct FWwiseEmitterParams                         Params                                                     (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	bool UWwiseEmitterBlueprintLibrary::STATIC_WwiseEmitterSetParams(const struct FWwiseEmitter& Emitter, const struct FWwiseEmitterParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetParams");
		
		UWwiseEmitterBlueprintLibrary_WwiseEmitterSetParams_Params params {};
		params.Emitter = Emitter;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD45C0
	 * 		Name   -> Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetLocation
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FWwiseEmitter                               Emitter                                                    (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	bool UWwiseEmitterBlueprintLibrary::STATIC_WwiseEmitterSetLocation(const struct FWwiseEmitter& Emitter, const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetLocation");
		
		UWwiseEmitterBlueprintLibrary_WwiseEmitterSetLocation_Params params {};
		params.Emitter = Emitter;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD43D0
	 * 		Name   -> Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterPostEventOnAll
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FWwiseEmitter>                       Emitters                                                   (ConstParm, Parm, ZeroConstructor)
	 * 		class UWwiseEvent*                                 WwiseEvent                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EEmitterRelationship                               Relationship                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	 * 		class FName                                        SourcePath                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	 * 		class FName                                        SourceObj                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	 */
	TArray<int32_t> UWwiseEmitterBlueprintLibrary::STATIC_WwiseEmitterPostEventOnAll(TArray<struct FWwiseEmitter> Emitters, class UWwiseEvent* WwiseEvent, EEmitterRelationship Relationship, const class FName& SourcePath, const class FName& SourceObj)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterPostEventOnAll");
		
		UWwiseEmitterBlueprintLibrary_WwiseEmitterPostEventOnAll_Params params {};
		params.Emitters = Emitters;
		params.WwiseEvent = WwiseEvent;
		params.Relationship = Relationship;
		params.SourcePath = SourcePath;
		params.SourceObj = SourceObj;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD4210
	 * 		Name   -> Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterPostEvent
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FWwiseEmitter                               Emitter                                                    (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		class UWwiseEvent*                                 WwiseEvent                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EEmitterRelationship                               Relationship                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	 * 		class FName                                        SourcePath                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	 * 		class FName                                        SourceObj                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	 */
	int32_t UWwiseEmitterBlueprintLibrary::STATIC_WwiseEmitterPostEvent(const struct FWwiseEmitter& Emitter, class UWwiseEvent* WwiseEvent, EEmitterRelationship Relationship, const class FName& SourcePath, const class FName& SourceObj)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterPostEvent");
		
		UWwiseEmitterBlueprintLibrary_WwiseEmitterPostEvent_Params params {};
		params.Emitter = Emitter;
		params.WwiseEvent = WwiseEvent;
		params.Relationship = Relationship;
		params.SourcePath = SourcePath;
		params.SourceObj = SourceObj;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD4150
	 * 		Name   -> Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterIsValid
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FWwiseEmitter                               Emitter                                                    (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	bool UWwiseEmitterBlueprintLibrary::STATIC_WwiseEmitterIsValid(const struct FWwiseEmitter& Emitter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterIsValid");
		
		UWwiseEmitterBlueprintLibrary_WwiseEmitterIsValid_Params params {};
		params.Emitter = Emitter;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD4040
	 * 		Name   -> Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterIsPlaying
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FWwiseEmitter                               Emitter                                                    (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		class UWwiseEvent*                                 Event                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UWwiseEmitterBlueprintLibrary::STATIC_WwiseEmitterIsPlaying(const struct FWwiseEmitter& Emitter, class UWwiseEvent* Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterIsPlaying");
		
		UWwiseEmitterBlueprintLibrary_WwiseEmitterIsPlaying_Params params {};
		params.Emitter = Emitter;
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD3ED0
	 * 		Name   -> Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterGetRTPC
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FWwiseEmitter                               Emitter                                                    (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UWwiseEmitterBlueprintLibrary::STATIC_WwiseEmitterGetRTPC(const struct FWwiseEmitter& Emitter, const class FName& Name, float* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterGetRTPC");
		
		UWwiseEmitterBlueprintLibrary_WwiseEmitterGetRTPC_Params params {};
		params.Emitter = Emitter;
		params.Name = Name;
		
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
	 * 		RVA    -> 0x04DD3E20
	 * 		Name   -> Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterDestroy
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FWwiseEmitter                               Emitter                                                    (Parm, OutParm, ReferenceParm)
	 */
	void UWwiseEmitterBlueprintLibrary::STATIC_WwiseEmitterDestroy(struct FWwiseEmitter* Emitter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterDestroy");
		
		UWwiseEmitterBlueprintLibrary_WwiseEmitterDestroy_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Emitter != nullptr)
			*Emitter = params.Emitter;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD3CC0
	 * 		Name   -> Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentSetRTPCOnAll
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class UWwiseEmitterComponent*>              EmitterComponents                                          (ConstParm, Parm, ZeroConstructor, ContainsInstancedReference)
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UWwiseEmitterBlueprintLibrary::STATIC_WwiseEmitterComponentSetRTPCOnAll(TArray<class UWwiseEmitterComponent*> EmitterComponents, const class FName& Name, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentSetRTPCOnAll");
		
		UWwiseEmitterBlueprintLibrary_WwiseEmitterComponentSetRTPCOnAll_Params params {};
		params.EmitterComponents = EmitterComponents;
		params.Name = Name;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD3BC0
	 * 		Name   -> Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentSetRTPC
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UWwiseEmitterComponent*                      EmitterComponent                                           (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UWwiseEmitterBlueprintLibrary::STATIC_WwiseEmitterComponentSetRTPC(class UWwiseEmitterComponent* EmitterComponent, const class FName& Name, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentSetRTPC");
		
		UWwiseEmitterBlueprintLibrary_WwiseEmitterComponentSetRTPC_Params params {};
		params.EmitterComponent = EmitterComponent;
		params.Name = Name;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD3990
	 * 		Name   -> Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentPostEventOnAll
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class UWwiseEmitterComponent*>              EmitterComponents                                          (ConstParm, Parm, ZeroConstructor, ContainsInstancedReference)
	 * 		class UWwiseEvent*                                 WwiseEvent                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EEmitterRelationship                               Relationship                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	 * 		class FName                                        SourcePath                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	 * 		class FName                                        SourceObj                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	 */
	TArray<int32_t> UWwiseEmitterBlueprintLibrary::STATIC_WwiseEmitterComponentPostEventOnAll(TArray<class UWwiseEmitterComponent*> EmitterComponents, class UWwiseEvent* WwiseEvent, EEmitterRelationship Relationship, const class FName& SourcePath, const class FName& SourceObj)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentPostEventOnAll");
		
		UWwiseEmitterBlueprintLibrary_WwiseEmitterComponentPostEventOnAll_Params params {};
		params.EmitterComponents = EmitterComponents;
		params.WwiseEvent = WwiseEvent;
		params.Relationship = Relationship;
		params.SourcePath = SourcePath;
		params.SourceObj = SourceObj;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD3810
	 * 		Name   -> Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentPostEvent
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UWwiseEmitterComponent*                      EmitterComponent                                           (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWwiseEvent*                                 WwiseEvent                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EEmitterRelationship                               Relationship                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	 * 		class FName                                        SourcePath                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	 * 		class FName                                        SourceObj                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	 */
	int32_t UWwiseEmitterBlueprintLibrary::STATIC_WwiseEmitterComponentPostEvent(class UWwiseEmitterComponent* EmitterComponent, class UWwiseEvent* WwiseEvent, EEmitterRelationship Relationship, const class FName& SourcePath, const class FName& SourceObj)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentPostEvent");
		
		UWwiseEmitterBlueprintLibrary_WwiseEmitterComponentPostEvent_Params params {};
		params.EmitterComponent = EmitterComponent;
		params.WwiseEvent = WwiseEvent;
		params.Relationship = Relationship;
		params.SourcePath = SourcePath;
		params.SourceObj = SourceObj;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD3650
	 * 		Name   -> Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseCreateEmitter
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FWwiseEmitter                               Emitter                                                    (Parm, OutParm)
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	 * 		class UWwiseObjectPoolWrapper*                     EmitterPool                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	 * 		struct FVector                                     Offset                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	 */
	bool UWwiseEmitterBlueprintLibrary::STATIC_WwiseCreateEmitter(struct FWwiseEmitter* Emitter, const class FName& Name, class UObject* Owner, class UWwiseObjectPoolWrapper* EmitterPool, const struct FVector& Offset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseCreateEmitter");
		
		UWwiseEmitterBlueprintLibrary_WwiseCreateEmitter_Params params {};
		params.Name = Name;
		params.Owner = Owner;
		params.EmitterPool = EmitterPool;
		params.Offset = Offset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Emitter != nullptr)
			*Emitter = params.Emitter;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD33B0
	 * 		Name   -> Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseCreateDetachedEmitter
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FWwiseEmitter                               Emitter                                                    (Parm, OutParm)
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWwiseObjectPoolWrapper*                     EmitterPool                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FWwiseEmitterCreationParams                 CreationParams                                             (Parm)
	 * 		EEmitterRelationship                               Relationship                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Forward                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	 */
	int32_t UWwiseEmitterBlueprintLibrary::STATIC_WwiseCreateDetachedEmitter(struct FWwiseEmitter* Emitter, const class FName& Name, class UWwiseObjectPoolWrapper* EmitterPool, const struct FVector& Location, const struct FWwiseEmitterCreationParams& CreationParams, EEmitterRelationship Relationship, const struct FVector& Forward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseCreateDetachedEmitter");
		
		UWwiseEmitterBlueprintLibrary_WwiseCreateDetachedEmitter_Params params {};
		params.Name = Name;
		params.EmitterPool = EmitterPool;
		params.Location = Location;
		params.CreationParams = CreationParams;
		params.Relationship = Relationship;
		params.Forward = Forward;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Emitter != nullptr)
			*Emitter = params.Emitter;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD31E0
	 * 		Name   -> Function RareAudio.WwiseEmitterBlueprintLibrary.SeekOnEvent
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FWwiseEmitter                               WwiseEmitter                                               (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		class UWwiseEvent*                                 in_eventID                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            in_iPosition                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               in_bSeekToNearestMarker                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            in_PlayingID                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UWwiseEmitterBlueprintLibrary::STATIC_SeekOnEvent(const struct FWwiseEmitter& WwiseEmitter, class UWwiseEvent* in_eventID, int32_t in_iPosition, bool in_bSeekToNearestMarker, int32_t in_PlayingID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.SeekOnEvent");
		
		UWwiseEmitterBlueprintLibrary_SeekOnEvent_Params params {};
		params.WwiseEmitter = WwiseEmitter;
		params.in_eventID = in_eventID;
		params.in_iPosition = in_iPosition;
		params.in_bSeekToNearestMarker = in_bSeekToNearestMarker;
		params.in_PlayingID = in_PlayingID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD2F30
	 * 		Name   -> Function RareAudio.WwiseEmitterBlueprintLibrary.GetPlaybackPosition
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FWwiseEmitter                               WwiseEmitter                                               (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            in_PlayingID                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PlaybackPositionInMs                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UWwiseEmitterBlueprintLibrary::STATIC_GetPlaybackPosition(const struct FWwiseEmitter& WwiseEmitter, int32_t in_PlayingID, int32_t* PlaybackPositionInMs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.GetPlaybackPosition");
		
		UWwiseEmitterBlueprintLibrary_GetPlaybackPosition_Params params {};
		params.WwiseEmitter = WwiseEmitter;
		params.in_PlayingID = in_PlayingID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlaybackPositionInMs != nullptr)
			*PlaybackPositionInMs = params.PlaybackPositionInMs;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWwiseEmitterBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWwiseEmitterBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RareAudio.WwiseEmitterBlueprintLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD2DD0
	 * 		Name   -> Function RareAudio.WwiseEmitterComponentBlueprintLibrary.GetNamedEmitter
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FWwiseEmitter                               OutEmitter                                                 (Parm, OutParm)
	 * 		class FName                                        InNameOfEmitterToRetrieve                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      InActorToFindEmitterOn                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	 */
	bool UWwiseEmitterComponentBlueprintLibrary::STATIC_GetNamedEmitter(struct FWwiseEmitter* OutEmitter, const class FName& InNameOfEmitterToRetrieve, class AActor* InActorToFindEmitterOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterComponentBlueprintLibrary.GetNamedEmitter");
		
		UWwiseEmitterComponentBlueprintLibrary_GetNamedEmitter_Params params {};
		params.InNameOfEmitterToRetrieve = InNameOfEmitterToRetrieve;
		params.InActorToFindEmitterOn = InActorToFindEmitterOn;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutEmitter != nullptr)
			*OutEmitter = params.OutEmitter;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD2B70
	 * 		Name   -> Function RareAudio.WwiseEmitterComponentBlueprintLibrary.GetClosestNEmitters
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<struct FWwiseEmitter>                       OutEmitters                                                (Parm, OutParm, ZeroConstructor)
	 * 		struct FVector                                     InFromPosition                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            InNumEmittersToFind                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	 * 		class AActor*                                      InActorToFindClosestEmitterOn                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	 */
	bool UWwiseEmitterComponentBlueprintLibrary::STATIC_GetClosestNEmitters(TArray<struct FWwiseEmitter>* OutEmitters, const struct FVector& InFromPosition, int32_t InNumEmittersToFind, class AActor* InActorToFindClosestEmitterOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterComponentBlueprintLibrary.GetClosestNEmitters");
		
		UWwiseEmitterComponentBlueprintLibrary_GetClosestNEmitters_Params params {};
		params.InFromPosition = InFromPosition;
		params.InNumEmittersToFind = InNumEmittersToFind;
		params.InActorToFindClosestEmitterOn = InActorToFindClosestEmitterOn;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutEmitters != nullptr)
			*OutEmitters = params.OutEmitters;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD2A00
	 * 		Name   -> Function RareAudio.WwiseEmitterComponentBlueprintLibrary.GetClosestEmitter
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FWwiseEmitter                               OutEmitter                                                 (Parm, OutParm)
	 * 		struct FVector                                     InFromPosition                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      InActorToFindClosestEmitterOn                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	 */
	bool UWwiseEmitterComponentBlueprintLibrary::STATIC_GetClosestEmitter(struct FWwiseEmitter* OutEmitter, const struct FVector& InFromPosition, class AActor* InActorToFindClosestEmitterOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterComponentBlueprintLibrary.GetClosestEmitter");
		
		UWwiseEmitterComponentBlueprintLibrary_GetClosestEmitter_Params params {};
		params.InFromPosition = InFromPosition;
		params.InActorToFindClosestEmitterOn = InActorToFindClosestEmitterOn;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutEmitter != nullptr)
			*OutEmitter = params.OutEmitter;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWwiseEmitterComponentBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWwiseEmitterComponentBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RareAudio.WwiseEmitterComponentBlueprintLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWwiseObjectPoolWrapper.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWwiseObjectPoolWrapper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RareAudio.WwiseObjectPoolWrapper");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAudioIslandStaticMeshAssociatorBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAudioIslandStaticMeshAssociatorBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RareAudio.AudioIslandStaticMeshAssociatorBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DDFFB0
	 * 		Name   -> Function RareAudio.AudioSpaceComponent.OnOverlapEnd
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAudioSpaceComponent::OnOverlapEnd(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RareAudio.AudioSpaceComponent.OnOverlapEnd");
		
		UAudioSpaceComponent_OnOverlapEnd_Params params {};
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DDFDE0
	 * 		Name   -> Function RareAudio.AudioSpaceComponent.OnOverlapBegin
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               FromSweep                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	void UAudioSpaceComponent::OnOverlapBegin(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool FromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RareAudio.AudioSpaceComponent.OnOverlapBegin");
		
		UAudioSpaceComponent_OnOverlapBegin_Params params {};
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.FromSweep = FromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioSpaceComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioSpaceComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RareAudio.AudioSpaceComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DDFDC0
	 * 		Name   -> Function RareAudio.AudioSpaceDataAsset.GetRtpcName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FName UAudioSpaceDataAsset::GetRtpcName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RareAudio.AudioSpaceDataAsset.GetRtpcName");
		
		UAudioSpaceDataAsset_GetRtpcName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioSpaceDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioSpaceDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RareAudio.AudioSpaceDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DDFD90
	 * 		Name   -> Function RareAudio.AudioSpaceTrackerComponent.GetCurrentSpace
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UAudioSpaceDataAsset* UAudioSpaceTrackerComponent::GetCurrentSpace()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RareAudio.AudioSpaceTrackerComponent.GetCurrentSpace");
		
		UAudioSpaceTrackerComponent_GetCurrentSpace_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioSpaceTrackerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioSpaceTrackerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RareAudio.AudioSpaceTrackerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URareAudioHardwareDeviceService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URareAudioHardwareDeviceService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RareAudio.RareAudioHardwareDeviceService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStaticMeshAudioDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStaticMeshAudioDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RareAudio.StaticMeshAudioDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DE00B0
	 * 		Name   -> Function RareAudio.StaticMeshAudioEmittersComponent.PopulateInstanceAssociations
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UStaticMeshAudioEmittersComponent::PopulateInstanceAssociations()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RareAudio.StaticMeshAudioEmittersComponent.PopulateInstanceAssociations");
		
		UStaticMeshAudioEmittersComponent_PopulateInstanceAssociations_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStaticMeshAudioEmittersComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStaticMeshAudioEmittersComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RareAudio.StaticMeshAudioEmittersComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTritonAcousticMap.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTritonAcousticMap::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RareAudio.TritonAcousticMap");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTritonComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTritonComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RareAudio.TritonComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTritonService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTritonService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RareAudio.TritonService");
		return ptr;
	}

}


