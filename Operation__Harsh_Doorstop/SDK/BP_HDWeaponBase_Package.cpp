/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDWeaponBase.BP_HDWeaponBase_C.ShouldUseMirroredLowerBodyLoco
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		bool                                               bOutUseMirrored                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDWeaponBase_C::ShouldUseMirroredLowerBodyLoco(bool* bOutUseMirrored)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDWeaponBase.BP_HDWeaponBase_C.ShouldUseMirroredLowerBodyLoco");
		
		ABP_HDWeaponBase_C_ShouldUseMirroredLowerBodyLoco_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bOutUseMirrored != nullptr)
			*bOutUseMirrored = params.bOutUseMirrored;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDWeaponBase.BP_HDWeaponBase_C.GetLocoTPPAnimSet
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		TMap<class FName, class UAnimSequenceBase*>        OutAnimSet                                                 (Parm, OutParm)
	 */
	void ABP_HDWeaponBase_C::GetLocoTPPAnimSet(TMap<class FName, class UAnimSequenceBase*>* OutAnimSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDWeaponBase.BP_HDWeaponBase_C.GetLocoTPPAnimSet");
		
		ABP_HDWeaponBase_C_GetLocoTPPAnimSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAnimSet != nullptr)
			*OutAnimSet = params.OutAnimSet;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDWeaponBase.BP_HDWeaponBase_C.GetLocoAnimSet
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		TMap<class FName, class UAnimSequenceBase*>        OutAnimSet                                                 (Parm, OutParm)
	 */
	void ABP_HDWeaponBase_C::GetLocoAnimSet(TMap<class FName, class UAnimSequenceBase*>* OutAnimSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDWeaponBase.BP_HDWeaponBase_C.GetLocoAnimSet");
		
		ABP_HDWeaponBase_C_GetLocoAnimSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAnimSet != nullptr)
			*OutAnimSet = params.OutAnimSet;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDWeaponBase.BP_HDWeaponBase_C.CanFire
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	bool ABP_HDWeaponBase_C::CanFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDWeaponBase.BP_HDWeaponBase_C.CanFire");
		
		ABP_HDWeaponBase_C_CanFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDWeaponBase.BP_HDWeaponBase_C.InternalSetVisibilityForAttachment
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USceneComponent*                             Attachment                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFirstPerson                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDWeaponBase_C::InternalSetVisibilityForAttachment(class USceneComponent* Attachment, bool bFirstPerson)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDWeaponBase.BP_HDWeaponBase_C.InternalSetVisibilityForAttachment");
		
		ABP_HDWeaponBase_C_InternalSetVisibilityForAttachment_Params params {};
		params.Attachment = Attachment;
		params.bFirstPerson = bFirstPerson;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDWeaponBase.BP_HDWeaponBase_C.UpdateAttachmentVisibility
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bFirstPerson                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDWeaponBase_C::UpdateAttachmentVisibility(bool bFirstPerson)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDWeaponBase.BP_HDWeaponBase_C.UpdateAttachmentVisibility");
		
		ABP_HDWeaponBase_C_UpdateAttachmentVisibility_Params params {};
		params.bFirstPerson = bFirstPerson;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDWeaponBase.BP_HDWeaponBase_C.RemoveLegacyLocomotionAnims
	 * 		Flags  -> (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bFPP                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABP_HDWeaponBase_C::RemoveLegacyLocomotionAnims(bool bFPP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDWeaponBase.BP_HDWeaponBase_C.RemoveLegacyLocomotionAnims");
		
		ABP_HDWeaponBase_C_RemoveLegacyLocomotionAnims_Params params {};
		params.bFPP = bFPP;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDWeaponBase.BP_HDWeaponBase_C.GetLegacyLocomotionAnims
	 * 		Flags  -> (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		bool                                               bFPP                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	TMap<class FName, class UAnimSequenceBase*> ABP_HDWeaponBase_C::GetLegacyLocomotionAnims(bool bFPP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDWeaponBase.BP_HDWeaponBase_C.GetLegacyLocomotionAnims");
		
		ABP_HDWeaponBase_C_GetLegacyLocomotionAnims_Params params {};
		params.bFPP = bFPP;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDWeaponBase.BP_HDWeaponBase_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDWeaponBase_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDWeaponBase.BP_HDWeaponBase_C.UserConstructionScript");
		
		ABP_HDWeaponBase_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDWeaponBase.BP_HDWeaponBase_C.CycleSight
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDWeaponBase_C::CycleSight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDWeaponBase.BP_HDWeaponBase_C.CycleSight");
		
		ABP_HDWeaponBase_C_CycleSight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDWeaponBase.BP_HDWeaponBase_C.SetCurrentSight
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USceneComponent*                             Sight                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDWeaponBase_C::SetCurrentSight(class USceneComponent* Sight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDWeaponBase.BP_HDWeaponBase_C.SetCurrentSight");
		
		ABP_HDWeaponBase_C_SetCurrentSight_Params params {};
		params.Sight = Sight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDWeaponBase.BP_HDWeaponBase_C.ReceiveFire
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_HDWeaponBase_C::ReceiveFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDWeaponBase.BP_HDWeaponBase_C.ReceiveFire");
		
		ABP_HDWeaponBase_C_ReceiveFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDWeaponBase.BP_HDWeaponBase_C.ReceiveVisibilityChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bFirstPerson                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDWeaponBase_C::ReceiveVisibilityChanged(bool bFirstPerson)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDWeaponBase.BP_HDWeaponBase_C.ReceiveVisibilityChanged");
		
		ABP_HDWeaponBase_C_ReceiveVisibilityChanged_Params params {};
		params.bFirstPerson = bFirstPerson;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDWeaponBase.BP_HDWeaponBase_C.ExecuteUbergraph_BP_HDWeaponBase
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDWeaponBase_C::ExecuteUbergraph_BP_HDWeaponBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDWeaponBase.BP_HDWeaponBase_C.ExecuteUbergraph_BP_HDWeaponBase");
		
		ABP_HDWeaponBase_C_ExecuteUbergraph_BP_HDWeaponBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDWeaponBase.BP_HDWeaponBase_C.OnUpdateAttachments__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDWeaponBase_C::OnUpdateAttachments__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDWeaponBase.BP_HDWeaponBase_C.OnUpdateAttachments__DelegateSignature");
		
		ABP_HDWeaponBase_C_OnUpdateAttachments__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_HDWeaponBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_HDWeaponBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_HDWeaponBase.BP_HDWeaponBase_C");
		return ptr;
	}

}


