#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * Function WBP_CharacterEditorScreen.WBP_CharacterEditorScreen_C.OnPreviewKeyDown
	 */
	struct UWBP_CharacterEditorScreen_C_OnPreviewKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_CharacterEditorScreen.WBP_CharacterEditorScreen_C.Setup
	 */
	struct UWBP_CharacterEditorScreen_C_Setup_Params
	{	};

	/**
	 * Function WBP_CharacterEditorScreen.WBP_CharacterEditorScreen_C.BndEvt__WBP_CharacterEditor_NEW_K2Node_ComponentBoundEvent_1_OkClicked__DelegateSignature
	 */
	struct UWBP_CharacterEditorScreen_C_BndEvt__WBP_CharacterEditor_NEW_K2Node_ComponentBoundEvent_1_OkClicked__DelegateSignature_Params
	{
	public:
		class UVaRestJsonObject*                                   JsonObj;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CharacterEditorScreen.WBP_CharacterEditorScreen_C.BndEvt__WBP_CharacterEditor_NEW_K2Node_ComponentBoundEvent_2_CancelClicked__DelegateSignature
	 */
	struct UWBP_CharacterEditorScreen_C_BndEvt__WBP_CharacterEditor_NEW_K2Node_ComponentBoundEvent_2_CancelClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_CharacterEditorScreen.WBP_CharacterEditorScreen_C.Close
	 */
	struct UWBP_CharacterEditorScreen_C_Close_Params
	{	};

	/**
	 * Function WBP_CharacterEditorScreen.WBP_CharacterEditorScreen_C.ExecuteUbergraph_WBP_CharacterEditorScreen
	 */
	struct UWBP_CharacterEditorScreen_C_ExecuteUbergraph_WBP_CharacterEditorScreen_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
