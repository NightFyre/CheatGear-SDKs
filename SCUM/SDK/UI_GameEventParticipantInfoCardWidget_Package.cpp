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
	 * 		Name   -> Function UI_GameEventParticipantInfoCardWidget.UI_GameEventParticipantInfoCardWidget_C.UpdateStats
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APrisoner*                                   Prisoner                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_GameEventParticipantInfoCardWidget_C::UpdateStats(class APrisoner* Prisoner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventParticipantInfoCardWidget.UI_GameEventParticipantInfoCardWidget_C.UpdateStats");
		
		UUI_GameEventParticipantInfoCardWidget_C_UpdateStats_Params params {};
		params.Prisoner = Prisoner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventParticipantInfoCardWidget.UI_GameEventParticipantInfoCardWidget_C.ExecuteUbergraph_UI_GameEventParticipantInfoCardWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_GameEventParticipantInfoCardWidget_C::ExecuteUbergraph_UI_GameEventParticipantInfoCardWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventParticipantInfoCardWidget.UI_GameEventParticipantInfoCardWidget_C.ExecuteUbergraph_UI_GameEventParticipantInfoCardWidget");
		
		UUI_GameEventParticipantInfoCardWidget_C_ExecuteUbergraph_UI_GameEventParticipantInfoCardWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_GameEventParticipantInfoCardWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_GameEventParticipantInfoCardWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_GameEventParticipantInfoCardWidget.UI_GameEventParticipantInfoCardWidget_C");
		return ptr;
	}

}


