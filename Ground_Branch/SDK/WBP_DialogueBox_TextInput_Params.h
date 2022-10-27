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
	 * Function WBP_DialogueBox_TextInput.WBP_DialogueBox_TextInput_C.Get_Button_Password_Ok_bIsEnabled_1
	 */
	struct UWBP_DialogueBox_TextInput_C_Get_Button_Password_Ok_bIsEnabled_1_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6FL5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_DialogueBox_TextInput.WBP_DialogueBox_TextInput_C.BndEvt__Button_Password_Ok_K2Node_ComponentBoundEvent_883_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_DialogueBox_TextInput_C_BndEvt__Button_Password_Ok_K2Node_ComponentBoundEvent_883_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_DialogueBox_TextInput.WBP_DialogueBox_TextInput_C.BndEvt__Button_Password_Cancel_K2Node_ComponentBoundEvent_1107_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_DialogueBox_TextInput_C_BndEvt__Button_Password_Cancel_K2Node_ComponentBoundEvent_1107_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_DialogueBox_TextInput.WBP_DialogueBox_TextInput_C.BndEvt__EditableTextBox_FileName_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct UWBP_DialogueBox_TextInput_C_BndEvt__EditableTextBox_FileName_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_DialogueBox_TextInput.WBP_DialogueBox_TextInput_C.Construct
	 */
	struct UWBP_DialogueBox_TextInput_C_Construct_Params
	{	};

	/**
	 * Function WBP_DialogueBox_TextInput.WBP_DialogueBox_TextInput_C.Close
	 */
	struct UWBP_DialogueBox_TextInput_C_Close_Params
	{	};

	/**
	 * Function WBP_DialogueBox_TextInput.WBP_DialogueBox_TextInput_C.PreConstruct
	 */
	struct UWBP_DialogueBox_TextInput_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_DialogueBox_TextInput.WBP_DialogueBox_TextInput_C.ExecuteUbergraph_WBP_DialogueBox_TextInput
	 */
	struct UWBP_DialogueBox_TextInput_C_ExecuteUbergraph_WBP_DialogueBox_TextInput_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FBEL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_DialogueBox_TextInput.WBP_DialogueBox_TextInput_C.OnCancelClicked__DelegateSignature
	 */
	struct UWBP_DialogueBox_TextInput_C_OnCancelClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_DialogueBox_TextInput.WBP_DialogueBox_TextInput_C.OnOkClicked__DelegateSignature
	 */
	struct UWBP_DialogueBox_TextInput_C_OnOkClicked__DelegateSignature_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
