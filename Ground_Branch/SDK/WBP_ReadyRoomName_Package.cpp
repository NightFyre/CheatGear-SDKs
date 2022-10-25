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
	 * 		Name   -> Function WBP_ReadyRoomName.WBP_ReadyRoomName_C.Show
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PlayerName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ETeamElement                                       PlayerTeamElement                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ReadyRoomName_C::Show(const class FString& PlayerName, ETeamElement PlayerTeamElement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ReadyRoomName.WBP_ReadyRoomName_C.Show");
		
		UWBP_ReadyRoomName_C_Show_Params params {};
		params.PlayerName = PlayerName;
		params.PlayerTeamElement = PlayerTeamElement;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ReadyRoomName.WBP_ReadyRoomName_C.Hide
	 * 		Flags  -> ()
	 */
	void UWBP_ReadyRoomName_C::Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ReadyRoomName.WBP_ReadyRoomName_C.Hide");
		
		UWBP_ReadyRoomName_C_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ReadyRoomName.WBP_ReadyRoomName_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_ReadyRoomName_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ReadyRoomName.WBP_ReadyRoomName_C.Construct");
		
		UWBP_ReadyRoomName_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ReadyRoomName.WBP_ReadyRoomName_C.ExecuteUbergraph_WBP_ReadyRoomName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ReadyRoomName_C::ExecuteUbergraph_WBP_ReadyRoomName(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ReadyRoomName.WBP_ReadyRoomName_C.ExecuteUbergraph_WBP_ReadyRoomName");
		
		UWBP_ReadyRoomName_C_ExecuteUbergraph_WBP_ReadyRoomName_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_ReadyRoomName_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_ReadyRoomName_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ReadyRoomName.WBP_ReadyRoomName_C");
		return ptr;
	}

}


