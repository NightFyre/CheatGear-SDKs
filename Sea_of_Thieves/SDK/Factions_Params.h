#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * Function Factions.FactionFlipMeshComponent.OnRep_IsFlipping
	 */
	struct UFactionFlipMeshComponent_OnRep_IsFlipping_Params
	{	};

	/**
	 * Function Factions.FactionService.OnRep_FactionAlignedCrews
	 */
	struct AFactionService_OnRep_FactionAlignedCrews_Params
	{
	public:
		TArray<struct FCrewFactionEntry>                           PreviousCrews;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function Factions.FactionVoteConsumerBase.OnRep_Votes
	 */
	struct UFactionVoteConsumerBase_OnRep_Votes_Params
	{	};

	/**
	 * Function Factions.FactionVoteValidatorBase.OnRep_CurrentCompany
	 */
	struct UFactionVoteValidatorBase_OnRep_CurrentCompany_Params
	{	};

	/**
	 * Function Factions.ShipFactionCustomisation.OnLeavingFightEndVFX
	 */
	struct UShipFactionCustomisation_OnLeavingFightEndVFX_Params
	{	};

	/**
	 * Function Factions.ShipFactionCustomisation.OnJoiningFightStartVFX
	 */
	struct UShipFactionCustomisation_OnJoiningFightStartVFX_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
