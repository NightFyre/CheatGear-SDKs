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
	 * 		Name   -> Function UI_CriminalRecord.UI_CriminalRecord_C.InitFromCharacterTemplate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCharacterTemplate                          Template                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUI_CriminalRecord_C::InitFromCharacterTemplate(const struct FCharacterTemplate& Template)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CriminalRecord.UI_CriminalRecord_C.InitFromCharacterTemplate");
		
		UUI_CriminalRecord_C_InitFromCharacterTemplate_Params params {};
		params.Template = Template;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CriminalRecord.UI_CriminalRecord_C.ClearSkills
	 * 		Flags  -> ()
	 */
	void UUI_CriminalRecord_C::ClearSkills()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CriminalRecord.UI_CriminalRecord_C.ClearSkills");
		
		UUI_CriminalRecord_C_ClearSkills_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CriminalRecord.UI_CriminalRecord_C.ChangeAttribute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESkillAttribute                                    Attribute                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CriminalRecord_C::ChangeAttribute(ESkillAttribute Attribute, int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CriminalRecord.UI_CriminalRecord_C.ChangeAttribute");
		
		UUI_CriminalRecord_C_ChangeAttribute_Params params {};
		params.Attribute = Attribute;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CriminalRecord.UI_CriminalRecord_C.AddSkill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSkillTemplate                              SkillTemplate                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUI_CriminalRecord_C::AddSkill(const struct FSkillTemplate& SkillTemplate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CriminalRecord.UI_CriminalRecord_C.AddSkill");
		
		UUI_CriminalRecord_C_AddSkill_Params params {};
		params.SkillTemplate = SkillTemplate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CriminalRecord.UI_CriminalRecord_C.BndEvt__UI_MenuButton_0_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CriminalRecord_C::BndEvt__UI_MenuButton_0_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CriminalRecord.UI_CriminalRecord_C.BndEvt__UI_MenuButton_0_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature");
		
		UUI_CriminalRecord_C_BndEvt__UI_MenuButton_0_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CriminalRecord.UI_CriminalRecord_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CriminalRecord_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CriminalRecord.UI_CriminalRecord_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature");
		
		UUI_CriminalRecord_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CriminalRecord.UI_CriminalRecord_C.ExecuteUbergraph_UI_CriminalRecord
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CriminalRecord_C::ExecuteUbergraph_UI_CriminalRecord(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CriminalRecord.UI_CriminalRecord_C.ExecuteUbergraph_UI_CriminalRecord");
		
		UUI_CriminalRecord_C_ExecuteUbergraph_UI_CriminalRecord_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CriminalRecord.UI_CriminalRecord_C.OnCancelClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CriminalRecord_C::OnCancelClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CriminalRecord.UI_CriminalRecord_C.OnCancelClicked__DelegateSignature");
		
		UUI_CriminalRecord_C_OnCancelClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CriminalRecord.UI_CriminalRecord_C.OnOkClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CriminalRecord_C::OnOkClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CriminalRecord.UI_CriminalRecord_C.OnOkClicked__DelegateSignature");
		
		UUI_CriminalRecord_C_OnOkClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_CriminalRecord_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CriminalRecord_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_CriminalRecord.UI_CriminalRecord_C");
		return ptr;
	}

}


