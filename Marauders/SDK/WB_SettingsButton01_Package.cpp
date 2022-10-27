﻿/**
 * Name: Marauders
 * Version: 642675-attempt2
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
	 * 		Name   -> Function WB_SettingsButton01.WB_SettingsButton01_C.SetFrameBlockColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_SettingsButton01_C::SetFrameBlockColor(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_SettingsButton01.WB_SettingsButton01_C.SetFrameBlockColor");
		
		UWB_SettingsButton01_C_SetFrameBlockColor_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_SettingsButton01.WB_SettingsButton01_C.GetCurrentScale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   Scale                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_SettingsButton01_C::GetCurrentScale(struct FVector2D* Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_SettingsButton01.WB_SettingsButton01_C.GetCurrentScale");
		
		UWB_SettingsButton01_C_GetCurrentScale_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Scale != nullptr)
			*Scale = params.Scale;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_SettingsButton01.WB_SettingsButton01_C.UpdateImageSaturation
	 * 		Flags  -> ()
	 */
	void UWB_SettingsButton01_C::UpdateImageSaturation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_SettingsButton01.WB_SettingsButton01_C.UpdateImageSaturation");
		
		UWB_SettingsButton01_C_UpdateImageSaturation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_SettingsButton01.WB_SettingsButton01_C.UpdateImageColors
	 * 		Flags  -> ()
	 */
	void UWB_SettingsButton01_C::UpdateImageColors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_SettingsButton01.WB_SettingsButton01_C.UpdateImageColors");
		
		UWB_SettingsButton01_C_UpdateImageColors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_SettingsButton01.WB_SettingsButton01_C.RemoveContentWidget
	 * 		Flags  -> ()
	 */
	void UWB_SettingsButton01_C::RemoveContentWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_SettingsButton01.WB_SettingsButton01_C.RemoveContentWidget");
		
		UWB_SettingsButton01_C_RemoveContentWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_SettingsButton01.WB_SettingsButton01_C.CreateContentWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      ContentWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_SettingsButton01_C::CreateContentWidget(class UClass* ContentWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_SettingsButton01.WB_SettingsButton01_C.CreateContentWidget");
		
		UWB_SettingsButton01_C_CreateContentWidget_Params params {};
		params.ContentWidget = ContentWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_SettingsButton01.WB_SettingsButton01_C.IsContentWidgetValid
	 * 		Flags  -> ()
	 */
	bool UWB_SettingsButton01_C::IsContentWidgetValid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_SettingsButton01.WB_SettingsButton01_C.IsContentWidgetValid");
		
		UWB_SettingsButton01_C_IsContentWidgetValid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_SettingsButton01.WB_SettingsButton01_C.Set_AllFrameColours
	 * 		Flags  -> ()
	 */
	void UWB_SettingsButton01_C::Set_AllFrameColours()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_SettingsButton01.WB_SettingsButton01_C.Set_AllFrameColours");
		
		UWB_SettingsButton01_C_Set_AllFrameColours_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_SettingsButton01.WB_SettingsButton01_C.UpdateIsEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsEnabled                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWB_SettingsButton01_C::UpdateIsEnabled(bool bIsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_SettingsButton01.WB_SettingsButton01_C.UpdateIsEnabled");
		
		UWB_SettingsButton01_C_UpdateIsEnabled_Params params {};
		params.bIsEnabled = bIsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_SettingsButton01.WB_SettingsButton01_C.SetFontInfo_OnDisabled
	 * 		Flags  -> ()
	 */
	void UWB_SettingsButton01_C::SetFontInfo_OnDisabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_SettingsButton01.WB_SettingsButton01_C.SetFontInfo_OnDisabled");
		
		UWB_SettingsButton01_C_SetFontInfo_OnDisabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_SettingsButton01.WB_SettingsButton01_C.SetButtonSizeScale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   Size                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_SettingsButton01_C::SetButtonSizeScale(const struct FVector2D& Size)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_SettingsButton01.WB_SettingsButton01_C.SetButtonSizeScale");
		
		UWB_SettingsButton01_C_SetButtonSizeScale_Params params {};
		params.Size = Size;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_SettingsButton01.WB_SettingsButton01_C.SetResponsiveHoveringToNativeButton
	 * 		Flags  -> ()
	 */
	void UWB_SettingsButton01_C::SetResponsiveHoveringToNativeButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_SettingsButton01.WB_SettingsButton01_C.SetResponsiveHoveringToNativeButton");
		
		UWB_SettingsButton01_C_SetResponsiveHoveringToNativeButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_SettingsButton01.WB_SettingsButton01_C.UnhoverAllNativeButtons
	 * 		Flags  -> ()
	 */
	void UWB_SettingsButton01_C::UnhoverAllNativeButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_SettingsButton01.WB_SettingsButton01_C.UnhoverAllNativeButtons");
		
		UWB_SettingsButton01_C_UnhoverAllNativeButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_SettingsButton01.WB_SettingsButton01_C.SetButtonSounds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USoundBase*                                  OnClicked_Sound                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USoundBase*                                  OnHovered_Sound                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_SettingsButton01_C::SetButtonSounds(class USoundBase* OnClicked_Sound, class USoundBase* OnHovered_Sound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_SettingsButton01.WB_SettingsButton01_C.SetButtonSounds");
		
		UWB_SettingsButton01_C_SetButtonSounds_Params params {};
		params.OnClicked_Sound = OnClicked_Sound;
		params.OnHovered_Sound = OnHovered_Sound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_SettingsButton01.WB_SettingsButton01_C.GetButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UButton*                                     Base_Button                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_SettingsButton01_C::GetButton(class UButton** Base_Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_SettingsButton01.WB_SettingsButton01_C.GetButton");
		
		UWB_SettingsButton01_C_GetButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Base_Button != nullptr)
			*Base_Button = params.Base_Button;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_SettingsButton01.WB_SettingsButton01_C.SetFontInfo_OnClicked
	 * 		Flags  -> ()
	 */
	void UWB_SettingsButton01_C::SetFontInfo_OnClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_SettingsButton01.WB_SettingsButton01_C.SetFontInfo_OnClicked");
		
		UWB_SettingsButton01_C_SetFontInfo_OnClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_SettingsButton01.WB_SettingsButton01_C.SetFontInfo_OnNormal
	 * 		Flags  -> ()
	 */
	void UWB_SettingsButton01_C::SetFontInfo_OnNormal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_SettingsButton01.WB_SettingsButton01_C.SetFontInfo_OnNormal");
		
		UWB_SettingsButton01_C_SetFontInfo_OnNormal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_SettingsButton01.WB_SettingsButton01_C.SetFontInfo_OnHovered
	 * 		Flags  -> ()
	 */
	void UWB_SettingsButton01_C::SetFontInfo_OnHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_SettingsButton01.WB_SettingsButton01_C.SetFontInfo_OnHovered");
		
		UWB_SettingsButton01_C_SetFontInfo_OnHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_SettingsButton01.WB_SettingsButton01_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWB_SettingsButton01_C::BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_SettingsButton01.WB_SettingsButton01_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");
		
		UWB_SettingsButton01_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_SettingsButton01.WB_SettingsButton01_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNativeHovered                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWB_SettingsButton01_C::BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature(bool bNativeHovered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_SettingsButton01.WB_SettingsButton01_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature");
		
		UWB_SettingsButton01_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature_Params params {};
		params.bNativeHovered = bNativeHovered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_SettingsButton01.WB_SettingsButton01_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_7_OnUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWB_SettingsButton01_C::BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_7_OnUnhovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_SettingsButton01.WB_SettingsButton01_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_7_OnUnhovered__DelegateSignature");
		
		UWB_SettingsButton01_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_7_OnUnhovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_SettingsButton01.WB_SettingsButton01_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWB_SettingsButton01_C::BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_SettingsButton01.WB_SettingsButton01_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature");
		
		UWB_SettingsButton01_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_SettingsButton01.WB_SettingsButton01_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_9_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWB_SettingsButton01_C::BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_9_OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_SettingsButton01.WB_SettingsButton01_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_9_OnReleased__DelegateSignature");
		
		UWB_SettingsButton01_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_9_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_SettingsButton01.WB_SettingsButton01_C.Construct
	 * 		Flags  -> ()
	 */
	void UWB_SettingsButton01_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_SettingsButton01.WB_SettingsButton01_C.Construct");
		
		UWB_SettingsButton01_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_SettingsButton01.WB_SettingsButton01_C.CheckHasFocus
	 * 		Flags  -> ()
	 */
	void UWB_SettingsButton01_C::CheckHasFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_SettingsButton01.WB_SettingsButton01_C.CheckHasFocus");
		
		UWB_SettingsButton01_C_CheckHasFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_SettingsButton01.WB_SettingsButton01_C.OnInputSwitched
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInputType                                         InputType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_SettingsButton01_C::OnInputSwitched(EInputType InputType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_SettingsButton01.WB_SettingsButton01_C.OnInputSwitched");
		
		UWB_SettingsButton01_C_OnInputSwitched_Params params {};
		params.InputType = InputType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_SettingsButton01.WB_SettingsButton01_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_0_OnDisabled__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWB_SettingsButton01_C::BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_0_OnDisabled__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_SettingsButton01.WB_SettingsButton01_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_0_OnDisabled__DelegateSignature");
		
		UWB_SettingsButton01_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_0_OnDisabled__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_SettingsButton01.WB_SettingsButton01_C.CheckScale
	 * 		Flags  -> ()
	 */
	void UWB_SettingsButton01_C::CheckScale()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_SettingsButton01.WB_SettingsButton01_C.CheckScale");
		
		UWB_SettingsButton01_C_CheckScale_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_SettingsButton01.WB_SettingsButton01_C.BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_143_OnUnfocused__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWB_SettingsButton01_C::BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_143_OnUnfocused__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_SettingsButton01.WB_SettingsButton01_C.BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_143_OnUnfocused__DelegateSignature");
		
		UWB_SettingsButton01_C_BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_143_OnUnfocused__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_SettingsButton01.WB_SettingsButton01_C.BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_142_OnFocused__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWB_SettingsButton01_C::BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_142_OnFocused__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_SettingsButton01.WB_SettingsButton01_C.BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_142_OnFocused__DelegateSignature");
		
		UWB_SettingsButton01_C_BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_142_OnFocused__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_SettingsButton01.WB_SettingsButton01_C.Reconstruct
	 * 		Flags  -> ()
	 */
	void UWB_SettingsButton01_C::Reconstruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_SettingsButton01.WB_SettingsButton01_C.Reconstruct");
		
		UWB_SettingsButton01_C_Reconstruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_SettingsButton01.WB_SettingsButton01_C.SetBaseColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bUseBaseColor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FLinearColor                                Grad0                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Grad1                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Grad2                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Grad3                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_SettingsButton01_C::SetBaseColor(bool bUseBaseColor, const struct FLinearColor& Grad0, const struct FLinearColor& Grad1, const struct FLinearColor& Grad2, const struct FLinearColor& Grad3)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_SettingsButton01.WB_SettingsButton01_C.SetBaseColor");
		
		UWB_SettingsButton01_C_SetBaseColor_Params params {};
		params.bUseBaseColor = bUseBaseColor;
		params.Grad0 = Grad0;
		params.Grad1 = Grad1;
		params.Grad2 = Grad2;
		params.Grad3 = Grad3;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_SettingsButton01.WB_SettingsButton01_C.SetupButtonSounds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bUseButtonSounds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USoundBase*                                  Clicked                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USoundBase*                                  Hovered                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_SettingsButton01_C::SetupButtonSounds(bool bUseButtonSounds, class USoundBase* Clicked, class USoundBase* Hovered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_SettingsButton01.WB_SettingsButton01_C.SetupButtonSounds");
		
		UWB_SettingsButton01_C_SetupButtonSounds_Params params {};
		params.bUseButtonSounds = bUseButtonSounds;
		params.Clicked = Clicked;
		params.Hovered = Hovered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_SettingsButton01.WB_SettingsButton01_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWB_SettingsButton01_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_SettingsButton01.WB_SettingsButton01_C.PreConstruct");
		
		UWB_SettingsButton01_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_SettingsButton01.WB_SettingsButton01_C.ExecuteUbergraph_WB_SettingsButton01
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_SettingsButton01_C::ExecuteUbergraph_WB_SettingsButton01(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_SettingsButton01.WB_SettingsButton01_C.ExecuteUbergraph_WB_SettingsButton01");
		
		UWB_SettingsButton01_C_ExecuteUbergraph_WB_SettingsButton01_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_SettingsButton01.WB_SettingsButton01_C.OnUnfocused__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWB_SettingsButton01_C::OnUnfocused__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_SettingsButton01.WB_SettingsButton01_C.OnUnfocused__DelegateSignature");
		
		UWB_SettingsButton01_C_OnUnfocused__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_SettingsButton01.WB_SettingsButton01_C.OnFocused__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWB_SettingsButton01_C::OnFocused__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_SettingsButton01.WB_SettingsButton01_C.OnFocused__DelegateSignature");
		
		UWB_SettingsButton01_C_OnFocused__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_SettingsButton01.WB_SettingsButton01_C.OnDisabled__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWB_SettingsButton01_C::OnDisabled__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_SettingsButton01.WB_SettingsButton01_C.OnDisabled__DelegateSignature");
		
		UWB_SettingsButton01_C_OnDisabled__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_SettingsButton01.WB_SettingsButton01_C.OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWB_SettingsButton01_C::OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_SettingsButton01.WB_SettingsButton01_C.OnReleased__DelegateSignature");
		
		UWB_SettingsButton01_C_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_SettingsButton01.WB_SettingsButton01_C.OnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWB_SettingsButton01_C::OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_SettingsButton01.WB_SettingsButton01_C.OnPressed__DelegateSignature");
		
		UWB_SettingsButton01_C_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_SettingsButton01.WB_SettingsButton01_C.OnUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWB_SettingsButton01_C::OnUnhovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_SettingsButton01.WB_SettingsButton01_C.OnUnhovered__DelegateSignature");
		
		UWB_SettingsButton01_C_OnUnhovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_SettingsButton01.WB_SettingsButton01_C.OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWB_SettingsButton01_C::OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_SettingsButton01.WB_SettingsButton01_C.OnHovered__DelegateSignature");
		
		UWB_SettingsButton01_C_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_SettingsButton01.WB_SettingsButton01_C.OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWB_SettingsButton01_C::OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_SettingsButton01.WB_SettingsButton01_C.OnClicked__DelegateSignature");
		
		UWB_SettingsButton01_C_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_SettingsButton01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_SettingsButton01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_SettingsButton01.WB_SettingsButton01_C");
		return ptr;
	}

}


