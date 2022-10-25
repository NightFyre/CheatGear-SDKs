/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * 		Name   -> Function BCU_Body_Monitor.BCU_Body_Monitor_C.shouldAlarmBeOn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               shouldAlarmBeOn                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBCU_Body_Monitor_C::shouldAlarmBeOn(bool* shouldAlarmBeOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.shouldAlarmBeOn");
		
		UBCU_Body_Monitor_C_shouldAlarmBeOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (shouldAlarmBeOn != nullptr)
			*shouldAlarmBeOn = params.shouldAlarmBeOn;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BCU_Body_Monitor.BCU_Body_Monitor_C.GetContentSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   contentSize                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBCU_Body_Monitor_C::GetContentSize(struct FVector2D* contentSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.GetContentSize");
		
		UBCU_Body_Monitor_C_GetContentSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (contentSize != nullptr)
			*contentSize = params.contentSize;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BCU_Body_Monitor.BCU_Body_Monitor_C.SetPrisonerToMonitorOnChildren
	 * 		Flags  -> ()
	 */
	void UBCU_Body_Monitor_C::SetPrisonerToMonitorOnChildren()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.SetPrisonerToMonitorOnChildren");
		
		UBCU_Body_Monitor_C_SetPrisonerToMonitorOnChildren_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BCU_Body_Monitor.BCU_Body_Monitor_C.SetSubTitles
	 * 		Flags  -> ()
	 */
	void UBCU_Body_Monitor_C::SetSubTitles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.SetSubTitles");
		
		UBCU_Body_Monitor_C_SetSubTitles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BCU_Body_Monitor.BCU_Body_Monitor_C.GetTitleText
	 * 		Flags  -> ()
	 */
	class FText UBCU_Body_Monitor_C::GetTitleText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.GetTitleText");
		
		UBCU_Body_Monitor_C_GetTitleText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BCU_Body_Monitor.BCU_Body_Monitor_C.GetDefaultTitle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        defaultTitle                                               (Parm, OutParm)
	 */
	void UBCU_Body_Monitor_C::GetDefaultTitle(class FText* defaultTitle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.GetDefaultTitle");
		
		UBCU_Body_Monitor_C_GetDefaultTitle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (defaultTitle != nullptr)
			*defaultTitle = params.defaultTitle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BCU_Body_Monitor.BCU_Body_Monitor_C.SelectCustomColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBCU_Body_Monitor_C::SelectCustomColor(struct FLinearColor* Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.SelectCustomColor");
		
		UBCU_Body_Monitor_C_SelectCustomColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Color != nullptr)
			*Color = params.Color;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BCU_Body_Monitor.BCU_Body_Monitor_C.OnMinimize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               shouldMinimize                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBCU_Body_Monitor_C::OnMinimize(bool shouldMinimize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.OnMinimize");
		
		UBCU_Body_Monitor_C_OnMinimize_Params params {};
		params.shouldMinimize = shouldMinimize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BCU_Body_Monitor.BCU_Body_Monitor_C.ExecuteUbergraph_BCU_Body_Monitor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBCU_Body_Monitor_C::ExecuteUbergraph_BCU_Body_Monitor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.ExecuteUbergraph_BCU_Body_Monitor");
		
		UBCU_Body_Monitor_C_ExecuteUbergraph_BCU_Body_Monitor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BCU_Body_Monitor.BCU_Body_Monitor_C.BCUBodyMonitorSizeChangedEventDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   Size                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBCU_Body_Monitor_C::BCUBodyMonitorSizeChangedEventDispatcher__DelegateSignature(const struct FVector2D& Size)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.BCUBodyMonitorSizeChangedEventDispatcher__DelegateSignature");
		
		UBCU_Body_Monitor_C_BCUBodyMonitorSizeChangedEventDispatcher__DelegateSignature_Params params {};
		params.Size = Size;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBCU_Body_Monitor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBCU_Body_Monitor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BCU_Body_Monitor.BCU_Body_Monitor_C");
		return ptr;
	}

}


