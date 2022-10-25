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
	 * Function BP_AdminMenu.BP_AdminMenu_C.CloseMenu
	 */
	struct UBP_AdminMenu_C_CloseMenu_Params
	{	};

	/**
	 * Function BP_AdminMenu.BP_AdminMenu_C.OnKeyDown
	 */
	struct UBP_AdminMenu_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_AdminMenu.BP_AdminMenu_C.Construct
	 */
	struct UBP_AdminMenu_C_Construct_Params
	{	};

	/**
	 * Function BP_AdminMenu.BP_AdminMenu_C.BndEvt__BP_MenuTabs_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature
	 */
	struct UBP_AdminMenu_C_BndEvt__BP_MenuTabs_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AdminMenu.BP_AdminMenu_C.BndEvt__BP_PopupWindow_K2Node_ComponentBoundEvent_1_OnClose__DelegateSignature
	 */
	struct UBP_AdminMenu_C_BndEvt__BP_PopupWindow_K2Node_ComponentBoundEvent_1_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function BP_AdminMenu.BP_AdminMenu_C.ExecuteUbergraph_BP_AdminMenu
	 */
	struct UBP_AdminMenu_C_ExecuteUbergraph_BP_AdminMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
