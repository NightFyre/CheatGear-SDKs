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
	 * Function HangarDoor_InLevel_ControlPannel_Widget.HangarDoor_InLevel_ControlPannel_Widget_C.Construct
	 */
	struct UHangarDoor_InLevel_ControlPannel_Widget_C_Construct_Params
	{	};

	/**
	 * Function HangarDoor_InLevel_ControlPannel_Widget.HangarDoor_InLevel_ControlPannel_Widget_C.ChangeHangarDoorUI_State
	 */
	struct UHangarDoor_InLevel_ControlPannel_Widget_C_ChangeHangarDoorUI_State_Params
	{
	public:
		E_HangarDoorStates                                         StateToUse;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OXSB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             LocationForSound;                                        // 0x0004(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HangarDoor_InLevel_ControlPannel_Widget.HangarDoor_InLevel_ControlPannel_Widget_C.TriggerDossStartup
	 */
	struct UHangarDoor_InLevel_ControlPannel_Widget_C_TriggerDossStartup_Params
	{	};

	/**
	 * Function HangarDoor_InLevel_ControlPannel_Widget.HangarDoor_InLevel_ControlPannel_Widget_C.ResetDosScreen
	 */
	struct UHangarDoor_InLevel_ControlPannel_Widget_C_ResetDosScreen_Params
	{	};

	/**
	 * Function HangarDoor_InLevel_ControlPannel_Widget.HangarDoor_InLevel_ControlPannel_Widget_C.ExecuteUbergraph_HangarDoor_InLevel_ControlPannel_Widget
	 */
	struct UHangarDoor_InLevel_ControlPannel_Widget_C_ExecuteUbergraph_HangarDoor_InLevel_ControlPannel_Widget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
