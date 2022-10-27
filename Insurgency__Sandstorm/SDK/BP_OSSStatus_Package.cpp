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
	 * 		Name   -> Function BP_OSSStatus.BP_OSSStatus_C.GetPlatformIcon
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UTexture2D*                                  Icon                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OSSStatus_C::GetPlatformIcon(class UTexture2D** Icon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OSSStatus.BP_OSSStatus_C.GetPlatformIcon");
		
		UBP_OSSStatus_C_GetPlatformIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Icon != nullptr)
			*Icon = params.Icon;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OSSStatus.BP_OSSStatus_C.UpdateAnimationFade
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_OSSStatus_C::UpdateAnimationFade()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OSSStatus.BP_OSSStatus_C.UpdateAnimationFade");
		
		UBP_OSSStatus_C_UpdateAnimationFade_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OSSStatus.BP_OSSStatus_C.Get_HorizNewWorldBox_ToolTipWidget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class UWidget* UBP_OSSStatus_C::Get_HorizNewWorldBox_ToolTipWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OSSStatus.BP_OSSStatus_C.Get_HorizNewWorldBox_ToolTipWidget");
		
		UBP_OSSStatus_C_Get_HorizNewWorldBox_ToolTipWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OSSStatus.BP_OSSStatus_C.Get_HorizPlatformBox_ToolTipWidget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class UWidget* UBP_OSSStatus_C::Get_HorizPlatformBox_ToolTipWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OSSStatus.BP_OSSStatus_C.Get_HorizPlatformBox_ToolTipWidget");
		
		UBP_OSSStatus_C_Get_HorizPlatformBox_ToolTipWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OSSStatus.BP_OSSStatus_C.GenerateTooltip
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		bool                                               bPlatform                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        ToolTipText                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	class UWidget* UBP_OSSStatus_C::GenerateTooltip(bool bPlatform, const class FText& ToolTipText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OSSStatus.BP_OSSStatus_C.GenerateTooltip");
		
		UBP_OSSStatus_C_GenerateTooltip_Params params {};
		params.bPlatform = bPlatform;
		params.ToolTipText = ToolTipText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OSSStatus.BP_OSSStatus_C.SetState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bPlatformState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EOSSNetworkState                                   NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OSSStatus_C::SetState(bool bPlatformState, EOSSNetworkState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OSSStatus.BP_OSSStatus_C.SetState");
		
		UBP_OSSStatus_C_SetState_Params params {};
		params.bPlatformState = bPlatformState;
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OSSStatus.BP_OSSStatus_C.OnNewWorldStateUpdated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EOSSNetworkState                                   OldState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EOSSNetworkState                                   NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OSSStatus_C::OnNewWorldStateUpdated(EOSSNetworkState OldState, EOSSNetworkState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OSSStatus.BP_OSSStatus_C.OnNewWorldStateUpdated");
		
		UBP_OSSStatus_C_OnNewWorldStateUpdated_Params params {};
		params.OldState = OldState;
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OSSStatus.BP_OSSStatus_C.OnPlatformStateUpdated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EOSSNetworkState                                   OldState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EOSSNetworkState                                   NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OSSStatus_C::OnPlatformStateUpdated(EOSSNetworkState OldState, EOSSNetworkState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OSSStatus.BP_OSSStatus_C.OnPlatformStateUpdated");
		
		UBP_OSSStatus_C_OnPlatformStateUpdated_Params params {};
		params.OldState = OldState;
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OSSStatus.BP_OSSStatus_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_OSSStatus_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OSSStatus.BP_OSSStatus_C.Construct");
		
		UBP_OSSStatus_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OSSStatus.BP_OSSStatus_C.CustomNewWorldState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EOSSNetworkState                                   NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OSSStatus_C::CustomNewWorldState(EOSSNetworkState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OSSStatus.BP_OSSStatus_C.CustomNewWorldState");
		
		UBP_OSSStatus_C_CustomNewWorldState_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OSSStatus.BP_OSSStatus_C.ExecuteUbergraph_BP_OSSStatus
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OSSStatus_C::ExecuteUbergraph_BP_OSSStatus(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OSSStatus.BP_OSSStatus_C.ExecuteUbergraph_BP_OSSStatus");
		
		UBP_OSSStatus_C_ExecuteUbergraph_BP_OSSStatus_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_OSSStatus_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_OSSStatus_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_OSSStatus.BP_OSSStatus_C");
		return ptr;
	}

}


