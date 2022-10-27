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
	 * Function SpireFramework.HeightTriggerableEffectsComponent.SetMovementDirection
	 */
	struct UHeightTriggerableEffectsComponent_SetMovementDirection_Params
	{
	public:
		EDirectionOfMovement                                       InMovement;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SpireFramework.SpireService.OnRep_SpireLevels
	 */
	struct ASpireService_OnRep_SpireLevels_Params
	{
	public:
		TArray<struct FSpireInfo>                                  InPreviousSpireLevels;                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function SpireFramework.TaleSpireService.RegisterResetMechanismInterface
	 */
	struct UTaleSpireService_RegisterResetMechanismInterface_Params
	{
	public:
		class AActor*                                              InMechanismResetInterface;                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SpireFramework.TaleSpireService.IsSpireVisible
	 */
	struct UTaleSpireService_IsSpireVisible_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
