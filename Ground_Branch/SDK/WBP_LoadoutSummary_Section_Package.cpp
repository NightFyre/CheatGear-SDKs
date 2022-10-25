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
	 * 		Name   -> Function WBP_LoadoutSummary_Section.WBP_LoadoutSummary_Section_C.Update
	 * 		Flags  -> ()
	 */
	void UWBP_LoadoutSummary_Section_C::Update()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_LoadoutSummary_Section.WBP_LoadoutSummary_Section_C.Update");
		
		UWBP_LoadoutSummary_Section_C_Update_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_LoadoutSummary_Section.WBP_LoadoutSummary_Section_C.AddItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBItem*                                     ItemToAdd                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_LoadoutSummary_Section_C::AddItem(class AGBItem* ItemToAdd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_LoadoutSummary_Section.WBP_LoadoutSummary_Section_C.AddItem");
		
		UWBP_LoadoutSummary_Section_C_AddItem_Params params {};
		params.ItemToAdd = ItemToAdd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_LoadoutSummary_Section.WBP_LoadoutSummary_Section_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_LoadoutSummary_Section_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_LoadoutSummary_Section.WBP_LoadoutSummary_Section_C.PreConstruct");
		
		UWBP_LoadoutSummary_Section_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_LoadoutSummary_Section.WBP_LoadoutSummary_Section_C.ExecuteUbergraph_WBP_LoadoutSummary_Section
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_LoadoutSummary_Section_C::ExecuteUbergraph_WBP_LoadoutSummary_Section(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_LoadoutSummary_Section.WBP_LoadoutSummary_Section_C.ExecuteUbergraph_WBP_LoadoutSummary_Section");
		
		UWBP_LoadoutSummary_Section_C_ExecuteUbergraph_WBP_LoadoutSummary_Section_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_LoadoutSummary_Section_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_LoadoutSummary_Section_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_LoadoutSummary_Section.WBP_LoadoutSummary_Section_C");
		return ptr;
	}

}


