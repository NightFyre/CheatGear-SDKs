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
	 * 		Name   -> Function BP_AdminGameMenu.BP_AdminGameMenu_C.GetPlayers
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      CSV_Players                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_AdminGameMenu_C::GetPlayers(class FString* CSV_Players)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AdminGameMenu.BP_AdminGameMenu_C.GetPlayers");
		
		UBP_AdminGameMenu_C_GetPlayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CSV_Players != nullptr)
			*CSV_Players = params.CSV_Players;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AdminGameMenu.BP_AdminGameMenu_C.BndEvt__RestartRoundButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_AdminGameMenu_C::BndEvt__RestartRoundButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AdminGameMenu.BP_AdminGameMenu_C.BndEvt__RestartRoundButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");
		
		UBP_AdminGameMenu_C_BndEvt__RestartRoundButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AdminGameMenu.BP_AdminGameMenu_C.BndEvt__SwapTeamsButton_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_AdminGameMenu_C::BndEvt__SwapTeamsButton_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AdminGameMenu.BP_AdminGameMenu_C.BndEvt__SwapTeamsButton_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature");
		
		UBP_AdminGameMenu_C_BndEvt__SwapTeamsButton_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AdminGameMenu.BP_AdminGameMenu_C.BndEvt__EndGameButton_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_AdminGameMenu_C::BndEvt__EndGameButton_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AdminGameMenu.BP_AdminGameMenu_C.BndEvt__EndGameButton_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature");
		
		UBP_AdminGameMenu_C_BndEvt__EndGameButton_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AdminGameMenu.BP_AdminGameMenu_C.BndEvt__RestartLevel_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_AdminGameMenu_C::BndEvt__RestartLevel_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AdminGameMenu.BP_AdminGameMenu_C.BndEvt__RestartLevel_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature");
		
		UBP_AdminGameMenu_C_BndEvt__RestartLevel_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AdminGameMenu.BP_AdminGameMenu_C.BndEvt__CopyPlayers_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_AdminGameMenu_C::BndEvt__CopyPlayers_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AdminGameMenu.BP_AdminGameMenu_C.BndEvt__CopyPlayers_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature");
		
		UBP_AdminGameMenu_C_BndEvt__CopyPlayers_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AdminGameMenu.BP_AdminGameMenu_C.ExecuteUbergraph_BP_AdminGameMenu
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AdminGameMenu_C::ExecuteUbergraph_BP_AdminGameMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AdminGameMenu.BP_AdminGameMenu_C.ExecuteUbergraph_BP_AdminGameMenu");
		
		UBP_AdminGameMenu_C_ExecuteUbergraph_BP_AdminGameMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_AdminGameMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_AdminGameMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_AdminGameMenu.BP_AdminGameMenu_C");
		return ptr;
	}

}


