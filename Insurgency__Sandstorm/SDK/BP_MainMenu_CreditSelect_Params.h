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
	 * Function BP_MainMenu_CreditSelect.BP_MainMenu_CreditSelect_C.SetActiveVersion
	 */
	struct UBP_MainMenu_CreditSelect_C_SetActiveVersion_Params
	{
	public:
		class UBP_CreditVersionContainer_C*                        ActiveVersionContainer;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_CreditSelect.BP_MainMenu_CreditSelect_C.ClampVersionIndex
	 */
	struct UBP_MainMenu_CreditSelect_C_ClampVersionIndex_Params
	{
	public:
		int32_t                                                    NewIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OutIndex;                                                // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_CreditSelect.BP_MainMenu_CreditSelect_C.ChooseActiveVersionButton
	 */
	struct UBP_MainMenu_CreditSelect_C_ChooseActiveVersionButton_Params
	{
	public:
		int32_t                                                    NewVersionContainerIndex;                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_CreditSelect.BP_MainMenu_CreditSelect_C.OnSelectCreditVersion
	 */
	struct UBP_MainMenu_CreditSelect_C_OnSelectCreditVersion_Params
	{
	public:
		class FString                                              Version;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_CreditSelect.BP_MainMenu_CreditSelect_C.OnKeyDown
	 */
	struct UBP_MainMenu_CreditSelect_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MainMenu_CreditSelect.BP_MainMenu_CreditSelect_C.OnFocusReceived
	 */
	struct UBP_MainMenu_CreditSelect_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MainMenu_CreditSelect.BP_MainMenu_CreditSelect_C.Construct
	 */
	struct UBP_MainMenu_CreditSelect_C_Construct_Params
	{	};

	/**
	 * Function BP_MainMenu_CreditSelect.BP_MainMenu_CreditSelect_C.OnPanelClosed
	 */
	struct UBP_MainMenu_CreditSelect_C_OnPanelClosed_Params
	{	};

	/**
	 * Function BP_MainMenu_CreditSelect.BP_MainMenu_CreditSelect_C.Destruct
	 */
	struct UBP_MainMenu_CreditSelect_C_Destruct_Params
	{	};

	/**
	 * Function BP_MainMenu_CreditSelect.BP_MainMenu_CreditSelect_C.OnPanelOpened
	 */
	struct UBP_MainMenu_CreditSelect_C_OnPanelOpened_Params
	{	};

	/**
	 * Function BP_MainMenu_CreditSelect.BP_MainMenu_CreditSelect_C.PreConstruct
	 */
	struct UBP_MainMenu_CreditSelect_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MainMenu_CreditSelect.BP_MainMenu_CreditSelect_C.BndEvt__BtnBack_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
	 */
	struct UBP_MainMenu_CreditSelect_C_BndEvt__BtnBack_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_CreditSelect.BP_MainMenu_CreditSelect_C.ExecuteUbergraph_BP_MainMenu_CreditSelect
	 */
	struct UBP_MainMenu_CreditSelect_C_ExecuteUbergraph_BP_MainMenu_CreditSelect_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_CreditSelect.BP_MainMenu_CreditSelect_C.OnNavigateBack__DelegateSignature
	 */
	struct UBP_MainMenu_CreditSelect_C_OnNavigateBack__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_CreditSelect.BP_MainMenu_CreditSelect_C.OnConfirmCreditVersion__DelegateSignature
	 */
	struct UBP_MainMenu_CreditSelect_C_OnConfirmCreditVersion__DelegateSignature_Params
	{
	public:
		class FString                                              Version;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
