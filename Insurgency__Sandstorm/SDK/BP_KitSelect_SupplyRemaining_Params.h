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
	 * Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.CanPlayerResupply
	 */
	struct UBP_KitSelect_SupplyRemaining_C_CanPlayerResupply_Params
	{
	public:
		bool                                                       bCanResupply;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YMOH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.UpdateSupplyNumberPreview
	 */
	struct UBP_KitSelect_SupplyRemaining_C_UpdateSupplyNumberPreview_Params
	{
	public:
		int32_t                                                    NewSupply;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Show;                                                    // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.UpdateSupplyNumber
	 */
	struct UBP_KitSelect_SupplyRemaining_C_UpdateSupplyNumber_Params
	{
	public:
		int32_t                                                    NewSupply;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.ActivateResupplyButton
	 */
	struct UBP_KitSelect_SupplyRemaining_C_ActivateResupplyButton_Params
	{	};

	/**
	 * Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.TimerFinished
	 */
	struct UBP_KitSelect_SupplyRemaining_C_TimerFinished_Params
	{	};

	/**
	 * Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.UpdateCircularTimer
	 */
	struct UBP_KitSelect_SupplyRemaining_C_UpdateCircularTimer_Params
	{	};

	/**
	 * Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.SetResupplyButtonVisibility
	 */
	struct UBP_KitSelect_SupplyRemaining_C_SetResupplyButtonVisibility_Params
	{
	public:
		bool                                                       bShow;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.GetPreviewSupplyAmountText
	 */
	struct UBP_KitSelect_SupplyRemaining_C_GetPreviewSupplyAmountText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.GetSupplyRemainingAmountText
	 */
	struct UBP_KitSelect_SupplyRemaining_C_GetSupplyRemainingAmountText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.GetFgColor
	 */
	struct UBP_KitSelect_SupplyRemaining_C_GetFgColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.Construct
	 */
	struct UBP_KitSelect_SupplyRemaining_C_Construct_Params
	{	};

	/**
	 * Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.BndEvt__ResupplyButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_KitSelect_SupplyRemaining_C_BndEvt__ResupplyButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.BndEvt__ResupplyButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBP_KitSelect_SupplyRemaining_C_BndEvt__ResupplyButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.BndEvt__ResupplyButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBP_KitSelect_SupplyRemaining_C_BndEvt__ResupplyButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.OnPlayerSpawned
	 */
	struct UBP_KitSelect_SupplyRemaining_C_OnPlayerSpawned_Params
	{
	public:
		class AINSSoldier*                                         Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.Tick
	 */
	struct UBP_KitSelect_SupplyRemaining_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.PlayFlashAnimation
	 */
	struct UBP_KitSelect_SupplyRemaining_C_PlayFlashAnimation_Params
	{	};

	/**
	 * Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.BndEvt__DeployButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_KitSelect_SupplyRemaining_C_BndEvt__DeployButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.BndEvt__DeployButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBP_KitSelect_SupplyRemaining_C_BndEvt__DeployButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.BndEvt__DeployButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBP_KitSelect_SupplyRemaining_C_BndEvt__DeployButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.ExecuteUbergraph_BP_KitSelect_SupplyRemaining
	 */
	struct UBP_KitSelect_SupplyRemaining_C_ExecuteUbergraph_BP_KitSelect_SupplyRemaining_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.OnDeployButtonPressed__DelegateSignature
	 */
	struct UBP_KitSelect_SupplyRemaining_C_OnDeployButtonPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.OnResupplyButtonPressed__DelegateSignature
	 */
	struct UBP_KitSelect_SupplyRemaining_C_OnResupplyButtonPressed__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
