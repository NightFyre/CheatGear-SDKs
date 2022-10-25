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
	 * Function WBP_Settings_Manager.WBP_Settings_Manager_C.OnPreviewKeyDown
	 */
	struct UWBP_Settings_Manager_C_OnPreviewKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_Settings_Manager.WBP_Settings_Manager_C.Construct
	 */
	struct UWBP_Settings_Manager_C_Construct_Params
	{	};

	/**
	 * Function WBP_Settings_Manager.WBP_Settings_Manager_C.BndEvt__Button_NEWBack_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_Settings_Manager_C_BndEvt__Button_NEWBack_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Settings_Manager.WBP_Settings_Manager_C.Back
	 */
	struct UWBP_Settings_Manager_C_Back_Params
	{	};

	/**
	 * Function WBP_Settings_Manager.WBP_Settings_Manager_C.ExecuteUbergraph_WBP_Settings_Manager
	 */
	struct UWBP_Settings_Manager_C_ExecuteUbergraph_WBP_Settings_Manager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_N9PT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
