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
	 * 		Name   -> Function WBP_Mission_TeamScoreListEntry.WBP_Mission_TeamScoreListEntry_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_Mission_TeamScoreListEntry_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Mission_TeamScoreListEntry.WBP_Mission_TeamScoreListEntry_C.Construct");
		
		UWBP_Mission_TeamScoreListEntry_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Mission_TeamScoreListEntry.WBP_Mission_TeamScoreListEntry_C.ExecuteUbergraph_WBP_Mission_TeamScoreListEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Mission_TeamScoreListEntry_C::ExecuteUbergraph_WBP_Mission_TeamScoreListEntry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Mission_TeamScoreListEntry.WBP_Mission_TeamScoreListEntry_C.ExecuteUbergraph_WBP_Mission_TeamScoreListEntry");
		
		UWBP_Mission_TeamScoreListEntry_C_ExecuteUbergraph_WBP_Mission_TeamScoreListEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Mission_TeamScoreListEntry.WBP_Mission_TeamScoreListEntry_C.OnUpdate__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Mission_TeamScoreListEntry_C::OnUpdate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Mission_TeamScoreListEntry.WBP_Mission_TeamScoreListEntry_C.OnUpdate__DelegateSignature");
		
		UWBP_Mission_TeamScoreListEntry_C_OnUpdate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Mission_TeamScoreListEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Mission_TeamScoreListEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Mission_TeamScoreListEntry.WBP_Mission_TeamScoreListEntry_C");
		return ptr;
	}

}


