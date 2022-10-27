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
	 * 		Name   -> Function WBP_Mission_PlayerList.WBP_Mission_PlayerList_C.SetTeamRole
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Role                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Mission_PlayerList_C::SetTeamRole(const class FName& Role)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Mission_PlayerList.WBP_Mission_PlayerList_C.SetTeamRole");
		
		UWBP_Mission_PlayerList_C_SetTeamRole_Params params {};
		params.Role = Role;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Mission_PlayerList.WBP_Mission_PlayerList_C.GetTotalTeamBoxVis
	 * 		Flags  -> ()
	 */
	ESlateVisibility UWBP_Mission_PlayerList_C::GetTotalTeamBoxVis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Mission_PlayerList.WBP_Mission_PlayerList_C.GetTotalTeamBoxVis");
		
		UWBP_Mission_PlayerList_C_GetTotalTeamBoxVis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Mission_PlayerList.WBP_Mission_PlayerList_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_Mission_PlayerList_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Mission_PlayerList.WBP_Mission_PlayerList_C.Construct");
		
		UWBP_Mission_PlayerList_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Mission_PlayerList.WBP_Mission_PlayerList_C.OnUpdate_Event_1
	 * 		Flags  -> ()
	 */
	void UWBP_Mission_PlayerList_C::OnUpdate_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Mission_PlayerList.WBP_Mission_PlayerList_C.OnUpdate_Event_1");
		
		UWBP_Mission_PlayerList_C_OnUpdate_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Mission_PlayerList.WBP_Mission_PlayerList_C.ExecuteUbergraph_WBP_Mission_PlayerList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Mission_PlayerList_C::ExecuteUbergraph_WBP_Mission_PlayerList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Mission_PlayerList.WBP_Mission_PlayerList_C.ExecuteUbergraph_WBP_Mission_PlayerList");
		
		UWBP_Mission_PlayerList_C_ExecuteUbergraph_WBP_Mission_PlayerList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Mission_PlayerList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Mission_PlayerList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Mission_PlayerList.WBP_Mission_PlayerList_C");
		return ptr;
	}

}


