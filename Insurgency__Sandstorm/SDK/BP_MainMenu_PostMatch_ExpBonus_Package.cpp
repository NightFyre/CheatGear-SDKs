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
	 * 		Name   -> Function BP_MainMenu_PostMatch_ExpBonus.BP_MainMenu_PostMatch_ExpBonus_C.FadeOut
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_PostMatch_ExpBonus_C::FadeOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_PostMatch_ExpBonus.BP_MainMenu_PostMatch_ExpBonus_C.FadeOut");
		
		UBP_MainMenu_PostMatch_ExpBonus_C_FadeOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_PostMatch_ExpBonus.BP_MainMenu_PostMatch_ExpBonus_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_MainMenu_PostMatch_ExpBonus_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_PostMatch_ExpBonus.BP_MainMenu_PostMatch_ExpBonus_C.Construct");
		
		UBP_MainMenu_PostMatch_ExpBonus_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_PostMatch_ExpBonus.BP_MainMenu_PostMatch_ExpBonus_C.OnFinished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_PostMatch_ExpBonus_C::OnFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_PostMatch_ExpBonus.BP_MainMenu_PostMatch_ExpBonus_C.OnFinished");
		
		UBP_MainMenu_PostMatch_ExpBonus_C_OnFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_PostMatch_ExpBonus.BP_MainMenu_PostMatch_ExpBonus_C.ExecuteUbergraph_BP_MainMenu_PostMatch_ExpBonus
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_PostMatch_ExpBonus_C::ExecuteUbergraph_BP_MainMenu_PostMatch_ExpBonus(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_PostMatch_ExpBonus.BP_MainMenu_PostMatch_ExpBonus_C.ExecuteUbergraph_BP_MainMenu_PostMatch_ExpBonus");
		
		UBP_MainMenu_PostMatch_ExpBonus_C_ExecuteUbergraph_BP_MainMenu_PostMatch_ExpBonus_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_MainMenu_PostMatch_ExpBonus_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_MainMenu_PostMatch_ExpBonus_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MainMenu_PostMatch_ExpBonus.BP_MainMenu_PostMatch_ExpBonus_C");
		return ptr;
	}

}


