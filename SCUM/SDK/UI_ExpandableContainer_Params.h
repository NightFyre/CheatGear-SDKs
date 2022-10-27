#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * Function UI_ExpandableContainer.UI_ExpandableContainer_C.SetParentContainer
	 */
	struct UUI_ExpandableContainer_C_SetParentContainer_Params
	{
	public:
		class UUI_ExpandableContainer_C*                           container;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ExpandableContainer.UI_ExpandableContainer_C.DisableAlarm
	 */
	struct UUI_ExpandableContainer_C_DisableAlarm_Params
	{	};

	/**
	 * Function UI_ExpandableContainer.UI_ExpandableContainer_C.EnableAlarm
	 */
	struct UUI_ExpandableContainer_C_EnableAlarm_Params
	{	};

	/**
	 * Function UI_ExpandableContainer.UI_ExpandableContainer_C.CheckAlarm
	 */
	struct UUI_ExpandableContainer_C_CheckAlarm_Params
	{	};

	/**
	 * Function UI_ExpandableContainer.UI_ExpandableContainer_C.DecrementAlarmsCount
	 */
	struct UUI_ExpandableContainer_C_DecrementAlarmsCount_Params
	{	};

	/**
	 * Function UI_ExpandableContainer.UI_ExpandableContainer_C.IncrementAlarmsCount
	 */
	struct UUI_ExpandableContainer_C_IncrementAlarmsCount_Params
	{	};

	/**
	 * Function UI_ExpandableContainer.UI_ExpandableContainer_C.Minimize
	 */
	struct UUI_ExpandableContainer_C_Minimize_Params
	{	};

	/**
	 * Function UI_ExpandableContainer.UI_ExpandableContainer_C.Maximize
	 */
	struct UUI_ExpandableContainer_C_Maximize_Params
	{	};

	/**
	 * Function UI_ExpandableContainer.UI_ExpandableContainer_C.Construct
	 */
	struct UUI_ExpandableContainer_C_Construct_Params
	{	};

	/**
	 * Function UI_ExpandableContainer.UI_ExpandableContainer_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_ExpandableContainer_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_ExpandableContainer.UI_ExpandableContainer_C.OnSynchronizeProperties_2
	 */
	struct UUI_ExpandableContainer_C_OnSynchronizeProperties_2_Params
	{	};

	/**
	 * Function UI_ExpandableContainer.UI_ExpandableContainer_C.ExecuteUbergraph_UI_ExpandableContainer
	 */
	struct UUI_ExpandableContainer_C_ExecuteUbergraph_UI_ExpandableContainer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3GAM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_ExpandableContainer.UI_ExpandableContainer_C.OnExpandChanged__DelegateSignature
	 */
	struct UUI_ExpandableContainer_C_OnExpandChanged__DelegateSignature_Params
	{
	public:
		class UUI_ExpandableContainer_C*                           container;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       isMinimized;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
