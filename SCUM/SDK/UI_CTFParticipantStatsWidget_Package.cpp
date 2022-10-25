/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * 		Name   -> Function UI_CTFParticipantStatsWidget.UI_CTFParticipantStatsWidget_C.FillLabels
	 * 		Flags  -> ()
	 */
	void UUI_CTFParticipantStatsWidget_C::FillLabels()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CTFParticipantStatsWidget.UI_CTFParticipantStatsWidget_C.FillLabels");
		
		UUI_CTFParticipantStatsWidget_C_FillLabels_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CTFParticipantStatsWidget.UI_CTFParticipantStatsWidget_C.UpdateStats
	 * 		Flags  -> ()
	 */
	void UUI_CTFParticipantStatsWidget_C::UpdateStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CTFParticipantStatsWidget.UI_CTFParticipantStatsWidget_C.UpdateStats");
		
		UUI_CTFParticipantStatsWidget_C_UpdateStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CTFParticipantStatsWidget.UI_CTFParticipantStatsWidget_C.ExecuteUbergraph_UI_CTFParticipantStatsWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CTFParticipantStatsWidget_C::ExecuteUbergraph_UI_CTFParticipantStatsWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CTFParticipantStatsWidget.UI_CTFParticipantStatsWidget_C.ExecuteUbergraph_UI_CTFParticipantStatsWidget");
		
		UUI_CTFParticipantStatsWidget_C_ExecuteUbergraph_UI_CTFParticipantStatsWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_CTFParticipantStatsWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CTFParticipantStatsWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_CTFParticipantStatsWidget.UI_CTFParticipantStatsWidget_C");
		return ptr;
	}

}


