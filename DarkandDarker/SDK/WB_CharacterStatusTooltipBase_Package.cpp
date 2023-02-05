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
	 * 		Name   -> Function WB_CharacterStatusTooltipBase.WB_CharacterStatusTooltipBase_C.ScriptLoad
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     InObjectLoaded                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        ResultText                                                 (Parm, OutParm)
	 */
	void UWB_CharacterStatusTooltipBase_C::ScriptLoad(class UObject* InObjectLoaded, class FText* ResultText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_CharacterStatusTooltipBase.WB_CharacterStatusTooltipBase_C.ScriptLoad");
		
		UWB_CharacterStatusTooltipBase_C_ScriptLoad_Params params {};
		params.InObjectLoaded = InObjectLoaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ResultText != nullptr)
			*ResultText = params.ResultText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_CharacterStatusTooltipBase.WB_CharacterStatusTooltipBase_C.GetStatusValueText2
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTextBlock*                                  TextValue2                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_CharacterStatusTooltipBase_C::GetStatusValueText2(class UTextBlock** TextValue2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_CharacterStatusTooltipBase.WB_CharacterStatusTooltipBase_C.GetStatusValueText2");
		
		UWB_CharacterStatusTooltipBase_C_GetStatusValueText2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TextValue2 != nullptr)
			*TextValue2 = params.TextValue2;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_CharacterStatusTooltipBase.WB_CharacterStatusTooltipBase_C.GetTooltipWidget
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class UWidget* UWB_CharacterStatusTooltipBase_C::GetTooltipWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_CharacterStatusTooltipBase.WB_CharacterStatusTooltipBase_C.GetTooltipWidget");
		
		UWB_CharacterStatusTooltipBase_C_GetTooltipWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_CharacterStatusTooltipBase.WB_CharacterStatusTooltipBase_C.GetStatusValueText1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTextBlock*                                  TextValue1                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_CharacterStatusTooltipBase_C::GetStatusValueText1(class UTextBlock** TextValue1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_CharacterStatusTooltipBase.WB_CharacterStatusTooltipBase_C.GetStatusValueText1");
		
		UWB_CharacterStatusTooltipBase_C_GetStatusValueText1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TextValue1 != nullptr)
			*TextValue1 = params.TextValue1;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_CharacterStatusTooltipBase.WB_CharacterStatusTooltipBase_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWB_CharacterStatusTooltipBase_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_CharacterStatusTooltipBase.WB_CharacterStatusTooltipBase_C.Construct");
		
		UWB_CharacterStatusTooltipBase_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_CharacterStatusTooltipBase.WB_CharacterStatusTooltipBase_C.커스텀이벤트_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     InObjectLoaded                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_CharacterStatusTooltipBase_C::_1(class UObject* InObjectLoaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_CharacterStatusTooltipBase.WB_CharacterStatusTooltipBase_C.커스텀이벤트_1");
		
		UWB_CharacterStatusTooltipBase_C__1_Params params {};
		params.InObjectLoaded = InObjectLoaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_CharacterStatusTooltipBase.WB_CharacterStatusTooltipBase_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_CharacterStatusTooltipBase_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_CharacterStatusTooltipBase.WB_CharacterStatusTooltipBase_C.PreConstruct");
		
		UWB_CharacterStatusTooltipBase_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_CharacterStatusTooltipBase.WB_CharacterStatusTooltipBase_C.ExecuteUbergraph_WB_CharacterStatusTooltipBase
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_CharacterStatusTooltipBase_C::ExecuteUbergraph_WB_CharacterStatusTooltipBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_CharacterStatusTooltipBase.WB_CharacterStatusTooltipBase_C.ExecuteUbergraph_WB_CharacterStatusTooltipBase");
		
		UWB_CharacterStatusTooltipBase_C_ExecuteUbergraph_WB_CharacterStatusTooltipBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_CharacterStatusTooltipBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_CharacterStatusTooltipBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_CharacterStatusTooltipBase.WB_CharacterStatusTooltipBase_C");
		return ptr;
	}

}


