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
	 * Function UI_ChangeTextWidget.UI_ChangeTextWidget_C.OnPreviewKeyDown
	 */
	struct UUI_ChangeTextWidget_C_OnPreviewKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_ChangeTextWidget.UI_ChangeTextWidget_C.Construct
	 */
	struct UUI_ChangeTextWidget_C_Construct_Params
	{	};

	/**
	 * Function UI_ChangeTextWidget.UI_ChangeTextWidget_C.BndEvt__InputText_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature
	 */
	struct UUI_ChangeTextWidget_C_BndEvt__InputText_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ChangeTextWidget.UI_ChangeTextWidget_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_ChangeTextWidget_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_ChangeTextWidget.UI_ChangeTextWidget_C.SetCurrentInputText_BP
	 */
	struct UUI_ChangeTextWidget_C_SetCurrentInputText_BP_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_ChangeTextWidget.UI_ChangeTextWidget_C.BndEvt__InputText_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature
	 */
	struct UUI_ChangeTextWidget_C_BndEvt__InputText_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_ChangeTextWidget.UI_ChangeTextWidget_C.SetMaxNumberOfCharacters
	 */
	struct UUI_ChangeTextWidget_C_SetMaxNumberOfCharacters_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ChangeTextWidget.UI_ChangeTextWidget_C.ExecuteUbergraph_UI_ChangeTextWidget
	 */
	struct UUI_ChangeTextWidget_C_ExecuteUbergraph_UI_ChangeTextWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
