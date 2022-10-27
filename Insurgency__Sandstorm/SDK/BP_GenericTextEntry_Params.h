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
	 * Function BP_GenericTextEntry.BP_GenericTextEntry_C.ShowVirtualKeyboard
	 */
	struct UBP_GenericTextEntry_C_ShowVirtualKeyboard_Params
	{
	public:
		bool                                                       bShow;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9YF0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    UserIndex;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GenericTextEntry.BP_GenericTextEntry_C.SetPasswordEntry
	 */
	struct UBP_GenericTextEntry_C_SetPasswordEntry_Params
	{
	public:
		bool                                                       bNewPasswordEntry;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GenericTextEntry.BP_GenericTextEntry_C.OnFocusReceived
	 */
	struct UBP_GenericTextEntry_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_GenericTextEntry.BP_GenericTextEntry_C.SetEnteredText
	 */
	struct UBP_GenericTextEntry_C_SetEnteredText_Params
	{
	public:
		class FText                                                newText;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_GenericTextEntry.BP_GenericTextEntry_C.GetEnteredText
	 */
	struct UBP_GenericTextEntry_C_GetEnteredText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_GenericTextEntry.BP_GenericTextEntry_C.PreConstruct
	 */
	struct UBP_GenericTextEntry_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GenericTextEntry.BP_GenericTextEntry_C.BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_59_OnEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct UBP_GenericTextEntry_C_BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_59_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GenericTextEntry.BP_GenericTextEntry_C.BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_73_OnEditableTextBoxChangedEvent__DelegateSignature
	 */
	struct UBP_GenericTextEntry_C_BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_73_OnEditableTextBoxChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_GenericTextEntry.BP_GenericTextEntry_C.ExecuteUbergraph_BP_GenericTextEntry
	 */
	struct UBP_GenericTextEntry_C_ExecuteUbergraph_BP_GenericTextEntry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GenericTextEntry.BP_GenericTextEntry_C.OnTextChanged__DelegateSignature
	 */
	struct UBP_GenericTextEntry_C_OnTextChanged__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_GenericTextEntry.BP_GenericTextEntry_C.OnTextCommitted__DelegateSignature
	 */
	struct UBP_GenericTextEntry_C_OnTextCommitted__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
