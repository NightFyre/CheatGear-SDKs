/**
 * Name: The_Complex
 * Version: 9349459
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x01766520
	 * 		Name   -> Function OptionsMenu.OptionsMenu_C.GetFPS
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UOptionsMenu_C::GetFPS()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.GetFPS");
		
		UOptionsMenu_C_GetFPS_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01766520
	 * 		Name   -> Function OptionsMenu.OptionsMenu_C.GetVsync
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UOptionsMenu_C::GetVsync()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.GetVsync");
		
		UOptionsMenu_C_GetVsync_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01766520
	 * 		Name   -> Function OptionsMenu.OptionsMenu_C.getAntiAilasing
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UOptionsMenu_C::getAntiAilasing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.getAntiAilasing");
		
		UOptionsMenu_C_getAntiAilasing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01766520
	 * 		Name   -> Function OptionsMenu.OptionsMenu_C.getTextureQ
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UOptionsMenu_C::getTextureQ()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.getTextureQ");
		
		UOptionsMenu_C_getTextureQ_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01766520
	 * 		Name   -> Function OptionsMenu.OptionsMenu_C.GetShadowQ
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UOptionsMenu_C::GetShadowQ()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.GetShadowQ");
		
		UOptionsMenu_C_GetShadowQ_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01766520
	 * 		Name   -> Function OptionsMenu.OptionsMenu_C.GetResolution
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UOptionsMenu_C::GetResolution()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.GetResolution");
		
		UOptionsMenu_C_GetResolution_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01766520
	 * 		Name   -> Function OptionsMenu.OptionsMenu_C.GetWindowMode
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UOptionsMenu_C::GetWindowMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.GetWindowMode");
		
		UOptionsMenu_C_GetWindowMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01766520
	 * 		Name   -> Function OptionsMenu.OptionsMenu_C.BndEvt__Anti-AliasingQuality-_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptionsMenu_C::BndEvt__Anti_AliasingQuality__K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.BndEvt__Anti-AliasingQuality-_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UOptionsMenu_C_BndEvt__Anti_AliasingQuality__K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01766520
	 * 		Name   -> Function OptionsMenu.OptionsMenu_C.BndEvt__FPS+_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptionsMenu_C::BndEvt__FPS__K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.BndEvt__FPS+_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		UOptionsMenu_C_BndEvt__FPS__K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01766520
	 * 		Name   -> Function OptionsMenu.OptionsMenu_C.BndEvt__FPS-_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptionsMenu_C::BndEvt__FPS__K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.BndEvt__FPS-_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");
		
		UOptionsMenu_C_BndEvt__FPS__K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01766520
	 * 		Name   -> Function OptionsMenu.OptionsMenu_C.BndEvt__Resolution+_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptionsMenu_C::BndEvt__Resolution__K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.BndEvt__Resolution+_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");
		
		UOptionsMenu_C_BndEvt__Resolution__K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01766520
	 * 		Name   -> Function OptionsMenu.OptionsMenu_C.BndEvt__Resolution-_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptionsMenu_C::BndEvt__Resolution__K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.BndEvt__Resolution-_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");
		
		UOptionsMenu_C_BndEvt__Resolution__K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01766520
	 * 		Name   -> Function OptionsMenu.OptionsMenu_C.BndEvt__ShadowQuality+_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptionsMenu_C::BndEvt__ShadowQuality__K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.BndEvt__ShadowQuality+_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");
		
		UOptionsMenu_C_BndEvt__ShadowQuality__K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01766520
	 * 		Name   -> Function OptionsMenu.OptionsMenu_C.BndEvt__ShadowQuality-_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptionsMenu_C::BndEvt__ShadowQuality__K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.BndEvt__ShadowQuality-_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");
		
		UOptionsMenu_C_BndEvt__ShadowQuality__K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01766520
	 * 		Name   -> Function OptionsMenu.OptionsMenu_C.BndEvt__TextureQuality+_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptionsMenu_C::BndEvt__TextureQuality__K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.BndEvt__TextureQuality+_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");
		
		UOptionsMenu_C_BndEvt__TextureQuality__K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01766520
	 * 		Name   -> Function OptionsMenu.OptionsMenu_C.BndEvt__TextureQuality-_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptionsMenu_C::BndEvt__TextureQuality__K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.BndEvt__TextureQuality-_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature");
		
		UOptionsMenu_C_BndEvt__TextureQuality__K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01766520
	 * 		Name   -> Function OptionsMenu.OptionsMenu_C.BndEvt__VsyncOff_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptionsMenu_C::BndEvt__VsyncOff_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.BndEvt__VsyncOff_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature");
		
		UOptionsMenu_C_BndEvt__VsyncOff_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01766520
	 * 		Name   -> Function OptionsMenu.OptionsMenu_C.BndEvt__VsyncOn_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptionsMenu_C::BndEvt__VsyncOn_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.BndEvt__VsyncOn_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature");
		
		UOptionsMenu_C_BndEvt__VsyncOn_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01766520
	 * 		Name   -> Function OptionsMenu.OptionsMenu_C.BndEvt__WindowMode+_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptionsMenu_C::BndEvt__WindowMode__K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.BndEvt__WindowMode+_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature");
		
		UOptionsMenu_C_BndEvt__WindowMode__K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01766520
	 * 		Name   -> Function OptionsMenu.OptionsMenu_C.BndEvt__WindowMode-_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptionsMenu_C::BndEvt__WindowMode__K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.BndEvt__WindowMode-_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature");
		
		UOptionsMenu_C_BndEvt__WindowMode__K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01766520
	 * 		Name   -> Function OptionsMenu.OptionsMenu_C.BndEvt__ApplyButton_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptionsMenu_C::BndEvt__ApplyButton_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.BndEvt__ApplyButton_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature");
		
		UOptionsMenu_C_BndEvt__ApplyButton_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01766520
	 * 		Name   -> Function OptionsMenu.OptionsMenu_C.BndEvt__ApplyButton_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptionsMenu_C::BndEvt__ApplyButton_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.BndEvt__ApplyButton_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature");
		
		UOptionsMenu_C_BndEvt__ApplyButton_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01766520
	 * 		Name   -> Function OptionsMenu.OptionsMenu_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptionsMenu_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature");
		
		UOptionsMenu_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01766520
	 * 		Name   -> Function OptionsMenu.OptionsMenu_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptionsMenu_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature");
		
		UOptionsMenu_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01766520
	 * 		Name   -> Function OptionsMenu.OptionsMenu_C.BndEvt__Anti-AliasingQuality+_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptionsMenu_C::BndEvt__Anti_AliasingQuality__K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.BndEvt__Anti-AliasingQuality+_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UOptionsMenu_C_BndEvt__Anti_AliasingQuality__K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01766520
	 * 		Name   -> Function OptionsMenu.OptionsMenu_C.BndEvt__ApplyButton_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptionsMenu_C::BndEvt__ApplyButton_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.BndEvt__ApplyButton_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature");
		
		UOptionsMenu_C_BndEvt__ApplyButton_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01766520
	 * 		Name   -> Function OptionsMenu.OptionsMenu_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UOptionsMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.Construct");
		
		UOptionsMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01766520
	 * 		Name   -> Function OptionsMenu.OptionsMenu_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptionsMenu_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature");
		
		UOptionsMenu_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01766520
	 * 		Name   -> Function OptionsMenu.OptionsMenu_C.ExecuteUbergraph_OptionsMenu
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionsMenu_C::ExecuteUbergraph_OptionsMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsMenu.OptionsMenu_C.ExecuteUbergraph_OptionsMenu");
		
		UOptionsMenu_C_ExecuteUbergraph_OptionsMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptionsMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptionsMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass OptionsMenu.OptionsMenu_C");
		return ptr;
	}

}


