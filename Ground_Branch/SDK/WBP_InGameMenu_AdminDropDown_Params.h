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
	 * Function WBP_InGameMenu_AdminDropDown.WBP_InGameMenu_AdminDropDown_C.OnGetUserMenuContent_1
	 */
	struct UWBP_InGameMenu_AdminDropDown_C_OnGetUserMenuContent_1_Params
	{
	public:
		class UUserWidget*                                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InGameMenu_AdminDropDown.WBP_InGameMenu_AdminDropDown_C.GetToolTipWidget_1
	 */
	struct UWBP_InGameMenu_AdminDropDown_C_GetToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InGameMenu_AdminDropDown.WBP_InGameMenu_AdminDropDown_C.Construct
	 */
	struct UWBP_InGameMenu_AdminDropDown_C_Construct_Params
	{	};

	/**
	 * Function WBP_InGameMenu_AdminDropDown.WBP_InGameMenu_AdminDropDown_C.BndEvt__Button_Combo_K2Node_ComponentBoundEvent_584_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_InGameMenu_AdminDropDown_C_BndEvt__Button_Combo_K2Node_ComponentBoundEvent_584_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_InGameMenu_AdminDropDown.WBP_InGameMenu_AdminDropDown_C.SetupContent
	 */
	struct UWBP_InGameMenu_AdminDropDown_C_SetupContent_Params
	{
	public:
		class UWBP_ComboBox_Content_C*                             MenuDropdownContent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InGameMenu_AdminDropDown.WBP_InGameMenu_AdminDropDown_C.OnIndexChanged_Event
	 */
	struct UWBP_InGameMenu_AdminDropDown_C_OnIndexChanged_Event_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InGameMenu_AdminDropDown.WBP_InGameMenu_AdminDropDown_C.OnAdminRequestFilled_Event
	 */
	struct UWBP_InGameMenu_AdminDropDown_C_OnAdminRequestFilled_Event_Params
	{
	public:
		struct FZKReplicatedContent                                Content;                                                 // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_InGameMenu_AdminDropDown.WBP_InGameMenu_AdminDropDown_C.ExecuteUbergraph_WBP_InGameMenu_AdminDropDown
	 */
	struct UWBP_InGameMenu_AdminDropDown_C_ExecuteUbergraph_WBP_InGameMenu_AdminDropDown_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DQTB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
