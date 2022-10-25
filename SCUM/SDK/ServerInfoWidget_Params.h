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
	 * Function ServerInfoWidget.ServerInfoWidget_C.SetValid
	 */
	struct UServerInfoWidget_C_SetValid_Params
	{
	public:
		bool                                                       Valid;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ServerInfoWidget.ServerInfoWidget_C.Connect
	 */
	struct UServerInfoWidget_C_Connect_Params
	{
	public:
		class FString                                              password;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function ServerInfoWidget.ServerInfoWidget_C.SetColor
	 */
	struct UServerInfoWidget_C_SetColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ServerInfoWidget.ServerInfoWidget_C.UpdateFromServerInfo
	 */
	struct UServerInfoWidget_C_UpdateFromServerInfo_Params
	{
	public:
		struct FServerInfo                                         ServerInfo;                                              // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ServerInfoWidget.ServerInfoWidget_C.OnSynchronizeProperties
	 */
	struct UServerInfoWidget_C_OnSynchronizeProperties_Params
	{	};

	/**
	 * Function ServerInfoWidget.ServerInfoWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	 */
	struct UServerInfoWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ServerInfoWidget.ServerInfoWidget_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature
	 */
	struct UServerInfoWidget_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ServerInfoWidget.ServerInfoWidget_C.Construct
	 */
	struct UServerInfoWidget_C_Construct_Params
	{	};

	/**
	 * Function ServerInfoWidget.ServerInfoWidget_C.ExecuteUbergraph_ServerInfoWidget
	 */
	struct UServerInfoWidget_C_ExecuteUbergraph_ServerInfoWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ServerInfoWidget.ServerInfoWidget_C.OnRemoved__DelegateSignature
	 */
	struct UServerInfoWidget_C_OnRemoved__DelegateSignature_Params
	{
	public:
		struct FServerInfo                                         Info;                                                    // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ServerInfoWidget.ServerInfoWidget_C.OnDoubleClicked__DelegateSignature
	 */
	struct UServerInfoWidget_C_OnDoubleClicked__DelegateSignature_Params
	{
	public:
		class UServerInfoWidget_C*                                 ServerInfoWidget;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ServerInfoWidget.ServerInfoWidget_C.OnClicked__DelegateSignature
	 */
	struct UServerInfoWidget_C_OnClicked__DelegateSignature_Params
	{
	public:
		class UServerInfoWidget_C*                                 ServerInfoWidget;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
