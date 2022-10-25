#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum NetCore.ERareNetworkEventType
	 */
	enum class ERareNetworkEventType : uint8_t
	{
		FrameBegin          = 0,
		SendRPC             = 1,
		QueuedRPC           = 2,
		ActorReplicated     = 3,
		PropertyMadeDirty   = 4,
		PropertyReplicated  = 5,
		WritePropertyHeader = 6,
		Misc                = 7,
		SocketSendTo        = 8,
		SendBunch           = 9,
		SendAck             = 10,
		MustBeMappedGuids   = 11,
		ExportBunch         = 12,
		BeginContentBlock   = 13,
		EndContentBlock     = 14,
		WritePropertyHandle = 15,
		PushBunch           = 16,
		PopBunch            = 17,
		StartActorScope     = 18,
		StopActorScope      = 19,
		DelayedSend         = 20,
		Max                 = 21,
		MAX                 = 22
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
