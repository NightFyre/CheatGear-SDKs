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
	 * Function BP_Settings_PageBase.BP_Settings_PageBase_C.OnCustomNavigation
	 */
	struct UBP_Settings_PageBase_C_OnCustomNavigation_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                Key;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Settings_PageBase.BP_Settings_PageBase_C.ScrollToWidget
	 */
	struct UBP_Settings_PageBase_C_ScrollToWidget_Params
	{
	public:
		class UWidget*                                             NewWidget;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Settings_PageBase.BP_Settings_PageBase_C.SetOwningSettingsMenu
	 */
	struct UBP_Settings_PageBase_C_SetOwningSettingsMenu_Params
	{
	public:
		class UBP_MainMenu_Settings_C*                             SettingsMenu;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Settings_PageBase.BP_Settings_PageBase_C.HideHoveredInfo
	 */
	struct UBP_Settings_PageBase_C_HideHoveredInfo_Params
	{	};

	/**
	 * Function BP_Settings_PageBase.BP_Settings_PageBase_C.SetHoveredInfoText
	 */
	struct UBP_Settings_PageBase_C_SetHoveredInfoText_Params
	{
	public:
		class FText                                                HeaderText;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                DescriptionText;                                         // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_Settings_PageBase.BP_Settings_PageBase_C.SetOwningOptionsMenu
	 */
	struct UBP_Settings_PageBase_C_SetOwningOptionsMenu_Params
	{
	public:
		class UOptionsMenu*                                        OptionsMenu;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Settings_PageBase.BP_Settings_PageBase_C.BndEvt__ButtonApplyChanges_K2Node_ComponentBoundEvent_5_OnPressed__DelegateSignature
	 */
	struct UBP_Settings_PageBase_C_BndEvt__ButtonApplyChanges_K2Node_ComponentBoundEvent_5_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Settings_PageBase.BP_Settings_PageBase_C.BndEvt__ButtonReset_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature
	 */
	struct UBP_Settings_PageBase_C_BndEvt__ButtonReset_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Settings_PageBase.BP_Settings_PageBase_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
	 */
	struct UBP_Settings_PageBase_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Settings_PageBase.BP_Settings_PageBase_C.Construct
	 */
	struct UBP_Settings_PageBase_C_Construct_Params
	{	};

	/**
	 * Function BP_Settings_PageBase.BP_Settings_PageBase_C.ExecuteUbergraph_BP_Settings_PageBase
	 */
	struct UBP_Settings_PageBase_C_ExecuteUbergraph_BP_Settings_PageBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
