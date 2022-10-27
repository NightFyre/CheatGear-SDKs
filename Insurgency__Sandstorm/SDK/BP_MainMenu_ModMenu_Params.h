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
	 * Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.OnSecurityCodeEntered
	 */
	struct UBP_MainMenu_ModMenu_C_OnSecurityCodeEntered_Params
	{
	public:
		class FText                                                ConfirmText;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.OnDialogCanceled
	 */
	struct UBP_MainMenu_ModMenu_C_OnDialogCanceled_Params
	{	};

	/**
	 * Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.OnEmailEntered
	 */
	struct UBP_MainMenu_ModMenu_C_OnEmailEntered_Params
	{
	public:
		class FText                                                ConfirmText;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.OnEmailRequested
	 */
	struct UBP_MainMenu_ModMenu_C_OnEmailRequested_Params
	{	};

	/**
	 * Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.ResetPageCount
	 */
	struct UBP_MainMenu_ModMenu_C_ResetPageCount_Params
	{	};

	/**
	 * Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.OnKeyDown
	 */
	struct UBP_MainMenu_ModMenu_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.GetModButtonToFocus
	 */
	struct UBP_MainMenu_ModMenu_C_GetModButtonToFocus_Params
	{
	public:
		int64_t                                                    ModId;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             OutFocusWidget;                                          // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.OnFocusReceived
	 */
	struct UBP_MainMenu_ModMenu_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.GetFirstModToFocus
	 */
	struct UBP_MainMenu_ModMenu_C_GetFirstModToFocus_Params
	{
	public:
		class UWidget*                                             OutFocusWidget;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.OnCustomNavigation
	 */
	struct UBP_MainMenu_ModMenu_C_OnCustomNavigation_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                Key;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.OnRequestNavigateBack
	 */
	struct UBP_MainMenu_ModMenu_C_OnRequestNavigateBack_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EKEL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.UpdateFilterFromText
	 */
	struct UBP_MainMenu_ModMenu_C_UpdateFilterFromText_Params
	{
	public:
		class FText                                                FilterText;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.SetLoadingMods
	 */
	struct UBP_MainMenu_ModMenu_C_SetLoadingMods_Params
	{
	public:
		bool                                                       bLoading;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AF2R[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ResultCount;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.UpdatePageText
	 */
	struct UBP_MainMenu_ModMenu_C_UpdatePageText_Params
	{	};

	/**
	 * Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.UpdateMasterTagList
	 */
	struct UBP_MainMenu_ModMenu_C_UpdateMasterTagList_Params
	{	};

	/**
	 * Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.OnFiltersDirtied
	 */
	struct UBP_MainMenu_ModMenu_C_OnFiltersDirtied_Params
	{	};

	/**
	 * Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.CreateTagSection
	 */
	struct UBP_MainMenu_ModMenu_C_CreateTagSection_Params
	{
	public:
		class FText                                                Category;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		TArray<struct FModTag>                                     Tags;                                                    // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.OnModsRetrieved_F9CB590E437BEDD51CD46F9EDD1CB41E
	 */
	struct UBP_MainMenu_ModMenu_C_OnModsRetrieved_F9CB590E437BEDD51CD46F9EDD1CB41E_Params
	{
	public:
		struct FGetAllModsSchema                                   ModData;                                                 // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.OnModsRetrieved_01C14770496E6424D919B3B1A36365AA
	 */
	struct UBP_MainMenu_ModMenu_C_OnModsRetrieved_01C14770496E6424D919B3B1A36365AA_Params
	{
	public:
		struct FGetAllModsSchema                                   ModData;                                                 // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.PreConstruct
	 */
	struct UBP_MainMenu_ModMenu_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.Construct
	 */
	struct UBP_MainMenu_ModMenu_C_Construct_Params
	{	};

	/**
	 * Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.OnTagsUpdated
	 */
	struct UBP_MainMenu_ModMenu_C_OnTagsUpdated_Params
	{
	public:
		class UBP_Widget_ModTagGroup_C*                            Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.RefreshModList
	 */
	struct UBP_MainMenu_ModMenu_C_RefreshModList_Params
	{	};

	/**
	 * Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.BndEvt__SearchBar_K2Node_ComponentBoundEvent_0_OnTextCommit__DelegateSignature
	 */
	struct UBP_MainMenu_ModMenu_C_BndEvt__SearchBar_K2Node_ComponentBoundEvent_0_OnTextCommit__DelegateSignature_Params
	{
	public:
		class FText                                                newText;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.OpenModPage
	 */
	struct UBP_MainMenu_ModMenu_C_OpenModPage_Params
	{
	public:
		struct FModObject                                          ModData;                                                 // 0x0000(0x02D8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.OnPanelOpened
	 */
	struct UBP_MainMenu_ModMenu_C_OnPanelOpened_Params
	{	};

	/**
	 * Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature
	 */
	struct UBP_MainMenu_ModMenu_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.BndEvt__SearchBar_K2Node_ComponentBoundEvent_2_OnStoppedTyping__DelegateSignature
	 */
	struct UBP_MainMenu_ModMenu_C_BndEvt__SearchBar_K2Node_ComponentBoundEvent_2_OnStoppedTyping__DelegateSignature_Params
	{
	public:
		class FText                                                newText;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_MainMenu_ModMenu_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.BndEvt__BP_MenuTabs_K2Node_ComponentBoundEvent_4_OnTabSelected__DelegateSignature
	 */
	struct UBP_MainMenu_ModMenu_C_BndEvt__BP_MenuTabs_K2Node_ComponentBoundEvent_4_OnTabSelected__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.OnPresentMods
	 */
	struct UBP_MainMenu_ModMenu_C_OnPresentMods_Params
	{
	public:
		struct FGetAllModsSchema                                   Mods;                                                    // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.SetRequestInFlight
	 */
	struct UBP_MainMenu_ModMenu_C_SetRequestInFlight_Params
	{
	public:
		bool                                                       bNewRequestInFlight;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.BndEvt__PageSelect_K2Node_ComponentBoundEvent_5_OnNavigateNext__DelegateSignature
	 */
	struct UBP_MainMenu_ModMenu_C_BndEvt__PageSelect_K2Node_ComponentBoundEvent_5_OnNavigateNext__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.BndEvt__PageSelect_K2Node_ComponentBoundEvent_6_OnNavigatePrevious__DelegateSignature
	 */
	struct UBP_MainMenu_ModMenu_C_BndEvt__PageSelect_K2Node_ComponentBoundEvent_6_OnNavigatePrevious__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.BndEvt__OpenModioButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBP_MainMenu_ModMenu_C_BndEvt__OpenModioButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.BndEvt__OpenModioButton_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UBP_MainMenu_ModMenu_C_BndEvt__OpenModioButton_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.ExecuteUbergraph_BP_MainMenu_ModMenu
	 */
	struct UBP_MainMenu_ModMenu_C_ExecuteUbergraph_BP_MainMenu_ModMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_ModMenu.BP_MainMenu_ModMenu_C.OnNavigateBack__DelegateSignature
	 */
	struct UBP_MainMenu_ModMenu_C_OnNavigateBack__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
