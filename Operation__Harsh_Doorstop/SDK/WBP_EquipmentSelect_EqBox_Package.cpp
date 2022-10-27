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
	 * 		Name   -> Function WBP_EquipmentSelect_EqBox.WBP_EquipmentSelect_EqBox_C.SetEnabled
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_EquipmentSelect_EqBox_C::SetEnabled(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_EquipmentSelect_EqBox.WBP_EquipmentSelect_EqBox_C.SetEnabled");
		
		UWBP_EquipmentSelect_EqBox_C_SetEnabled_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_EquipmentSelect_EqBox.WBP_EquipmentSelect_EqBox_C.IsHighlighted
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bHighlight                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_EquipmentSelect_EqBox_C::IsHighlighted(bool* bHighlight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_EquipmentSelect_EqBox.WBP_EquipmentSelect_EqBox_C.IsHighlighted");
		
		UWBP_EquipmentSelect_EqBox_C_IsHighlighted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bHighlight != nullptr)
			*bHighlight = params.bHighlight;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_EquipmentSelect_EqBox.WBP_EquipmentSelect_EqBox_C.SetHighlight
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bHighlighted                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_EquipmentSelect_EqBox_C::SetHighlight(bool bHighlighted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_EquipmentSelect_EqBox.WBP_EquipmentSelect_EqBox_C.SetHighlight");
		
		UWBP_EquipmentSelect_EqBox_C_SetHighlight_Params params {};
		params.bHighlighted = bHighlighted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_EquipmentSelect_EqBox.WBP_EquipmentSelect_EqBox_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_EquipmentSelect_EqBox_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_EquipmentSelect_EqBox.WBP_EquipmentSelect_EqBox_C.PreConstruct");
		
		UWBP_EquipmentSelect_EqBox_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_EquipmentSelect_EqBox.WBP_EquipmentSelect_EqBox_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_EquipmentSelect_EqBox_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_EquipmentSelect_EqBox.WBP_EquipmentSelect_EqBox_C.Tick");
		
		UWBP_EquipmentSelect_EqBox_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_EquipmentSelect_EqBox.WBP_EquipmentSelect_EqBox_C.ExecuteUbergraph_WBP_EquipmentSelect_EqBox
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_EquipmentSelect_EqBox_C::ExecuteUbergraph_WBP_EquipmentSelect_EqBox(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_EquipmentSelect_EqBox.WBP_EquipmentSelect_EqBox_C.ExecuteUbergraph_WBP_EquipmentSelect_EqBox");
		
		UWBP_EquipmentSelect_EqBox_C_ExecuteUbergraph_WBP_EquipmentSelect_EqBox_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_EquipmentSelect_EqBox_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_EquipmentSelect_EqBox_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_EquipmentSelect_EqBox.WBP_EquipmentSelect_EqBox_C");
		return ptr;
	}

}


