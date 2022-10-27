#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.UpdateMagicValueState
	 */
	struct UWBP_ModifierSetting_Numeric_C_UpdateMagicValueState_Params
	{	};

	/**
	 * Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.GetValue
	 */
	struct UWBP_ModifierSetting_Numeric_C_GetValue_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.SetValue
	 */
	struct UWBP_ModifierSetting_Numeric_C_SetValue_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.GetMagicValueText
	 */
	struct UWBP_ModifierSetting_Numeric_C_GetMagicValueText_Params
	{
	public:
		class FText                                                MagicValueText;                                          // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.SetMagicValueText
	 */
	struct UWBP_ModifierSetting_Numeric_C_SetMagicValueText_Params
	{
	public:
		class FText                                                InMagicValueText;                                        // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.GetSettingText
	 */
	struct UWBP_ModifierSetting_Numeric_C_GetSettingText_Params
	{
	public:
		class FText                                                SettingText;                                             // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.SetSettingText
	 */
	struct UWBP_ModifierSetting_Numeric_C_SetSettingText_Params
	{
	public:
		class FText                                                InSettingText;                                           // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.PreConstruct
	 */
	struct UWBP_ModifierSetting_Numeric_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.BndEvt__NumericSpinBox_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature
	 */
	struct UWBP_ModifierSetting_Numeric_C_BndEvt__NumericSpinBox_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.BndEvt__NumericSpinBox_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature
	 */
	struct UWBP_ModifierSetting_Numeric_C_BndEvt__NumericSpinBox_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ETextCommit                                                CommitMethod;                                            // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.ExecuteUbergraph_WBP_ModifierSetting_Numeric
	 */
	struct UWBP_ModifierSetting_Numeric_C_ExecuteUbergraph_WBP_ModifierSetting_Numeric_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.OnValueCommitted__DelegateSignature
	 */
	struct UWBP_ModifierSetting_Numeric_C_OnValueCommitted__DelegateSignature_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ETextCommit                                                CommitMethod;                                            // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.OnValueChanged__DelegateSignature
	 */
	struct UWBP_ModifierSetting_Numeric_C_OnValueChanged__DelegateSignature_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
