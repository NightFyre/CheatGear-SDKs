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
	 * Function BP_MessageOfTheDay.BP_MessageOfTheDay_C.OnRestrictionDialogClosed
	 */
	struct UBP_MessageOfTheDay_C_OnRestrictionDialogClosed_Params
	{	};

	/**
	 * Function BP_MessageOfTheDay.BP_MessageOfTheDay_C.ReactOnPrivilageResult
	 */
	struct UBP_MessageOfTheDay_C_ReactOnPrivilageResult_Params
	{
	public:
		EUserPrivilegeResult                                       Privilege_Result;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PNTD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MessageOfTheDay.BP_MessageOfTheDay_C.CheckUserPrivileges
	 */
	struct UBP_MessageOfTheDay_C_CheckUserPrivileges_Params
	{	};

	/**
	 * Function BP_MessageOfTheDay.BP_MessageOfTheDay_C.Set Navigation
	 */
	struct UBP_MessageOfTheDay_C_Set_Navigation_Params
	{	};

	/**
	 * Function BP_MessageOfTheDay.BP_MessageOfTheDay_C.OnAnalogValueChanged
	 */
	struct UBP_MessageOfTheDay_C_OnAnalogValueChanged_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FAnalogInputEvent                                   InAnalogInputEvent;                                      // 0x0038(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MessageOfTheDay.BP_MessageOfTheDay_C.SetUpdateInfo
	 */
	struct UBP_MessageOfTheDay_C_SetUpdateInfo_Params
	{
	public:
		struct FMotdUpdateMessage                                  NewUpdateMessage;                                        // 0x0000(0x0068)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_MessageOfTheDay.BP_MessageOfTheDay_C.InitDefaultUpdateInfo
	 */
	struct UBP_MessageOfTheDay_C_InitDefaultUpdateInfo_Params
	{	};

	/**
	 * Function BP_MessageOfTheDay.BP_MessageOfTheDay_C.OnMotdReceived_895ACECF4668C5074215349445AF6748
	 */
	struct UBP_MessageOfTheDay_C_OnMotdReceived_895ACECF4668C5074215349445AF6748_Params
	{
	public:
		struct FMotdData                                           Motd;                                                    // 0x0000(0x0168)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_MessageOfTheDay.BP_MessageOfTheDay_C.BndEvt__MotdLinkButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
	 */
	struct UBP_MessageOfTheDay_C_BndEvt__MotdLinkButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MessageOfTheDay.BP_MessageOfTheDay_C.BndEvt__ReviewButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_MessageOfTheDay_C_BndEvt__ReviewButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MessageOfTheDay.BP_MessageOfTheDay_C.BndEvt__CallToActionButton_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature
	 */
	struct UBP_MessageOfTheDay_C_BndEvt__CallToActionButton_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MessageOfTheDay.BP_MessageOfTheDay_C.OnPlatformConnectionStatusChangedDelegate_Event
	 */
	struct UBP_MessageOfTheDay_C_OnPlatformConnectionStatusChangedDelegate_Event_Params
	{
	public:
		bool                                                       bConnected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MessageOfTheDay.BP_MessageOfTheDay_C.Destruct
	 */
	struct UBP_MessageOfTheDay_C_Destruct_Params
	{	};

	/**
	 * Function BP_MessageOfTheDay.BP_MessageOfTheDay_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_MessageOfTheDay_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MessageOfTheDay.BP_MessageOfTheDay_C.Construct
	 */
	struct UBP_MessageOfTheDay_C_Construct_Params
	{	};

	/**
	 * Function BP_MessageOfTheDay.BP_MessageOfTheDay_C.DisplayRestrictionDialog
	 */
	struct UBP_MessageOfTheDay_C_DisplayRestrictionDialog_Params
	{
	public:
		EUserPrivilegeResult                                       PrivilageRestriction;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MessageOfTheDay.BP_MessageOfTheDay_C.ExecuteUbergraph_BP_MessageOfTheDay
	 */
	struct UBP_MessageOfTheDay_C_ExecuteUbergraph_BP_MessageOfTheDay_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_V6SP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
