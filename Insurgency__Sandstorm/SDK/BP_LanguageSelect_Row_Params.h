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
	 * Function BP_LanguageSelect_Row.BP_LanguageSelect_Row_C.UpdateTextColor
	 */
	struct UBP_LanguageSelect_Row_C_UpdateTextColor_Params
	{	};

	/**
	 * Function BP_LanguageSelect_Row.BP_LanguageSelect_Row_C.SetSelected
	 */
	struct UBP_LanguageSelect_Row_C_SetSelected_Params
	{
	public:
		bool                                                       Hovered;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LanguageSelect_Row.BP_LanguageSelect_Row_C.SetHovered
	 */
	struct UBP_LanguageSelect_Row_C_SetHovered_Params
	{
	public:
		bool                                                       Hovered;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LanguageSelect_Row.BP_LanguageSelect_Row_C.PreConstruct
	 */
	struct UBP_LanguageSelect_Row_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LanguageSelect_Row.BP_LanguageSelect_Row_C.Construct
	 */
	struct UBP_LanguageSelect_Row_C_Construct_Params
	{	};

	/**
	 * Function BP_LanguageSelect_Row.BP_LanguageSelect_Row_C.OnAddedToFocusPath
	 */
	struct UBP_LanguageSelect_Row_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_LanguageSelect_Row.BP_LanguageSelect_Row_C.OnRemovedFromFocusPath
	 */
	struct UBP_LanguageSelect_Row_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_LanguageSelect_Row.BP_LanguageSelect_Row_C.OnMouseEnter
	 */
	struct UBP_LanguageSelect_Row_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_LanguageSelect_Row.BP_LanguageSelect_Row_C.OnMouseLeave
	 */
	struct UBP_LanguageSelect_Row_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_LanguageSelect_Row.BP_LanguageSelect_Row_C.BndEvt__Button_43_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UBP_LanguageSelect_Row_C_BndEvt__Button_43_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_LanguageSelect_Row.BP_LanguageSelect_Row_C.BndEvt__Button_43_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 */
	struct UBP_LanguageSelect_Row_C_BndEvt__Button_43_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_LanguageSelect_Row.BP_LanguageSelect_Row_C.ExecuteUbergraph_BP_LanguageSelect_Row
	 */
	struct UBP_LanguageSelect_Row_C_ExecuteUbergraph_BP_LanguageSelect_Row_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LanguageSelect_Row.BP_LanguageSelect_Row_C.OnSelected__DelegateSignature
	 */
	struct UBP_LanguageSelect_Row_C_OnSelected__DelegateSignature_Params
	{
	public:
		class FString                                              LanguageTag;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FText                                                LanguageName;                                            // 0x0010(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_LanguageSelect_Row.BP_LanguageSelect_Row_C.OnHovered__DelegateSignature
	 */
	struct UBP_LanguageSelect_Row_C_OnHovered__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
