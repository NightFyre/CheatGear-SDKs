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
	 * 		Name   -> Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.InternalGetSpawnTimeRemaining
	 * 		Flags  -> (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            SpawnSeconds                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DeployMenu_DeployButton_C::InternalGetSpawnTimeRemaining(int32_t* SpawnSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.InternalGetSpawnTimeRemaining");
		
		UWBP_DeployMenu_DeployButton_C_InternalGetSpawnTimeRemaining_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpawnSeconds != nullptr)
			*SpawnSeconds = params.SpawnSeconds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.InternalUpdateBtnStyle
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_DeployButton_C::InternalUpdateBtnStyle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.InternalUpdateBtnStyle");
		
		UWBP_DeployMenu_DeployButton_C_InternalUpdateBtnStyle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.InternalUpdateBtnText
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bDeploying                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bSpawnPointSelected                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_DeployMenu_DeployButton_C::InternalUpdateBtnText(bool bDeploying, bool bSpawnPointSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.InternalUpdateBtnText");
		
		UWBP_DeployMenu_DeployButton_C_InternalUpdateBtnText_Params params {};
		params.bDeploying = bDeploying;
		params.bSpawnPointSelected = bSpawnPointSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.UpdateDeployBtnState
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bPlayerAlive                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bDeploymentQueued                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bSpawnPointSelected                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_DeployMenu_DeployButton_C::UpdateDeployBtnState(bool bPlayerAlive, bool bDeploymentQueued, bool bSpawnPointSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.UpdateDeployBtnState");
		
		UWBP_DeployMenu_DeployButton_C_UpdateDeployBtnState_Params params {};
		params.bPlayerAlive = bPlayerAlive;
		params.bDeploymentQueued = bDeploymentQueued;
		params.bSpawnPointSelected = bSpawnPointSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_DeployMenu_DeployButton_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.PreConstruct");
		
		UWBP_DeployMenu_DeployButton_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.BndEvt__DeployBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_DeployMenu_DeployButton_C::BndEvt__DeployBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.BndEvt__DeployBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_DeployMenu_DeployButton_C_BndEvt__DeployBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.BndEvt__DeployBtn_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_DeployMenu_DeployButton_C::BndEvt__DeployBtn_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.BndEvt__DeployBtn_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");
		
		UWBP_DeployMenu_DeployButton_C_BndEvt__DeployBtn_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.BndEvt__DeployBtn_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_DeployMenu_DeployButton_C::BndEvt__DeployBtn_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.BndEvt__DeployBtn_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature");
		
		UWBP_DeployMenu_DeployButton_C_BndEvt__DeployBtn_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.BndEvt__DeployBtn_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_DeployMenu_DeployButton_C::BndEvt__DeployBtn_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.BndEvt__DeployBtn_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
		
		UWBP_DeployMenu_DeployButton_C_BndEvt__DeployBtn_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.BndEvt__DeployBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_DeployMenu_DeployButton_C::BndEvt__DeployBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.BndEvt__DeployBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");
		
		UWBP_DeployMenu_DeployButton_C_BndEvt__DeployBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DeployMenu_DeployButton_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.Tick");
		
		UWBP_DeployMenu_DeployButton_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.ExecuteUbergraph_WBP_DeployMenu_DeployButton
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DeployMenu_DeployButton_C::ExecuteUbergraph_WBP_DeployMenu_DeployButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.ExecuteUbergraph_WBP_DeployMenu_DeployButton");
		
		UWBP_DeployMenu_DeployButton_C_ExecuteUbergraph_WBP_DeployMenu_DeployButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.OnUnhovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bCloseBtn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_DeployMenu_DeployButton_C::OnUnhovered__DelegateSignature(bool bCloseBtn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.OnUnhovered__DelegateSignature");
		
		UWBP_DeployMenu_DeployButton_C_OnUnhovered__DelegateSignature_Params params {};
		params.bCloseBtn = bCloseBtn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.OnHovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bCloseBtn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_DeployMenu_DeployButton_C::OnHovered__DelegateSignature(bool bCloseBtn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.OnHovered__DelegateSignature");
		
		UWBP_DeployMenu_DeployButton_C_OnHovered__DelegateSignature_Params params {};
		params.bCloseBtn = bCloseBtn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.OnReleased__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bCloseBtn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_DeployMenu_DeployButton_C::OnReleased__DelegateSignature(bool bCloseBtn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.OnReleased__DelegateSignature");
		
		UWBP_DeployMenu_DeployButton_C_OnReleased__DelegateSignature_Params params {};
		params.bCloseBtn = bCloseBtn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.OnPressed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bCloseBtn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_DeployMenu_DeployButton_C::OnPressed__DelegateSignature(bool bCloseBtn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.OnPressed__DelegateSignature");
		
		UWBP_DeployMenu_DeployButton_C_OnPressed__DelegateSignature_Params params {};
		params.bCloseBtn = bCloseBtn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.OnClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bCloseBtn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_DeployMenu_DeployButton_C::OnClicked__DelegateSignature(bool bCloseBtn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.OnClicked__DelegateSignature");
		
		UWBP_DeployMenu_DeployButton_C_OnClicked__DelegateSignature_Params params {};
		params.bCloseBtn = bCloseBtn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_DeployMenu_DeployButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_DeployMenu_DeployButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C");
		return ptr;
	}

}


