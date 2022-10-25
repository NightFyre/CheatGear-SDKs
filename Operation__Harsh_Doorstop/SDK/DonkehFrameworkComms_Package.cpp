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
	 * 		RVA    -> 0x00716630
	 * 		Name   -> Function DonkehFrameworkComms.CreateCommChannelCallbackProxy.CreateCommChannelFor
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDFCommChannelDefinition*                    ChannelDef                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ChannelNameOverride                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCreateCommChannelCallbackProxy* UCreateCommChannelCallbackProxy::STATIC_CreateCommChannelFor(class APlayerController* Player, class UDFCommChannelDefinition* ChannelDef, const class FName& ChannelNameOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.CreateCommChannelCallbackProxy.CreateCommChannelFor");
		
		UCreateCommChannelCallbackProxy_CreateCommChannelFor_Params params {};
		params.Player = Player;
		params.ChannelDef = ChannelDef;
		params.ChannelNameOverride = ChannelNameOverride;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCreateCommChannelCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCreateCommChannelCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFrameworkComms.CreateCommChannelCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00718A70
	 * 		Name   -> Function DonkehFrameworkComms.DFCommChannel.SetChannelState
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     NewChannelState                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFCommChannel::SetChannelState(class UObject* NewChannelState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFCommChannel.SetChannelState");
		
		UDFCommChannel_SetChannelState_Params params {};
		params.NewChannelState = NewChannelState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00717560
	 * 		Name   -> Function DonkehFrameworkComms.DFCommChannel.IsReady
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UDFCommChannel::IsReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFCommChannel.IsReady");
		
		UDFCommChannel_IsReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007171C0
	 * 		Name   -> Function DonkehFrameworkComms.DFCommChannel.HasFormat
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UDFCommsFormatBase*                          Format                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFCommChannel::HasFormat(class UDFCommsFormatBase* Format)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFCommChannel.HasFormat");
		
		UDFCommChannel_HasFormat_Params params {};
		params.Format = Format;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00716E50
	 * 		Name   -> Function DonkehFrameworkComms.DFCommChannel.GetChannelNameStr
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString UDFCommChannel::GetChannelNameStr()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFCommChannel.GetChannelNameStr");
		
		UDFCommChannel_GetChannelNameStr_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00716E10
	 * 		Name   -> Function DonkehFrameworkComms.DFCommChannel.GetChannelName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FName UDFCommChannel::GetChannelName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFCommChannel.GetChannelName");
		
		UDFCommChannel_GetChannelName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00716DD0
	 * 		Name   -> Function DonkehFrameworkComms.DFCommChannel.GetChannelGroupNameIfValid
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FName UDFCommChannel::GetChannelGroupNameIfValid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFCommChannel.GetChannelGroupNameIfValid");
		
		UDFCommChannel_GetChannelGroupNameIfValid_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00716D30
	 * 		Name   -> Function DonkehFrameworkComms.DFCommChannel.GetChannelDisplayName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FText UDFCommChannel::GetChannelDisplayName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFCommChannel.GetChannelDisplayName");
		
		UDFCommChannel_GetChannelDisplayName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDFCommChannel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDFCommChannel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFrameworkComms.DFCommChannel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007172D0
	 * 		Name   -> Function DonkehFrameworkComms.DFCommChannelDefinition.InstancesChannelWithGroup
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UDFCommChannelDefinition::InstancesChannelWithGroup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFCommChannelDefinition.InstancesChannelWithGroup");
		
		UDFCommChannelDefinition_InstancesChannelWithGroup_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDFCommChannelDefinition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDFCommChannelDefinition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFrameworkComms.DFCommChannelDefinition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFrameworkComms.DFCommChannelStateInterface.BP_OnSetupState
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FDFCommStateSetupParams                     SetupParams                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UDFCommChannelStateInterface::BP_OnSetupState(const struct FDFCommStateSetupParams& SetupParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFCommChannelStateInterface.BP_OnSetupState");
		
		UDFCommChannelStateInterface_BP_OnSetupState_Params params {};
		params.SetupParams = SetupParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDFCommChannelStateInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDFCommChannelStateInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFrameworkComms.DFCommChannelStateInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00717590
	 * 		Name   -> Function DonkehFrameworkComms.DFCommChannelStateLibrary.NotifyChannelOfPreparedState
	 * 		Flags  -> (Final, Native, Static, Private, BlueprintCallable)
	 */
	void UDFCommChannelStateLibrary::STATIC_NotifyChannelOfPreparedState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFCommChannelStateLibrary.NotifyChannelOfPreparedState");
		
		UDFCommChannelStateLibrary_NotifyChannelOfPreparedState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00717300
	 * 		Name   -> Function DonkehFrameworkComms.DFCommChannelStateLibrary.IsChannelStatePrepared
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UDFCommChannelStateLibrary::STATIC_IsChannelStatePrepared()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFCommChannelStateLibrary.IsChannelStatePrepared");
		
		UDFCommChannelStateLibrary_IsChannelStatePrepared_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00716ED0
	 * 		Name   -> Function DonkehFrameworkComms.DFCommChannelStateLibrary.GetOwningCommChannel
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class UDFCommChannel* UDFCommChannelStateLibrary::STATIC_GetOwningCommChannel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFCommChannelStateLibrary.GetOwningCommChannel");
		
		UDFCommChannelStateLibrary_GetOwningCommChannel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDFCommChannelStateLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDFCommChannelStateLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFrameworkComms.DFCommChannelStateLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDFCommDeveloperSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDFCommDeveloperSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFrameworkComms.DFCommDeveloperSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00717100
	 * 		Name   -> Function DonkehFrameworkComms.DFCommsFormatBase.HasAccessToChannel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        ChannelName                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDFCommsFormatAccessRule                           AccessRulesToCheck                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFCommsFormatBase::HasAccessToChannel(const class FName& ChannelName, EDFCommsFormatAccessRule AccessRulesToCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFCommsFormatBase.HasAccessToChannel");
		
		UDFCommsFormatBase_HasAccessToChannel_Params params {};
		params.ChannelName = ChannelName;
		params.AccessRulesToCheck = AccessRulesToCheck;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007159D0
	 * 		Name   -> Function DonkehFrameworkComms.DFCommsFormatBase.CanWriteToChannel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        ChannelName                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFCommsFormatBase::CanWriteToChannel(const class FName& ChannelName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFCommsFormatBase.CanWriteToChannel");
		
		UDFCommsFormatBase_CanWriteToChannel_Params params {};
		params.ChannelName = ChannelName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00715450
	 * 		Name   -> Function DonkehFrameworkComms.DFCommsFormatBase.CanReadFromChannel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        ChannelName                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFCommsFormatBase::CanReadFromChannel(const class FName& ChannelName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFCommsFormatBase.CanReadFromChannel");
		
		UDFCommsFormatBase_CanReadFromChannel_Params params {};
		params.ChannelName = ChannelName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDFCommsFormatBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDFCommsFormatBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFrameworkComms.DFCommsFormatBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00718BE0
	 * 		Name   -> Function DonkehFrameworkComms.DFCommStatics.UpdateExclusiveChannelForFormatByName
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        FormatNameToUpdate                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        SingleChannelNameToUse                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFCommStatics::STATIC_UpdateExclusiveChannelForFormatByName(class APlayerController* Player, const class FName& FormatNameToUpdate, const class FName& SingleChannelNameToUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFCommStatics.UpdateExclusiveChannelForFormatByName");
		
		UDFCommStatics_UpdateExclusiveChannelForFormatByName_Params params {};
		params.Player = Player;
		params.FormatNameToUpdate = FormatNameToUpdate;
		params.SingleChannelNameToUse = SingleChannelNameToUse;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00718AF0
	 * 		Name   -> Function DonkehFrameworkComms.DFCommStatics.UpdateExclusiveChannelForFormat
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDFCommsFormatBase*                          FormatToUpdate                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDFCommChannel*                              SingleChannelToUse                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFCommStatics::STATIC_UpdateExclusiveChannelForFormat(class APlayerController* Player, class UDFCommsFormatBase* FormatToUpdate, class UDFCommChannel* SingleChannelToUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFCommStatics.UpdateExclusiveChannelForFormat");
		
		UDFCommStatics_UpdateExclusiveChannelForFormat_Params params {};
		params.Player = Player;
		params.FormatToUpdate = FormatToUpdate;
		params.SingleChannelToUse = SingleChannelToUse;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00717F10
	 * 		Name   -> Function DonkehFrameworkComms.DFCommStatics.SendCommsViaChannelByName
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           PlayerSender                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        FormatName                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ReceivingChannelName                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDFGenericChannelMsg                        MsgToSend                                                  (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseChannelAsNewExclusive                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFCommStatics::STATIC_SendCommsViaChannelByName(class APlayerController* PlayerSender, const class FName& FormatName, const class FName& ReceivingChannelName, struct FDFGenericChannelMsg* MsgToSend, bool bUseChannelAsNewExclusive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFCommStatics.SendCommsViaChannelByName");
		
		UDFCommStatics_SendCommsViaChannelByName_Params params {};
		params.PlayerSender = PlayerSender;
		params.FormatName = FormatName;
		params.ReceivingChannelName = ReceivingChannelName;
		params.bUseChannelAsNewExclusive = bUseChannelAsNewExclusive;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MsgToSend != nullptr)
			*MsgToSend = params.MsgToSend;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00717D30
	 * 		Name   -> Function DonkehFrameworkComms.DFCommStatics.SendCommsViaChannel
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           PlayerSender                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDFCommsFormatBase*                          FormatToUse                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDFCommChannel*                              ReceivingChannel                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDFGenericChannelMsg                        MsgToSend                                                  (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseChannelAsNewExclusive                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFCommStatics::STATIC_SendCommsViaChannel(class APlayerController* PlayerSender, class UDFCommsFormatBase* FormatToUse, class UDFCommChannel* ReceivingChannel, struct FDFGenericChannelMsg* MsgToSend, bool bUseChannelAsNewExclusive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFCommStatics.SendCommsViaChannel");
		
		UDFCommStatics_SendCommsViaChannel_Params params {};
		params.PlayerSender = PlayerSender;
		params.FormatToUse = FormatToUse;
		params.ReceivingChannel = ReceivingChannel;
		params.bUseChannelAsNewExclusive = bUseChannelAsNewExclusive;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MsgToSend != nullptr)
			*MsgToSend = params.MsgToSend;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00717760
	 * 		Name   -> Function DonkehFrameworkComms.DFCommStatics.PlayerHasCommChannelByName
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class APlayerController*                           Player                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ChannelName                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFCommStatics::STATIC_PlayerHasCommChannelByName(class APlayerController* Player, const class FName& ChannelName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFCommStatics.PlayerHasCommChannelByName");
		
		UDFCommStatics_PlayerHasCommChannelByName_Params params {};
		params.Player = Player;
		params.ChannelName = ChannelName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007176A0
	 * 		Name   -> Function DonkehFrameworkComms.DFCommStatics.PlayerHasCommChannel
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class APlayerController*                           Player                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDFCommChannel*                              Channel                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFCommStatics::STATIC_PlayerHasCommChannel(class APlayerController* Player, class UDFCommChannel* Channel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFCommStatics.PlayerHasCommChannel");
		
		UDFCommStatics_PlayerHasCommChannel_Params params {};
		params.Player = Player;
		params.Channel = Channel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007168C0
	 * 		Name   -> Function DonkehFrameworkComms.DFCommStatics.FindCommsComponentByPlayer
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class APlayerController*                           Player                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDFPlayerCommsComponent*                     OutPlayerCommsComp                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFCommStatics::STATIC_FindCommsComponentByPlayer(class APlayerController* Player, class UDFPlayerCommsComponent** OutPlayerCommsComp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFCommStatics.FindCommsComponentByPlayer");
		
		UDFCommStatics_FindCommsComponentByPlayer_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPlayerCommsComp != nullptr)
			*OutPlayerCommsComp = params.OutPlayerCommsComp;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00716390
	 * 		Name   -> Function DonkehFrameworkComms.DFCommStatics.CommsFormatUsesChannelByName
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class APlayerController*                           Player                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        FormatName                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ChannelNameToCheck                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFCommStatics::STATIC_CommsFormatUsesChannelByName(class APlayerController* Player, const class FName& FormatName, const class FName& ChannelNameToCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFCommStatics.CommsFormatUsesChannelByName");
		
		UDFCommStatics_CommsFormatUsesChannelByName_Params params {};
		params.Player = Player;
		params.FormatName = FormatName;
		params.ChannelNameToCheck = ChannelNameToCheck;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007162A0
	 * 		Name   -> Function DonkehFrameworkComms.DFCommStatics.CommsFormatUsesChannel
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class APlayerController*                           Player                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDFCommsFormatBase*                          Format                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDFCommChannel*                              ChannelToCheck                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFCommStatics::STATIC_CommsFormatUsesChannel(class APlayerController* Player, class UDFCommsFormatBase* Format, class UDFCommChannel* ChannelToCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFCommStatics.CommsFormatUsesChannel");
		
		UDFCommStatics_CommsFormatUsesChannel_Params params {};
		params.Player = Player;
		params.Format = Format;
		params.ChannelToCheck = ChannelToCheck;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007161E0
	 * 		Name   -> Function DonkehFrameworkComms.DFCommStatics.CommsFormatHasExclusiveChannelByName
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class APlayerController*                           PlayerFormatOwner                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        FormatName                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFCommStatics::STATIC_CommsFormatHasExclusiveChannelByName(class APlayerController* PlayerFormatOwner, const class FName& FormatName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFCommStatics.CommsFormatHasExclusiveChannelByName");
		
		UDFCommStatics_CommsFormatHasExclusiveChannelByName_Params params {};
		params.PlayerFormatOwner = PlayerFormatOwner;
		params.FormatName = FormatName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00716160
	 * 		Name   -> Function DonkehFrameworkComms.DFCommStatics.CommsFormatHasExclusiveChannel
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UDFCommsFormatBase*                          Format                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFCommStatics::STATIC_CommsFormatHasExclusiveChannel(class UDFCommsFormatBase* Format)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFCommStatics.CommsFormatHasExclusiveChannel");
		
		UDFCommStatics_CommsFormatHasExclusiveChannel_Params params {};
		params.Format = Format;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007160A0
	 * 		Name   -> Function DonkehFrameworkComms.DFCommStatics.CommsFormatGetExclusiveChannelByName
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class APlayerController*                           PlayerFormatOwner                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        FormatName                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDFCommChannel* UDFCommStatics::STATIC_CommsFormatGetExclusiveChannelByName(class APlayerController* PlayerFormatOwner, const class FName& FormatName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFCommStatics.CommsFormatGetExclusiveChannelByName");
		
		UDFCommStatics_CommsFormatGetExclusiveChannelByName_Params params {};
		params.PlayerFormatOwner = PlayerFormatOwner;
		params.FormatName = FormatName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00716020
	 * 		Name   -> Function DonkehFrameworkComms.DFCommStatics.CommsFormatGetExclusiveChannel
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UDFCommsFormatBase*                          Format                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDFCommChannel* UDFCommStatics::STATIC_CommsFormatGetExclusiveChannel(class UDFCommsFormatBase* Format)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFCommStatics.CommsFormatGetExclusiveChannel");
		
		UDFCommStatics_CommsFormatGetExclusiveChannel_Params params {};
		params.Format = Format;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00715C20
	 * 		Name   -> Function DonkehFrameworkComms.DFCommStatics.ClearCurrentExclusiveChannelForFormatByName
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        FormatNameToUpdate                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFCommStatics::STATIC_ClearCurrentExclusiveChannelForFormatByName(class APlayerController* Player, const class FName& FormatNameToUpdate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFCommStatics.ClearCurrentExclusiveChannelForFormatByName");
		
		UDFCommStatics_ClearCurrentExclusiveChannelForFormatByName_Params params {};
		params.Player = Player;
		params.FormatNameToUpdate = FormatNameToUpdate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00715B70
	 * 		Name   -> Function DonkehFrameworkComms.DFCommStatics.ClearCurrentExclusiveChannelForFormat
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDFCommsFormatBase*                          FormatToUpdate                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFCommStatics::STATIC_ClearCurrentExclusiveChannelForFormat(class APlayerController* Player, class UDFCommsFormatBase* FormatToUpdate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFCommStatics.ClearCurrentExclusiveChannelForFormat");
		
		UDFCommStatics_ClearCurrentExclusiveChannelForFormat_Params params {};
		params.Player = Player;
		params.FormatToUpdate = FormatToUpdate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDFCommStatics.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDFCommStatics::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFrameworkComms.DFCommStatics");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00717820
	 * 		Name   -> Function DonkehFrameworkComms.DFCommWorldSubsystem.PostSeamlessTravelPCDestroyed
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AActor*                                      DestroyedPlayerActor                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFCommWorldSubsystem::PostSeamlessTravelPCDestroyed(class AActor* DestroyedPlayerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFCommWorldSubsystem.PostSeamlessTravelPCDestroyed");
		
		UDFCommWorldSubsystem_PostSeamlessTravelPCDestroyed_Params params {};
		params.DestroyedPlayerActor = DestroyedPlayerActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00717250
	 * 		Name   -> Function DonkehFrameworkComms.DFCommWorldSubsystem.InitPlayerComms
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDFPlayerCommsComponent* UDFCommWorldSubsystem::STATIC_InitPlayerComms(class APlayerController* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFCommWorldSubsystem.InitPlayerComms");
		
		UDFCommWorldSubsystem_InitPlayerComms_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00716C70
	 * 		Name   -> Function DonkehFrameworkComms.DFCommWorldSubsystem.GameModePostLogin
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AGameModeBase*                               GameMode                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           NewPlayer                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFCommWorldSubsystem::GameModePostLogin(class AGameModeBase* GameMode, class APlayerController* NewPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFCommWorldSubsystem.GameModePostLogin");
		
		UDFCommWorldSubsystem_GameModePostLogin_Params params {};
		params.GameMode = GameMode;
		params.NewPlayer = NewPlayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDFCommWorldSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDFCommWorldSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFrameworkComms.DFCommWorldSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00718D90
	 * 		Name   -> Function DonkehFrameworkComms.DFPlayerCommsComponent.UpdateExclusiveChannelToUseForCommsFormatByName
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        FormatName                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        SingleChannelNameToUse                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFPlayerCommsComponent::UpdateExclusiveChannelToUseForCommsFormatByName(const class FName& FormatName, const class FName& SingleChannelNameToUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFPlayerCommsComponent.UpdateExclusiveChannelToUseForCommsFormatByName");
		
		UDFPlayerCommsComponent_UpdateExclusiveChannelToUseForCommsFormatByName_Params params {};
		params.FormatName = FormatName;
		params.SingleChannelNameToUse = SingleChannelNameToUse;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00718CD0
	 * 		Name   -> Function DonkehFrameworkComms.DFPlayerCommsComponent.UpdateExclusiveChannelToUseForCommsFormat
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDFCommsFormatBase*                          Format                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDFCommChannel*                              SingleChannelToUse                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFPlayerCommsComponent::UpdateExclusiveChannelToUseForCommsFormat(class UDFCommsFormatBase* Format, class UDFCommChannel* SingleChannelToUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFPlayerCommsComponent.UpdateExclusiveChannelToUseForCommsFormat");
		
		UDFPlayerCommsComponent_UpdateExclusiveChannelToUseForCommsFormat_Params params {};
		params.Format = Format;
		params.SingleChannelToUse = SingleChannelToUse;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007189E0
	 * 		Name   -> Function DonkehFrameworkComms.DFPlayerCommsComponent.ServerVerifyCommMsg
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer)
	 * Parameters:
	 * 		int32_t                                            VerifyMsgID                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFPlayerCommsComponent::ServerVerifyCommMsg(int32_t VerifyMsgID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFPlayerCommsComponent.ServerVerifyCommMsg");
		
		UDFPlayerCommsComponent_ServerVerifyCommMsg_Params params {};
		params.VerifyMsgID = VerifyMsgID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00718910
	 * 		Name   -> Function DonkehFrameworkComms.DFPlayerCommsComponent.ServerUpdateExclusiveChannelToUseForCommsFormat
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer)
	 * Parameters:
	 * 		class FName                                        FormatName                                                 (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDFCommChannel*                              SingleChannelToUse                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFPlayerCommsComponent::ServerUpdateExclusiveChannelToUseForCommsFormat(const class FName& FormatName, class UDFCommChannel* SingleChannelToUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFPlayerCommsComponent.ServerUpdateExclusiveChannelToUseForCommsFormat");
		
		UDFPlayerCommsComponent_ServerUpdateExclusiveChannelToUseForCommsFormat_Params params {};
		params.FormatName = FormatName;
		params.SingleChannelToUse = SingleChannelToUse;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00718590
	 * 		Name   -> Function DonkehFrameworkComms.DFPlayerCommsComponent.ServerSendCommMsgViaExclChannel
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		class FName                                        FormatName                                                 (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDFCommChannel*                              ReceivingChannel                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDFGenericChannelMsg                        CommMsg                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	void UDFPlayerCommsComponent::ServerSendCommMsgViaExclChannel(const class FName& FormatName, class UDFCommChannel* ReceivingChannel, const struct FDFGenericChannelMsg& CommMsg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFPlayerCommsComponent.ServerSendCommMsgViaExclChannel");
		
		UDFPlayerCommsComponent_ServerSendCommMsgViaExclChannel_Params params {};
		params.FormatName = FormatName;
		params.ReceivingChannel = ReceivingChannel;
		params.CommMsg = CommMsg;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00718210
	 * 		Name   -> Function DonkehFrameworkComms.DFPlayerCommsComponent.ServerSendCommMsgViaChannel
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		class FName                                        FormatName                                                 (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDFCommChannel*                              ReceivingChannel                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDFGenericChannelMsg                        CommMsg                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	void UDFPlayerCommsComponent::ServerSendCommMsgViaChannel(const class FName& FormatName, class UDFCommChannel* ReceivingChannel, const struct FDFGenericChannelMsg& CommMsg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFPlayerCommsComponent.ServerSendCommMsgViaChannel");
		
		UDFPlayerCommsComponent_ServerSendCommMsgViaChannel_Params params {};
		params.FormatName = FormatName;
		params.ReceivingChannel = ReceivingChannel;
		params.CommMsg = CommMsg;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00718180
	 * 		Name   -> Function DonkehFrameworkComms.DFPlayerCommsComponent.ServerRequestExclusiveChannelUsedForCommsFormat
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        RequestedFormatName                                        (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFPlayerCommsComponent::ServerRequestExclusiveChannelUsedForCommsFormat(const class FName& RequestedFormatName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFPlayerCommsComponent.ServerRequestExclusiveChannelUsedForCommsFormat");
		
		UDFPlayerCommsComponent_ServerRequestExclusiveChannelUsedForCommsFormat_Params params {};
		params.RequestedFormatName = RequestedFormatName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007180F0
	 * 		Name   -> Function DonkehFrameworkComms.DFPlayerCommsComponent.ServerClearCurrentExclusiveChannelForCommsFormat
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer)
	 * Parameters:
	 * 		class FName                                        FormatName                                                 (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFPlayerCommsComponent::ServerClearCurrentExclusiveChannelForCommsFormat(const class FName& FormatName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFPlayerCommsComponent.ServerClearCurrentExclusiveChannelForCommsFormat");
		
		UDFPlayerCommsComponent_ServerClearCurrentExclusiveChannelForCommsFormat_Params params {};
		params.FormatName = FormatName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00717B50
	 * 		Name   -> Function DonkehFrameworkComms.DFPlayerCommsComponent.SendCommMsgViaChannelByName
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        FormatName                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ReceivingChannelName                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDFGenericChannelMsg                        CommMsgToSend                                              (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseChannelAsNewExclusive                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFPlayerCommsComponent::SendCommMsgViaChannelByName(const class FName& FormatName, const class FName& ReceivingChannelName, struct FDFGenericChannelMsg* CommMsgToSend, bool bUseChannelAsNewExclusive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFPlayerCommsComponent.SendCommMsgViaChannelByName");
		
		UDFPlayerCommsComponent_SendCommMsgViaChannelByName_Params params {};
		params.FormatName = FormatName;
		params.ReceivingChannelName = ReceivingChannelName;
		params.bUseChannelAsNewExclusive = bUseChannelAsNewExclusive;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CommMsgToSend != nullptr)
			*CommMsgToSend = params.CommMsgToSend;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007179A0
	 * 		Name   -> Function DonkehFrameworkComms.DFPlayerCommsComponent.SendCommMsgViaChannel
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDFCommsFormatBase*                          FormatToUse                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDFCommChannel*                              ReceivingChannel                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDFGenericChannelMsg                        CommMsgToSend                                              (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseChannelAsNewExclusive                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFPlayerCommsComponent::SendCommMsgViaChannel(class UDFCommsFormatBase* FormatToUse, class UDFCommChannel* ReceivingChannel, struct FDFGenericChannelMsg* CommMsgToSend, bool bUseChannelAsNewExclusive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFPlayerCommsComponent.SendCommMsgViaChannel");
		
		UDFPlayerCommsComponent_SendCommMsgViaChannel_Params params {};
		params.FormatToUse = FormatToUse;
		params.ReceivingChannel = ReceivingChannel;
		params.bUseChannelAsNewExclusive = bUseChannelAsNewExclusive;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CommMsgToSend != nullptr)
			*CommMsgToSend = params.CommMsgToSend;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00717920
	 * 		Name   -> Function DonkehFrameworkComms.DFPlayerCommsComponent.RemoveCommChannelByName
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ChannelNameToRemove                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFPlayerCommsComponent::RemoveCommChannelByName(const class FName& ChannelNameToRemove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFPlayerCommsComponent.RemoveCommChannelByName");
		
		UDFPlayerCommsComponent_RemoveCommChannelByName_Params params {};
		params.ChannelNameToRemove = ChannelNameToRemove;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007178A0
	 * 		Name   -> Function DonkehFrameworkComms.DFPlayerCommsComponent.RemoveCommChannel
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDFCommChannel*                              ChannelToRemove                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFPlayerCommsComponent::RemoveCommChannel(class UDFCommChannel* ChannelToRemove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFPlayerCommsComponent.RemoveCommChannel");
		
		UDFPlayerCommsComponent_RemoveCommChannel_Params params {};
		params.ChannelToRemove = ChannelToRemove;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B6E90
	 * 		Name   -> Function DonkehFrameworkComms.DFPlayerCommsComponent.RemoveAllCommChannels
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 */
	void UDFPlayerCommsComponent::RemoveAllCommChannels()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFPlayerCommsComponent.RemoveAllCommChannels");
		
		UDFPlayerCommsComponent_RemoveAllCommChannels_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFrameworkComms.DFPlayerCommsComponent.ReceiveCommChannelPreRemoved
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UDFCommChannel*                              RemovedChannel                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFPlayerCommsComponent::ReceiveCommChannelPreRemoved(class UDFCommChannel* RemovedChannel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFPlayerCommsComponent.ReceiveCommChannelPreRemoved");
		
		UDFPlayerCommsComponent_ReceiveCommChannelPreRemoved_Params params {};
		params.RemovedChannel = RemovedChannel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFrameworkComms.DFPlayerCommsComponent.ReceiveCommChannelAdded
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UDFCommChannel*                              AddedChannel                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFPlayerCommsComponent::ReceiveCommChannelAdded(class UDFCommChannel* AddedChannel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFPlayerCommsComponent.ReceiveCommChannelAdded");
		
		UDFPlayerCommsComponent_ReceiveCommChannelAdded_Params params {};
		params.AddedChannel = AddedChannel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00716B80
	 * 		Name   -> Function DonkehFrameworkComms.DFPlayerCommsComponent.FormatUsesChannelByName
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        FormatName                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ChannelNameToCheck                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFPlayerCommsComponent::FormatUsesChannelByName(const class FName& FormatName, const class FName& ChannelNameToCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFPlayerCommsComponent.FormatUsesChannelByName");
		
		UDFPlayerCommsComponent_FormatUsesChannelByName_Params params {};
		params.FormatName = FormatName;
		params.ChannelNameToCheck = ChannelNameToCheck;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00716AC0
	 * 		Name   -> Function DonkehFrameworkComms.DFPlayerCommsComponent.FormatUsesChannel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UDFCommsFormatBase*                          Format                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDFCommChannel*                              ChannelToCheck                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFPlayerCommsComponent::FormatUsesChannel(class UDFCommsFormatBase* Format, class UDFCommChannel* ChannelToCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFPlayerCommsComponent.FormatUsesChannel");
		
		UDFPlayerCommsComponent_FormatUsesChannel_Params params {};
		params.Format = Format;
		params.ChannelToCheck = ChannelToCheck;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00716A20
	 * 		Name   -> Function DonkehFrameworkComms.DFPlayerCommsComponent.FormatHasExclusiveChannelByName
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        FormatName                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFPlayerCommsComponent::FormatHasExclusiveChannelByName(const class FName& FormatName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFPlayerCommsComponent.FormatHasExclusiveChannelByName");
		
		UDFPlayerCommsComponent_FormatHasExclusiveChannelByName_Params params {};
		params.FormatName = FormatName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00716990
	 * 		Name   -> Function DonkehFrameworkComms.DFPlayerCommsComponent.FormatHasExclusiveChannel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UDFCommsFormatBase*                          Format                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFPlayerCommsComponent::FormatHasExclusiveChannel(class UDFCommsFormatBase* Format)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFPlayerCommsComponent.FormatHasExclusiveChannel");
		
		UDFPlayerCommsComponent_FormatHasExclusiveChannel_Params params {};
		params.Format = Format;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007167F0
	 * 		Name   -> Function DonkehFrameworkComms.DFPlayerCommsComponent.FindCommChannel
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        ChannelName                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDFCommChannel*                              OutChannelFound                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFPlayerCommsComponent::FindCommChannel(const class FName& ChannelName, class UDFCommChannel** OutChannelFound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFPlayerCommsComponent.FindCommChannel");
		
		UDFPlayerCommsComponent_FindCommChannel_Params params {};
		params.ChannelName = ChannelName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutChannelFound != nullptr)
			*OutChannelFound = params.OutChannelFound;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00716720
	 * 		Name   -> Function DonkehFrameworkComms.DFPlayerCommsComponent.FindAssociatedCommsFormat
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        FormatName                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDFCommsFormatBase*                          OutFormatFound                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFPlayerCommsComponent::FindAssociatedCommsFormat(const class FName& FormatName, class UDFCommsFormatBase** OutFormatFound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFPlayerCommsComponent.FindAssociatedCommsFormat");
		
		UDFPlayerCommsComponent_FindAssociatedCommsFormat_Params params {};
		params.FormatName = FormatName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutFormatFound != nullptr)
			*OutFormatFound = params.OutFormatFound;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007165A0
	 * 		Name   -> Function DonkehFrameworkComms.DFPlayerCommsComponent.ContainsCommChannelByName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        ChannelNameToCheck                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFPlayerCommsComponent::ContainsCommChannelByName(const class FName& ChannelNameToCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFPlayerCommsComponent.ContainsCommChannelByName");
		
		UDFPlayerCommsComponent_ContainsCommChannelByName_Params params {};
		params.ChannelNameToCheck = ChannelNameToCheck;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00716510
	 * 		Name   -> Function DonkehFrameworkComms.DFPlayerCommsComponent.ContainsCommChannel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UDFCommChannel*                              ChannelToCheck                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFPlayerCommsComponent::ContainsCommChannel(class UDFCommChannel* ChannelToCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFPlayerCommsComponent.ContainsCommChannel");
		
		UDFPlayerCommsComponent_ContainsCommChannel_Params params {};
		params.ChannelToCheck = ChannelToCheck;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00716480
	 * 		Name   -> Function DonkehFrameworkComms.DFPlayerCommsComponent.ContainsAssociatedCommsFormat
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        FormatName                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFPlayerCommsComponent::ContainsAssociatedCommsFormat(const class FName& FormatName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFPlayerCommsComponent.ContainsAssociatedCommsFormat");
		
		UDFPlayerCommsComponent_ContainsAssociatedCommsFormat_Params params {};
		params.FormatName = FormatName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00715F90
	 * 		Name   -> Function DonkehFrameworkComms.DFPlayerCommsComponent.ClientVerifyCommMsgFailed
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient)
	 * Parameters:
	 * 		int32_t                                            VerifyMsgID                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFPlayerCommsComponent::ClientVerifyCommMsgFailed(int32_t VerifyMsgID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFPlayerCommsComponent.ClientVerifyCommMsgFailed");
		
		UDFPlayerCommsComponent_ClientVerifyCommMsgFailed_Params params {};
		params.VerifyMsgID = VerifyMsgID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00715EC0
	 * 		Name   -> Function DonkehFrameworkComms.DFPlayerCommsComponent.ClientUpdateExclusiveChannelToUseForCommsFormat
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient)
	 * Parameters:
	 * 		class FName                                        FormatName                                                 (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDFCommChannel*                              SingleChannelToUse                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFPlayerCommsComponent::ClientUpdateExclusiveChannelToUseForCommsFormat(const class FName& FormatName, class UDFCommChannel* SingleChannelToUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFPlayerCommsComponent.ClientUpdateExclusiveChannelToUseForCommsFormat");
		
		UDFPlayerCommsComponent_ClientUpdateExclusiveChannelToUseForCommsFormat_Params params {};
		params.FormatName = FormatName;
		params.SingleChannelToUse = SingleChannelToUse;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00715D60
	 * 		Name   -> Function DonkehFrameworkComms.DFPlayerCommsComponent.ClientRecvCommMsgFromChannel
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient)
	 * Parameters:
	 * 		class FName                                        SourceFormatName                                           (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDFCommChannel*                              SourceChannel                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDFGenericChannelMsg                        ReceivedCommMsg                                            (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UDFPlayerCommsComponent::ClientRecvCommMsgFromChannel(const class FName& SourceFormatName, class UDFCommChannel* SourceChannel, const struct FDFGenericChannelMsg& ReceivedCommMsg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFPlayerCommsComponent.ClientRecvCommMsgFromChannel");
		
		UDFPlayerCommsComponent_ClientRecvCommMsgFromChannel_Params params {};
		params.SourceFormatName = SourceFormatName;
		params.SourceChannel = SourceChannel;
		params.ReceivedCommMsg = ReceivedCommMsg;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00715CD0
	 * 		Name   -> Function DonkehFrameworkComms.DFPlayerCommsComponent.ClientClearCurrentExclusiveChannelForCommsFormat
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient)
	 * Parameters:
	 * 		class FName                                        FormatName                                                 (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFPlayerCommsComponent::ClientClearCurrentExclusiveChannelForCommsFormat(const class FName& FormatName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFPlayerCommsComponent.ClientClearCurrentExclusiveChannelForCommsFormat");
		
		UDFPlayerCommsComponent_ClientClearCurrentExclusiveChannelForCommsFormat_Params params {};
		params.FormatName = FormatName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00715AE0
	 * 		Name   -> Function DonkehFrameworkComms.DFPlayerCommsComponent.ClearCurrentExclusiveChannelForCommsFormatByName
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        FormatName                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFPlayerCommsComponent::ClearCurrentExclusiveChannelForCommsFormatByName(const class FName& FormatName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFPlayerCommsComponent.ClearCurrentExclusiveChannelForCommsFormatByName");
		
		UDFPlayerCommsComponent_ClearCurrentExclusiveChannelForCommsFormatByName_Params params {};
		params.FormatName = FormatName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00715A60
	 * 		Name   -> Function DonkehFrameworkComms.DFPlayerCommsComponent.ClearCurrentExclusiveChannelForCommsFormat
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDFCommsFormatBase*                          Format                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFPlayerCommsComponent::ClearCurrentExclusiveChannelForCommsFormat(class UDFCommsFormatBase* Format)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFPlayerCommsComponent.ClearCurrentExclusiveChannelForCommsFormat");
		
		UDFPlayerCommsComponent_ClearCurrentExclusiveChannelForCommsFormat_Params params {};
		params.Format = Format;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00715820
	 * 		Name   -> Function DonkehFrameworkComms.DFPlayerCommsComponent.CanSendCommMsgViaChannel
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UDFCommsFormatBase*                          ReceivingFormat                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDFCommChannel*                              ReceivingChannel                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDFGenericChannelMsg                        CommMsgToSend                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseChannelAsNewExclusive                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFPlayerCommsComponent::CanSendCommMsgViaChannel(class UDFCommsFormatBase* ReceivingFormat, class UDFCommChannel* ReceivingChannel, const struct FDFGenericChannelMsg& CommMsgToSend, bool bUseChannelAsNewExclusive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFPlayerCommsComponent.CanSendCommMsgViaChannel");
		
		UDFPlayerCommsComponent_CanSendCommMsgViaChannel_Params params {};
		params.ReceivingFormat = ReceivingFormat;
		params.ReceivingChannel = ReceivingChannel;
		params.CommMsgToSend = CommMsgToSend;
		params.bUseChannelAsNewExclusive = bUseChannelAsNewExclusive;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00715680
	 * 		Name   -> Function DonkehFrameworkComms.DFPlayerCommsComponent.CanSendAndRecvCommMsgViaChannel
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        FormatName                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ChannelName                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDFGenericChannelMsg                        CommMsg                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UDFPlayerCommsComponent::CanSendAndRecvCommMsgViaChannel(const class FName& FormatName, const class FName& ChannelName, const struct FDFGenericChannelMsg& CommMsg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFPlayerCommsComponent.CanSendAndRecvCommMsgViaChannel");
		
		UDFPlayerCommsComponent_CanSendAndRecvCommMsgViaChannel_Params params {};
		params.FormatName = FormatName;
		params.ChannelName = ChannelName;
		params.CommMsg = CommMsg;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007154E0
	 * 		Name   -> Function DonkehFrameworkComms.DFPlayerCommsComponent.CanRecvCommMsgViaChannel
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        SourceFormatName                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        SourceChannelName                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDFGenericChannelMsg                        CommMsgToReceive                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UDFPlayerCommsComponent::CanRecvCommMsgViaChannel(const class FName& SourceFormatName, const class FName& SourceChannelName, const struct FDFGenericChannelMsg& CommMsgToReceive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFPlayerCommsComponent.CanRecvCommMsgViaChannel");
		
		UDFPlayerCommsComponent_CanRecvCommMsgViaChannel_Params params {};
		params.SourceFormatName = SourceFormatName;
		params.SourceChannelName = SourceChannelName;
		params.CommMsgToReceive = CommMsgToReceive;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDFPlayerCommsComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDFPlayerCommsComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFrameworkComms.DFPlayerCommsComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDFTextCommsFormat.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDFTextCommsFormat::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFrameworkComms.DFTextCommsFormat");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00717620
	 * 		Name   -> Function DonkehFrameworkComms.DFVOIPCommsFormat.OnTalkerPSDestroyed
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class AActor*                                      DestroyedPS                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFVOIPCommsFormat::OnTalkerPSDestroyed(class AActor* DestroyedPS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFVOIPCommsFormat.OnTalkerPSDestroyed");
		
		UDFVOIPCommsFormat_OnTalkerPSDestroyed_Params params {};
		params.DestroyedPS = DestroyedPS;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDFVOIPCommsFormat.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDFVOIPCommsFormat::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFrameworkComms.DFVOIPCommsFormat");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00718E70
	 * 		Name   -> Function DonkehFrameworkComms.DFVOIPCommStatics.WasPlayerTalking
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class APlayerState*                                PlayerState                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFVOIPCommStatics::STATIC_WasPlayerTalking(class APlayerState* PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFVOIPCommStatics.WasPlayerTalking");
		
		UDFVOIPCommStatics_WasPlayerTalking_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007174A0
	 * 		Name   -> Function DonkehFrameworkComms.DFVOIPCommStatics.IsPlayerTalkingOverChannel
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class APlayerState*                                PlayerState                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDFCommChannel*                              TalkChannel                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFVOIPCommStatics::STATIC_IsPlayerTalkingOverChannel(class APlayerState* PlayerState, class UDFCommChannel* TalkChannel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFVOIPCommStatics.IsPlayerTalkingOverChannel");
		
		UDFVOIPCommStatics_IsPlayerTalkingOverChannel_Params params {};
		params.PlayerState = PlayerState;
		params.TalkChannel = TalkChannel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00717420
	 * 		Name   -> Function DonkehFrameworkComms.DFVOIPCommStatics.IsPlayerTalking
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class APlayerState*                                PlayerState                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFVOIPCommStatics::STATIC_IsPlayerTalking(class APlayerState* PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFVOIPCommStatics.IsPlayerTalking");
		
		UDFVOIPCommStatics_IsPlayerTalking_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007173A0
	 * 		Name   -> Function DonkehFrameworkComms.DFVOIPCommStatics.IsPlayerTalkerPendingReset
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class APlayerState*                                PlayerState                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFVOIPCommStatics::STATIC_IsPlayerTalkerPendingReset(class APlayerState* PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFVOIPCommStatics.IsPlayerTalkerPendingReset");
		
		UDFVOIPCommStatics_IsPlayerTalkerPendingReset_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00717080
	 * 		Name   -> Function DonkehFrameworkComms.DFVOIPCommStatics.GetVoiceSynthOwnerOfAudioComponent
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UAudioComponent*                             TalkerAudioComp                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UVoipListenerSynthComponent* UDFVOIPCommStatics::STATIC_GetVoiceSynthOwnerOfAudioComponent(class UAudioComponent* TalkerAudioComp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFVOIPCommStatics.GetVoiceSynthOwnerOfAudioComponent");
		
		UDFVOIPCommStatics_GetVoiceSynthOwnerOfAudioComponent_Params params {};
		params.TalkerAudioComp = TalkerAudioComp;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00717000
	 * 		Name   -> Function DonkehFrameworkComms.DFVOIPCommStatics.GetVoiceSynthComponentForVOIPTalker
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UVOIPTalker*                                 Talker                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UVoipListenerSynthComponent* UDFVOIPCommStatics::STATIC_GetVoiceSynthComponentForVOIPTalker(class UVOIPTalker* Talker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFVOIPCommStatics.GetVoiceSynthComponentForVOIPTalker");
		
		UDFVOIPCommStatics_GetVoiceSynthComponentForVOIPTalker_Params params {};
		params.Talker = Talker;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00716F70
	 * 		Name   -> Function DonkehFrameworkComms.DFVOIPCommStatics.GetValidVoiceEntryForPlayer
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class APlayerState*                                PlayerState                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FDFPlayerVOIPTalkingState UDFVOIPCommStatics::STATIC_GetValidVoiceEntryForPlayer(class APlayerState* PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFVOIPCommStatics.GetValidVoiceEntryForPlayer");
		
		UDFVOIPCommStatics_GetValidVoiceEntryForPlayer_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007153A0
	 * 		Name   -> Function DonkehFrameworkComms.DFVOIPCommStatics.ApplyVOIPTalkerSettingsForPlayer
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerState*                                TalkerPlayerState                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      ListenerLocalUserNum                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFVOIPCommStatics::STATIC_ApplyVOIPTalkerSettingsForPlayer(class APlayerState* TalkerPlayerState, unsigned char ListenerLocalUserNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkComms.DFVOIPCommStatics.ApplyVOIPTalkerSettingsForPlayer");
		
		UDFVOIPCommStatics_ApplyVOIPTalkerSettingsForPlayer_Params params {};
		params.TalkerPlayerState = TalkerPlayerState;
		params.ListenerLocalUserNum = ListenerLocalUserNum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDFVOIPCommStatics.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDFVOIPCommStatics::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFrameworkComms.DFVOIPCommStatics");
		return ptr;
	}

}


