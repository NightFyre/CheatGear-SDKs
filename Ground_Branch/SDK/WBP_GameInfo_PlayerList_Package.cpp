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
	 * 		Name   -> Function WBP_GameInfo_PlayerList.WBP_GameInfo_PlayerList_C.FindOrCreatePlayerEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBPlayerState*                              GBPlayerState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWBP_GameInfo_Player_C*                      OutPlayerInfo                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_GameInfo_PlayerList_C::FindOrCreatePlayerEntry(class AGBPlayerState* GBPlayerState, class UWBP_GameInfo_Player_C** OutPlayerInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_GameInfo_PlayerList.WBP_GameInfo_PlayerList_C.FindOrCreatePlayerEntry");
		
		UWBP_GameInfo_PlayerList_C_FindOrCreatePlayerEntry_Params params {};
		params.GBPlayerState = GBPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPlayerInfo != nullptr)
			*OutPlayerInfo = params.OutPlayerInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_GameInfo_PlayerList.WBP_GameInfo_PlayerList_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_GameInfo_PlayerList_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_GameInfo_PlayerList.WBP_GameInfo_PlayerList_C.Construct");
		
		UWBP_GameInfo_PlayerList_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_GameInfo_PlayerList.WBP_GameInfo_PlayerList_C.Update
	 * 		Flags  -> ()
	 */
	void UWBP_GameInfo_PlayerList_C::Update()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_GameInfo_PlayerList.WBP_GameInfo_PlayerList_C.Update");
		
		UWBP_GameInfo_PlayerList_C_Update_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_GameInfo_PlayerList.WBP_GameInfo_PlayerList_C.ExecuteUbergraph_WBP_GameInfo_PlayerList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_GameInfo_PlayerList_C::ExecuteUbergraph_WBP_GameInfo_PlayerList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_GameInfo_PlayerList.WBP_GameInfo_PlayerList_C.ExecuteUbergraph_WBP_GameInfo_PlayerList");
		
		UWBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_GameInfo_PlayerList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_GameInfo_PlayerList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_GameInfo_PlayerList.WBP_GameInfo_PlayerList_C");
		return ptr;
	}

}


