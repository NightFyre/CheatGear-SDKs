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
	 * 		Name   -> Function WB_DungeonSelect.WB_DungeonSelect_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_DungeonSelect_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_DungeonSelect.WB_DungeonSelect_C.PreConstruct");
		
		UWB_DungeonSelect_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_DungeonSelect.WB_DungeonSelect_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWB_DungeonSelect_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_DungeonSelect.WB_DungeonSelect_C.Construct");
		
		UWB_DungeonSelect_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_DungeonSelect.WB_DungeonSelect_C.ClickDungeonSelectNormal
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_DungeonSelect_C::ClickDungeonSelectNormal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_DungeonSelect.WB_DungeonSelect_C.ClickDungeonSelectNormal");
		
		UWB_DungeonSelect_C_ClickDungeonSelectNormal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_DungeonSelect.WB_DungeonSelect_C.ClickDungeonSelectHighRoller
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_DungeonSelect_C::ClickDungeonSelectHighRoller()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_DungeonSelect.WB_DungeonSelect_C.ClickDungeonSelectHighRoller");
		
		UWB_DungeonSelect_C_ClickDungeonSelectHighRoller_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_DungeonSelect.WB_DungeonSelect_C.OnClickedDungeonSelectNormal
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_DungeonSelect_C::OnClickedDungeonSelectNormal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_DungeonSelect.WB_DungeonSelect_C.OnClickedDungeonSelectNormal");
		
		UWB_DungeonSelect_C_OnClickedDungeonSelectNormal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_DungeonSelect.WB_DungeonSelect_C.OnClickedDungeonSelectHighRoller
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_DungeonSelect_C::OnClickedDungeonSelectHighRoller()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_DungeonSelect.WB_DungeonSelect_C.OnClickedDungeonSelectHighRoller");
		
		UWB_DungeonSelect_C_OnClickedDungeonSelectHighRoller_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_DungeonSelect.WB_DungeonSelect_C.ClickDungeonSelectButtonOK
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_DungeonSelect_C::ClickDungeonSelectButtonOK()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_DungeonSelect.WB_DungeonSelect_C.ClickDungeonSelectButtonOK");
		
		UWB_DungeonSelect_C_ClickDungeonSelectButtonOK_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_DungeonSelect.WB_DungeonSelect_C.ClickDungeonSelectButtonCancel
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_DungeonSelect_C::ClickDungeonSelectButtonCancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_DungeonSelect.WB_DungeonSelect_C.ClickDungeonSelectButtonCancel");
		
		UWB_DungeonSelect_C_ClickDungeonSelectButtonCancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_DungeonSelect.WB_DungeonSelect_C.OnClickedDungeonSelectOK
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_DungeonSelect_C::OnClickedDungeonSelectOK()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_DungeonSelect.WB_DungeonSelect_C.OnClickedDungeonSelectOK");
		
		UWB_DungeonSelect_C_OnClickedDungeonSelectOK_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_DungeonSelect.WB_DungeonSelect_C.OnClickedDungeonSelectCancel
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_DungeonSelect_C::OnClickedDungeonSelectCancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_DungeonSelect.WB_DungeonSelect_C.OnClickedDungeonSelectCancel");
		
		UWB_DungeonSelect_C_OnClickedDungeonSelectCancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_DungeonSelect.WB_DungeonSelect_C.OnInitializeDungeonSelectText
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_DungeonSelect_C::OnInitializeDungeonSelectText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_DungeonSelect.WB_DungeonSelect_C.OnInitializeDungeonSelectText");
		
		UWB_DungeonSelect_C_OnInitializeDungeonSelectText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_DungeonSelect.WB_DungeonSelect_C.OnUpdateSelectedFrame
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_DungeonSelect_C::OnUpdateSelectedFrame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_DungeonSelect.WB_DungeonSelect_C.OnUpdateSelectedFrame");
		
		UWB_DungeonSelect_C_OnUpdateSelectedFrame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_DungeonSelect.WB_DungeonSelect_C.ExecuteUbergraph_WB_DungeonSelect
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_DungeonSelect_C::ExecuteUbergraph_WB_DungeonSelect(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_DungeonSelect.WB_DungeonSelect_C.ExecuteUbergraph_WB_DungeonSelect");
		
		UWB_DungeonSelect_C_ExecuteUbergraph_WB_DungeonSelect_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_DungeonSelect.WB_DungeonSelect_C.OkButtonEvent__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UWB_DungeonSelect_C::OkButtonEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_DungeonSelect.WB_DungeonSelect_C.OkButtonEvent__DelegateSignature");
		
		UWB_DungeonSelect_C_OkButtonEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_DungeonSelect_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_DungeonSelect_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_DungeonSelect.WB_DungeonSelect_C");
		return ptr;
	}

}


