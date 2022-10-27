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
	 * Function BP_Profile_Achievements_Item.BP_Profile_Achievements_Item_C.UpdateVisibilityForPlatform
	 */
	struct UBP_Profile_Achievements_Item_C_UpdateVisibilityForPlatform_Params
	{	};

	/**
	 * Function BP_Profile_Achievements_Item.BP_Profile_Achievements_Item_C.OnFocusReceived
	 */
	struct UBP_Profile_Achievements_Item_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_Profile_Achievements_Item.BP_Profile_Achievements_Item_C.Get_AchievmentIcon_Brush_1
	 */
	struct UBP_Profile_Achievements_Item_C_Get_AchievmentIcon_Brush_1_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_Profile_Achievements_Item.BP_Profile_Achievements_Item_C.HalfOpacityIfNotAchieved
	 */
	struct UBP_Profile_Achievements_Item_C_HalfOpacityIfNotAchieved_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Profile_Achievements_Item.BP_Profile_Achievements_Item_C.VisibleIfNotAchieved
	 */
	struct UBP_Profile_Achievements_Item_C_VisibleIfNotAchieved_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Profile_Achievements_Item.BP_Profile_Achievements_Item_C.VisibleIfAchieved
	 */
	struct UBP_Profile_Achievements_Item_C_VisibleIfAchieved_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Profile_Achievements_Item.BP_Profile_Achievements_Item_C.Construct
	 */
	struct UBP_Profile_Achievements_Item_C_Construct_Params
	{	};

	/**
	 * Function BP_Profile_Achievements_Item.BP_Profile_Achievements_Item_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBP_Profile_Achievements_Item_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Profile_Achievements_Item.BP_Profile_Achievements_Item_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonFocusEvent__DelegateSignature
	 */
	struct UBP_Profile_Achievements_Item_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonFocusEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Profile_Achievements_Item.BP_Profile_Achievements_Item_C.ExecuteUbergraph_BP_Profile_Achievements_Item
	 */
	struct UBP_Profile_Achievements_Item_C_ExecuteUbergraph_BP_Profile_Achievements_Item_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
