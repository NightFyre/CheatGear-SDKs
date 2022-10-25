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
	 * Function BP_Widget_SlideshowButton.BP_Widget_SlideshowButton_C.UpdateActiveAppearance
	 */
	struct UBP_Widget_SlideshowButton_C_UpdateActiveAppearance_Params
	{	};

	/**
	 * Function BP_Widget_SlideshowButton.BP_Widget_SlideshowButton_C.SetActive
	 */
	struct UBP_Widget_SlideshowButton_C_SetActive_Params
	{
	public:
		bool                                                       bNewActive;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Widget_SlideshowButton.BP_Widget_SlideshowButton_C.BndEvt__NavigateButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_Widget_SlideshowButton_C_BndEvt__NavigateButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Widget_SlideshowButton.BP_Widget_SlideshowButton_C.PreConstruct
	 */
	struct UBP_Widget_SlideshowButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Widget_SlideshowButton.BP_Widget_SlideshowButton_C.ExecuteUbergraph_BP_Widget_SlideshowButton
	 */
	struct UBP_Widget_SlideshowButton_C_ExecuteUbergraph_BP_Widget_SlideshowButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_SlideshowButton.BP_Widget_SlideshowButton_C.OnSlideshowNavigate__DelegateSignature
	 */
	struct UBP_Widget_SlideshowButton_C_OnSlideshowNavigate__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
