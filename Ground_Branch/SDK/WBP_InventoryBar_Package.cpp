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
	 * 		Name   -> Function WBP_InventoryBar.WBP_InventoryBar_C.GenerateEntries
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InventorySlot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWBP_InventoryBar_SubMenu_Content_C*         SubMenuContent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_InventoryBar_C::GenerateEntries(int32_t InventorySlot, class UWBP_InventoryBar_SubMenu_Content_C* SubMenuContent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryBar.WBP_InventoryBar_C.GenerateEntries");
		
		UWBP_InventoryBar_C_GenerateEntries_Params params {};
		params.InventorySlot = InventorySlot;
		params.SubMenuContent = SubMenuContent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryBar.WBP_InventoryBar_C.GetItemsByItemSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InventorySlot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class AGBItem*>                             ItemsInSlot1                                               (Parm, OutParm)
	 */
	void UWBP_InventoryBar_C::GetItemsByItemSlot(int32_t InventorySlot, TArray<class AGBItem*>* ItemsInSlot1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryBar.WBP_InventoryBar_C.GetItemsByItemSlot");
		
		UWBP_InventoryBar_C_GetItemsByItemSlot_Params params {};
		params.InventorySlot = InventorySlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemsInSlot1 != nullptr)
			*ItemsInSlot1 = params.ItemsInSlot1;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryBar.WBP_InventoryBar_C.Select
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bImmediate                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_InventoryBar_C::Select(int32_t Index, bool bImmediate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryBar.WBP_InventoryBar_C.Select");
		
		UWBP_InventoryBar_C_Select_Params params {};
		params.Index = Index;
		params.bImmediate = bImmediate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryBar.WBP_InventoryBar_C.Cycle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNext                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bRestricted                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_InventoryBar_C::Cycle(bool bNext, bool bRestricted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryBar.WBP_InventoryBar_C.Cycle");
		
		UWBP_InventoryBar_C_Cycle_Params params {};
		params.bNext = bNext;
		params.bRestricted = bRestricted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryBar.WBP_InventoryBar_C.SetSlingPoints
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryBar_C::SetSlingPoints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryBar.WBP_InventoryBar_C.SetSlingPoints");
		
		UWBP_InventoryBar_C_SetSlingPoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryBar.WBP_InventoryBar_C.PopulateSubMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWBP_InventoryBar_SubMenu_Content_C*         SubMenuContent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_InventoryBar_C::PopulateSubMenu(int32_t Index, class UWBP_InventoryBar_SubMenu_Content_C* SubMenuContent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryBar.WBP_InventoryBar_C.PopulateSubMenu");
		
		UWBP_InventoryBar_C_PopulateSubMenu_Params params {};
		params.Index = Index;
		params.SubMenuContent = SubMenuContent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryBar.WBP_InventoryBar_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryBar_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryBar.WBP_InventoryBar_C.Construct");
		
		UWBP_InventoryBar_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryBar.WBP_InventoryBar_C.OnCycleCat_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNext                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_InventoryBar_C::OnCycleCat_Event_1(bool bNext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryBar.WBP_InventoryBar_C.OnCycleCat_Event_1");
		
		UWBP_InventoryBar_C_OnCycleCat_Event_1_Params params {};
		params.bNext = bNext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryBar.WBP_InventoryBar_C.BindActions
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryBar_C::BindActions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryBar.WBP_InventoryBar_C.BindActions");
		
		UWBP_InventoryBar_C_BindActions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryBar.WBP_InventoryBar_C.OnNextPosPressed_Event
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryBar_C::OnNextPosPressed_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryBar.WBP_InventoryBar_C.OnNextPosPressed_Event");
		
		UWBP_InventoryBar_C_OnNextPosPressed_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryBar.WBP_InventoryBar_C.OnPrevPosPressed_Event
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryBar_C::OnPrevPosPressed_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryBar.WBP_InventoryBar_C.OnPrevPosPressed_Event");
		
		UWBP_InventoryBar_C_OnPrevPosPressed_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryBar.WBP_InventoryBar_C.HideInventoryBar
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryBar_C::HideInventoryBar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryBar.WBP_InventoryBar_C.HideInventoryBar");
		
		UWBP_InventoryBar_C_HideInventoryBar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryBar.WBP_InventoryBar_C.ShowInventoryBar
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryBar_C::ShowInventoryBar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryBar.WBP_InventoryBar_C.ShowInventoryBar");
		
		UWBP_InventoryBar_C_ShowInventoryBar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryBar.WBP_InventoryBar_C.OnUseMainHandPressed_Event
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryBar_C::OnUseMainHandPressed_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryBar.WBP_InventoryBar_C.OnUseMainHandPressed_Event");
		
		UWBP_InventoryBar_C_OnUseMainHandPressed_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryBar.WBP_InventoryBar_C.OnUseMainHandRelease_Event
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryBar_C::OnUseMainHandRelease_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryBar.WBP_InventoryBar_C.OnUseMainHandRelease_Event");
		
		UWBP_InventoryBar_C_OnUseMainHandRelease_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryBar.WBP_InventoryBar_C.OnUseOffHandPressed_Event
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryBar_C::OnUseOffHandPressed_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryBar.WBP_InventoryBar_C.OnUseOffHandPressed_Event");
		
		UWBP_InventoryBar_C_OnUseOffHandPressed_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryBar.WBP_InventoryBar_C.OnUseOffHandReleased_Event
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryBar_C::OnUseOffHandReleased_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryBar.WBP_InventoryBar_C.OnUseOffHandReleased_Event");
		
		UWBP_InventoryBar_C_OnUseOffHandReleased_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryBar.WBP_InventoryBar_C.ExecuteUbergraph_WBP_InventoryBar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_InventoryBar_C::ExecuteUbergraph_WBP_InventoryBar(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryBar.WBP_InventoryBar_C.ExecuteUbergraph_WBP_InventoryBar");
		
		UWBP_InventoryBar_C_ExecuteUbergraph_WBP_InventoryBar_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_InventoryBar_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_InventoryBar_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_InventoryBar.WBP_InventoryBar_C");
		return ptr;
	}

}


