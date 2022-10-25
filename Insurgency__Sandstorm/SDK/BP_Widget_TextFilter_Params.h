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
	 * Function BP_Widget_TextFilter.BP_Widget_TextFilter_C.PreConstruct
	 */
	struct UBP_Widget_TextFilter_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Widget_TextFilter.BP_Widget_TextFilter_C.BndEvt__InnerTextBox_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature
	 */
	struct UBP_Widget_TextFilter_C_BndEvt__InnerTextBox_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_Widget_TextFilter.BP_Widget_TextFilter_C.BndEvt__InnerTextBox_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature
	 */
	struct UBP_Widget_TextFilter_C_BndEvt__InnerTextBox_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_TextFilter.BP_Widget_TextFilter_C.OnStoppedTypingInternal
	 */
	struct UBP_Widget_TextFilter_C_OnStoppedTypingInternal_Params
	{	};

	/**
	 * Function BP_Widget_TextFilter.BP_Widget_TextFilter_C.ExecuteUbergraph_BP_Widget_TextFilter
	 */
	struct UBP_Widget_TextFilter_C_ExecuteUbergraph_BP_Widget_TextFilter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_TextFilter.BP_Widget_TextFilter_C.OnStoppedTyping__DelegateSignature
	 */
	struct UBP_Widget_TextFilter_C_OnStoppedTyping__DelegateSignature_Params
	{
	public:
		class FText                                                newText;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_Widget_TextFilter.BP_Widget_TextFilter_C.OnTextCommit__DelegateSignature
	 */
	struct UBP_Widget_TextFilter_C_OnTextCommit__DelegateSignature_Params
	{
	public:
		class FText                                                newText;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_TextFilter.BP_Widget_TextFilter_C.OnTextChanged__DelegateSignature
	 */
	struct UBP_Widget_TextFilter_C_OnTextChanged__DelegateSignature_Params
	{
	public:
		class FText                                                newText;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
