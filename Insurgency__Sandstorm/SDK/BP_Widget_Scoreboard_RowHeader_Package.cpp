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
	 * 		Name   -> Function BP_Widget_Scoreboard_RowHeader.BP_Widget_Scoreboard_RowHeader_C.UpdateExtendedInfoVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewVisibility                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Widget_Scoreboard_RowHeader_C::UpdateExtendedInfoVisibility(bool bNewVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_RowHeader.BP_Widget_Scoreboard_RowHeader_C.UpdateExtendedInfoVisibility");
		
		UBP_Widget_Scoreboard_RowHeader_C_UpdateExtendedInfoVisibility_Params params {};
		params.bNewVisibility = bNewVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard_RowHeader.BP_Widget_Scoreboard_RowHeader_C.OnMuteAllPressed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Widget_Scoreboard_RowHeader_C::OnMuteAllPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_RowHeader.BP_Widget_Scoreboard_RowHeader_C.OnMuteAllPressed__DelegateSignature");
		
		UBP_Widget_Scoreboard_RowHeader_C_OnMuteAllPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Widget_Scoreboard_RowHeader_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Widget_Scoreboard_RowHeader_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_Widget_Scoreboard_RowHeader.BP_Widget_Scoreboard_RowHeader_C");
		return ptr;
	}

}


