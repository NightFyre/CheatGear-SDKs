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
	 * 		Name   -> Function WBP_CaptureStatus_UnitIcon.WBP_CaptureStatus_UnitIcon_C.SetIsMultipleUnit
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewUnitMultiple                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_CaptureStatus_UnitIcon_C::SetIsMultipleUnit(bool bNewUnitMultiple)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CaptureStatus_UnitIcon.WBP_CaptureStatus_UnitIcon_C.SetIsMultipleUnit");
		
		UWBP_CaptureStatus_UnitIcon_C_SetIsMultipleUnit_Params params {};
		params.bNewUnitMultiple = bNewUnitMultiple;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_CaptureStatus_UnitIcon.WBP_CaptureStatus_UnitIcon_C.SetUnitType
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ECaptureUnitType                                   NewUnitType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CaptureStatus_UnitIcon_C::SetUnitType(ECaptureUnitType NewUnitType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CaptureStatus_UnitIcon.WBP_CaptureStatus_UnitIcon_C.SetUnitType");
		
		UWBP_CaptureStatus_UnitIcon_C_SetUnitType_Params params {};
		params.NewUnitType = NewUnitType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_CaptureStatus_UnitIcon.WBP_CaptureStatus_UnitIcon_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_CaptureStatus_UnitIcon_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CaptureStatus_UnitIcon.WBP_CaptureStatus_UnitIcon_C.PreConstruct");
		
		UWBP_CaptureStatus_UnitIcon_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_CaptureStatus_UnitIcon.WBP_CaptureStatus_UnitIcon_C.ExecuteUbergraph_WBP_CaptureStatus_UnitIcon
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CaptureStatus_UnitIcon_C::ExecuteUbergraph_WBP_CaptureStatus_UnitIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CaptureStatus_UnitIcon.WBP_CaptureStatus_UnitIcon_C.ExecuteUbergraph_WBP_CaptureStatus_UnitIcon");
		
		UWBP_CaptureStatus_UnitIcon_C_ExecuteUbergraph_WBP_CaptureStatus_UnitIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_CaptureStatus_UnitIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_CaptureStatus_UnitIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_CaptureStatus_UnitIcon.WBP_CaptureStatus_UnitIcon_C");
		return ptr;
	}

}


