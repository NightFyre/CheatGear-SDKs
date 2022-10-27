/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * 		Name   -> Function WBP_InventoryBar_Heading.WBP_InventoryBar_Heading_C.OnGetUserMenuContent_1
	 * 		Flags  -> ()
	 */
	class UUserWidget* UWBP_InventoryBar_Heading_C::OnGetUserMenuContent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryBar_Heading.WBP_InventoryBar_Heading_C.OnGetUserMenuContent_1");
		
		UWBP_InventoryBar_Heading_C_OnGetUserMenuContent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryBar_Heading.WBP_InventoryBar_Heading_C.GetVisibility_1
	 * 		Flags  -> ()
	 */
	ESlateVisibility UWBP_InventoryBar_Heading_C::GetVisibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryBar_Heading.WBP_InventoryBar_Heading_C.GetVisibility_1");
		
		UWBP_InventoryBar_Heading_C_GetVisibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryBar_Heading.WBP_InventoryBar_Heading_C.BndEvt__CheckBox_Tab_K2Node_ComponentBoundEvent_1034_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_InventoryBar_Heading_C::BndEvt__CheckBox_Tab_K2Node_ComponentBoundEvent_1034_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryBar_Heading.WBP_InventoryBar_Heading_C.BndEvt__CheckBox_Tab_K2Node_ComponentBoundEvent_1034_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UWBP_InventoryBar_Heading_C_BndEvt__CheckBox_Tab_K2Node_ComponentBoundEvent_1034_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryBar_Heading.WBP_InventoryBar_Heading_C.InternalSetSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_InventoryBar_Heading_C::InternalSetSelected(bool IsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryBar_Heading.WBP_InventoryBar_Heading_C.InternalSetSelected");
		
		UWBP_InventoryBar_Heading_C_InternalSetSelected_Params params {};
		params.IsSelected = IsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryBar_Heading.WBP_InventoryBar_Heading_C.CloseSubMenu
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryBar_Heading_C::CloseSubMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryBar_Heading.WBP_InventoryBar_Heading_C.CloseSubMenu");
		
		UWBP_InventoryBar_Heading_C_CloseSubMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryBar_Heading.WBP_InventoryBar_Heading_C.OpenSubMenu
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryBar_Heading_C::OpenSubMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryBar_Heading.WBP_InventoryBar_Heading_C.OpenSubMenu");
		
		UWBP_InventoryBar_Heading_C_OpenSubMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryBar_Heading.WBP_InventoryBar_Heading_C.Cycle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNext                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bRestricted                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_InventoryBar_Heading_C::Cycle(bool bNext, bool bRestricted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryBar_Heading.WBP_InventoryBar_Heading_C.Cycle");
		
		UWBP_InventoryBar_Heading_C_Cycle_Params params {};
		params.bNext = bNext;
		params.bRestricted = bRestricted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryBar_Heading.WBP_InventoryBar_Heading_C.EquipSelectedItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bMainhand                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bImmediate                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_InventoryBar_Heading_C::EquipSelectedItem(bool bMainhand, bool bImmediate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryBar_Heading.WBP_InventoryBar_Heading_C.EquipSelectedItem");
		
		UWBP_InventoryBar_Heading_C_EquipSelectedItem_Params params {};
		params.bMainhand = bMainhand;
		params.bImmediate = bImmediate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryBar_Heading.WBP_InventoryBar_Heading_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_InventoryBar_Heading_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryBar_Heading.WBP_InventoryBar_Heading_C.PreConstruct");
		
		UWBP_InventoryBar_Heading_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryBar_Heading.WBP_InventoryBar_Heading_C.BindOnCycleCat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_InventoryBar_SubMenu_Content_C*         Content                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_InventoryBar_Heading_C::BindOnCycleCat(class UWBP_InventoryBar_SubMenu_Content_C* Content)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryBar_Heading.WBP_InventoryBar_Heading_C.BindOnCycleCat");
		
		UWBP_InventoryBar_Heading_C_BindOnCycleCat_Params params {};
		params.Content = Content;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryBar_Heading.WBP_InventoryBar_Heading_C.OnCycleCat_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNext                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_InventoryBar_Heading_C::OnCycleCat_Event_1(bool bNext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryBar_Heading.WBP_InventoryBar_Heading_C.OnCycleCat_Event_1");
		
		UWBP_InventoryBar_Heading_C_OnCycleCat_Event_1_Params params {};
		params.bNext = bNext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryBar_Heading.WBP_InventoryBar_Heading_C.ExecuteUbergraph_WBP_InventoryBar_Heading
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_InventoryBar_Heading_C::ExecuteUbergraph_WBP_InventoryBar_Heading(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryBar_Heading.WBP_InventoryBar_Heading_C.ExecuteUbergraph_WBP_InventoryBar_Heading");
		
		UWBP_InventoryBar_Heading_C_ExecuteUbergraph_WBP_InventoryBar_Heading_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryBar_Heading.WBP_InventoryBar_Heading_C.OnCycleCat__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNext                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_InventoryBar_Heading_C::OnCycleCat__DelegateSignature(bool bNext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryBar_Heading.WBP_InventoryBar_Heading_C.OnCycleCat__DelegateSignature");
		
		UWBP_InventoryBar_Heading_C_OnCycleCat__DelegateSignature_Params params {};
		params.bNext = bNext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_InventoryBar_Heading_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_InventoryBar_Heading_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_InventoryBar_Heading.WBP_InventoryBar_Heading_C");
		return ptr;
	}

}


