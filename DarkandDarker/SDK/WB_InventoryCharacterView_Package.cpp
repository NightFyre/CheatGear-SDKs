/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_InventoryCharacterView.WB_InventoryCharacterView_C.OnDragOver
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               PointerEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UDragDropOperation*                          Operation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UWB_InventoryCharacterView_C::OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InventoryCharacterView.WB_InventoryCharacterView_C.OnDragOver");
		
		UWB_InventoryCharacterView_C_OnDragOver_Params params {};
		params.MyGeometry = MyGeometry;
		params.PointerEvent = PointerEvent;
		params.Operation = Operation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_InventoryCharacterView.WB_InventoryCharacterView_C.OnDragDetected
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               PointerEvent                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UDragDropOperation*                          Operation                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_InventoryCharacterView_C::OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InventoryCharacterView.WB_InventoryCharacterView_C.OnDragDetected");
		
		UWB_InventoryCharacterView_C_OnDragDetected_Params params {};
		params.MyGeometry = MyGeometry;
		params.PointerEvent = PointerEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Operation != nullptr)
			*Operation = params.Operation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_InventoryCharacterView.WB_InventoryCharacterView_C.OnMouseButtonDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UWB_InventoryCharacterView_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InventoryCharacterView.WB_InventoryCharacterView_C.OnMouseButtonDown");
		
		UWB_InventoryCharacterView_C_OnMouseButtonDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_InventoryCharacterView.WB_InventoryCharacterView_C.OnMessageReceived_BF97A2C3489131A2BC38E88191C57DAB
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMsgBaseNode*                                ProxyObject                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_InventoryCharacterView_C::OnMessageReceived_BF97A2C3489131A2BC38E88191C57DAB(class UMsgBaseNode* ProxyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InventoryCharacterView.WB_InventoryCharacterView_C.OnMessageReceived_BF97A2C3489131A2BC38E88191C57DAB");
		
		UWB_InventoryCharacterView_C_OnMessageReceived_BF97A2C3489131A2BC38E88191C57DAB_Params params {};
		params.ProxyObject = ProxyObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_InventoryCharacterView.WB_InventoryCharacterView_C.OnMessageReceived_07357DD44D2129E2FDD1919BD54F4315
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMsgBaseNode*                                ProxyObject                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_InventoryCharacterView_C::OnMessageReceived_07357DD44D2129E2FDD1919BD54F4315(class UMsgBaseNode* ProxyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InventoryCharacterView.WB_InventoryCharacterView_C.OnMessageReceived_07357DD44D2129E2FDD1919BD54F4315");
		
		UWB_InventoryCharacterView_C_OnMessageReceived_07357DD44D2129E2FDD1919BD54F4315_Params params {};
		params.ProxyObject = ProxyObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_InventoryCharacterView.WB_InventoryCharacterView_C.OnMessageReceived_74BA04EF40F176665ED355986B31663E
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMsgBaseNode*                                ProxyObject                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_InventoryCharacterView_C::OnMessageReceived_74BA04EF40F176665ED355986B31663E(class UMsgBaseNode* ProxyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InventoryCharacterView.WB_InventoryCharacterView_C.OnMessageReceived_74BA04EF40F176665ED355986B31663E");
		
		UWB_InventoryCharacterView_C_OnMessageReceived_74BA04EF40F176665ED355986B31663E_Params params {};
		params.ProxyObject = ProxyObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_InventoryCharacterView.WB_InventoryCharacterView_C.OnMessageReceived_A739E95247894304EBCBAF9F4ADFEED2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMsgBaseNode*                                ProxyObject                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_InventoryCharacterView_C::OnMessageReceived_A739E95247894304EBCBAF9F4ADFEED2(class UMsgBaseNode* ProxyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InventoryCharacterView.WB_InventoryCharacterView_C.OnMessageReceived_A739E95247894304EBCBAF9F4ADFEED2");
		
		UWB_InventoryCharacterView_C_OnMessageReceived_A739E95247894304EBCBAF9F4ADFEED2_Params params {};
		params.ProxyObject = ProxyObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_InventoryCharacterView.WB_InventoryCharacterView_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWB_InventoryCharacterView_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InventoryCharacterView.WB_InventoryCharacterView_C.Construct");
		
		UWB_InventoryCharacterView_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_InventoryCharacterView.WB_InventoryCharacterView_C.EventFMsgWidgetGameGroupToggleNotify
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMsgWidgetGameGroupToggleNotify             Msg                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWB_InventoryCharacterView_C::EventFMsgWidgetGameGroupToggleNotify(const struct FMsgWidgetGameGroupToggleNotify& Msg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InventoryCharacterView.WB_InventoryCharacterView_C.EventFMsgWidgetGameGroupToggleNotify");
		
		UWB_InventoryCharacterView_C_EventFMsgWidgetGameGroupToggleNotify_Params params {};
		params.Msg = Msg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_InventoryCharacterView.WB_InventoryCharacterView_C.ResetPreviewRotationOnToggle
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ESlateVisibility                                   NewVisibility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_InventoryCharacterView_C::ResetPreviewRotationOnToggle(ESlateVisibility NewVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InventoryCharacterView.WB_InventoryCharacterView_C.ResetPreviewRotationOnToggle");
		
		UWB_InventoryCharacterView_C_ResetPreviewRotationOnToggle_Params params {};
		params.NewVisibility = NewVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_InventoryCharacterView.WB_InventoryCharacterView_C.EventFMsgSetCheckTargetPlayerEquipment
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMsgSetCheckTargetPlayerEquipment           Msg                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWB_InventoryCharacterView_C::EventFMsgSetCheckTargetPlayerEquipment(const struct FMsgSetCheckTargetPlayerEquipment& Msg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InventoryCharacterView.WB_InventoryCharacterView_C.EventFMsgSetCheckTargetPlayerEquipment");
		
		UWB_InventoryCharacterView_C_EventFMsgSetCheckTargetPlayerEquipment_Params params {};
		params.Msg = Msg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_InventoryCharacterView.WB_InventoryCharacterView_C.EventFMsgRemoveCheckTargetPlayerEquipment
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMsgRemoveCheckTargetPlayerEquipment        Msg                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWB_InventoryCharacterView_C::EventFMsgRemoveCheckTargetPlayerEquipment(const struct FMsgRemoveCheckTargetPlayerEquipment& Msg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InventoryCharacterView.WB_InventoryCharacterView_C.EventFMsgRemoveCheckTargetPlayerEquipment");
		
		UWB_InventoryCharacterView_C_EventFMsgRemoveCheckTargetPlayerEquipment_Params params {};
		params.Msg = Msg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_InventoryCharacterView.WB_InventoryCharacterView_C.OnFMsgWidgetLobbyGroupToggleNotify
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMsgWidgetLobbyGroupToggleNotify            Msg                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWB_InventoryCharacterView_C::OnFMsgWidgetLobbyGroupToggleNotify(const struct FMsgWidgetLobbyGroupToggleNotify& Msg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InventoryCharacterView.WB_InventoryCharacterView_C.OnFMsgWidgetLobbyGroupToggleNotify");
		
		UWB_InventoryCharacterView_C_OnFMsgWidgetLobbyGroupToggleNotify_Params params {};
		params.Msg = Msg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_InventoryCharacterView.WB_InventoryCharacterView_C.ExecuteUbergraph_WB_InventoryCharacterView
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_InventoryCharacterView_C::ExecuteUbergraph_WB_InventoryCharacterView(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InventoryCharacterView.WB_InventoryCharacterView_C.ExecuteUbergraph_WB_InventoryCharacterView");
		
		UWB_InventoryCharacterView_C_ExecuteUbergraph_WB_InventoryCharacterView_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_InventoryCharacterView_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_InventoryCharacterView_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_InventoryCharacterView.WB_InventoryCharacterView_C");
		return ptr;
	}

}


