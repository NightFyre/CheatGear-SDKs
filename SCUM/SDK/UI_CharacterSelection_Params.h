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
	 * Function UI_CharacterSelection.UI_CharacterSelection_C.OnPreviewKeyDown
	 */
	struct UUI_CharacterSelection_C_OnPreviewKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__CreateButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature
	 */
	struct UUI_CharacterSelection_C_BndEvt__CreateButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature
	 */
	struct UUI_CharacterSelection_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__SelectButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
	 */
	struct UUI_CharacterSelection_C_BndEvt__SelectButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CharacterSelection.UI_CharacterSelection_C.Construct
	 */
	struct UUI_CharacterSelection_C_Construct_Params
	{	};

	/**
	 * Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__CriminalRecord_K2Node_ComponentBoundEvent_21_OnOkClicked__DelegateSignature
	 */
	struct UUI_CharacterSelection_C_BndEvt__CriminalRecord_K2Node_ComponentBoundEvent_21_OnOkClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__CriminalRecord_K2Node_ComponentBoundEvent_29_OnCancelClicked__DelegateSignature
	 */
	struct UUI_CharacterSelection_C_BndEvt__CriminalRecord_K2Node_ComponentBoundEvent_29_OnCancelClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__UI_YesNoMenuConfirmation_188_K2Node_ComponentBoundEvent_102_YesClicked__DelegateSignature
	 */
	struct UUI_CharacterSelection_C_BndEvt__UI_YesNoMenuConfirmation_188_K2Node_ComponentBoundEvent_102_YesClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__UI_YesNoMenuConfirmation_188_K2Node_ComponentBoundEvent_114_NoClicked__DelegateSignature
	 */
	struct UUI_CharacterSelection_C_BndEvt__UI_YesNoMenuConfirmation_188_K2Node_ComponentBoundEvent_114_NoClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CharacterSelection.UI_CharacterSelection_C.OnESC
	 */
	struct UUI_CharacterSelection_C_OnESC_Params
	{	};

	/**
	 * Function UI_CharacterSelection.UI_CharacterSelection_C.CancelCriminalRecord
	 */
	struct UUI_CharacterSelection_C_CancelCriminalRecord_Params
	{	};

	/**
	 * Function UI_CharacterSelection.UI_CharacterSelection_C.CancelDeleteCharacter
	 */
	struct UUI_CharacterSelection_C_CancelDeleteCharacter_Params
	{	};

	/**
	 * Function UI_CharacterSelection.UI_CharacterSelection_C.Back
	 */
	struct UUI_CharacterSelection_C_Back_Params
	{	};

	/**
	 * Function UI_CharacterSelection.UI_CharacterSelection_C.OnCharacterDeleted
	 */
	struct UUI_CharacterSelection_C_OnCharacterDeleted_Params
	{
	public:
		class UUI_CharacterSlot_C*                                 Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CharacterSelection.UI_CharacterSelection_C.OnCharacterSelected
	 */
	struct UUI_CharacterSelection_C_OnCharacterSelected_Params
	{
	public:
		class UUserProfile*                                        UserProfile;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CharacterSelection.UI_CharacterSelection_C.ExecuteUbergraph_UI_CharacterSelection
	 */
	struct UUI_CharacterSelection_C_ExecuteUbergraph_UI_CharacterSelection_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_G6N4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
