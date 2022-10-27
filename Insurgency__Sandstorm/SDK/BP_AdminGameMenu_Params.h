#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * Function BP_AdminGameMenu.BP_AdminGameMenu_C.GetPlayers
	 */
	struct UBP_AdminGameMenu_C_GetPlayers_Params
	{
	public:
		class FString                                              CSV_Players;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AdminGameMenu.BP_AdminGameMenu_C.BndEvt__RestartRoundButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
	 */
	struct UBP_AdminGameMenu_C_BndEvt__RestartRoundButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature_Params
	{	};

	/**
	 * Function BP_AdminGameMenu.BP_AdminGameMenu_C.BndEvt__SwapTeamsButton_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
	 */
	struct UBP_AdminGameMenu_C_BndEvt__SwapTeamsButton_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature_Params
	{	};

	/**
	 * Function BP_AdminGameMenu.BP_AdminGameMenu_C.BndEvt__EndGameButton_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature
	 */
	struct UBP_AdminGameMenu_C_BndEvt__EndGameButton_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature_Params
	{	};

	/**
	 * Function BP_AdminGameMenu.BP_AdminGameMenu_C.BndEvt__RestartLevel_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature
	 */
	struct UBP_AdminGameMenu_C_BndEvt__RestartLevel_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature_Params
	{	};

	/**
	 * Function BP_AdminGameMenu.BP_AdminGameMenu_C.BndEvt__CopyPlayers_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature
	 */
	struct UBP_AdminGameMenu_C_BndEvt__CopyPlayers_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature_Params
	{	};

	/**
	 * Function BP_AdminGameMenu.BP_AdminGameMenu_C.ExecuteUbergraph_BP_AdminGameMenu
	 */
	struct UBP_AdminGameMenu_C_ExecuteUbergraph_BP_AdminGameMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3MKE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
