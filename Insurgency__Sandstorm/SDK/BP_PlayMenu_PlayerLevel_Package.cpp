/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu_PlayerLevel.BP_PlayMenu_PlayerLevel_C.OnUpdateXP
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int64_t                                            InXP                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayMenu_PlayerLevel_C::OnUpdateXP(int64_t InXP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu_PlayerLevel.BP_PlayMenu_PlayerLevel_C.OnUpdateXP");
		
		UBP_PlayMenu_PlayerLevel_C_OnUpdateXP_Params params {};
		params.InXP = InXP;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu_PlayerLevel.BP_PlayMenu_PlayerLevel_C.SetBlankXP
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PlayMenu_PlayerLevel_C::SetBlankXP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu_PlayerLevel.BP_PlayMenu_PlayerLevel_C.SetBlankXP");
		
		UBP_PlayMenu_PlayerLevel_C_SetBlankXP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu_PlayerLevel.BP_PlayMenu_PlayerLevel_C.UpdateXP
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PlayMenu_PlayerLevel_C::UpdateXP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu_PlayerLevel.BP_PlayMenu_PlayerLevel_C.UpdateXP");
		
		UBP_PlayMenu_PlayerLevel_C_UpdateXP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu_PlayerLevel.BP_PlayMenu_PlayerLevel_C.SetNewXP
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int64_t                                            XP                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayMenu_PlayerLevel_C::SetNewXP(int64_t XP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu_PlayerLevel.BP_PlayMenu_PlayerLevel_C.SetNewXP");
		
		UBP_PlayMenu_PlayerLevel_C_SetNewXP_Params params {};
		params.XP = XP;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu_PlayerLevel.BP_PlayMenu_PlayerLevel_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_PlayMenu_PlayerLevel_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu_PlayerLevel.BP_PlayMenu_PlayerLevel_C.Construct");
		
		UBP_PlayMenu_PlayerLevel_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu_PlayerLevel.BP_PlayMenu_PlayerLevel_C.ExecuteUbergraph_BP_PlayMenu_PlayerLevel
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayMenu_PlayerLevel_C::ExecuteUbergraph_BP_PlayMenu_PlayerLevel(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu_PlayerLevel.BP_PlayMenu_PlayerLevel_C.ExecuteUbergraph_BP_PlayMenu_PlayerLevel");
		
		UBP_PlayMenu_PlayerLevel_C_ExecuteUbergraph_BP_PlayMenu_PlayerLevel_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PlayMenu_PlayerLevel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PlayMenu_PlayerLevel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_PlayMenu_PlayerLevel.BP_PlayMenu_PlayerLevel_C");
		return ptr;
	}

}


