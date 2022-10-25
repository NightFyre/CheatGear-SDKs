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
	 * Function WBP_SpectatorButton_PlayerNamePlates.WBP_SpectatorButton_PlayerNamePlates_C.Get_TextBlock_1_Text_1
	 */
	struct UWBP_SpectatorButton_PlayerNamePlates_C_Get_TextBlock_1_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_SpectatorButton_PlayerNamePlates.WBP_SpectatorButton_PlayerNamePlates_C.BndEvt__Button_Respawn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_SpectatorButton_PlayerNamePlates_C_BndEvt__Button_Respawn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_SpectatorButton_PlayerNamePlates.WBP_SpectatorButton_PlayerNamePlates_C.Construct
	 */
	struct UWBP_SpectatorButton_PlayerNamePlates_C_Construct_Params
	{	};

	/**
	 * Function WBP_SpectatorButton_PlayerNamePlates.WBP_SpectatorButton_PlayerNamePlates_C.OnUpdate_Event_1
	 */
	struct UWBP_SpectatorButton_PlayerNamePlates_C_OnUpdate_Event_1_Params
	{
	public:
		class UWBP_Spectator_Overlay_C*                            SpectatorOverlay;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_SpectatorButton_PlayerNamePlates.WBP_SpectatorButton_PlayerNamePlates_C.ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates
	 */
	struct UWBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZZOS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
