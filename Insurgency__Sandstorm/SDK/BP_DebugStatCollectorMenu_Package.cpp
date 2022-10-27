/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DebugStatCollectorMenu.BP_DebugStatCollectorMenu_C.VisibilityChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_DebugStatCollectorMenu_C::VisibilityChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugStatCollectorMenu.BP_DebugStatCollectorMenu_C.VisibilityChanged");
		
		UBP_DebugStatCollectorMenu_C_VisibilityChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DebugStatCollectorMenu.BP_DebugStatCollectorMenu_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_DebugStatCollectorMenu_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugStatCollectorMenu.BP_DebugStatCollectorMenu_C.OnFocusReceived");
		
		UBP_DebugStatCollectorMenu_C_OnFocusReceived_Params params {};
		params.MyGeometry = MyGeometry;
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DebugStatCollectorMenu.BP_DebugStatCollectorMenu_C.BndEvt__Button_StartAutotest_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_DebugStatCollectorMenu_C::BndEvt__Button_StartAutotest_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugStatCollectorMenu.BP_DebugStatCollectorMenu_C.BndEvt__Button_StartAutotest_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UBP_DebugStatCollectorMenu_C_BndEvt__Button_StartAutotest_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DebugStatCollectorMenu.BP_DebugStatCollectorMenu_C.BndEvt__Button_StartAutotestSingleCam_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_DebugStatCollectorMenu_C::BndEvt__Button_StartAutotestSingleCam_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugStatCollectorMenu.BP_DebugStatCollectorMenu_C.BndEvt__Button_StartAutotestSingleCam_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UBP_DebugStatCollectorMenu_C_BndEvt__Button_StartAutotestSingleCam_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DebugStatCollectorMenu.BP_DebugStatCollectorMenu_C.BndEvt__Button_MemorySizeStaticMeshes_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_DebugStatCollectorMenu_C::BndEvt__Button_MemorySizeStaticMeshes_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugStatCollectorMenu.BP_DebugStatCollectorMenu_C.BndEvt__Button_MemorySizeStaticMeshes_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UBP_DebugStatCollectorMenu_C_BndEvt__Button_MemorySizeStaticMeshes_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DebugStatCollectorMenu.BP_DebugStatCollectorMenu_C.BndEvt__Button_MemorySizeTextures_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_DebugStatCollectorMenu_C::BndEvt__Button_MemorySizeTextures_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugStatCollectorMenu.BP_DebugStatCollectorMenu_C.BndEvt__Button_MemorySizeTextures_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UBP_DebugStatCollectorMenu_C_BndEvt__Button_MemorySizeTextures_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DebugStatCollectorMenu.BP_DebugStatCollectorMenu_C.BndEvt__Button_StartFPSCounter_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_DebugStatCollectorMenu_C::BndEvt__Button_StartFPSCounter_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugStatCollectorMenu.BP_DebugStatCollectorMenu_C.BndEvt__Button_StartFPSCounter_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		UBP_DebugStatCollectorMenu_C_BndEvt__Button_StartFPSCounter_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DebugStatCollectorMenu.BP_DebugStatCollectorMenu_C.BndEvt__Button_StopFPSCounter_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_DebugStatCollectorMenu_C::BndEvt__Button_StopFPSCounter_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugStatCollectorMenu.BP_DebugStatCollectorMenu_C.BndEvt__Button_StopFPSCounter_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");
		
		UBP_DebugStatCollectorMenu_C_BndEvt__Button_StopFPSCounter_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DebugStatCollectorMenu.BP_DebugStatCollectorMenu_C.BndEvt__Button_StartCameraSequence_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_DebugStatCollectorMenu_C::BndEvt__Button_StartCameraSequence_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugStatCollectorMenu.BP_DebugStatCollectorMenu_C.BndEvt__Button_StartCameraSequence_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");
		
		UBP_DebugStatCollectorMenu_C_BndEvt__Button_StartCameraSequence_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DebugStatCollectorMenu.BP_DebugStatCollectorMenu_C.BndEvt__Button_StopCameraSequence_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_DebugStatCollectorMenu_C::BndEvt__Button_StopCameraSequence_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugStatCollectorMenu.BP_DebugStatCollectorMenu_C.BndEvt__Button_StopCameraSequence_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");
		
		UBP_DebugStatCollectorMenu_C_BndEvt__Button_StopCameraSequence_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DebugStatCollectorMenu.BP_DebugStatCollectorMenu_C.BndEvt__Button_Exit_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_DebugStatCollectorMenu_C::BndEvt__Button_Exit_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugStatCollectorMenu.BP_DebugStatCollectorMenu_C.BndEvt__Button_Exit_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");
		
		UBP_DebugStatCollectorMenu_C_BndEvt__Button_Exit_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DebugStatCollectorMenu.BP_DebugStatCollectorMenu_C.ExecuteUbergraph_BP_DebugStatCollectorMenu
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DebugStatCollectorMenu_C::ExecuteUbergraph_BP_DebugStatCollectorMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugStatCollectorMenu.BP_DebugStatCollectorMenu_C.ExecuteUbergraph_BP_DebugStatCollectorMenu");
		
		UBP_DebugStatCollectorMenu_C_ExecuteUbergraph_BP_DebugStatCollectorMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_DebugStatCollectorMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_DebugStatCollectorMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_DebugStatCollectorMenu.BP_DebugStatCollectorMenu_C");
		return ptr;
	}

}


