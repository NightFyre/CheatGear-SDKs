#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * Function BP_Torch.BP_Torch_C.Turnon0__FinishedFunc
	 */
	struct ABP_Torch_C_Turnon0__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Torch.BP_Torch_C.Turnon0__UpdateFunc
	 */
	struct ABP_Torch_C_Turnon0__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Torch.BP_Torch_C.Turnoff0__FinishedFunc
	 */
	struct ABP_Torch_C_Turnoff0__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Torch.BP_Torch_C.Turnoff0__UpdateFunc
	 */
	struct ABP_Torch_C_Turnoff0__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Torch.BP_Torch_C.Timeline_0__FinishedFunc
	 */
	struct ABP_Torch_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Torch.BP_Torch_C.Timeline_0__UpdateFunc
	 */
	struct ABP_Torch_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Torch.BP_Torch_C.Timeline_1__FinishedFunc
	 */
	struct ABP_Torch_C_Timeline_1__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Torch.BP_Torch_C.Timeline_1__UpdateFunc
	 */
	struct ABP_Torch_C_Timeline_1__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Torch.BP_Torch_C.GameplayTagUpdated
	 */
	struct ABP_Torch_C_GameplayTagUpdated_Params
	{
	public:
		struct FGameplayTag                                        InGameplayTag;                                           // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InCount;                                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Torch.BP_Torch_C.OnAttachedSheathSocket
	 */
	struct ABP_Torch_C_OnAttachedSheathSocket_Params
	{	};

	/**
	 * Function BP_Torch.BP_Torch_C.ExecuteUbergraph_BP_Torch
	 */
	struct ABP_Torch_C_ExecuteUbergraph_BP_Torch_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PHH6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
