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
	 * 		Name   -> Function UI_KillNotification.UI_KillNotification_C.SetMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        prefix                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        characterName                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        suffix                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUI_KillNotification_C::SetMessage(const class FText& prefix, const class FText& characterName, const class FText& suffix)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KillNotification.UI_KillNotification_C.SetMessage");
		
		UUI_KillNotification_C_SetMessage_Params params {};
		params.prefix = prefix;
		params.characterName = characterName;
		params.suffix = suffix;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KillNotification.UI_KillNotification_C.GetMessageVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_KillNotification_C::GetMessageVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KillNotification.UI_KillNotification_C.GetMessageVisibility");
		
		UUI_KillNotification_C_GetMessageVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KillNotification.UI_KillNotification_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_KillNotification_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KillNotification.UI_KillNotification_C.Construct");
		
		UUI_KillNotification_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KillNotification.UI_KillNotification_C.ExecuteUbergraph_UI_KillNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_KillNotification_C::ExecuteUbergraph_UI_KillNotification(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KillNotification.UI_KillNotification_C.ExecuteUbergraph_UI_KillNotification");
		
		UUI_KillNotification_C_ExecuteUbergraph_UI_KillNotification_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_KillNotification_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_KillNotification_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_KillNotification.UI_KillNotification_C");
		return ptr;
	}

}


