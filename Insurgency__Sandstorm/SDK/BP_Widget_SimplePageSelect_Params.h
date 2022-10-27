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
	 * Function BP_Widget_SimplePageSelect.BP_Widget_SimplePageSelect_C.OnKeyDown
	 */
	struct UBP_Widget_SimplePageSelect_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_Widget_SimplePageSelect.BP_Widget_SimplePageSelect_C.UpdatePageAndTotal
	 */
	struct UBP_Widget_SimplePageSelect_C_UpdatePageAndTotal_Params
	{
	public:
		int32_t                                                    NewPage;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NewTotal;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_SimplePageSelect.BP_Widget_SimplePageSelect_C.UpdatePageTotal
	 */
	struct UBP_Widget_SimplePageSelect_C_UpdatePageTotal_Params
	{
	public:
		int32_t                                                    NewTotal;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_SimplePageSelect.BP_Widget_SimplePageSelect_C.UpdatePage
	 */
	struct UBP_Widget_SimplePageSelect_C_UpdatePage_Params
	{
	public:
		int32_t                                                    NewPage;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_SimplePageSelect.BP_Widget_SimplePageSelect_C.UpdatePageDisplay
	 */
	struct UBP_Widget_SimplePageSelect_C_UpdatePageDisplay_Params
	{	};

	/**
	 * Function BP_Widget_SimplePageSelect.BP_Widget_SimplePageSelect_C.PreConstruct
	 */
	struct UBP_Widget_SimplePageSelect_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Widget_SimplePageSelect.BP_Widget_SimplePageSelect_C.BndEvt__BackIcon_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
	 */
	struct UBP_Widget_SimplePageSelect_C_BndEvt__BackIcon_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Widget_SimplePageSelect.BP_Widget_SimplePageSelect_C.BndEvt__NextIcon_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature
	 */
	struct UBP_Widget_SimplePageSelect_C_BndEvt__NextIcon_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Widget_SimplePageSelect.BP_Widget_SimplePageSelect_C.ExecuteUbergraph_BP_Widget_SimplePageSelect
	 */
	struct UBP_Widget_SimplePageSelect_C_ExecuteUbergraph_BP_Widget_SimplePageSelect_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_SimplePageSelect.BP_Widget_SimplePageSelect_C.OnNavigateNext__DelegateSignature
	 */
	struct UBP_Widget_SimplePageSelect_C_OnNavigateNext__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Widget_SimplePageSelect.BP_Widget_SimplePageSelect_C.OnNavigatePrevious__DelegateSignature
	 */
	struct UBP_Widget_SimplePageSelect_C_OnNavigatePrevious__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
