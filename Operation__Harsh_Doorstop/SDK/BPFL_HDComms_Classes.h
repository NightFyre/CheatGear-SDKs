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
	 * BlueprintGeneratedClass BPFL_HDComms.BPFL_HDComms_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPFL_HDComms_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_GetTextChatIconForCommChannel(class UDFCommChannel* Channel, class UObject* __WorldContext, class UTexture2D** ChannelChatIcon);
		void STATIC_SetupNewSquadChannel(class UDFCommChannel* CreatedChannel, class AHDSquadState* SquadToAssociate, class UObject* __WorldContext);
		void STATIC_SetupNewTeamChannel(class UDFCommChannel* CreatedChannel, class AHDTeamState* TeamToAssociate, class UObject* __WorldContext);
		void STATIC_GetColorForCommChannel(class UDFCommChannel* Channel, class UObject* __WorldContext, struct FSlateColor* ChannelColor);
		void STATIC_GetValidCommsComponentForPlayer(class APlayerController* Player, class UObject* __WorldContext, class UDFPlayerCommsComponent** PlayerCommsComp);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
