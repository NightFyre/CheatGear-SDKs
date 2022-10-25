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
	 * 		Name   -> Function WBP_FireMode_Manager.WBP_FireMode_Manager_C.ShowFireModes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBFirearm*                                  Firearm                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_FireMode_Manager_C::ShowFireModes(class AGBFirearm* Firearm)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_FireMode_Manager.WBP_FireMode_Manager_C.ShowFireModes");
		
		UWBP_FireMode_Manager_C_ShowFireModes_Params params {};
		params.Firearm = Firearm;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_FireMode_Manager.WBP_FireMode_Manager_C.OnAnimationFinished_Event_1
	 * 		Flags  -> ()
	 */
	void UWBP_FireMode_Manager_C::OnAnimationFinished_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_FireMode_Manager.WBP_FireMode_Manager_C.OnAnimationFinished_Event_1");
		
		UWBP_FireMode_Manager_C_OnAnimationFinished_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_FireMode_Manager.WBP_FireMode_Manager_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_FireMode_Manager_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_FireMode_Manager.WBP_FireMode_Manager_C.Construct");
		
		UWBP_FireMode_Manager_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_FireMode_Manager.WBP_FireMode_Manager_C.OnPlayerControllerStateChanged_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        OldState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_FireMode_Manager_C::OnPlayerControllerStateChanged_Event_1(const class FName& OldState, const class FName& NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_FireMode_Manager.WBP_FireMode_Manager_C.OnPlayerControllerStateChanged_Event_1");
		
		UWBP_FireMode_Manager_C_OnPlayerControllerStateChanged_Event_1_Params params {};
		params.OldState = OldState;
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_FireMode_Manager.WBP_FireMode_Manager_C.ExecuteUbergraph_WBP_FireMode_Manager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_FireMode_Manager_C::ExecuteUbergraph_WBP_FireMode_Manager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_FireMode_Manager.WBP_FireMode_Manager_C.ExecuteUbergraph_WBP_FireMode_Manager");
		
		UWBP_FireMode_Manager_C_ExecuteUbergraph_WBP_FireMode_Manager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_FireMode_Manager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_FireMode_Manager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_FireMode_Manager.WBP_FireMode_Manager_C");
		return ptr;
	}

}


