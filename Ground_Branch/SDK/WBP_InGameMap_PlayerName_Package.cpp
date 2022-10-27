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
	 * 		Name   -> Function WBP_InGameMap_PlayerName.WBP_InGameMap_PlayerName_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_InGameMap_PlayerName_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InGameMap_PlayerName.WBP_InGameMap_PlayerName_C.Construct");
		
		UWBP_InGameMap_PlayerName_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InGameMap_PlayerName.WBP_InGameMap_PlayerName_C.ExecuteUbergraph_WBP_InGameMap_PlayerName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_InGameMap_PlayerName_C::ExecuteUbergraph_WBP_InGameMap_PlayerName(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InGameMap_PlayerName.WBP_InGameMap_PlayerName_C.ExecuteUbergraph_WBP_InGameMap_PlayerName");
		
		UWBP_InGameMap_PlayerName_C_ExecuteUbergraph_WBP_InGameMap_PlayerName_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_InGameMap_PlayerName_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_InGameMap_PlayerName_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_InGameMap_PlayerName.WBP_InGameMap_PlayerName_C");
		return ptr;
	}

}


