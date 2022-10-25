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
	 * Function BP_OptionsRow_Language.BP_OptionsRow_Language_C.Get_DisplayLanguage_Text_1
	 */
	struct UBP_OptionsRow_Language_C_Get_DisplayLanguage_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_OptionsRow_Language.BP_OptionsRow_Language_C.OnFocusReceived
	 */
	struct UBP_OptionsRow_Language_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_OptionsRow_Language.BP_OptionsRow_Language_C.Get_GlobeImage_Brush_1
	 */
	struct UBP_OptionsRow_Language_C_Get_GlobeImage_Brush_1_Params
	{	};

	/**
	 * Function BP_OptionsRow_Language.BP_OptionsRow_Language_C.GetTextColor
	 */
	struct UBP_OptionsRow_Language_C_GetTextColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_OptionsRow_Language.BP_OptionsRow_Language_C.GetBackgroundBrushColor
	 */
	struct UBP_OptionsRow_Language_C_GetBackgroundBrushColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OptionsRow_Language.BP_OptionsRow_Language_C.OnMouseEnter
	 */
	struct UBP_OptionsRow_Language_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_OptionsRow_Language.BP_OptionsRow_Language_C.OnMouseLeave
	 */
	struct UBP_OptionsRow_Language_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_OptionsRow_Language.BP_OptionsRow_Language_C.OnAddedToFocusPath
	 */
	struct UBP_OptionsRow_Language_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_OptionsRow_Language.BP_OptionsRow_Language_C.OnRemovedFromFocusPath
	 */
	struct UBP_OptionsRow_Language_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_OptionsRow_Language.BP_OptionsRow_Language_C.OnPressed
	 */
	struct UBP_OptionsRow_Language_C_OnPressed_Params
	{	};

	/**
	 * Function BP_OptionsRow_Language.BP_OptionsRow_Language_C.Construct
	 */
	struct UBP_OptionsRow_Language_C_Construct_Params
	{	};

	/**
	 * Function BP_OptionsRow_Language.BP_OptionsRow_Language_C.ExecuteUbergraph_BP_OptionsRow_Language
	 */
	struct UBP_OptionsRow_Language_C_ExecuteUbergraph_BP_OptionsRow_Language_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OptionsRow_Language.BP_OptionsRow_Language_C.OnOptionUnHovered_0__DelegateSignature
	 */
	struct UBP_OptionsRow_Language_C_OnOptionUnHovered_0__DelegateSignature_Params
	{	};

	/**
	 * Function BP_OptionsRow_Language.BP_OptionsRow_Language_C.OnOptionHovered_0__DelegateSignature
	 */
	struct UBP_OptionsRow_Language_C_OnOptionHovered_0__DelegateSignature_Params
	{
	public:
		class FText                                                Title;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Description;                                             // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_OptionsRow_Language.BP_OptionsRow_Language_C.OnOptionSelected__DelegateSignature
	 */
	struct UBP_OptionsRow_Language_C_OnOptionSelected__DelegateSignature_Params
	{
	public:
		bool                                                       State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
