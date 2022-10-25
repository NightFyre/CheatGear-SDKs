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
	 * 		Name   -> Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.SetTabAlerted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Alerted                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_TabModeTabsContainer_C::SetTabAlerted(int32_t Index, bool Alerted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.SetTabAlerted");
		
		UUI_TabModeTabsContainer_C_SetTabAlerted_Params params {};
		params.Index = Index;
		params.Alerted = Alerted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.GetTabFromTabMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETabMode                                           Tab                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUI_TabModeTab_C*                            Result                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_TabModeTabsContainer_C::GetTabFromTabMode(ETabMode Tab, class UUI_TabModeTab_C** Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.GetTabFromTabMode");
		
		UUI_TabModeTabsContainer_C_GetTabFromTabMode_Params params {};
		params.Tab = Tab;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.SetTabEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETabMode                                           Tab                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_TabModeTabsContainer_C::SetTabEnabled(ETabMode Tab, bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.SetTabEnabled");
		
		UUI_TabModeTabsContainer_C_SetTabEnabled_Params params {};
		params.Tab = Tab;
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.OpenSpecifiedTab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_TabModeTab_C*                            Tab                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETabMode                                           tabMode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_TabModeTabsContainer_C::OpenSpecifiedTab(class UUI_TabModeTab_C* Tab, ETabMode tabMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.OpenSpecifiedTab");
		
		UUI_TabModeTabsContainer_C_OpenSpecifiedTab_Params params {};
		params.Tab = Tab;
		params.tabMode = tabMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.SelectTab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_TabModeTabsContainer_C::SelectTab(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.SelectTab");
		
		UUI_TabModeTabsContainer_C_SelectTab_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_TabModeTabsContainer_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.Construct");
		
		UUI_TabModeTabsContainer_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.BndEvt__UI_TabModeTab_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_TabModeTabsContainer_C::BndEvt__UI_TabModeTab_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.BndEvt__UI_TabModeTab_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");
		
		UUI_TabModeTabsContainer_C_BndEvt__UI_TabModeTab_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.BndEvt__UI_TabModeTab_0_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_TabModeTabsContainer_C::BndEvt__UI_TabModeTab_0_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.BndEvt__UI_TabModeTab_0_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");
		
		UUI_TabModeTabsContainer_C_BndEvt__UI_TabModeTab_0_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.BndEvt__UI_TabModeTab_1_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_TabModeTabsContainer_C::BndEvt__UI_TabModeTab_1_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.BndEvt__UI_TabModeTab_1_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature");
		
		UUI_TabModeTabsContainer_C_BndEvt__UI_TabModeTab_1_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.BndEvt__CraftingTab_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_TabModeTabsContainer_C::BndEvt__CraftingTab_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.BndEvt__CraftingTab_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");
		
		UUI_TabModeTabsContainer_C_BndEvt__CraftingTab_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.BndEvt__JournalTab_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_TabModeTabsContainer_C::BndEvt__JournalTab_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.BndEvt__JournalTab_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature");
		
		UUI_TabModeTabsContainer_C_BndEvt__JournalTab_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.BndEvt__SquadTab_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_TabModeTabsContainer_C::BndEvt__SquadTab_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.BndEvt__SquadTab_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature");
		
		UUI_TabModeTabsContainer_C_BndEvt__SquadTab_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.ExecuteUbergraph_UI_TabModeTabsContainer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_TabModeTabsContainer_C::ExecuteUbergraph_UI_TabModeTabsContainer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.ExecuteUbergraph_UI_TabModeTabsContainer");
		
		UUI_TabModeTabsContainer_C_ExecuteUbergraph_UI_TabModeTabsContainer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_TabModeTabsContainer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_TabModeTabsContainer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_TabModeTabsContainer.UI_TabModeTabsContainer_C");
		return ptr;
	}

}


