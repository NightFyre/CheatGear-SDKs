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
	 * Function BP_OptionsRow_Container.BP_OptionsRow_Container_C.SetTextColor
	 */
	struct UBP_OptionsRow_Container_C_SetTextColor_Params
	{	};

	/**
	 * Function BP_OptionsRow_Container.BP_OptionsRow_Container_C.SetOptionName
	 */
	struct UBP_OptionsRow_Container_C_SetOptionName_Params
	{
	public:
		class FText                                                OptionText;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_OptionsRow_Container.BP_OptionsRow_Container_C.GetTextColor
	 */
	struct UBP_OptionsRow_Container_C_GetTextColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_OptionsRow_Container.BP_OptionsRow_Container_C.GetBackgroundBrushColor
	 */
	struct UBP_OptionsRow_Container_C_GetBackgroundBrushColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OptionsRow_Container.BP_OptionsRow_Container_C.OnMouseLeave
	 */
	struct UBP_OptionsRow_Container_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_OptionsRow_Container.BP_OptionsRow_Container_C.OnAddedToFocusPath
	 */
	struct UBP_OptionsRow_Container_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_OptionsRow_Container.BP_OptionsRow_Container_C.OnRemovedFromFocusPath
	 */
	struct UBP_OptionsRow_Container_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_OptionsRow_Container.BP_OptionsRow_Container_C.Construct
	 */
	struct UBP_OptionsRow_Container_C_Construct_Params
	{	};

	/**
	 * Function BP_OptionsRow_Container.BP_OptionsRow_Container_C.OnMouseEnter
	 */
	struct UBP_OptionsRow_Container_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_OptionsRow_Container.BP_OptionsRow_Container_C.ExecuteUbergraph_BP_OptionsRow_Container
	 */
	struct UBP_OptionsRow_Container_C_ExecuteUbergraph_BP_OptionsRow_Container_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7DOV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_OptionsRow_Container.BP_OptionsRow_Container_C.OnOptionSelected__DelegateSignature
	 */
	struct UBP_OptionsRow_Container_C_OnOptionSelected__DelegateSignature_Params
	{
	public:
		bool                                                       State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
