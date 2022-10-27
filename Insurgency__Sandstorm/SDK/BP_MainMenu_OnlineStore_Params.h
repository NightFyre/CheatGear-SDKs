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
	 * Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.ShowOwned
	 */
	struct UBP_MainMenu_OnlineStore_C_ShowOwned_Params
	{	};

	/**
	 * Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.DoResetProfile
	 */
	struct UBP_MainMenu_OnlineStore_C_DoResetProfile_Params
	{	};

	/**
	 * Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.NavigateBack
	 */
	struct UBP_MainMenu_OnlineStore_C_NavigateBack_Params
	{	};

	/**
	 * Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.ClearNewIndications
	 */
	struct UBP_MainMenu_OnlineStore_C_ClearNewIndications_Params
	{	};

	/**
	 * Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.OnKeyUp
	 */
	struct UBP_MainMenu_OnlineStore_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.SelectFirstVisibleItem
	 */
	struct UBP_MainMenu_OnlineStore_C_SelectFirstVisibleItem_Params
	{	};

	/**
	 * Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.OnFocusReceived
	 */
	struct UBP_MainMenu_OnlineStore_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.UpdateHintsButtons
	 */
	struct UBP_MainMenu_OnlineStore_C_UpdateHintsButtons_Params
	{	};

	/**
	 * Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.OnCustomNavigation
	 */
	struct UBP_MainMenu_OnlineStore_C_OnCustomNavigation_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                Key;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.SetNavigationRules
	 */
	struct UBP_MainMenu_OnlineStore_C_SetNavigationRules_Params
	{	};

	/**
	 * Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.DoUpDownNaviagtion
	 */
	struct UBP_MainMenu_OnlineStore_C_DoUpDownNaviagtion_Params
	{
	public:
		EUINavigation                                              Navigation;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CMEF[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.DoLeftRightNaviagtion
	 */
	struct UBP_MainMenu_OnlineStore_C_DoLeftRightNaviagtion_Params
	{
	public:
		EUINavigation                                              Navigation;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NUX1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.UpdateCategoryNotification
	 */
	struct UBP_MainMenu_OnlineStore_C_UpdateCategoryNotification_Params
	{	};

	/**
	 * Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.HasNewItemsByCategoryAndOperation
	 */
	struct UBP_MainMenu_OnlineStore_C_HasNewItemsByCategoryAndOperation_Params
	{
	public:
		EStoreItemCategory                                         InCategory;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FWCA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                InOperationName;                                         // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OutHasNew;                                               // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.ClickStoreItem
	 */
	struct UBP_MainMenu_OnlineStore_C_ClickStoreItem_Params
	{
	public:
		class UBP_OnlineStore_Item_C*                              InStoreItem;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.PurchaseItem
	 */
	struct UBP_MainMenu_OnlineStore_C_PurchaseItem_Params
	{
	public:
		class UStoreItem*                                          PurchasedItem;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.GetListByCategoryAndOperation
	 */
	struct UBP_MainMenu_OnlineStore_C_GetListByCategoryAndOperation_Params
	{
	public:
		EStoreItemCategory                                         InCategory;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6IKQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                InOperationName;                                         // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OQBW[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UStoreItem*>                                  OutStoreItems;                                           // 0x0010(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.ClearItemsList
	 */
	struct UBP_MainMenu_OnlineStore_C_ClearItemsList_Params
	{	};

	/**
	 * Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.UpdateSelectedItemData
	 */
	struct UBP_MainMenu_OnlineStore_C_UpdateSelectedItemData_Params
	{	};

	/**
	 * Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.ChangeSelectedItem
	 */
	struct UBP_MainMenu_OnlineStore_C_ChangeSelectedItem_Params
	{
	public:
		class UBP_OnlineStore_Item_C*                              InSelectedItem;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.PopulateItemsByList
	 */
	struct UBP_MainMenu_OnlineStore_C_PopulateItemsByList_Params
	{
	public:
		TArray<class UStoreItem*>                                  InItemsList;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.BindActionsToItemButton
	 */
	struct UBP_MainMenu_OnlineStore_C_BindActionsToItemButton_Params
	{
	public:
		class UBP_OnlineStore_Item_C*                              InItemButton;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.BindActionsToCategoriesButtons
	 */
	struct UBP_MainMenu_OnlineStore_C_BindActionsToCategoriesButtons_Params
	{	};

	/**
	 * Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.UpdateSelectedCategory
	 */
	struct UBP_MainMenu_OnlineStore_C_UpdateSelectedCategory_Params
	{
	public:
		class UBP_OnlineStore_CategoryBaseButton_C*                InNewCategory;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.ChangeSelectedCategoryButton
	 */
	struct UBP_MainMenu_OnlineStore_C_ChangeSelectedCategoryButton_Params
	{
	public:
		class UBP_OnlineStore_CategoryBaseButton_C*                InCategoryButton;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
	 */
	struct UBP_MainMenu_OnlineStore_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.BndEvt__CategoryButtonAll_K2Node_ComponentBoundEvent_1_OnSelected__DelegateSignature
	 */
	struct UBP_MainMenu_OnlineStore_C_BndEvt__CategoryButtonAll_K2Node_ComponentBoundEvent_1_OnSelected__DelegateSignature_Params
	{
	public:
		class UBP_OnlineStore_CategoryBaseButton_C*                SelectedCategory;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.BndEvt__CategoryButtonSales_K2Node_ComponentBoundEvent_2_OnSelected__DelegateSignature
	 */
	struct UBP_MainMenu_OnlineStore_C_BndEvt__CategoryButtonSales_K2Node_ComponentBoundEvent_2_OnSelected__DelegateSignature_Params
	{
	public:
		class UBP_OnlineStore_CategoryBaseButton_C*                SelectedCategory;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.OnStoreItemListUpdated
	 */
	struct UBP_MainMenu_OnlineStore_C_OnStoreItemListUpdated_Params
	{	};

	/**
	 * Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.BndEvt__ResetProfile_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature
	 */
	struct UBP_MainMenu_OnlineStore_C_BndEvt__ResetProfile_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.OnHasSalesChanged
	 */
	struct UBP_MainMenu_OnlineStore_C_OnHasSalesChanged_Params
	{	};

	/**
	 * Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.BndEvt__ResetBackend_K2Node_ComponentBoundEvent_5_OnPressed__DelegateSignature
	 */
	struct UBP_MainMenu_OnlineStore_C_BndEvt__ResetBackend_K2Node_ComponentBoundEvent_5_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.BndEvt__ShowOwned_K2Node_ComponentBoundEvent_6_OnPressed__DelegateSignature
	 */
	struct UBP_MainMenu_OnlineStore_C_BndEvt__ShowOwned_K2Node_ComponentBoundEvent_6_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.BndEvt__ClearIndications_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature
	 */
	struct UBP_MainMenu_OnlineStore_C_BndEvt__ClearIndications_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.Construct
	 */
	struct UBP_MainMenu_OnlineStore_C_Construct_Params
	{	};

	/**
	 * Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.ExecuteUbergraph_BP_MainMenu_OnlineStore
	 */
	struct UBP_MainMenu_OnlineStore_C_ExecuteUbergraph_BP_MainMenu_OnlineStore_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C.OnNavigateBack__DelegateSignature
	 */
	struct UBP_MainMenu_OnlineStore_C_OnNavigateBack__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
