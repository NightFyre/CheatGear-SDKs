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
	 * Function Mysteries.AbandonedNoteWeightedTextSourceComponent.OnRep_TitleText
	 */
	struct UAbandonedNoteWeightedTextSourceComponent_OnRep_TitleText_Params
	{	};

	/**
	 * Function Mysteries.AbandonedNoteWeightedTextSourceComponent.OnRep_ClueText
	 */
	struct UAbandonedNoteWeightedTextSourceComponent_OnRep_ClueText_Params
	{	};

	/**
	 * Function Mysteries.SirenPuzzleContext.Unlock
	 */
	struct ASirenPuzzleContext_Unlock_Params
	{
	public:
		struct FGuid                                               LockId;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FGuid                                               CrewId;                                                  // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mysteries.SirenPuzzleContext.ResetUnlock
	 */
	struct ASirenPuzzleContext_ResetUnlock_Params
	{	};

	/**
	 * Function Mysteries.SirenPuzzleContext.OnRep_LockStates
	 */
	struct ASirenPuzzleContext_OnRep_LockStates_Params
	{
	public:
		TArray<unsigned char>                                      OldStates;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function Mysteries.SirenPuzzleContext.DeactivateLock
	 */
	struct ASirenPuzzleContext_DeactivateLock_Params
	{
	public:
		struct FGuid                                               LockId;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mysteries.SirenPuzzleContext.ActivateLock
	 */
	struct ASirenPuzzleContext_ActivateLock_Params
	{
	public:
		struct FGuid                                               LockId;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
