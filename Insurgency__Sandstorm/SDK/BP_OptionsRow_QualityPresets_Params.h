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
	 * Function BP_OptionsRow_QualityPresets.BP_OptionsRow_QualityPresets_C.FindNextOption
	 */
	struct UBP_OptionsRow_QualityPresets_C_FindNextOption_Params
	{
	public:
		bool                                                       MovingLeft;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZSFL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             OutWidget;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OptionsRow_QualityPresets.BP_OptionsRow_QualityPresets_C.OnCustomNavigation
	 */
	struct UBP_OptionsRow_QualityPresets_C_OnCustomNavigation_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                Key;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OptionsRow_QualityPresets.BP_OptionsRow_QualityPresets_C.OnFocusReceived
	 */
	struct UBP_OptionsRow_QualityPresets_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_OptionsRow_QualityPresets.BP_OptionsRow_QualityPresets_C.PreConstruct
	 */
	struct UBP_OptionsRow_QualityPresets_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_OptionsRow_QualityPresets.BP_OptionsRow_QualityPresets_C.BndEvt__OptionPresetLow_K2Node_ComponentBoundEvent_46_OnClick__DelegateSignature
	 */
	struct UBP_OptionsRow_QualityPresets_C_BndEvt__OptionPresetLow_K2Node_ComponentBoundEvent_46_OnClick__DelegateSignature_Params
	{	};

	/**
	 * Function BP_OptionsRow_QualityPresets.BP_OptionsRow_QualityPresets_C.BndEvt__OptionPresetMedium_K2Node_ComponentBoundEvent_55_OnClick__DelegateSignature
	 */
	struct UBP_OptionsRow_QualityPresets_C_BndEvt__OptionPresetMedium_K2Node_ComponentBoundEvent_55_OnClick__DelegateSignature_Params
	{	};

	/**
	 * Function BP_OptionsRow_QualityPresets.BP_OptionsRow_QualityPresets_C.BndEvt__OptionPresetHigh_K2Node_ComponentBoundEvent_69_OnClick__DelegateSignature
	 */
	struct UBP_OptionsRow_QualityPresets_C_BndEvt__OptionPresetHigh_K2Node_ComponentBoundEvent_69_OnClick__DelegateSignature_Params
	{	};

	/**
	 * Function BP_OptionsRow_QualityPresets.BP_OptionsRow_QualityPresets_C.BndEvt__OptionPresetVeryHigh_K2Node_ComponentBoundEvent_80_OnClick__DelegateSignature
	 */
	struct UBP_OptionsRow_QualityPresets_C_BndEvt__OptionPresetVeryHigh_K2Node_ComponentBoundEvent_80_OnClick__DelegateSignature_Params
	{	};

	/**
	 * Function BP_OptionsRow_QualityPresets.BP_OptionsRow_QualityPresets_C.BndEvt__OptionPresetAuto_K2Node_ComponentBoundEvent_92_OnClick__DelegateSignature
	 */
	struct UBP_OptionsRow_QualityPresets_C_BndEvt__OptionPresetAuto_K2Node_ComponentBoundEvent_92_OnClick__DelegateSignature_Params
	{	};

	/**
	 * Function BP_OptionsRow_QualityPresets.BP_OptionsRow_QualityPresets_C.Construct
	 */
	struct UBP_OptionsRow_QualityPresets_C_Construct_Params
	{	};

	/**
	 * Function BP_OptionsRow_QualityPresets.BP_OptionsRow_QualityPresets_C.ExecuteUbergraph_BP_OptionsRow_QualityPresets
	 */
	struct UBP_OptionsRow_QualityPresets_C_ExecuteUbergraph_BP_OptionsRow_QualityPresets_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OptionsRow_QualityPresets.BP_OptionsRow_QualityPresets_C.OnQualityPresetChanged__DelegateSignature
	 */
	struct UBP_OptionsRow_QualityPresets_C_OnQualityPresetChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Preset;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
