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
	 * Function UI_CraftingPanel.UI_CraftingPanel_C.On_SearchBarBackground_MouseButtonDown_1
	 */
	struct UUI_CraftingPanel_C_On_SearchBarBackground_MouseButtonDown_1_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_CraftingPanel.UI_CraftingPanel_C.GetbIsEnabled_1
	 */
	struct UUI_CraftingPanel_C_GetbIsEnabled_1_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_351K[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_CraftingPanel.UI_CraftingPanel_C.GetIsCraftButtonEnabled
	 */
	struct UUI_CraftingPanel_C_GetIsCraftButtonEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CraftingPanel.UI_CraftingPanel_C.UpdateParameter
	 */
	struct UUI_CraftingPanel_C_UpdateParameter_Params
	{
	public:
		class URetainerBox*                                        RetainerBox;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             Box;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CraftingPanel.UI_CraftingPanel_C.BndEvt__CraftButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 */
	struct UUI_CraftingPanel_C_BndEvt__CraftButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CraftingPanel.UI_CraftingPanel_C.BndEvt__CraftButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UUI_CraftingPanel_C_BndEvt__CraftButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CraftingPanel.UI_CraftingPanel_C.BndEvt__SearchBar_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature
	 */
	struct UUI_CraftingPanel_C_BndEvt__SearchBar_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_CraftingPanel.UI_CraftingPanel_C.ExecuteUbergraph_UI_CraftingPanel
	 */
	struct UUI_CraftingPanel_C_ExecuteUbergraph_UI_CraftingPanel_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TEWQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
