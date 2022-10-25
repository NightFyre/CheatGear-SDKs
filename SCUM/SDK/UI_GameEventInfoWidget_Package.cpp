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
	 * 		Name   -> Function UI_GameEventInfoWidget.UI_GameEventInfoWidget_C.UpdateStats
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGameEventBase*                              _gameEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_GameEventInfoWidget_C::UpdateStats(class AGameEventBase* _gameEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventInfoWidget.UI_GameEventInfoWidget_C.UpdateStats");
		
		UUI_GameEventInfoWidget_C_UpdateStats_Params params {};
		params._gameEvent = _gameEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventInfoWidget.UI_GameEventInfoWidget_C.ExecuteUbergraph_UI_GameEventInfoWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_GameEventInfoWidget_C::ExecuteUbergraph_UI_GameEventInfoWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventInfoWidget.UI_GameEventInfoWidget_C.ExecuteUbergraph_UI_GameEventInfoWidget");
		
		UUI_GameEventInfoWidget_C_ExecuteUbergraph_UI_GameEventInfoWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_GameEventInfoWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_GameEventInfoWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_GameEventInfoWidget.UI_GameEventInfoWidget_C");
		return ptr;
	}

}


