#pragma once

/**
 * Name: Marauders
 * Version: 642675-attempt2
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
	 * Function Door_BlowTorch.Door_BlowTorch_C.Door_OpenClose01__FinishedFunc
	 */
	struct ADoor_BlowTorch_C_Door_OpenClose01__FinishedFunc_Params
	{	};

	/**
	 * Function Door_BlowTorch.Door_BlowTorch_C.Door_OpenClose01__UpdateFunc
	 */
	struct ADoor_BlowTorch_C_Door_OpenClose01__UpdateFunc_Params
	{	};

	/**
	 * Function Door_BlowTorch.Door_BlowTorch_C.Timeline_0__FinishedFunc
	 */
	struct ADoor_BlowTorch_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function Door_BlowTorch.Door_BlowTorch_C.Timeline_0__UpdateFunc
	 */
	struct ADoor_BlowTorch_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function Door_BlowTorch.Door_BlowTorch_C.Timeline_MidLock__FinishedFunc
	 */
	struct ADoor_BlowTorch_C_Timeline_MidLock__FinishedFunc_Params
	{	};

	/**
	 * Function Door_BlowTorch.Door_BlowTorch_C.Timeline_MidLock__UpdateFunc
	 */
	struct ADoor_BlowTorch_C_Timeline_MidLock__UpdateFunc_Params
	{	};

	/**
	 * Function Door_BlowTorch.Door_BlowTorch_C.Timeline_BotLock__FinishedFunc
	 */
	struct ADoor_BlowTorch_C_Timeline_BotLock__FinishedFunc_Params
	{	};

	/**
	 * Function Door_BlowTorch.Door_BlowTorch_C.Timeline_BotLock__UpdateFunc
	 */
	struct ADoor_BlowTorch_C_Timeline_BotLock__UpdateFunc_Params
	{	};

	/**
	 * Function Door_BlowTorch.Door_BlowTorch_C.Timeline_MainDoor__FinishedFunc
	 */
	struct ADoor_BlowTorch_C_Timeline_MainDoor__FinishedFunc_Params
	{	};

	/**
	 * Function Door_BlowTorch.Door_BlowTorch_C.Timeline_MainDoor__UpdateFunc
	 */
	struct ADoor_BlowTorch_C_Timeline_MainDoor__UpdateFunc_Params
	{	};

	/**
	 * Function Door_BlowTorch.Door_BlowTorch_C.Timeline_TopLatch_ScaleDown__FinishedFunc
	 */
	struct ADoor_BlowTorch_C_Timeline_TopLatch_ScaleDown__FinishedFunc_Params
	{	};

	/**
	 * Function Door_BlowTorch.Door_BlowTorch_C.Timeline_TopLatch_ScaleDown__UpdateFunc
	 */
	struct ADoor_BlowTorch_C_Timeline_TopLatch_ScaleDown__UpdateFunc_Params
	{	};

	/**
	 * Function Door_BlowTorch.Door_BlowTorch_C.Timeline_MidLatch_ScaleDown__FinishedFunc
	 */
	struct ADoor_BlowTorch_C_Timeline_MidLatch_ScaleDown__FinishedFunc_Params
	{	};

	/**
	 * Function Door_BlowTorch.Door_BlowTorch_C.Timeline_MidLatch_ScaleDown__UpdateFunc
	 */
	struct ADoor_BlowTorch_C_Timeline_MidLatch_ScaleDown__UpdateFunc_Params
	{	};

	/**
	 * Function Door_BlowTorch.Door_BlowTorch_C.Timeline_BotLatch_ScaleDown__FinishedFunc
	 */
	struct ADoor_BlowTorch_C_Timeline_BotLatch_ScaleDown__FinishedFunc_Params
	{	};

	/**
	 * Function Door_BlowTorch.Door_BlowTorch_C.Timeline_BotLatch_ScaleDown__UpdateFunc
	 */
	struct ADoor_BlowTorch_C_Timeline_BotLatch_ScaleDown__UpdateFunc_Params
	{	};

	/**
	 * Function Door_BlowTorch.Door_BlowTorch_C.ActiveCalled
	 */
	struct ADoor_BlowTorch_C_ActiveCalled_Params
	{	};

	/**
	 * Function Door_BlowTorch.Door_BlowTorch_C.DeActiveCalled
	 */
	struct ADoor_BlowTorch_C_DeActiveCalled_Params
	{	};

	/**
	 * Function Door_BlowTorch.Door_BlowTorch_C.OnUnlocked
	 */
	struct ADoor_BlowTorch_C_OnUnlocked_Params
	{	};

	/**
	 * Function Door_BlowTorch.Door_BlowTorch_C.LockDamaged
	 */
	struct ADoor_BlowTorch_C_LockDamaged_Params
	{
	public:
		class FName                                                LockName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      HealthPercent;                                           // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Door_BlowTorch.Door_BlowTorch_C.ReceiveBeginPlay
	 */
	struct ADoor_BlowTorch_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Door_BlowTorch.Door_BlowTorch_C.OnTriedToOpenButLocked
	 */
	struct ADoor_BlowTorch_C_OnTriedToOpenButLocked_Params
	{	};

	/**
	 * Function Door_BlowTorch.Door_BlowTorch_C.ExecuteUbergraph_Door_BlowTorch
	 */
	struct ADoor_BlowTorch_C_ExecuteUbergraph_Door_BlowTorch_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
