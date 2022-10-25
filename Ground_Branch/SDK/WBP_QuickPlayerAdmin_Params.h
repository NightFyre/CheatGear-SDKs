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
	 * Function WBP_QuickPlayerAdmin.WBP_QuickPlayerAdmin_C.On Get User Menu Content 0
	 */
	struct UWBP_QuickPlayerAdmin_C_On_Get_User_Menu_Content_Params
	{
	public:
		class UUserWidget*                                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_QuickPlayerAdmin.WBP_QuickPlayerAdmin_C.GetToolTipWidget_1
	 */
	struct UWBP_QuickPlayerAdmin_C_GetToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_QuickPlayerAdmin.WBP_QuickPlayerAdmin_C.OnGetMenuContent_1
	 */
	struct UWBP_QuickPlayerAdmin_C_OnGetMenuContent_1_Params
	{	};

	/**
	 * Function WBP_QuickPlayerAdmin.WBP_QuickPlayerAdmin_C.Construct
	 */
	struct UWBP_QuickPlayerAdmin_C_Construct_Params
	{	};

	/**
	 * Function WBP_QuickPlayerAdmin.WBP_QuickPlayerAdmin_C.BndEvt__Button_Combo_K2Node_ComponentBoundEvent_584_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_QuickPlayerAdmin_C_BndEvt__Button_Combo_K2Node_ComponentBoundEvent_584_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_QuickPlayerAdmin.WBP_QuickPlayerAdmin_C.SetupContent
	 */
	struct UWBP_QuickPlayerAdmin_C_SetupContent_Params
	{
	public:
		class UWBP_ComboBox_Content_C*                             MenuDropdownContent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_QuickPlayerAdmin.WBP_QuickPlayerAdmin_C.OnIndexChanged_Event
	 */
	struct UWBP_QuickPlayerAdmin_C_OnIndexChanged_Event_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_QuickPlayerAdmin.WBP_QuickPlayerAdmin_C.BndEvt__MenuAnchor_Content_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature
	 */
	struct UWBP_QuickPlayerAdmin_C_BndEvt__MenuAnchor_Content_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature_Params
	{
	public:
		bool                                                       bIsOpen;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_QuickPlayerAdmin.WBP_QuickPlayerAdmin_C.OnBanReason_Event
	 */
	struct UWBP_QuickPlayerAdmin_C_OnBanReason_Event_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_QuickPlayerAdmin.WBP_QuickPlayerAdmin_C.OnBanDuration_Event
	 */
	struct UWBP_QuickPlayerAdmin_C_OnBanDuration_Event_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_QuickPlayerAdmin.WBP_QuickPlayerAdmin_C.BanPlayer
	 */
	struct UWBP_QuickPlayerAdmin_C_BanPlayer_Params
	{	};

	/**
	 * Function WBP_QuickPlayerAdmin.WBP_QuickPlayerAdmin_C.KickPlayer
	 */
	struct UWBP_QuickPlayerAdmin_C_KickPlayer_Params
	{	};

	/**
	 * Function WBP_QuickPlayerAdmin.WBP_QuickPlayerAdmin_C.OnKickReason_Event
	 */
	struct UWBP_QuickPlayerAdmin_C_OnKickReason_Event_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_QuickPlayerAdmin.WBP_QuickPlayerAdmin_C.OnNoKickReason_Event
	 */
	struct UWBP_QuickPlayerAdmin_C_OnNoKickReason_Event_Params
	{
	public:
		class UWBP_DialogueBox_C*                                  Dialogue;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_QuickPlayerAdmin.WBP_QuickPlayerAdmin_C.ExecuteUbergraph_WBP_QuickPlayerAdmin
	 */
	struct UWBP_QuickPlayerAdmin_C_ExecuteUbergraph_WBP_QuickPlayerAdmin_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
