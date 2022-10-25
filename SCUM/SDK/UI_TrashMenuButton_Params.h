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
	 * Function UI_TrashMenuButton.UI_TrashMenuButton_C.SetText
	 */
	struct UUI_TrashMenuButton_C_SetText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_TrashMenuButton.UI_TrashMenuButton_C.SetFontSize
	 */
	struct UUI_TrashMenuButton_C_SetFontSize_Params
	{
	public:
		int32_t                                                    FontSize;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NP9V[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_TrashMenuButton.UI_TrashMenuButton_C.OnMouseEnter
	 */
	struct UUI_TrashMenuButton_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_TrashMenuButton.UI_TrashMenuButton_C.OnMouseLeave
	 */
	struct UUI_TrashMenuButton_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_TrashMenuButton.UI_TrashMenuButton_C.OnSynchronizeProperties
	 */
	struct UUI_TrashMenuButton_C_OnSynchronizeProperties_Params
	{	};

	/**
	 * Function UI_TrashMenuButton.UI_TrashMenuButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_TrashMenuButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_TrashMenuButton.UI_TrashMenuButton_C.Construct
	 */
	struct UUI_TrashMenuButton_C_Construct_Params
	{	};

	/**
	 * Function UI_TrashMenuButton.UI_TrashMenuButton_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_TrashMenuButton_C_BndEvt__MainButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_TrashMenuButton.UI_TrashMenuButton_C.ExecuteUbergraph_UI_TrashMenuButton
	 */
	struct UUI_TrashMenuButton_C_ExecuteUbergraph_UI_TrashMenuButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_W30E[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_TrashMenuButton.UI_TrashMenuButton_C.OnClicked__DelegateSignature
	 */
	struct UUI_TrashMenuButton_C_OnClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
