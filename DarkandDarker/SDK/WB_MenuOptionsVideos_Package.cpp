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
	 * 		Name   -> Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.SetPopupText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            RemainTime                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_MenuOptionsVideos_C::SetPopupText(int32_t RemainTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.SetPopupText");
		
		UWB_MenuOptionsVideos_C_SetPopupText_Params params {};
		params.RemainTime = RemainTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.SetActivateHover
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidgetSwitcher*                             ActivateHoveer                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Title                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        DetailDesc                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWB_MenuOptionsVideos_C::SetActivateHover(class UWidgetSwitcher* ActivateHoveer, const class FText& Title, const class FText& DetailDesc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.SetActivateHover");
		
		UWB_MenuOptionsVideos_C_SetActivateHover_Params params {};
		params.ActivateHoveer = ActivateHoveer;
		params.Title = Title;
		params.DetailDesc = DetailDesc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnDisplayOptionInitialized
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWB_MenuOptionsVideos_C::OnDisplayOptionInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnDisplayOptionInitialized");
		
		UWB_MenuOptionsVideos_C_OnDisplayOptionInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnQualityLevelInitialized
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWB_MenuOptionsVideos_C::OnQualityLevelInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnQualityLevelInitialized");
		
		UWB_MenuOptionsVideos_C_OnQualityLevelInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnApplyResetButtionInitialized
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWB_MenuOptionsVideos_C::OnApplyResetButtionInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnApplyResetButtionInitialized");
		
		UWB_MenuOptionsVideos_C_OnApplyResetButtionInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnMessageReceived_E792FD8C4A9CB0949DDA36A51D3D5965
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMsgBaseNode*                                ProxyObject                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_MenuOptionsVideos_C::OnMessageReceived_E792FD8C4A9CB0949DDA36A51D3D5965(class UMsgBaseNode* ProxyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnMessageReceived_E792FD8C4A9CB0949DDA36A51D3D5965");
		
		UWB_MenuOptionsVideos_C_OnMessageReceived_E792FD8C4A9CB0949DDA36A51D3D5965_Params params {};
		params.ProxyObject = ProxyObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWB_MenuOptionsVideos_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnInitialized");
		
		UWB_MenuOptionsVideos_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnAntiAliasingHovered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_MenuOptionsVideos_C::OnAntiAliasingHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnAntiAliasingHovered");
		
		UWB_MenuOptionsVideos_C_OnAntiAliasingHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnEffectHovered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_MenuOptionsVideos_C::OnEffectHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnEffectHovered");
		
		UWB_MenuOptionsVideos_C_OnEffectHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnTextureHovered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_MenuOptionsVideos_C::OnTextureHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnTextureHovered");
		
		UWB_MenuOptionsVideos_C_OnTextureHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnShadowHovered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_MenuOptionsVideos_C::OnShadowHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnShadowHovered");
		
		UWB_MenuOptionsVideos_C_OnShadowHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnPostProcessHovered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_MenuOptionsVideos_C::OnPostProcessHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnPostProcessHovered");
		
		UWB_MenuOptionsVideos_C_OnPostProcessHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnDisplayModeHovered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_MenuOptionsVideos_C::OnDisplayModeHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnDisplayModeHovered");
		
		UWB_MenuOptionsVideos_C_OnDisplayModeHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnDisplayResolusionHovered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_MenuOptionsVideos_C::OnDisplayResolusionHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnDisplayResolusionHovered");
		
		UWB_MenuOptionsVideos_C_OnDisplayResolusionHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnFrameRateLimitHovered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_MenuOptionsVideos_C::OnFrameRateLimitHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnFrameRateLimitHovered");
		
		UWB_MenuOptionsVideos_C_OnFrameRateLimitHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnDisplayModeSelected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            SelIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_MenuOptionsVideos_C::OnDisplayModeSelected(int32_t SelIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnDisplayModeSelected");
		
		UWB_MenuOptionsVideos_C_OnDisplayModeSelected_Params params {};
		params.SelIndex = SelIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnDisplayOptionChangePopup
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UWB_MenuOptionsVideos_C::OnDisplayOptionChangePopup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnDisplayOptionChangePopup");
		
		UWB_MenuOptionsVideos_C_OnDisplayOptionChangePopup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnBrighthnessHovered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_MenuOptionsVideos_C::OnBrighthnessHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnBrighthnessHovered");
		
		UWB_MenuOptionsVideos_C_OnBrighthnessHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnChangeGammaValue
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              SliderValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_MenuOptionsVideos_C::OnChangeGammaValue(float SliderValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnChangeGammaValue");
		
		UWB_MenuOptionsVideos_C_OnChangeGammaValue_Params params {};
		params.SliderValue = SliderValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.EventFMsgWidgetOptionVideoDisplayApplyedNotify
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMsgWidgetOptionVideoDisplayApplyedNotify   Msg                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWB_MenuOptionsVideos_C::EventFMsgWidgetOptionVideoDisplayApplyedNotify(const struct FMsgWidgetOptionVideoDisplayApplyedNotify& Msg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.EventFMsgWidgetOptionVideoDisplayApplyedNotify");
		
		UWB_MenuOptionsVideos_C_EventFMsgWidgetOptionVideoDisplayApplyedNotify_Params params {};
		params.Msg = Msg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnRenderScaleHovered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_MenuOptionsVideos_C::OnRenderScaleHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnRenderScaleHovered");
		
		UWB_MenuOptionsVideos_C_OnRenderScaleHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.ExecuteUbergraph_WB_MenuOptionsVideos
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_MenuOptionsVideos_C::ExecuteUbergraph_WB_MenuOptionsVideos(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.ExecuteUbergraph_WB_MenuOptionsVideos");
		
		UWB_MenuOptionsVideos_C_ExecuteUbergraph_WB_MenuOptionsVideos_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_MenuOptionsVideos_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_MenuOptionsVideos_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_MenuOptionsVideos.WB_MenuOptionsVideos_C");
		return ptr;
	}

}


