#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class DonkehFrameworkComms.CreateCommChannelCallbackProxy
	 * Size -> 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
	 */
	class UCreateCommChannelCallbackProxy : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnPerformSetup;                                          // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class APlayerController*                                   CreateChannelOwnerPC;                                    // 0x0060(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDFCommChannelDefinition*                            CreateChannelDef;                                        // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9CUW[0x18];                                  // 0x0070(0x0018) MISSED OFFSET (PADDING)

	public:
		class UCreateCommChannelCallbackProxy* STATIC_CreateCommChannelFor(class APlayerController* Player, class UDFCommChannelDefinition* ChannelDef, const class FName& ChannelNameOverride);
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFrameworkComms.DFCommChannel
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UDFCommChannel : public UObject
	{
	public:
		unsigned char                                              UnknownData_Q27Z[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bChannelPreInitialized : 1;                              // 0x0030(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bChannelClosed : 1;                                      // 0x0030(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bCompletedSetup : 1;                                     // 0x0030(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NP5F[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ChannelName;                                             // 0x0034(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NXII[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDFCommChannelDefinition*                            ChannelDefinition;                                       // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UObject*                                             ChannelState;                                            // 0x0048(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UDFCommsFormatBase*>                          AssociatedCommsFormats;                                  // 0x0050(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VCOX[0x30];                                  // 0x0060(0x0030) MISSED OFFSET (PADDING)

	public:
		void SetChannelState(class UObject* NewChannelState);
		bool IsReady();
		bool HasFormat(class UDFCommsFormatBase* Format);
		class FString GetChannelNameStr();
		class FName GetChannelName();
		class FName GetChannelGroupNameIfValid();
		class FText GetChannelDisplayName();
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFrameworkComms.DFCommChannelDefinition
	 * Size -> 0x0088 (FullSize[0x00B8] - InheritedSize[0x0030])
	 */
	class UDFCommChannelDefinition : public UDataAsset
	{
	public:
		class FName                                                ChannelName;                                             // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FText                                                ChannelDisplayName;                                      // 0x0038(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPrivate
		unsigned char                                              bInstanceChannelWithGroup : 1;                           // 0x0050(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_A8G7[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ChannelGroupName;                                        // 0x0054(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QP7H[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ChannelStateClass;                                       // 0x0060(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<class UClass*, EDFCommsFormatAccessRule>              FormatAccessRules;                                       // 0x0068(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPrivate

	public:
		bool InstancesChannelWithGroup();
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFrameworkComms.DFCommChannelStateInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDFCommChannelStateInterface : public UInterface
	{
	public:
		void BP_OnSetupState(const struct FDFCommStateSetupParams& SetupParams);
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFrameworkComms.DFCommChannelStateLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDFCommChannelStateLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_NotifyChannelOfPreparedState();
		bool STATIC_IsChannelStatePrepared();
		class UDFCommChannel* STATIC_GetOwningCommChannel();
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFrameworkComms.DFCommDeveloperSettings
	 * Size -> 0x00B8 (FullSize[0x00F0] - InheritedSize[0x0038])
	 */
	class UDFCommDeveloperSettings : public UDeveloperSettings
	{
	public:
		struct FSoftClassPath                                      PlayerCommsCompClass;                                    // 0x0038(0x0018) Edit, ZeroConstructor, Config, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CommsFormatDefinitions[0x50];                            // 0x0050(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              CommChannelDefinitions[0x50];                            // 0x00A0(0x0050) UNKNOWN PROPERTY: SetProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFrameworkComms.DFCommsFormatBase
	 * Size -> 0x00A8 (FullSize[0x00D0] - InheritedSize[0x0028])
	 */
	class UDFCommsFormatBase : public UObject
	{
	public:
		unsigned char                                              bSingleChannelUsageOnly : 1;                             // 0x0028(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bRequiresValidSingleChannelAssignment : 1;               // 0x0028(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0PXJ[0x17];                                  // 0x0029(0x0017) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDFGenericChannelMsg                                LastReceivedCommMsg;                                     // 0x0040(0x0038) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4WO2[0x50];                                  // 0x0078(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                FormatName;                                              // 0x00C8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		bool HasAccessToChannel(const class FName& ChannelName, EDFCommsFormatAccessRule AccessRulesToCheck);
		bool CanWriteToChannel(const class FName& ChannelName);
		bool CanReadFromChannel(const class FName& ChannelName);
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFrameworkComms.DFCommStatics
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDFCommStatics : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_UpdateExclusiveChannelForFormatByName(class APlayerController* Player, const class FName& FormatNameToUpdate, const class FName& SingleChannelNameToUse);
		void STATIC_UpdateExclusiveChannelForFormat(class APlayerController* Player, class UDFCommsFormatBase* FormatToUpdate, class UDFCommChannel* SingleChannelToUse);
		void STATIC_SendCommsViaChannelByName(class APlayerController* PlayerSender, const class FName& FormatName, const class FName& ReceivingChannelName, struct FDFGenericChannelMsg* MsgToSend, bool bUseChannelAsNewExclusive);
		void STATIC_SendCommsViaChannel(class APlayerController* PlayerSender, class UDFCommsFormatBase* FormatToUse, class UDFCommChannel* ReceivingChannel, struct FDFGenericChannelMsg* MsgToSend, bool bUseChannelAsNewExclusive);
		bool STATIC_PlayerHasCommChannelByName(class APlayerController* Player, const class FName& ChannelName);
		bool STATIC_PlayerHasCommChannel(class APlayerController* Player, class UDFCommChannel* Channel);
		bool STATIC_FindCommsComponentByPlayer(class APlayerController* Player, class UDFPlayerCommsComponent** OutPlayerCommsComp);
		bool STATIC_CommsFormatUsesChannelByName(class APlayerController* Player, const class FName& FormatName, const class FName& ChannelNameToCheck);
		bool STATIC_CommsFormatUsesChannel(class APlayerController* Player, class UDFCommsFormatBase* Format, class UDFCommChannel* ChannelToCheck);
		bool STATIC_CommsFormatHasExclusiveChannelByName(class APlayerController* PlayerFormatOwner, const class FName& FormatName);
		bool STATIC_CommsFormatHasExclusiveChannel(class UDFCommsFormatBase* Format);
		class UDFCommChannel* STATIC_CommsFormatGetExclusiveChannelByName(class APlayerController* PlayerFormatOwner, const class FName& FormatName);
		class UDFCommChannel* STATIC_CommsFormatGetExclusiveChannel(class UDFCommsFormatBase* Format);
		void STATIC_ClearCurrentExclusiveChannelForFormatByName(class APlayerController* Player, const class FName& FormatNameToUpdate);
		void STATIC_ClearCurrentExclusiveChannelForFormat(class APlayerController* Player, class UDFCommsFormatBase* FormatToUpdate);
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFrameworkComms.DFCommWorldSubsystem
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UDFCommWorldSubsystem : public UWorldSubsystem
	{
	public:
		void PostSeamlessTravelPCDestroyed(class AActor* DestroyedPlayerActor);
		class UDFPlayerCommsComponent* STATIC_InitPlayerComms(class APlayerController* Player);
		void GameModePostLogin(class AGameModeBase* GameMode, class APlayerController* NewPlayer);
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFrameworkComms.DFPlayerCommsComponent
	 * Size -> 0x3A00 (FullSize[0x3AB0] - InheritedSize[0x00B0])
	 */
	class UDFPlayerCommsComponent : public UActorComponent
	{
	public:
		TMap<class FName, class UDFCommsFormatBase*>               CommsFormats;                                            // 0x00B0(0x0050) Transient, NativeAccessSpecifierPrivate
		struct FDFCommChannelMap                                   OpenCommChannels;                                        // 0x0100(0x0170) Net, Transient, NativeAccessSpecifierPrivate
		struct FDFChannelMsgRecord                                 MsgSendBuffer[0x64];                                     // 0x0270(0x1C20) Transient, NativeAccessSpecifierPrivate
		struct FDFChannelMsgRecord                                 MsgRecvBuffer[0x64];                                     // 0x1E90(0x1C20) Transient, NativeAccessSpecifierPrivate

	public:
		void UpdateExclusiveChannelToUseForCommsFormatByName(const class FName& FormatName, const class FName& SingleChannelNameToUse);
		void UpdateExclusiveChannelToUseForCommsFormat(class UDFCommsFormatBase* Format, class UDFCommChannel* SingleChannelToUse);
		void ServerVerifyCommMsg(int32_t VerifyMsgID);
		void ServerUpdateExclusiveChannelToUseForCommsFormat(const class FName& FormatName, class UDFCommChannel* SingleChannelToUse);
		void ServerSendCommMsgViaExclChannel(const class FName& FormatName, class UDFCommChannel* ReceivingChannel, const struct FDFGenericChannelMsg& CommMsg);
		void ServerSendCommMsgViaChannel(const class FName& FormatName, class UDFCommChannel* ReceivingChannel, const struct FDFGenericChannelMsg& CommMsg);
		void ServerRequestExclusiveChannelUsedForCommsFormat(const class FName& RequestedFormatName);
		void ServerClearCurrentExclusiveChannelForCommsFormat(const class FName& FormatName);
		void SendCommMsgViaChannelByName(const class FName& FormatName, const class FName& ReceivingChannelName, struct FDFGenericChannelMsg* CommMsgToSend, bool bUseChannelAsNewExclusive);
		void SendCommMsgViaChannel(class UDFCommsFormatBase* FormatToUse, class UDFCommChannel* ReceivingChannel, struct FDFGenericChannelMsg* CommMsgToSend, bool bUseChannelAsNewExclusive);
		void RemoveCommChannelByName(const class FName& ChannelNameToRemove);
		void RemoveCommChannel(class UDFCommChannel* ChannelToRemove);
		void RemoveAllCommChannels();
		void ReceiveCommChannelPreRemoved(class UDFCommChannel* RemovedChannel);
		void ReceiveCommChannelAdded(class UDFCommChannel* AddedChannel);
		bool FormatUsesChannelByName(const class FName& FormatName, const class FName& ChannelNameToCheck);
		bool FormatUsesChannel(class UDFCommsFormatBase* Format, class UDFCommChannel* ChannelToCheck);
		bool FormatHasExclusiveChannelByName(const class FName& FormatName);
		bool FormatHasExclusiveChannel(class UDFCommsFormatBase* Format);
		bool FindCommChannel(const class FName& ChannelName, class UDFCommChannel** OutChannelFound);
		bool FindAssociatedCommsFormat(const class FName& FormatName, class UDFCommsFormatBase** OutFormatFound);
		bool ContainsCommChannelByName(const class FName& ChannelNameToCheck);
		bool ContainsCommChannel(class UDFCommChannel* ChannelToCheck);
		bool ContainsAssociatedCommsFormat(const class FName& FormatName);
		void ClientVerifyCommMsgFailed(int32_t VerifyMsgID);
		void ClientUpdateExclusiveChannelToUseForCommsFormat(const class FName& FormatName, class UDFCommChannel* SingleChannelToUse);
		void ClientRecvCommMsgFromChannel(const class FName& SourceFormatName, class UDFCommChannel* SourceChannel, const struct FDFGenericChannelMsg& ReceivedCommMsg);
		void ClientClearCurrentExclusiveChannelForCommsFormat(const class FName& FormatName);
		void ClearCurrentExclusiveChannelForCommsFormatByName(const class FName& FormatName);
		void ClearCurrentExclusiveChannelForCommsFormat(class UDFCommsFormatBase* Format);
		bool CanSendCommMsgViaChannel(class UDFCommsFormatBase* ReceivingFormat, class UDFCommChannel* ReceivingChannel, const struct FDFGenericChannelMsg& CommMsgToSend, bool bUseChannelAsNewExclusive);
		bool CanSendAndRecvCommMsgViaChannel(const class FName& FormatName, const class FName& ChannelName, const struct FDFGenericChannelMsg& CommMsg);
		bool CanRecvCommMsgViaChannel(const class FName& SourceFormatName, const class FName& SourceChannelName, const struct FDFGenericChannelMsg& CommMsgToReceive);
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFrameworkComms.DFTextCommsFormat
	 * Size -> 0x0010 (FullSize[0x00E0] - InheritedSize[0x00D0])
	 */
	class UDFTextCommsFormat : public UDFCommsFormatBase
	{
	public:
		class FScriptMulticastDelegate                             OnChatMsgReceived;                                       // 0x00D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFrameworkComms.DFVOIPCommsFormat
	 * Size -> 0x0030 (FullSize[0x0100] - InheritedSize[0x00D0])
	 */
	class UDFVOIPCommsFormat : public UDFCommsFormatBase
	{
	public:
		class FScriptMulticastDelegate                             OnPlayerTalkingStateChangedOnChannel;                    // 0x00D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YCM0[0x20];                                  // 0x00E0(0x0020) MISSED OFFSET (PADDING)

	public:
		void OnTalkerPSDestroyed(class AActor* DestroyedPS);
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFrameworkComms.DFVOIPCommStatics
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDFVOIPCommStatics : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_WasPlayerTalking(class APlayerState* PlayerState);
		bool STATIC_IsPlayerTalkingOverChannel(class APlayerState* PlayerState, class UDFCommChannel* TalkChannel);
		bool STATIC_IsPlayerTalking(class APlayerState* PlayerState);
		bool STATIC_IsPlayerTalkerPendingReset(class APlayerState* PlayerState);
		class UVoipListenerSynthComponent* STATIC_GetVoiceSynthOwnerOfAudioComponent(class UAudioComponent* TalkerAudioComp);
		class UVoipListenerSynthComponent* STATIC_GetVoiceSynthComponentForVOIPTalker(class UVOIPTalker* Talker);
		struct FDFPlayerVOIPTalkingState STATIC_GetValidVoiceEntryForPlayer(class APlayerState* PlayerState);
		void STATIC_ApplyVOIPTalkerSettingsForPlayer(class APlayerState* TalkerPlayerState, unsigned char ListenerLocalUserNum);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
