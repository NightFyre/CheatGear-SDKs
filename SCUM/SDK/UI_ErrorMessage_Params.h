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
	 * Function UI_ErrorMessage.UI_ErrorMessage_C.BndEvt__OkButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
	 */
	struct UUI_ErrorMessage_C_BndEvt__OkButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_ErrorMessage.UI_ErrorMessage_C.Init
	 */
	struct UUI_ErrorMessage_C_Init_Params
	{
	public:
		class FText                                                Message;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UCanvasPanel*                                        Canvas;                                                  // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             widgetToDisable;                                         // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ErrorMessage.UI_ErrorMessage_C.OnDismissed
	 */
	struct UUI_ErrorMessage_C_OnDismissed_Params
	{	};

	/**
	 * Function UI_ErrorMessage.UI_ErrorMessage_C.ExecuteUbergraph_UI_ErrorMessage
	 */
	struct UUI_ErrorMessage_C_ExecuteUbergraph_UI_ErrorMessage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ErrorMessage.UI_ErrorMessage_C.Dismissed__DelegateSignature
	 */
	struct UUI_ErrorMessage_C_Dismissed__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
