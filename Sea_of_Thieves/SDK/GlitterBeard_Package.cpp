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
	 * 		Name   -> PredefinedFunction UGlitterBeardEntitlementDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGlitterBeardEntitlementDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GlitterBeard.GlitterBeardEntitlementDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03C77B90
	 * 		Name   -> Function GlitterBeard.GlitterBeardFinaleCoordinatorComponent.OnRep_ReplicationState
	 * 		Flags  -> (Final, RequiredAPI, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FFinaleReplicationState                     OldState                                                   (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UGlitterBeardFinaleCoordinatorComponent::OnRep_ReplicationState(const struct FFinaleReplicationState& OldState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlitterBeard.GlitterBeardFinaleCoordinatorComponent.OnRep_ReplicationState");
		
		UGlitterBeardFinaleCoordinatorComponent_OnRep_ReplicationState_Params params {};
		params.OldState = OldState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGlitterBeardFinaleCoordinatorComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGlitterBeardFinaleCoordinatorComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GlitterBeard.GlitterBeardFinaleCoordinatorComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGlitterBeardIsHideoutOpenConditional.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGlitterBeardIsHideoutOpenConditional::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GlitterBeard.GlitterBeardIsHideoutOpenConditional");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGlitterBeardLanternSoundEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGlitterBeardLanternSoundEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GlitterBeard.GlitterBeardLanternSoundEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGlitterbeardSlidingDoor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGlitterbeardSlidingDoor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GlitterBeard.GlitterbeardSlidingDoor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGlitterBeardTelemetryComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGlitterBeardTelemetryComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GlitterBeard.GlitterBeardTelemetryComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGlitterBeardTrustedTreeInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGlitterBeardTrustedTreeInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GlitterBeard.GlitterBeardTrustedTreeInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03C77CD0
	 * 		Name   -> Function GlitterBeard.GlitterBeardTree.StopVocals
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AGlitterBeardTree::StopVocals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlitterBeard.GlitterBeardTree.StopVocals");
		
		AGlitterBeardTree_StopVocals_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03C77C90
	 * 		Name   -> Function GlitterBeard.GlitterBeardTree.StopReaction
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	bool AGlitterBeardTree::StopReaction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlitterBeard.GlitterBeardTree.StopReaction");
		
		AGlitterBeardTree_StopReaction_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03C77C70
	 * 		Name   -> Function GlitterBeard.GlitterBeardTree.StartVocals
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AGlitterBeardTree::StartVocals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlitterBeard.GlitterBeardTree.StartVocals");
		
		AGlitterBeardTree_StartVocals_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03C77C30
	 * 		Name   -> Function GlitterBeard.GlitterBeardTree.StartReaction
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	bool AGlitterBeardTree::StartReaction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlitterBeard.GlitterBeardTree.StartReaction");
		
		AGlitterBeardTree_StartReaction_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function GlitterBeard.GlitterBeardTree.Reset_Impl
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AGlitterBeardTree::Reset_Impl()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlitterBeard.GlitterBeardTree.Reset_Impl");
		
		AGlitterBeardTree_Reset_Impl_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGlitterBeardTree.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGlitterBeardTree::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GlitterBeard.GlitterBeardTree");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03C77AE0
	 * 		Name   -> Function GlitterBeard.GlitterBeardTreeVisualFeedbackComponent.OnRep_NextStateEvent
	 * 		Flags  -> (Final, RequiredAPI, Native, Private, HasOutParms)
	 * Parameters:
	 * 		TArray<EGlitterbeardVFXState>                      OldStates                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UGlitterBeardTreeVisualFeedbackComponent::OnRep_NextStateEvent(TArray<EGlitterbeardVFXState> OldStates)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlitterBeard.GlitterBeardTreeVisualFeedbackComponent.OnRep_NextStateEvent");
		
		UGlitterBeardTreeVisualFeedbackComponent_OnRep_NextStateEvent_Params params {};
		params.OldStates = OldStates;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGlitterBeardTreeVisualFeedbackComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGlitterBeardTreeVisualFeedbackComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GlitterBeard.GlitterBeardTreeVisualFeedbackComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGlitterBeardUnlockVFXCoordinatorComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGlitterBeardUnlockVFXCoordinatorComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GlitterBeard.GlitterBeardUnlockVFXCoordinatorComponent");
		return ptr;
	}

}


