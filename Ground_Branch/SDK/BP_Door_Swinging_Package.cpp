/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * 		Name   -> Function BP_Door_Swinging.BP_Door_Swinging_C.AIQuestion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        UseType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FName ABP_Door_Swinging_C::AIQuestion(class AController* Controller, const class FName& UseType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Door_Swinging.BP_Door_Swinging_C.AIQuestion");
		
		ABP_Door_Swinging_C_AIQuestion_Params params {};
		params.Controller = Controller;
		params.UseType = UseType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Door_Swinging.BP_Door_Swinging_C.AIQuestionWithParams
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        UseType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Params                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	class FName ABP_Door_Swinging_C::AIQuestionWithParams(class AController* Controller, const class FName& UseType, const class FString& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Door_Swinging.BP_Door_Swinging_C.AIQuestionWithParams");
		
		ABP_Door_Swinging_C_AIQuestionWithParams_Params params {};
		params.Controller = Controller;
		params.UseType = UseType;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Door_Swinging.BP_Door_Swinging_C.CanBreach
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     InTraceLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutResult                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Door_Swinging_C::CanBreach(const struct FVector& InTraceLocation, bool* OutResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Door_Swinging.BP_Door_Swinging_C.CanBreach");
		
		ABP_Door_Swinging_C_CanBreach_Params params {};
		params.InTraceLocation = InTraceLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutResult != nullptr)
			*OutResult = params.OutResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Door_Swinging.BP_Door_Swinging_C.DrawDebugAttachmentPoints
	 * 		Flags  -> ()
	 */
	void ABP_Door_Swinging_C::DrawDebugAttachmentPoints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Door_Swinging.BP_Door_Swinging_C.DrawDebugAttachmentPoints");
		
		ABP_Door_Swinging_C_DrawDebugAttachmentPoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Door_Swinging.BP_Door_Swinging_C.FindClosestAttachmentPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     ObserverLocation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsNearerInside                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Door_Swinging_C::FindClosestAttachmentPoint(const struct FVector& ObserverLocation, bool* IsNearerInside)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Door_Swinging.BP_Door_Swinging_C.FindClosestAttachmentPoint");
		
		ABP_Door_Swinging_C_FindClosestAttachmentPoint_Params params {};
		params.ObserverLocation = ObserverLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsNearerInside != nullptr)
			*IsNearerInside = params.IsNearerInside;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Door_Swinging.BP_Door_Swinging_C.DetermineDoorSwingSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              BaseAlpha                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Speed                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Door_Swinging_C::DetermineDoorSwingSpeed(float BaseAlpha, float* Speed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Door_Swinging.BP_Door_Swinging_C.DetermineDoorSwingSpeed");
		
		ABP_Door_Swinging_C_DetermineDoorSwingSpeed_Params params {};
		params.BaseAlpha = BaseAlpha;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Speed != nullptr)
			*Speed = params.Speed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Door_Swinging.BP_Door_Swinging_C.GetAKSwitchInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkAudioBank*                                Bank                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Switch_State_Name                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_Door_Swinging_C::GetAKSwitchInfo(class UAkAudioBank** Bank, class FString* Switch_State_Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Door_Swinging.BP_Door_Swinging_C.GetAKSwitchInfo");
		
		ABP_Door_Swinging_C_GetAKSwitchInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Bank != nullptr)
			*Bank = params.Bank;
		if (Switch_State_Name != nullptr)
			*Switch_State_Name = params.Switch_State_Name;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Door_Swinging.BP_Door_Swinging_C.CreateAcousticPortal
	 * 		Flags  -> ()
	 */
	void ABP_Door_Swinging_C::CreateAcousticPortal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Door_Swinging.BP_Door_Swinging_C.CreateAcousticPortal");
		
		ABP_Door_Swinging_C_CreateAcousticPortal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Door_Swinging.BP_Door_Swinging_C.OnRep_ReplicatedYaw
	 * 		Flags  -> ()
	 */
	void ABP_Door_Swinging_C::OnRep_ReplicatedYaw()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Door_Swinging.BP_Door_Swinging_C.OnRep_ReplicatedYaw");
		
		ABP_Door_Swinging_C_OnRep_ReplicatedYaw_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Door_Swinging.BP_Door_Swinging_C.UpdateNavLinkPoints
	 * 		Flags  -> ()
	 */
	void ABP_Door_Swinging_C::UpdateNavLinkPoints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Door_Swinging.BP_Door_Swinging_C.UpdateNavLinkPoints");
		
		ABP_Door_Swinging_C_UpdateNavLinkPoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Door_Swinging.BP_Door_Swinging_C.CreateNavLink
	 * 		Flags  -> ()
	 */
	void ABP_Door_Swinging_C::CreateNavLink()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Door_Swinging.BP_Door_Swinging_C.CreateNavLink");
		
		ABP_Door_Swinging_C_CreateNavLink_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Door_Swinging.BP_Door_Swinging_C.UpdateReplicatedYaw
	 * 		Flags  -> ()
	 */
	void ABP_Door_Swinging_C::UpdateReplicatedYaw()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Door_Swinging.BP_Door_Swinging_C.UpdateReplicatedYaw");
		
		ABP_Door_Swinging_C_UpdateReplicatedYaw_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Door_Swinging.BP_Door_Swinging_C.OnRep_bCoreDestroyed
	 * 		Flags  -> ()
	 */
	void ABP_Door_Swinging_C::OnRep_bCoreDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Door_Swinging.BP_Door_Swinging_C.OnRep_bCoreDestroyed");
		
		ABP_Door_Swinging_C_OnRep_bCoreDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Door_Swinging.BP_Door_Swinging_C.Destroy Attached Actors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      ExcludedActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Door_Swinging_C::Destroy_Attached_Actors(class USceneComponent* Component, class AActor* ExcludedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Door_Swinging.BP_Door_Swinging_C.Destroy Attached Actors");
		
		ABP_Door_Swinging_C_Destroy_Attached_Actors_Params params {};
		params.Component = Component;
		params.ExcludedActor = ExcludedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Door_Swinging.BP_Door_Swinging_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_Door_Swinging_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Door_Swinging.BP_Door_Swinging_C.UserConstructionScript");
		
		ABP_Door_Swinging_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Door_Swinging.BP_Door_Swinging_C.Timeline_HandleUse_Normal__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_Door_Swinging_C::Timeline_HandleUse_Normal__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Door_Swinging.BP_Door_Swinging_C.Timeline_HandleUse_Normal__FinishedFunc");
		
		ABP_Door_Swinging_C_Timeline_HandleUse_Normal__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Door_Swinging.BP_Door_Swinging_C.Timeline_HandleUse_Normal__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_Door_Swinging_C::Timeline_HandleUse_Normal__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Door_Swinging.BP_Door_Swinging_C.Timeline_HandleUse_Normal__UpdateFunc");
		
		ABP_Door_Swinging_C_Timeline_HandleUse_Normal__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Door_Swinging.BP_Door_Swinging_C.Timeline_HandleUse_Locked__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_Door_Swinging_C::Timeline_HandleUse_Locked__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Door_Swinging.BP_Door_Swinging_C.Timeline_HandleUse_Locked__FinishedFunc");
		
		ABP_Door_Swinging_C_Timeline_HandleUse_Locked__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Door_Swinging.BP_Door_Swinging_C.Timeline_HandleUse_Locked__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_Door_Swinging_C::Timeline_HandleUse_Locked__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Door_Swinging.BP_Door_Swinging_C.Timeline_HandleUse_Locked__UpdateFunc");
		
		ABP_Door_Swinging_C_Timeline_HandleUse_Locked__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Door_Swinging.BP_Door_Swinging_C.InpActEvt_Interact_K2Node_InputActionEvent_4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_Door_Swinging_C::InpActEvt_Interact_K2Node_InputActionEvent_4(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Door_Swinging.BP_Door_Swinging_C.InpActEvt_Interact_K2Node_InputActionEvent_4");
		
		ABP_Door_Swinging_C_InpActEvt_Interact_K2Node_InputActionEvent_4_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Door_Swinging.BP_Door_Swinging_C.InpActEvt_Interact_K2Node_InputActionEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_Door_Swinging_C::InpActEvt_Interact_K2Node_InputActionEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Door_Swinging.BP_Door_Swinging_C.InpActEvt_Interact_K2Node_InputActionEvent_3");
		
		ABP_Door_Swinging_C_InpActEvt_Interact_K2Node_InputActionEvent_3_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Door_Swinging.BP_Door_Swinging_C.InpActEvt_NextPos_K2Node_InputActionEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_Door_Swinging_C::InpActEvt_NextPos_K2Node_InputActionEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Door_Swinging.BP_Door_Swinging_C.InpActEvt_NextPos_K2Node_InputActionEvent_2");
		
		ABP_Door_Swinging_C_InpActEvt_NextPos_K2Node_InputActionEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Door_Swinging.BP_Door_Swinging_C.InpActEvt_PrevPos_K2Node_InputActionEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_Door_Swinging_C::InpActEvt_PrevPos_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Door_Swinging.BP_Door_Swinging_C.InpActEvt_PrevPos_K2Node_InputActionEvent_1");
		
		ABP_Door_Swinging_C_InpActEvt_PrevPos_K2Node_InputActionEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Door_Swinging.BP_Door_Swinging_C.AIUse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        UseType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Door_Swinging_C::AIUse(class AController* Controller, const class FName& UseType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Door_Swinging.BP_Door_Swinging_C.AIUse");
		
		ABP_Door_Swinging_C_AIUse_Params params {};
		params.Controller = Controller;
		params.UseType = UseType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Door_Swinging.BP_Door_Swinging_C.AIUseWithParams
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        UseType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Params                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_Door_Swinging_C::AIUseWithParams(class AController* Controller, const class FName& UseType, const class FString& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Door_Swinging.BP_Door_Swinging_C.AIUseWithParams");
		
		ABP_Door_Swinging_C_AIUseWithParams_Params params {};
		params.Controller = Controller;
		params.UseType = UseType;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Door_Swinging.BP_Door_Swinging_C.ClientUse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        UseType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Door_Swinging_C::ClientUse(class AController* Controller, const class FName& UseType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Door_Swinging.BP_Door_Swinging_C.ClientUse");
		
		ABP_Door_Swinging_C_ClientUse_Params params {};
		params.Controller = Controller;
		params.UseType = UseType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Door_Swinging.BP_Door_Swinging_C.ClientUseWithParams
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        UseType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Params                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_Door_Swinging_C::ClientUseWithParams(class AController* Controller, const class FName& UseType, const class FString& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Door_Swinging.BP_Door_Swinging_C.ClientUseWithParams");
		
		ABP_Door_Swinging_C_ClientUseWithParams_Params params {};
		params.Controller = Controller;
		params.UseType = UseType;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Door_Swinging.BP_Door_Swinging_C.ServerUseWithParams
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        UseType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Params                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_Door_Swinging_C::ServerUseWithParams(class AController* Controller, const class FName& UseType, const class FString& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Door_Swinging.BP_Door_Swinging_C.ServerUseWithParams");
		
		ABP_Door_Swinging_C_ServerUseWithParams_Params params {};
		params.Controller = Controller;
		params.UseType = UseType;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Door_Swinging.BP_Door_Swinging_C.Open
	 * 		Flags  -> ()
	 */
	void ABP_Door_Swinging_C::Open()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Door_Swinging.BP_Door_Swinging_C.Open");
		
		ABP_Door_Swinging_C_Open_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Door_Swinging.BP_Door_Swinging_C.Close
	 * 		Flags  -> ()
	 */
	void ABP_Door_Swinging_C::Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Door_Swinging.BP_Door_Swinging_C.Close");
		
		ABP_Door_Swinging_C_Close_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Door_Swinging.BP_Door_Swinging_C.AnimateHandleUse_Normal
	 * 		Flags  -> ()
	 */
	void ABP_Door_Swinging_C::AnimateHandleUse_Normal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Door_Swinging.BP_Door_Swinging_C.AnimateHandleUse_Normal");
		
		ABP_Door_Swinging_C_AnimateHandleUse_Normal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Door_Swinging.BP_Door_Swinging_C.SetInitialYawValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              CurrentYaw                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Door_Swinging_C::SetInitialYawValue(float CurrentYaw)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Door_Swinging.BP_Door_Swinging_C.SetInitialYawValue");
		
		ABP_Door_Swinging_C_SetInitialYawValue_Params params {};
		params.CurrentYaw = CurrentYaw;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Door_Swinging.BP_Door_Swinging_C.DetermineInitialYawValue
	 * 		Flags  -> ()
	 */
	void ABP_Door_Swinging_C::DetermineInitialYawValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Door_Swinging.BP_Door_Swinging_C.DetermineInitialYawValue");
		
		ABP_Door_Swinging_C_DetermineInitialYawValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Door_Swinging.BP_Door_Swinging_C.ReportDoorNoise
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Loudness                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Door_Swinging_C::ReportDoorNoise(float Loudness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Door_Swinging.BP_Door_Swinging_C.ReportDoorNoise");
		
		ABP_Door_Swinging_C_ReportDoorNoise_Params params {};
		params.Loudness = Loudness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Door_Swinging.BP_Door_Swinging_C.AnimateHandleUse_Locked
	 * 		Flags  -> ()
	 */
	void ABP_Door_Swinging_C::AnimateHandleUse_Locked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Door_Swinging.BP_Door_Swinging_C.AnimateHandleUse_Locked");
		
		ABP_Door_Swinging_C_AnimateHandleUse_Locked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Door_Swinging.BP_Door_Swinging_C.AttachCharge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBItem*                                     InCharge                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     InTraceLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Door_Swinging_C::AttachCharge(class AGBItem* InCharge, const struct FVector& InTraceLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Door_Swinging.BP_Door_Swinging_C.AttachCharge");
		
		ABP_Door_Swinging_C_AttachCharge_Params params {};
		params.InCharge = InCharge;
		params.InTraceLocation = InTraceLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Door_Swinging.BP_Door_Swinging_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Door_Swinging_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Door_Swinging.BP_Door_Swinging_C.ReceiveBeginPlay");
		
		ABP_Door_Swinging_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Door_Swinging.BP_Door_Swinging_C.DestroyDoor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     ImpulseLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Door_Swinging_C::DestroyDoor(const struct FVector& ImpulseLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Door_Swinging.BP_Door_Swinging_C.DestroyDoor");
		
		ABP_Door_Swinging_C_DestroyDoor_Params params {};
		params.ImpulseLocation = ImpulseLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Door_Swinging.BP_Door_Swinging_C.SetupMaxYaw
	 * 		Flags  -> ()
	 */
	void ABP_Door_Swinging_C::SetupMaxYaw()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Door_Swinging.BP_Door_Swinging_C.SetupMaxYaw");
		
		ABP_Door_Swinging_C_SetupMaxYaw_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Door_Swinging.BP_Door_Swinging_C.ActorTickCheck
	 * 		Flags  -> ()
	 */
	void ABP_Door_Swinging_C::ActorTickCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Door_Swinging.BP_Door_Swinging_C.ActorTickCheck");
		
		ABP_Door_Swinging_C_ActorTickCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Door_Swinging.BP_Door_Swinging_C.BndEvt__CoreComp_K2Node_ComponentBoundEvent_2_ComponentBeginCursorOverSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         TouchedComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Door_Swinging_C::BndEvt__CoreComp_K2Node_ComponentBoundEvent_2_ComponentBeginCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Door_Swinging.BP_Door_Swinging_C.BndEvt__CoreComp_K2Node_ComponentBoundEvent_2_ComponentBeginCursorOverSignature__DelegateSignature");
		
		ABP_Door_Swinging_C_BndEvt__CoreComp_K2Node_ComponentBoundEvent_2_ComponentBeginCursorOverSignature__DelegateSignature_Params params {};
		params.TouchedComponent = TouchedComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Door_Swinging.BP_Door_Swinging_C.BndEvt__CoreComp_K2Node_ComponentBoundEvent_3_ComponentEndCursorOverSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         TouchedComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Door_Swinging_C::BndEvt__CoreComp_K2Node_ComponentBoundEvent_3_ComponentEndCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Door_Swinging.BP_Door_Swinging_C.BndEvt__CoreComp_K2Node_ComponentBoundEvent_3_ComponentEndCursorOverSignature__DelegateSignature");
		
		ABP_Door_Swinging_C_BndEvt__CoreComp_K2Node_ComponentBoundEvent_3_ComponentEndCursorOverSignature__DelegateSignature_Params params {};
		params.TouchedComponent = TouchedComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Door_Swinging.BP_Door_Swinging_C.UpdateTargetYaw
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewTargetYaw                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Door_Swinging_C::UpdateTargetYaw(float NewTargetYaw)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Door_Swinging.BP_Door_Swinging_C.UpdateTargetYaw");
		
		ABP_Door_Swinging_C_UpdateTargetYaw_Params params {};
		params.NewTargetYaw = NewTargetYaw;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Door_Swinging.BP_Door_Swinging_C.AdjustTargetYaw
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Door_Swinging_C::AdjustTargetYaw(float Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Door_Swinging.BP_Door_Swinging_C.AdjustTargetYaw");
		
		ABP_Door_Swinging_C_AdjustTargetYaw_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Door_Swinging.BP_Door_Swinging_C.ServerUse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        UseType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Door_Swinging_C::ServerUse(class AController* Controller, const class FName& UseType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Door_Swinging.BP_Door_Swinging_C.ServerUse");
		
		ABP_Door_Swinging_C_ServerUse_Params params {};
		params.Controller = Controller;
		params.UseType = UseType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Door_Swinging.BP_Door_Swinging_C.K2_OnReset
	 * 		Flags  -> ()
	 */
	void ABP_Door_Swinging_C::K2_OnReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Door_Swinging.BP_Door_Swinging_C.K2_OnReset");
		
		ABP_Door_Swinging_C_K2_OnReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Door_Swinging.BP_Door_Swinging_C.UpdateAcousticPortal
	 * 		Flags  -> ()
	 */
	void ABP_Door_Swinging_C::UpdateAcousticPortal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Door_Swinging.BP_Door_Swinging_C.UpdateAcousticPortal");
		
		ABP_Door_Swinging_C_UpdateAcousticPortal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Door_Swinging.BP_Door_Swinging_C.CloseToOpenCheck
	 * 		Flags  -> ()
	 */
	void ABP_Door_Swinging_C::CloseToOpenCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Door_Swinging.BP_Door_Swinging_C.CloseToOpenCheck");
		
		ABP_Door_Swinging_C_CloseToOpenCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Door_Swinging.BP_Door_Swinging_C.OpenToCloseCheck
	 * 		Flags  -> ()
	 */
	void ABP_Door_Swinging_C::OpenToCloseCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Door_Swinging.BP_Door_Swinging_C.OpenToCloseCheck");
		
		ABP_Door_Swinging_C_OpenToCloseCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Door_Swinging.BP_Door_Swinging_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Door_Swinging_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Door_Swinging.BP_Door_Swinging_C.ReceiveTick");
		
		ABP_Door_Swinging_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Door_Swinging.BP_Door_Swinging_C.ReceiveRadialDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DamageReceived                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageType*                                 DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Origin                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  HitInfo                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		class AController*                                 InstigatedBy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Door_Swinging_C::ReceiveRadialDamage(float DamageReceived, class UDamageType* DamageType, const struct FVector& Origin, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Door_Swinging.BP_Door_Swinging_C.ReceiveRadialDamage");
		
		ABP_Door_Swinging_C_ReceiveRadialDamage_Params params {};
		params.DamageReceived = DamageReceived;
		params.DamageType = DamageType;
		params.Origin = Origin;
		params.HitInfo = HitInfo;
		params.InstigatedBy = InstigatedBy;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Door_Swinging.BP_Door_Swinging_C.PlayDoorSoundFront
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkAudioEvent*                               AkEvent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Door_Swinging_C::PlayDoorSoundFront(class UAkAudioEvent* AkEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Door_Swinging.BP_Door_Swinging_C.PlayDoorSoundFront");
		
		ABP_Door_Swinging_C_PlayDoorSoundFront_Params params {};
		params.AkEvent = AkEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Door_Swinging.BP_Door_Swinging_C.PlayDoorSoundRear
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkAudioEvent*                               AkEvent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Door_Swinging_C::PlayDoorSoundRear(class UAkAudioEvent* AkEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Door_Swinging.BP_Door_Swinging_C.PlayDoorSoundRear");
		
		ABP_Door_Swinging_C_PlayDoorSoundRear_Params params {};
		params.AkEvent = AkEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Door_Swinging.BP_Door_Swinging_C.PlayDoorSoundFrontTimer_Event
	 * 		Flags  -> ()
	 */
	void ABP_Door_Swinging_C::PlayDoorSoundFrontTimer_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Door_Swinging.BP_Door_Swinging_C.PlayDoorSoundFrontTimer_Event");
		
		ABP_Door_Swinging_C_PlayDoorSoundFrontTimer_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Door_Swinging.BP_Door_Swinging_C.PlayDoorSoundRearTimer_Event
	 * 		Flags  -> ()
	 */
	void ABP_Door_Swinging_C::PlayDoorSoundRearTimer_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Door_Swinging.BP_Door_Swinging_C.PlayDoorSoundRearTimer_Event");
		
		ABP_Door_Swinging_C_PlayDoorSoundRearTimer_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Door_Swinging.BP_Door_Swinging_C.UpdateNavCoreDoorLocation
	 * 		Flags  -> ()
	 */
	void ABP_Door_Swinging_C::UpdateNavCoreDoorLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Door_Swinging.BP_Door_Swinging_C.UpdateNavCoreDoorLocation");
		
		ABP_Door_Swinging_C_UpdateNavCoreDoorLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Door_Swinging.BP_Door_Swinging_C.ExecuteUbergraph_BP_Door_Swinging
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Door_Swinging_C::ExecuteUbergraph_BP_Door_Swinging(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Door_Swinging.BP_Door_Swinging_C.ExecuteUbergraph_BP_Door_Swinging");
		
		ABP_Door_Swinging_C_ExecuteUbergraph_BP_Door_Swinging_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Door_Swinging_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Door_Swinging_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Door_Swinging.BP_Door_Swinging_C");
		return ptr;
	}

}


