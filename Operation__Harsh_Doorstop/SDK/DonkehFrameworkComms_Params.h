#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function DonkehFrameworkComms.CreateCommChannelCallbackProxy.CreateCommChannelFor
	 */
	struct UCreateCommChannelCallbackProxy_CreateCommChannelFor_Params
	{
	public:
		class APlayerController*                                   Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDFCommChannelDefinition*                            ChannelDef;                                              // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ChannelNameOverride;                                     // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCreateCommChannelCallbackProxy*                     ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFCommChannel.SetChannelState
	 */
	struct UDFCommChannel_SetChannelState_Params
	{
	public:
		class UObject*                                             NewChannelState;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFCommChannel.IsReady
	 */
	struct UDFCommChannel_IsReady_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFCommChannel.HasFormat
	 */
	struct UDFCommChannel_HasFormat_Params
	{
	public:
		class UDFCommsFormatBase*                                  Format;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFCommChannel.GetChannelNameStr
	 */
	struct UDFCommChannel_GetChannelNameStr_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFCommChannel.GetChannelName
	 */
	struct UDFCommChannel_GetChannelName_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFCommChannel.GetChannelGroupNameIfValid
	 */
	struct UDFCommChannel_GetChannelGroupNameIfValid_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFCommChannel.GetChannelDisplayName
	 */
	struct UDFCommChannel_GetChannelDisplayName_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFCommChannelDefinition.InstancesChannelWithGroup
	 */
	struct UDFCommChannelDefinition_InstancesChannelWithGroup_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFCommChannelStateInterface.BP_OnSetupState
	 */
	struct UDFCommChannelStateInterface_BP_OnSetupState_Params
	{
	public:
		struct FDFCommStateSetupParams                             SetupParams;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFCommChannelStateLibrary.NotifyChannelOfPreparedState
	 */
	struct UDFCommChannelStateLibrary_NotifyChannelOfPreparedState_Params
	{	};

	/**
	 * Function DonkehFrameworkComms.DFCommChannelStateLibrary.IsChannelStatePrepared
	 */
	struct UDFCommChannelStateLibrary_IsChannelStatePrepared_Params
	{
	public:
		unsigned char                                              UnknownData_LQKF[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFCommChannelStateLibrary.GetOwningCommChannel
	 */
	struct UDFCommChannelStateLibrary_GetOwningCommChannel_Params
	{
	public:
		unsigned char                                              UnknownData_WFAP[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDFCommChannel*                                      ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFCommsFormatBase.HasAccessToChannel
	 */
	struct UDFCommsFormatBase_HasAccessToChannel_Params
	{
	public:
		class FName                                                ChannelName;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EDFCommsFormatAccessRule                                   AccessRulesToCheck;                                      // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFCommsFormatBase.CanWriteToChannel
	 */
	struct UDFCommsFormatBase_CanWriteToChannel_Params
	{
	public:
		class FName                                                ChannelName;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFCommsFormatBase.CanReadFromChannel
	 */
	struct UDFCommsFormatBase_CanReadFromChannel_Params
	{
	public:
		class FName                                                ChannelName;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFCommStatics.UpdateExclusiveChannelForFormatByName
	 */
	struct UDFCommStatics_UpdateExclusiveChannelForFormatByName_Params
	{
	public:
		class APlayerController*                                   Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                FormatNameToUpdate;                                      // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                SingleChannelNameToUse;                                  // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFCommStatics.UpdateExclusiveChannelForFormat
	 */
	struct UDFCommStatics_UpdateExclusiveChannelForFormat_Params
	{
	public:
		class APlayerController*                                   Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDFCommsFormatBase*                                  FormatToUpdate;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDFCommChannel*                                      SingleChannelToUse;                                      // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFCommStatics.SendCommsViaChannelByName
	 */
	struct UDFCommStatics_SendCommsViaChannelByName_Params
	{
	public:
		class APlayerController*                                   PlayerSender;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                FormatName;                                              // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ReceivingChannelName;                                    // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDFGenericChannelMsg                                MsgToSend;                                               // 0x0018(0x0038)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       bUseChannelAsNewExclusive;                               // 0x0050(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFCommStatics.SendCommsViaChannel
	 */
	struct UDFCommStatics_SendCommsViaChannel_Params
	{
	public:
		class APlayerController*                                   PlayerSender;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDFCommsFormatBase*                                  FormatToUse;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDFCommChannel*                                      ReceivingChannel;                                        // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDFGenericChannelMsg                                MsgToSend;                                               // 0x0018(0x0038)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       bUseChannelAsNewExclusive;                               // 0x0050(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFCommStatics.PlayerHasCommChannelByName
	 */
	struct UDFCommStatics_PlayerHasCommChannelByName_Params
	{
	public:
		class APlayerController*                                   Player;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ChannelName;                                             // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFCommStatics.PlayerHasCommChannel
	 */
	struct UDFCommStatics_PlayerHasCommChannel_Params
	{
	public:
		class APlayerController*                                   Player;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDFCommChannel*                                      Channel;                                                 // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFCommStatics.FindCommsComponentByPlayer
	 */
	struct UDFCommStatics_FindCommsComponentByPlayer_Params
	{
	public:
		class APlayerController*                                   Player;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDFPlayerCommsComponent*                             OutPlayerCommsComp;                                      // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFCommStatics.CommsFormatUsesChannelByName
	 */
	struct UDFCommStatics_CommsFormatUsesChannelByName_Params
	{
	public:
		class APlayerController*                                   Player;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                FormatName;                                              // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ChannelNameToCheck;                                      // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFCommStatics.CommsFormatUsesChannel
	 */
	struct UDFCommStatics_CommsFormatUsesChannel_Params
	{
	public:
		class APlayerController*                                   Player;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDFCommsFormatBase*                                  Format;                                                  // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDFCommChannel*                                      ChannelToCheck;                                          // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFCommStatics.CommsFormatHasExclusiveChannelByName
	 */
	struct UDFCommStatics_CommsFormatHasExclusiveChannelByName_Params
	{
	public:
		class APlayerController*                                   PlayerFormatOwner;                                       // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                FormatName;                                              // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFCommStatics.CommsFormatHasExclusiveChannel
	 */
	struct UDFCommStatics_CommsFormatHasExclusiveChannel_Params
	{
	public:
		class UDFCommsFormatBase*                                  Format;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFCommStatics.CommsFormatGetExclusiveChannelByName
	 */
	struct UDFCommStatics_CommsFormatGetExclusiveChannelByName_Params
	{
	public:
		class APlayerController*                                   PlayerFormatOwner;                                       // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                FormatName;                                              // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDFCommChannel*                                      ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFCommStatics.CommsFormatGetExclusiveChannel
	 */
	struct UDFCommStatics_CommsFormatGetExclusiveChannel_Params
	{
	public:
		class UDFCommsFormatBase*                                  Format;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDFCommChannel*                                      ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFCommStatics.ClearCurrentExclusiveChannelForFormatByName
	 */
	struct UDFCommStatics_ClearCurrentExclusiveChannelForFormatByName_Params
	{
	public:
		class APlayerController*                                   Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                FormatNameToUpdate;                                      // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFCommStatics.ClearCurrentExclusiveChannelForFormat
	 */
	struct UDFCommStatics_ClearCurrentExclusiveChannelForFormat_Params
	{
	public:
		class APlayerController*                                   Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDFCommsFormatBase*                                  FormatToUpdate;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFCommWorldSubsystem.PostSeamlessTravelPCDestroyed
	 */
	struct UDFCommWorldSubsystem_PostSeamlessTravelPCDestroyed_Params
	{
	public:
		class AActor*                                              DestroyedPlayerActor;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFCommWorldSubsystem.InitPlayerComms
	 */
	struct UDFCommWorldSubsystem_InitPlayerComms_Params
	{
	public:
		class APlayerController*                                   Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDFPlayerCommsComponent*                             ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFCommWorldSubsystem.GameModePostLogin
	 */
	struct UDFCommWorldSubsystem_GameModePostLogin_Params
	{
	public:
		class AGameModeBase*                                       GameMode;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerController*                                   NewPlayer;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFPlayerCommsComponent.UpdateExclusiveChannelToUseForCommsFormatByName
	 */
	struct UDFPlayerCommsComponent_UpdateExclusiveChannelToUseForCommsFormatByName_Params
	{
	public:
		class FName                                                FormatName;                                              // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                SingleChannelNameToUse;                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFPlayerCommsComponent.UpdateExclusiveChannelToUseForCommsFormat
	 */
	struct UDFPlayerCommsComponent_UpdateExclusiveChannelToUseForCommsFormat_Params
	{
	public:
		class UDFCommsFormatBase*                                  Format;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDFCommChannel*                                      SingleChannelToUse;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFPlayerCommsComponent.ServerVerifyCommMsg
	 */
	struct UDFPlayerCommsComponent_ServerVerifyCommMsg_Params
	{
	public:
		int32_t                                                    VerifyMsgID;                                             // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFPlayerCommsComponent.ServerUpdateExclusiveChannelToUseForCommsFormat
	 */
	struct UDFPlayerCommsComponent_ServerUpdateExclusiveChannelToUseForCommsFormat_Params
	{
	public:
		class FName                                                FormatName;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDFCommChannel*                                      SingleChannelToUse;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFPlayerCommsComponent.ServerSendCommMsgViaExclChannel
	 */
	struct UDFPlayerCommsComponent_ServerSendCommMsgViaExclChannel_Params
	{
	public:
		class FName                                                FormatName;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDFCommChannel*                                      ReceivingChannel;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDFGenericChannelMsg                                CommMsg;                                                 // 0x0010(0x0038)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFPlayerCommsComponent.ServerSendCommMsgViaChannel
	 */
	struct UDFPlayerCommsComponent_ServerSendCommMsgViaChannel_Params
	{
	public:
		class FName                                                FormatName;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDFCommChannel*                                      ReceivingChannel;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDFGenericChannelMsg                                CommMsg;                                                 // 0x0010(0x0038)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFPlayerCommsComponent.ServerRequestExclusiveChannelUsedForCommsFormat
	 */
	struct UDFPlayerCommsComponent_ServerRequestExclusiveChannelUsedForCommsFormat_Params
	{
	public:
		class FName                                                RequestedFormatName;                                     // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFPlayerCommsComponent.ServerClearCurrentExclusiveChannelForCommsFormat
	 */
	struct UDFPlayerCommsComponent_ServerClearCurrentExclusiveChannelForCommsFormat_Params
	{
	public:
		class FName                                                FormatName;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFPlayerCommsComponent.SendCommMsgViaChannelByName
	 */
	struct UDFPlayerCommsComponent_SendCommMsgViaChannelByName_Params
	{
	public:
		class FName                                                FormatName;                                              // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ReceivingChannelName;                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDFGenericChannelMsg                                CommMsgToSend;                                           // 0x0010(0x0038)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       bUseChannelAsNewExclusive;                               // 0x0048(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFPlayerCommsComponent.SendCommMsgViaChannel
	 */
	struct UDFPlayerCommsComponent_SendCommMsgViaChannel_Params
	{
	public:
		class UDFCommsFormatBase*                                  FormatToUse;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDFCommChannel*                                      ReceivingChannel;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDFGenericChannelMsg                                CommMsgToSend;                                           // 0x0010(0x0038)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       bUseChannelAsNewExclusive;                               // 0x0048(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFPlayerCommsComponent.RemoveCommChannelByName
	 */
	struct UDFPlayerCommsComponent_RemoveCommChannelByName_Params
	{
	public:
		class FName                                                ChannelNameToRemove;                                     // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFPlayerCommsComponent.RemoveCommChannel
	 */
	struct UDFPlayerCommsComponent_RemoveCommChannel_Params
	{
	public:
		class UDFCommChannel*                                      ChannelToRemove;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFPlayerCommsComponent.RemoveAllCommChannels
	 */
	struct UDFPlayerCommsComponent_RemoveAllCommChannels_Params
	{	};

	/**
	 * Function DonkehFrameworkComms.DFPlayerCommsComponent.ReceiveCommChannelPreRemoved
	 */
	struct UDFPlayerCommsComponent_ReceiveCommChannelPreRemoved_Params
	{
	public:
		class UDFCommChannel*                                      RemovedChannel;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFPlayerCommsComponent.ReceiveCommChannelAdded
	 */
	struct UDFPlayerCommsComponent_ReceiveCommChannelAdded_Params
	{
	public:
		class UDFCommChannel*                                      AddedChannel;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFPlayerCommsComponent.FormatUsesChannelByName
	 */
	struct UDFPlayerCommsComponent_FormatUsesChannelByName_Params
	{
	public:
		class FName                                                FormatName;                                              // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ChannelNameToCheck;                                      // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFPlayerCommsComponent.FormatUsesChannel
	 */
	struct UDFPlayerCommsComponent_FormatUsesChannel_Params
	{
	public:
		class UDFCommsFormatBase*                                  Format;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDFCommChannel*                                      ChannelToCheck;                                          // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFPlayerCommsComponent.FormatHasExclusiveChannelByName
	 */
	struct UDFPlayerCommsComponent_FormatHasExclusiveChannelByName_Params
	{
	public:
		class FName                                                FormatName;                                              // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFPlayerCommsComponent.FormatHasExclusiveChannel
	 */
	struct UDFPlayerCommsComponent_FormatHasExclusiveChannel_Params
	{
	public:
		class UDFCommsFormatBase*                                  Format;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFPlayerCommsComponent.FindCommChannel
	 */
	struct UDFPlayerCommsComponent_FindCommChannel_Params
	{
	public:
		class FName                                                ChannelName;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDFCommChannel*                                      OutChannelFound;                                         // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFPlayerCommsComponent.FindAssociatedCommsFormat
	 */
	struct UDFPlayerCommsComponent_FindAssociatedCommsFormat_Params
	{
	public:
		class FName                                                FormatName;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDFCommsFormatBase*                                  OutFormatFound;                                          // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFPlayerCommsComponent.ContainsCommChannelByName
	 */
	struct UDFPlayerCommsComponent_ContainsCommChannelByName_Params
	{
	public:
		class FName                                                ChannelNameToCheck;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFPlayerCommsComponent.ContainsCommChannel
	 */
	struct UDFPlayerCommsComponent_ContainsCommChannel_Params
	{
	public:
		class UDFCommChannel*                                      ChannelToCheck;                                          // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFPlayerCommsComponent.ContainsAssociatedCommsFormat
	 */
	struct UDFPlayerCommsComponent_ContainsAssociatedCommsFormat_Params
	{
	public:
		class FName                                                FormatName;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFPlayerCommsComponent.ClientVerifyCommMsgFailed
	 */
	struct UDFPlayerCommsComponent_ClientVerifyCommMsgFailed_Params
	{
	public:
		int32_t                                                    VerifyMsgID;                                             // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFPlayerCommsComponent.ClientUpdateExclusiveChannelToUseForCommsFormat
	 */
	struct UDFPlayerCommsComponent_ClientUpdateExclusiveChannelToUseForCommsFormat_Params
	{
	public:
		class FName                                                FormatName;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDFCommChannel*                                      SingleChannelToUse;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFPlayerCommsComponent.ClientRecvCommMsgFromChannel
	 */
	struct UDFPlayerCommsComponent_ClientRecvCommMsgFromChannel_Params
	{
	public:
		class FName                                                SourceFormatName;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDFCommChannel*                                      SourceChannel;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDFGenericChannelMsg                                ReceivedCommMsg;                                         // 0x0010(0x0038)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFPlayerCommsComponent.ClientClearCurrentExclusiveChannelForCommsFormat
	 */
	struct UDFPlayerCommsComponent_ClientClearCurrentExclusiveChannelForCommsFormat_Params
	{
	public:
		class FName                                                FormatName;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFPlayerCommsComponent.ClearCurrentExclusiveChannelForCommsFormatByName
	 */
	struct UDFPlayerCommsComponent_ClearCurrentExclusiveChannelForCommsFormatByName_Params
	{
	public:
		class FName                                                FormatName;                                              // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFPlayerCommsComponent.ClearCurrentExclusiveChannelForCommsFormat
	 */
	struct UDFPlayerCommsComponent_ClearCurrentExclusiveChannelForCommsFormat_Params
	{
	public:
		class UDFCommsFormatBase*                                  Format;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFPlayerCommsComponent.CanSendCommMsgViaChannel
	 */
	struct UDFPlayerCommsComponent_CanSendCommMsgViaChannel_Params
	{
	public:
		class UDFCommsFormatBase*                                  ReceivingFormat;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDFCommChannel*                                      ReceivingChannel;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDFGenericChannelMsg                                CommMsgToSend;                                           // 0x0010(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bUseChannelAsNewExclusive;                               // 0x0048(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0049(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFPlayerCommsComponent.CanSendAndRecvCommMsgViaChannel
	 */
	struct UDFPlayerCommsComponent_CanSendAndRecvCommMsgViaChannel_Params
	{
	public:
		class FName                                                FormatName;                                              // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ChannelName;                                             // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDFGenericChannelMsg                                CommMsg;                                                 // 0x0010(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFPlayerCommsComponent.CanRecvCommMsgViaChannel
	 */
	struct UDFPlayerCommsComponent_CanRecvCommMsgViaChannel_Params
	{
	public:
		class FName                                                SourceFormatName;                                        // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                SourceChannelName;                                       // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDFGenericChannelMsg                                CommMsgToReceive;                                        // 0x0010(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFVOIPCommsFormat.OnTalkerPSDestroyed
	 */
	struct UDFVOIPCommsFormat_OnTalkerPSDestroyed_Params
	{
	public:
		class AActor*                                              DestroyedPS;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFVOIPCommStatics.WasPlayerTalking
	 */
	struct UDFVOIPCommStatics_WasPlayerTalking_Params
	{
	public:
		class APlayerState*                                        PlayerState;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFVOIPCommStatics.IsPlayerTalkingOverChannel
	 */
	struct UDFVOIPCommStatics_IsPlayerTalkingOverChannel_Params
	{
	public:
		class APlayerState*                                        PlayerState;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDFCommChannel*                                      TalkChannel;                                             // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFVOIPCommStatics.IsPlayerTalking
	 */
	struct UDFVOIPCommStatics_IsPlayerTalking_Params
	{
	public:
		class APlayerState*                                        PlayerState;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFVOIPCommStatics.IsPlayerTalkerPendingReset
	 */
	struct UDFVOIPCommStatics_IsPlayerTalkerPendingReset_Params
	{
	public:
		class APlayerState*                                        PlayerState;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFVOIPCommStatics.GetVoiceSynthOwnerOfAudioComponent
	 */
	struct UDFVOIPCommStatics_GetVoiceSynthOwnerOfAudioComponent_Params
	{
	public:
		class UAudioComponent*                                     TalkerAudioComp;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UVoipListenerSynthComponent*                         ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFVOIPCommStatics.GetVoiceSynthComponentForVOIPTalker
	 */
	struct UDFVOIPCommStatics_GetVoiceSynthComponentForVOIPTalker_Params
	{
	public:
		class UVOIPTalker*                                         Talker;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UVoipListenerSynthComponent*                         ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFVOIPCommStatics.GetValidVoiceEntryForPlayer
	 */
	struct UDFVOIPCommStatics_GetValidVoiceEntryForPlayer_Params
	{
	public:
		class APlayerState*                                        PlayerState;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDFPlayerVOIPTalkingState                           ReturnValue;                                             // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkComms.DFVOIPCommStatics.ApplyVOIPTalkerSettingsForPlayer
	 */
	struct UDFVOIPCommStatics_ApplyVOIPTalkerSettingsForPlayer_Params
	{
	public:
		class APlayerState*                                        TalkerPlayerState;                                       // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              ListenerLocalUserNum;                                    // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
