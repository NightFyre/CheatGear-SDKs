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
	 * Function WBP_DeathOptions.WBP_DeathOptions_C.Get_Button_ReadyRoom_ToolTipText_1
	 */
	struct UWBP_DeathOptions_C_Get_Button_ReadyRoom_ToolTipText_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_DeathOptions.WBP_DeathOptions_C.Get_Button_Spectate_ToolTipText_1
	 */
	struct UWBP_DeathOptions_C_Get_Button_Spectate_ToolTipText_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_DeathOptions.WBP_DeathOptions_C.Get Button Respawn Tool Tip Text 0
	 */
	struct UWBP_DeathOptions_C_Get_Button_Respawn_Tool_Tip_Text_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_DeathOptions.WBP_DeathOptions_C.AnyLiving
	 */
	struct UWBP_DeathOptions_C_AnyLiving_Params
	{
	public:
		TArray<class AGBPlayerState*>                              Array;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       bOutSomeoneIsAlive;                                      // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_DeathOptions.WBP_DeathOptions_C.Get_TextBlock_Respawn_ColorAndOpacity_1
	 */
	struct UWBP_DeathOptions_C_Get_TextBlock_Respawn_ColorAndOpacity_1_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_DeathOptions.WBP_DeathOptions_C.GetRespawnIsEnabled
	 */
	struct UWBP_DeathOptions_C_GetRespawnIsEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IAE0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_DeathOptions.WBP_DeathOptions_C.GetRespawnText
	 */
	struct UWBP_DeathOptions_C_GetRespawnText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_DeathOptions.WBP_DeathOptions_C.GetRespawnVisibility
	 */
	struct UWBP_DeathOptions_C_GetRespawnVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TGGW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_DeathOptions.WBP_DeathOptions_C.Construct
	 */
	struct UWBP_DeathOptions_C_Construct_Params
	{	};

	/**
	 * Function WBP_DeathOptions.WBP_DeathOptions_C.BndEvt__Button_Respawn_K2Node_ComponentBoundEvent_1012_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_DeathOptions_C_BndEvt__Button_Respawn_K2Node_ComponentBoundEvent_1012_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_DeathOptions.WBP_DeathOptions_C.BndEvt__Button_Spectate_K2Node_ComponentBoundEvent_690_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_DeathOptions_C_BndEvt__Button_Spectate_K2Node_ComponentBoundEvent_690_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_DeathOptions.WBP_DeathOptions_C.BndEvt__Button_ReadyRoom_K2Node_ComponentBoundEvent_710_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_DeathOptions_C_BndEvt__Button_ReadyRoom_K2Node_ComponentBoundEvent_710_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_DeathOptions.WBP_DeathOptions_C.Close
	 */
	struct UWBP_DeathOptions_C_Close_Params
	{	};

	/**
	 * Function WBP_DeathOptions.WBP_DeathOptions_C.ValidateRespawnButton
	 */
	struct UWBP_DeathOptions_C_ValidateRespawnButton_Params
	{	};

	/**
	 * Function WBP_DeathOptions.WBP_DeathOptions_C.ValidateReadyRoomButton
	 */
	struct UWBP_DeathOptions_C_ValidateReadyRoomButton_Params
	{	};

	/**
	 * Function WBP_DeathOptions.WBP_DeathOptions_C.ValidateSpectateButton
	 */
	struct UWBP_DeathOptions_C_ValidateSpectateButton_Params
	{	};

	/**
	 * Function WBP_DeathOptions.WBP_DeathOptions_C.BindToPlayerControllerState
	 */
	struct UWBP_DeathOptions_C_BindToPlayerControllerState_Params
	{	};

	/**
	 * Function WBP_DeathOptions.WBP_DeathOptions_C.OnPlayerControllerStateChanged_Event_1
	 */
	struct UWBP_DeathOptions_C_OnPlayerControllerStateChanged_Event_1_Params
	{
	public:
		class FName                                                OldState;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                NewState;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_DeathOptions.WBP_DeathOptions_C.EnableTooltips
	 */
	struct UWBP_DeathOptions_C_EnableTooltips_Params
	{	};

	/**
	 * Function WBP_DeathOptions.WBP_DeathOptions_C.ExecuteUbergraph_WBP_DeathOptions
	 */
	struct UWBP_DeathOptions_C_ExecuteUbergraph_WBP_DeathOptions_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UOQF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
