/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_VOIPIndicator.WBP_HUDElement_VOIPIndicator_C.ContainsTalkerListing
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UHDVoiceChatMsgInfo*                         PlayerMsgInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bMatchFound                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_HUDElement_VOIPIndicator_C::ContainsTalkerListing(class UHDVoiceChatMsgInfo* PlayerMsgInfo, bool* bMatchFound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_VOIPIndicator.WBP_HUDElement_VOIPIndicator_C.ContainsTalkerListing");
		
		UWBP_HUDElement_VOIPIndicator_C_ContainsTalkerListing_Params params {};
		params.PlayerMsgInfo = PlayerMsgInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bMatchFound != nullptr)
			*bMatchFound = params.bMatchFound;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_VOIPIndicator.WBP_HUDElement_VOIPIndicator_C.FindTalkerListing
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UHDVoiceChatMsgInfo*                         PlayerMsgInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bListingFound                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UWBP_HUDElement_VOIPIndicator_OutputListing_C* TalkerListing                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HUDElement_VOIPIndicator_C::FindTalkerListing(class UHDVoiceChatMsgInfo* PlayerMsgInfo, bool* bListingFound, class UWBP_HUDElement_VOIPIndicator_OutputListing_C** TalkerListing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_VOIPIndicator.WBP_HUDElement_VOIPIndicator_C.FindTalkerListing");
		
		UWBP_HUDElement_VOIPIndicator_C_FindTalkerListing_Params params {};
		params.PlayerMsgInfo = PlayerMsgInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bListingFound != nullptr)
			*bListingFound = params.bListingFound;
		if (TalkerListing != nullptr)
			*TalkerListing = params.TalkerListing;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_VOIPIndicator.WBP_HUDElement_VOIPIndicator_C.PlayerStoppedTalking
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UHDVoiceChatMsgInfo*                         TalkerMsgInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HUDElement_VOIPIndicator_C::PlayerStoppedTalking(class UHDVoiceChatMsgInfo* TalkerMsgInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_VOIPIndicator.WBP_HUDElement_VOIPIndicator_C.PlayerStoppedTalking");
		
		UWBP_HUDElement_VOIPIndicator_C_PlayerStoppedTalking_Params params {};
		params.TalkerMsgInfo = TalkerMsgInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_VOIPIndicator.WBP_HUDElement_VOIPIndicator_C.PlayerStartedTalking
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UHDVoiceChatMsgInfo*                         TalkerMsgInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HUDElement_VOIPIndicator_C::PlayerStartedTalking(class UHDVoiceChatMsgInfo* TalkerMsgInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_VOIPIndicator.WBP_HUDElement_VOIPIndicator_C.PlayerStartedTalking");
		
		UWBP_HUDElement_VOIPIndicator_C_PlayerStartedTalking_Params params {};
		params.TalkerMsgInfo = TalkerMsgInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_VOIPIndicator.WBP_HUDElement_VOIPIndicator_C.OnPlayerStartTalking
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UHDVoiceChatMsgInfo*                         TalkerMsgInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HUDElement_VOIPIndicator_C::OnPlayerStartTalking(class UHDVoiceChatMsgInfo* TalkerMsgInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_VOIPIndicator.WBP_HUDElement_VOIPIndicator_C.OnPlayerStartTalking");
		
		UWBP_HUDElement_VOIPIndicator_C_OnPlayerStartTalking_Params params {};
		params.TalkerMsgInfo = TalkerMsgInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_VOIPIndicator.WBP_HUDElement_VOIPIndicator_C.OnPlayerStopTalking
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UHDVoiceChatMsgInfo*                         TalkerMsgInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HUDElement_VOIPIndicator_C::OnPlayerStopTalking(class UHDVoiceChatMsgInfo* TalkerMsgInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_VOIPIndicator.WBP_HUDElement_VOIPIndicator_C.OnPlayerStopTalking");
		
		UWBP_HUDElement_VOIPIndicator_C_OnPlayerStopTalking_Params params {};
		params.TalkerMsgInfo = TalkerMsgInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_VOIPIndicator.WBP_HUDElement_VOIPIndicator_C.OnOwningPlayerStartTalking
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UHDVoiceChatMsgInfo*                         LocalTalkerMsgInfo                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HUDElement_VOIPIndicator_C::OnOwningPlayerStartTalking(class UHDVoiceChatMsgInfo* LocalTalkerMsgInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_VOIPIndicator.WBP_HUDElement_VOIPIndicator_C.OnOwningPlayerStartTalking");
		
		UWBP_HUDElement_VOIPIndicator_C_OnOwningPlayerStartTalking_Params params {};
		params.LocalTalkerMsgInfo = LocalTalkerMsgInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_VOIPIndicator.WBP_HUDElement_VOIPIndicator_C.OnOwningPlayerStopTalking
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UHDVoiceChatMsgInfo*                         LocalTalkerMsgInfo                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HUDElement_VOIPIndicator_C::OnOwningPlayerStopTalking(class UHDVoiceChatMsgInfo* LocalTalkerMsgInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_VOIPIndicator.WBP_HUDElement_VOIPIndicator_C.OnOwningPlayerStopTalking");
		
		UWBP_HUDElement_VOIPIndicator_C_OnOwningPlayerStopTalking_Params params {};
		params.LocalTalkerMsgInfo = LocalTalkerMsgInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_VOIPIndicator.WBP_HUDElement_VOIPIndicator_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_HUDElement_VOIPIndicator_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_VOIPIndicator.WBP_HUDElement_VOIPIndicator_C.PreConstruct");
		
		UWBP_HUDElement_VOIPIndicator_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_VOIPIndicator.WBP_HUDElement_VOIPIndicator_C.ExecuteUbergraph_WBP_HUDElement_VOIPIndicator
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HUDElement_VOIPIndicator_C::ExecuteUbergraph_WBP_HUDElement_VOIPIndicator(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_VOIPIndicator.WBP_HUDElement_VOIPIndicator_C.ExecuteUbergraph_WBP_HUDElement_VOIPIndicator");
		
		UWBP_HUDElement_VOIPIndicator_C_ExecuteUbergraph_WBP_HUDElement_VOIPIndicator_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_HUDElement_VOIPIndicator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_HUDElement_VOIPIndicator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_HUDElement_VOIPIndicator.WBP_HUDElement_VOIPIndicator_C");
		return ptr;
	}

}


