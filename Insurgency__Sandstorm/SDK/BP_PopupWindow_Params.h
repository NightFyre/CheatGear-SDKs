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
	 * Function BP_PopupWindow.BP_PopupWindow_C.UpdateTitleText
	 */
	struct UBP_PopupWindow_C_UpdateTitleText_Params
	{
	public:
		class FText                                                newText;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_PopupWindow.BP_PopupWindow_C.OnKeyDown
	 */
	struct UBP_PopupWindow_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_PopupWindow.BP_PopupWindow_C.PreConstruct
	 */
	struct UBP_PopupWindow_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PopupWindow.BP_PopupWindow_C.BndEvt__BP_ImageButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UBP_PopupWindow_C_BndEvt__BP_ImageButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BP_PopupWindow.BP_PopupWindow_C.ExecuteUbergraph_BP_PopupWindow
	 */
	struct UBP_PopupWindow_C_ExecuteUbergraph_BP_PopupWindow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PopupWindow.BP_PopupWindow_C.OnClose__DelegateSignature
	 */
	struct UBP_PopupWindow_C_OnClose__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
