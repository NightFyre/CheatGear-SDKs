#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * Function WBP_SpectatorButton_EnemyBlips.WBP_SpectatorButton_EnemyBlips_C.GetEnemyBlipText
	 */
	struct UWBP_SpectatorButton_EnemyBlips_C_GetEnemyBlipText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_SpectatorButton_EnemyBlips.WBP_SpectatorButton_EnemyBlips_C.BndEvt__Button_Respawn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_SpectatorButton_EnemyBlips_C_BndEvt__Button_Respawn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_SpectatorButton_EnemyBlips.WBP_SpectatorButton_EnemyBlips_C.Construct
	 */
	struct UWBP_SpectatorButton_EnemyBlips_C_Construct_Params
	{	};

	/**
	 * Function WBP_SpectatorButton_EnemyBlips.WBP_SpectatorButton_EnemyBlips_C.OnUpdate_Event_1
	 */
	struct UWBP_SpectatorButton_EnemyBlips_C_OnUpdate_Event_1_Params
	{
	public:
		class UWBP_Spectator_Overlay_C*                            SpectatorOverlay;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_SpectatorButton_EnemyBlips.WBP_SpectatorButton_EnemyBlips_C.ExecuteUbergraph_WBP_SpectatorButton_EnemyBlips
	 */
	struct UWBP_SpectatorButton_EnemyBlips_C_ExecuteUbergraph_WBP_SpectatorButton_EnemyBlips_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
