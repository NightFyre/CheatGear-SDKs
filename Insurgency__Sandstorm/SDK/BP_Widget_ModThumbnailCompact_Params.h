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
	 * Function BP_Widget_ModThumbnailCompact.BP_Widget_ModThumbnailCompact_C.OnFocusReceived
	 */
	struct UBP_Widget_ModThumbnailCompact_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_Widget_ModThumbnailCompact.BP_Widget_ModThumbnailCompact_C.PreConstruct
	 */
	struct UBP_Widget_ModThumbnailCompact_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Widget_ModThumbnailCompact.BP_Widget_ModThumbnailCompact_C.BndEvt__ThumbButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_Widget_ModThumbnailCompact_C_BndEvt__ThumbButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Widget_ModThumbnailCompact.BP_Widget_ModThumbnailCompact_C.Construct
	 */
	struct UBP_Widget_ModThumbnailCompact_C_Construct_Params
	{	};

	/**
	 * Function BP_Widget_ModThumbnailCompact.BP_Widget_ModThumbnailCompact_C.BndEvt__ThumbButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBP_Widget_ModThumbnailCompact_C_BndEvt__ThumbButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Widget_ModThumbnailCompact.BP_Widget_ModThumbnailCompact_C.ExecuteUbergraph_BP_Widget_ModThumbnailCompact
	 */
	struct UBP_Widget_ModThumbnailCompact_C_ExecuteUbergraph_BP_Widget_ModThumbnailCompact_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_ModThumbnailCompact.BP_Widget_ModThumbnailCompact_C.OnModClicked__DelegateSignature
	 */
	struct UBP_Widget_ModThumbnailCompact_C_OnModClicked__DelegateSignature_Params
	{
	public:
		struct FModObject                                          Mod;                                                     // 0x0000(0x02D8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
