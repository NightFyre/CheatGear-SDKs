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
	 * 		Name   -> Function WB_LobbyAnnounce.WB_LobbyAnnounce_C.GetLocalizedString
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Namespace                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      LocalizedString                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWB_LobbyAnnounce_C::GetLocalizedString(const class FString& Text, const class FString& Namespace, const class FString& Key, class FString* LocalizedString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_LobbyAnnounce.WB_LobbyAnnounce_C.GetLocalizedString");
		
		UWB_LobbyAnnounce_C_GetLocalizedString_Params params {};
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
	 * 		Name   -> Function WB_LobbyAnnounce.WB_LobbyAnnounce_C.OnAnnounceEnd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_LobbyAnnounce_C::OnAnnounceEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_LobbyAnnounce.WB_LobbyAnnounce_C.OnAnnounceEnd");
		
		UWB_LobbyAnnounce_C_OnAnnounceEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_LobbyAnnounce.WB_LobbyAnnounce_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWB_LobbyAnnounce_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_LobbyAnnounce.WB_LobbyAnnounce_C.Destruct");
		
		UWB_LobbyAnnounce_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_LobbyAnnounce.WB_LobbyAnnounce_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWB_LobbyAnnounce_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_LobbyAnnounce.WB_LobbyAnnounce_C.OnInitialized");
		
		UWB_LobbyAnnounce_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_LobbyAnnounce.WB_LobbyAnnounce_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWB_LobbyAnnounce_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_LobbyAnnounce.WB_LobbyAnnounce_C.Construct");
		
		UWB_LobbyAnnounce_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_LobbyAnnounce.WB_LobbyAnnounce_C.EventMsgLobbyAnnounce
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      AnnounceText                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWB_LobbyAnnounce_C::EventMsgLobbyAnnounce(const class FString& AnnounceText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_LobbyAnnounce.WB_LobbyAnnounce_C.EventMsgLobbyAnnounce");
		
		UWB_LobbyAnnounce_C_EventMsgLobbyAnnounce_Params params {};
		params.AnnounceText = AnnounceText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_LobbyAnnounce.WB_LobbyAnnounce_C.ExecuteUbergraph_WB_LobbyAnnounce
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_LobbyAnnounce_C::ExecuteUbergraph_WB_LobbyAnnounce(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_LobbyAnnounce.WB_LobbyAnnounce_C.ExecuteUbergraph_WB_LobbyAnnounce");
		
		UWB_LobbyAnnounce_C_ExecuteUbergraph_WB_LobbyAnnounce_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_LobbyAnnounce_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_LobbyAnnounce_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_LobbyAnnounce.WB_LobbyAnnounce_C");
		return ptr;
	}

}


