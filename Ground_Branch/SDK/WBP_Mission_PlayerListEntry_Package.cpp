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
	 * 		Name   -> Function WBP_Mission_PlayerListEntry.WBP_Mission_PlayerListEntry_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_Mission_PlayerListEntry_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Mission_PlayerListEntry.WBP_Mission_PlayerListEntry_C.Construct");
		
		UWBP_Mission_PlayerListEntry_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Mission_PlayerListEntry.WBP_Mission_PlayerListEntry_C.OnReplicatedPlayerStatsUpdated_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBPlayerState*                              PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Mission_PlayerListEntry_C::OnReplicatedPlayerStatsUpdated_Event_1(class AGBPlayerState* PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Mission_PlayerListEntry.WBP_Mission_PlayerListEntry_C.OnReplicatedPlayerStatsUpdated_Event_1");
		
		UWBP_Mission_PlayerListEntry_C_OnReplicatedPlayerStatsUpdated_Event_1_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Mission_PlayerListEntry.WBP_Mission_PlayerListEntry_C.UpdateStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      StatusKey                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_Mission_PlayerListEntry_C::UpdateStatus(const class FString& StatusKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Mission_PlayerListEntry.WBP_Mission_PlayerListEntry_C.UpdateStatus");
		
		UWBP_Mission_PlayerListEntry_C_UpdateStatus_Params params {};
		params.StatusKey = StatusKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Mission_PlayerListEntry.WBP_Mission_PlayerListEntry_C.ExecuteUbergraph_WBP_Mission_PlayerListEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Mission_PlayerListEntry_C::ExecuteUbergraph_WBP_Mission_PlayerListEntry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Mission_PlayerListEntry.WBP_Mission_PlayerListEntry_C.ExecuteUbergraph_WBP_Mission_PlayerListEntry");
		
		UWBP_Mission_PlayerListEntry_C_ExecuteUbergraph_WBP_Mission_PlayerListEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Mission_PlayerListEntry.WBP_Mission_PlayerListEntry_C.OnUpdate__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Mission_PlayerListEntry_C::OnUpdate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Mission_PlayerListEntry.WBP_Mission_PlayerListEntry_C.OnUpdate__DelegateSignature");
		
		UWBP_Mission_PlayerListEntry_C_OnUpdate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Mission_PlayerListEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Mission_PlayerListEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Mission_PlayerListEntry.WBP_Mission_PlayerListEntry_C");
		return ptr;
	}

}


