#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * Function v2_WB_InputNumber.v2_WB_InputNumber_C.Get Text Value Text
	 */
	struct Uv2_WB_InputNumber_C_GetTextValueText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function v2_WB_InputNumber.v2_WB_InputNumber_C.Get Tool Tip Text
	 */
	struct Uv2_WB_InputNumber_C_GetToolTipText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function v2_WB_InputNumber.v2_WB_InputNumber_C.Construct
	 */
	struct Uv2_WB_InputNumber_C_Construct_Params
	{	};

	/**
	 * Function v2_WB_InputNumber.v2_WB_InputNumber_C.BndEvt__v2_WB_InputNumber_Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct Uv2_WB_InputNumber_C_BndEvt__v2_WB_InputNumber_Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function v2_WB_InputNumber.v2_WB_InputNumber_C.BndEvt__v2_WB_InputNumber_TextValue_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature
	 */
	struct Uv2_WB_InputNumber_C_BndEvt__v2_WB_InputNumber_TextValue_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function v2_WB_InputNumber.v2_WB_InputNumber_C.BndEvt__v2_WB_InputNumber_TextValue_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature
	 */
	struct Uv2_WB_InputNumber_C_BndEvt__v2_WB_InputNumber_TextValue_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function v2_WB_InputNumber.v2_WB_InputNumber_C.ExecuteUbergraph_v2_WB_InputNumber
	 */
	struct Uv2_WB_InputNumber_C_ExecuteUbergraph_v2_WB_InputNumber_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
