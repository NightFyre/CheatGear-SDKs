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
	 * 		Name   -> Function WBP_Spectator_PlayerNamePlate.WBP_Spectator_PlayerNamePlate_C.Get_TextBlock_1_Text_1
	 * 		Flags  -> ()
	 */
	class FText UWBP_Spectator_PlayerNamePlate_C::Get_TextBlock_1_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Spectator_PlayerNamePlate.WBP_Spectator_PlayerNamePlate_C.Get_TextBlock_1_Text_1");
		
		UWBP_Spectator_PlayerNamePlate_C_Get_TextBlock_1_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Spectator_PlayerNamePlate.WBP_Spectator_PlayerNamePlate_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Spectator_PlayerNamePlate_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Spectator_PlayerNamePlate.WBP_Spectator_PlayerNamePlate_C.Tick");
		
		UWBP_Spectator_PlayerNamePlate_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Spectator_PlayerNamePlate.WBP_Spectator_PlayerNamePlate_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_Spectator_PlayerNamePlate_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Spectator_PlayerNamePlate.WBP_Spectator_PlayerNamePlate_C.Construct");
		
		UWBP_Spectator_PlayerNamePlate_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Spectator_PlayerNamePlate.WBP_Spectator_PlayerNamePlate_C.Update
	 * 		Flags  -> ()
	 */
	void UWBP_Spectator_PlayerNamePlate_C::Update()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Spectator_PlayerNamePlate.WBP_Spectator_PlayerNamePlate_C.Update");
		
		UWBP_Spectator_PlayerNamePlate_C_Update_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Spectator_PlayerNamePlate.WBP_Spectator_PlayerNamePlate_C.CalcOnScreenPosition
	 * 		Flags  -> ()
	 */
	void UWBP_Spectator_PlayerNamePlate_C::CalcOnScreenPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Spectator_PlayerNamePlate.WBP_Spectator_PlayerNamePlate_C.CalcOnScreenPosition");
		
		UWBP_Spectator_PlayerNamePlate_C_CalcOnScreenPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Spectator_PlayerNamePlate.WBP_Spectator_PlayerNamePlate_C.BindElementChanged
	 * 		Flags  -> ()
	 */
	void UWBP_Spectator_PlayerNamePlate_C::BindElementChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Spectator_PlayerNamePlate.WBP_Spectator_PlayerNamePlate_C.BindElementChanged");
		
		UWBP_Spectator_PlayerNamePlate_C_BindElementChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Spectator_PlayerNamePlate.WBP_Spectator_PlayerNamePlate_C.CheckSquads
	 * 		Flags  -> ()
	 */
	void UWBP_Spectator_PlayerNamePlate_C::CheckSquads()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Spectator_PlayerNamePlate.WBP_Spectator_PlayerNamePlate_C.CheckSquads");
		
		UWBP_Spectator_PlayerNamePlate_C_CheckSquads_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Spectator_PlayerNamePlate.WBP_Spectator_PlayerNamePlate_C.OnTeamElementChanged_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBPlayerState*                              PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Spectator_PlayerNamePlate_C::OnTeamElementChanged_Event_1(class AGBPlayerState* PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Spectator_PlayerNamePlate.WBP_Spectator_PlayerNamePlate_C.OnTeamElementChanged_Event_1");
		
		UWBP_Spectator_PlayerNamePlate_C_OnTeamElementChanged_Event_1_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Spectator_PlayerNamePlate.WBP_Spectator_PlayerNamePlate_C.ExecuteUbergraph_WBP_Spectator_PlayerNamePlate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Spectator_PlayerNamePlate_C::ExecuteUbergraph_WBP_Spectator_PlayerNamePlate(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Spectator_PlayerNamePlate.WBP_Spectator_PlayerNamePlate_C.ExecuteUbergraph_WBP_Spectator_PlayerNamePlate");
		
		UWBP_Spectator_PlayerNamePlate_C_ExecuteUbergraph_WBP_Spectator_PlayerNamePlate_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Spectator_PlayerNamePlate_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Spectator_PlayerNamePlate_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Spectator_PlayerNamePlate.WBP_Spectator_PlayerNamePlate_C");
		return ptr;
	}

}


