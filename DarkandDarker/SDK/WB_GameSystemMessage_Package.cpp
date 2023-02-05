/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_GameSystemMessage.WB_GameSystemMessage_C.GetLocalizedString
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Namespace                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      LocalizedString                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWB_GameSystemMessage_C::GetLocalizedString(const class FString& Text, const class FString& Namespace, const class FString& Key, class FString* LocalizedString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_GameSystemMessage.WB_GameSystemMessage_C.GetLocalizedString");
		
		UWB_GameSystemMessage_C_GetLocalizedString_Params params {};
		params.Text = Text;
		params.Namespace = Namespace;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LocalizedString != nullptr)
			*LocalizedString = params.LocalizedString;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_GameSystemMessage.WB_GameSystemMessage_C.OnAnnounceEnd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_GameSystemMessage_C::OnAnnounceEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_GameSystemMessage.WB_GameSystemMessage_C.OnAnnounceEnd");
		
		UWB_GameSystemMessage_C_OnAnnounceEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_GameSystemMessage.WB_GameSystemMessage_C.ShowMessage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		double                                             Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_GameSystemMessage_C::ShowMessage(const class FText& Text, double Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_GameSystemMessage.WB_GameSystemMessage_C.ShowMessage");
		
		UWB_GameSystemMessage_C_ShowMessage_Params params {};
		params.Text = Text;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_GameSystemMessage.WB_GameSystemMessage_C.ExecuteUbergraph_WB_GameSystemMessage
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_GameSystemMessage_C::ExecuteUbergraph_WB_GameSystemMessage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_GameSystemMessage.WB_GameSystemMessage_C.ExecuteUbergraph_WB_GameSystemMessage");
		
		UWB_GameSystemMessage_C_ExecuteUbergraph_WB_GameSystemMessage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_GameSystemMessage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_GameSystemMessage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_GameSystemMessage.WB_GameSystemMessage_C");
		return ptr;
	}

}


