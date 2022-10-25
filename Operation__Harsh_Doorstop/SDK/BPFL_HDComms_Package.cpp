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
	 * 		Name   -> Function BPFL_HDComms.BPFL_HDComms_C.GetTextChatIconForCommChannel
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UDFCommChannel*                              Channel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  ChannelChatIcon                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_HDComms_C::STATIC_GetTextChatIconForCommChannel(class UDFCommChannel* Channel, class UObject* __WorldContext, class UTexture2D** ChannelChatIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_HDComms.BPFL_HDComms_C.GetTextChatIconForCommChannel");
		
		UBPFL_HDComms_C_GetTextChatIconForCommChannel_Params params {};
		params.Channel = Channel;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ChannelChatIcon != nullptr)
			*ChannelChatIcon = params.ChannelChatIcon;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BPFL_HDComms.BPFL_HDComms_C.SetupNewSquadChannel
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDFCommChannel*                              CreatedChannel                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AHDSquadState*                               SquadToAssociate                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_HDComms_C::STATIC_SetupNewSquadChannel(class UDFCommChannel* CreatedChannel, class AHDSquadState* SquadToAssociate, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_HDComms.BPFL_HDComms_C.SetupNewSquadChannel");
		
		UBPFL_HDComms_C_SetupNewSquadChannel_Params params {};
		params.CreatedChannel = CreatedChannel;
		params.SquadToAssociate = SquadToAssociate;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BPFL_HDComms.BPFL_HDComms_C.SetupNewTeamChannel
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDFCommChannel*                              CreatedChannel                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AHDTeamState*                                TeamToAssociate                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_HDComms_C::STATIC_SetupNewTeamChannel(class UDFCommChannel* CreatedChannel, class AHDTeamState* TeamToAssociate, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_HDComms.BPFL_HDComms_C.SetupNewTeamChannel");
		
		UBPFL_HDComms_C_SetupNewTeamChannel_Params params {};
		params.CreatedChannel = CreatedChannel;
		params.TeamToAssociate = TeamToAssociate;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BPFL_HDComms.BPFL_HDComms_C.GetColorForCommChannel
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UDFCommChannel*                              Channel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateColor                                 ChannelColor                                               (Parm, OutParm)
	 */
	void UBPFL_HDComms_C::STATIC_GetColorForCommChannel(class UDFCommChannel* Channel, class UObject* __WorldContext, struct FSlateColor* ChannelColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_HDComms.BPFL_HDComms_C.GetColorForCommChannel");
		
		UBPFL_HDComms_C_GetColorForCommChannel_Params params {};
		params.Channel = Channel;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ChannelColor != nullptr)
			*ChannelColor = params.ChannelColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BPFL_HDComms.BPFL_HDComms_C.GetValidCommsComponentForPlayer
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APlayerController*                           Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDFPlayerCommsComponent*                     PlayerCommsComp                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_HDComms_C::STATIC_GetValidCommsComponentForPlayer(class APlayerController* Player, class UObject* __WorldContext, class UDFPlayerCommsComponent** PlayerCommsComp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_HDComms.BPFL_HDComms_C.GetValidCommsComponentForPlayer");
		
		UBPFL_HDComms_C_GetValidCommsComponentForPlayer_Params params {};
		params.Player = Player;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerCommsComp != nullptr)
			*PlayerCommsComp = params.PlayerCommsComp;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPFL_HDComms_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPFL_HDComms_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPFL_HDComms.BPFL_HDComms_C");
		return ptr;
	}

}


