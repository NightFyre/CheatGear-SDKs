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
	 * Function UI_TeamInvitationWidget.UI_TeamInvitationWidget_C.Construct
	 */
	struct UUI_TeamInvitationWidget_C_Construct_Params
	{	};

	/**
	 * Function UI_TeamInvitationWidget.UI_TeamInvitationWidget_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_55_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_TeamInvitationWidget_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_55_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_TeamInvitationWidget.UI_TeamInvitationWidget_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_TeamInvitationWidget_C_BndEvt__DeclineButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_TeamInvitationWidget.UI_TeamInvitationWidget_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_59_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_TeamInvitationWidget_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_59_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_TeamInvitationWidget.UI_TeamInvitationWidget_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_72_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_TeamInvitationWidget_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_72_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_TeamInvitationWidget.UI_TeamInvitationWidget_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent_85_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_TeamInvitationWidget_C_BndEvt__DeclineButton_K2Node_ComponentBoundEvent_85_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_TeamInvitationWidget.UI_TeamInvitationWidget_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent_100_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_TeamInvitationWidget_C_BndEvt__DeclineButton_K2Node_ComponentBoundEvent_100_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_TeamInvitationWidget.UI_TeamInvitationWidget_C.BndEvt__Decline_K2Node_ComponentBoundEvent_44_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_TeamInvitationWidget_C_BndEvt__Decline_K2Node_ComponentBoundEvent_44_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_TeamInvitationWidget.UI_TeamInvitationWidget_C.BndEvt__Accept_K2Node_ComponentBoundEvent_67_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_TeamInvitationWidget_C_BndEvt__Accept_K2Node_ComponentBoundEvent_67_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_TeamInvitationWidget.UI_TeamInvitationWidget_C.StartTimer
	 */
	struct UUI_TeamInvitationWidget_C_StartTimer_Params
	{
	public:
		float                                                      Timeout;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_TeamInvitationWidget.UI_TeamInvitationWidget_C.Tick
	 */
	struct UUI_TeamInvitationWidget_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_TeamInvitationWidget.UI_TeamInvitationWidget_C.Timeout
	 */
	struct UUI_TeamInvitationWidget_C_Timeout_Params
	{	};

	/**
	 * Function UI_TeamInvitationWidget.UI_TeamInvitationWidget_C.ExecuteUbergraph_UI_TeamInvitationWidget
	 */
	struct UUI_TeamInvitationWidget_C_ExecuteUbergraph_UI_TeamInvitationWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_52KJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
