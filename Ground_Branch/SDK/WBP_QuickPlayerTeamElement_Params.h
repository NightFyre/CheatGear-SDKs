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
	 * Function WBP_QuickPlayerTeamElement.WBP_QuickPlayerTeamElement_C.GetToolTipWidget_1
	 */
	struct UWBP_QuickPlayerTeamElement_C_GetToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_QuickPlayerTeamElement.WBP_QuickPlayerTeamElement_C.OnGetMenuContent_1
	 */
	struct UWBP_QuickPlayerTeamElement_C_OnGetMenuContent_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_QuickPlayerTeamElement.WBP_QuickPlayerTeamElement_C.Construct
	 */
	struct UWBP_QuickPlayerTeamElement_C_Construct_Params
	{	};

	/**
	 * Function WBP_QuickPlayerTeamElement.WBP_QuickPlayerTeamElement_C.BndEvt__Button_Combo_K2Node_ComponentBoundEvent_584_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_QuickPlayerTeamElement_C_BndEvt__Button_Combo_K2Node_ComponentBoundEvent_584_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_QuickPlayerTeamElement.WBP_QuickPlayerTeamElement_C.SetupContent
	 */
	struct UWBP_QuickPlayerTeamElement_C_SetupContent_Params
	{
	public:
		class UWBP_ComboBox_Content_C*                             MenuDropdownContent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_QuickPlayerTeamElement.WBP_QuickPlayerTeamElement_C.OnIndexChanged_Event
	 */
	struct UWBP_QuickPlayerTeamElement_C_OnIndexChanged_Event_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_QuickPlayerTeamElement.WBP_QuickPlayerTeamElement_C.BndEvt__MenuAnchor_Content_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature
	 */
	struct UWBP_QuickPlayerTeamElement_C_BndEvt__MenuAnchor_Content_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature_Params
	{
	public:
		bool                                                       bIsOpen;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_QuickPlayerTeamElement.WBP_QuickPlayerTeamElement_C.OnTeamElementChanged_Event_1
	 */
	struct UWBP_QuickPlayerTeamElement_C_OnTeamElementChanged_Event_1_Params
	{
	public:
		class AGBPlayerState*                                      PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_QuickPlayerTeamElement.WBP_QuickPlayerTeamElement_C.ExecuteUbergraph_WBP_QuickPlayerTeamElement
	 */
	struct UWBP_QuickPlayerTeamElement_C_ExecuteUbergraph_WBP_QuickPlayerTeamElement_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TJ44[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
