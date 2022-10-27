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
	 * Function GlitterBeard.GlitterBeardFinaleCoordinatorComponent.OnRep_ReplicationState
	 */
	struct UGlitterBeardFinaleCoordinatorComponent_OnRep_ReplicationState_Params
	{
	public:
		struct FFinaleReplicationState                             OldState;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GlitterBeard.GlitterBeardTree.StopVocals
	 */
	struct AGlitterBeardTree_StopVocals_Params
	{	};

	/**
	 * Function GlitterBeard.GlitterBeardTree.StopReaction
	 */
	struct AGlitterBeardTree_StopReaction_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GlitterBeard.GlitterBeardTree.StartVocals
	 */
	struct AGlitterBeardTree_StartVocals_Params
	{	};

	/**
	 * Function GlitterBeard.GlitterBeardTree.StartReaction
	 */
	struct AGlitterBeardTree_StartReaction_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GlitterBeard.GlitterBeardTree.Reset_Impl
	 */
	struct AGlitterBeardTree_Reset_Impl_Params
	{	};

	/**
	 * Function GlitterBeard.GlitterBeardTreeVisualFeedbackComponent.OnRep_NextStateEvent
	 */
	struct UGlitterBeardTreeVisualFeedbackComponent_OnRep_NextStateEvent_Params
	{
	public:
		TArray<EGlitterbeardVFXState>                              OldStates;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
