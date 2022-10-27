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
	 * Function UI_ConfirmationBase.UI_ConfirmationBase_C.AddToCanvas
	 */
	struct UUI_ConfirmationBase_C_AddToCanvas_Params
	{
	public:
		class UCanvasPanel*                                        Canvas;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ConfirmationBase.UI_ConfirmationBase_C.OnNo
	 */
	struct UUI_ConfirmationBase_C_OnNo_Params
	{	};

	/**
	 * Function UI_ConfirmationBase.UI_ConfirmationBase_C.ExecuteUbergraph_UI_ConfirmationBase
	 */
	struct UUI_ConfirmationBase_C_ExecuteUbergraph_UI_ConfirmationBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ConfirmationBase.UI_ConfirmationBase_C.NoClicked__DelegateSignature
	 */
	struct UUI_ConfirmationBase_C_NoClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
