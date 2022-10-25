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
	 * Function UI_CharacterCreationPanel.UI_CharacterCreationPanel_C.PlayPrisonerEnteringSequence
	 */
	struct UUI_CharacterCreationPanel_C_PlayPrisonerEnteringSequence_Params
	{
	public:
		bool                                                       backwards;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8IJM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_CharacterCreationPanel.UI_CharacterCreationPanel_C.BndEvt__UI_CriminalRecord_K2Node_ComponentBoundEvent_1199_OnOkClicked__DelegateSignature
	 */
	struct UUI_CharacterCreationPanel_C_BndEvt__UI_CriminalRecord_K2Node_ComponentBoundEvent_1199_OnOkClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CharacterCreationPanel.UI_CharacterCreationPanel_C.BndEvt__UI_CriminalRecord_K2Node_ComponentBoundEvent_1260_OnCancelClicked__DelegateSignature
	 */
	struct UUI_CharacterCreationPanel_C_BndEvt__UI_CriminalRecord_K2Node_ComponentBoundEvent_1260_OnCancelClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CharacterCreationPanel.UI_CharacterCreationPanel_C.ShowErrorDialog
	 */
	struct UUI_CharacterCreationPanel_C_ShowErrorDialog_Params
	{
	public:
		class FText                                                Message;                                                 // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_CharacterCreationPanel.UI_CharacterCreationPanel_C.OnUserProfileCreated
	 */
	struct UUI_CharacterCreationPanel_C_OnUserProfileCreated_Params
	{	};

	/**
	 * Function UI_CharacterCreationPanel.UI_CharacterCreationPanel_C.ShowCriminalRecord
	 */
	struct UUI_CharacterCreationPanel_C_ShowCriminalRecord_Params
	{
	public:
		struct FCharacterTemplate                                  CharacterTemplate;                                       // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FText                                                Mass;                                                    // 0x0088(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_CharacterCreationPanel.UI_CharacterCreationPanel_C.ExecuteUbergraph_UI_CharacterCreationPanel
	 */
	struct UUI_CharacterCreationPanel_C_ExecuteUbergraph_UI_CharacterCreationPanel_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
