#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.GetValidDisplayNameForGMDefinition
	 */
	struct UWBP_OptionMenu_CreateGame_C_GetValidDisplayNameForGMDefinition_Params
	{
	public:
		class UHDGameModeDefinition*                               GMDef;                                                   // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                DisplayName;                                             // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.FindGMDefinitionByClassName
	 */
	struct UWBP_OptionMenu_CreateGame_C_FindGMDefinitionByClassName_Params
	{
	public:
		class FString                                              ClassName;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
		class UHDGameModeDefinition*                               GMDef;                                                   // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.ContainsGMByClass
	 */
	struct UWBP_OptionMenu_CreateGame_C_ContainsGMByClass_Params
	{
	public:
		unsigned char                                              UnknownData_1ART[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		bool                                                       bContainsGM;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O5IX[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.FilterExcludesGMClass
	 */
	struct UWBP_OptionMenu_CreateGame_C_FilterExcludesGMClass_Params
	{
	public:
		unsigned char                                              UnknownData_G995[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		bool                                                       bLegacyAASSupport;                                       // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bExcludeGM;                                              // 0x0029(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.FilterExcludesMapPrefix
	 */
	struct UWBP_OptionMenu_CreateGame_C_FilterExcludesMapPrefix_Params
	{
	public:
		class FString                                              MapName;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       bExcludePrefix;                                          // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QCVI[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.SortGMList
	 */
	struct UWBP_OptionMenu_CreateGame_C_SortGMList_Params
	{
	public:
		TArray<struct FFGameModeInfo>                              GMListToSort;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		bool                                                       bDescending;                                             // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NPDN[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.SortMapList
	 */
	struct UWBP_OptionMenu_CreateGame_C_SortMapList_Params
	{
	public:
		TArray<struct FFMapInfo>                                   MapListToSort;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		bool                                                       bDescending;                                             // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_44QX[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.UpdateStartButtonState
	 */
	struct UWBP_OptionMenu_CreateGame_C_UpdateStartButtonState_Params
	{	};

	/**
	 * Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.ClearMapPreviewImage
	 */
	struct UWBP_OptionMenu_CreateGame_C_ClearMapPreviewImage_Params
	{	};

	/**
	 * Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.SetMapPreviewImage
	 */
	struct UWBP_OptionMenu_CreateGame_C_SetMapPreviewImage_Params
	{
	public:
		class UTexture2D*                                          NewImg;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.AddGMToList
	 */
	struct UWBP_OptionMenu_CreateGame_C_AddGMToList_Params
	{
	public:
		struct FFGameModeInfo                                      GMInfo;                                                  // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		class UBP_GMListItemData_C*                                NewGMItem;                                               // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.CreateGMListItem
	 */
	struct UWBP_OptionMenu_CreateGame_C_CreateGMListItem_Params
	{
	public:
		struct FFGameModeInfo                                      GMInfo;                                                  // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		class UBP_GMListItemData_C*                                GMItem;                                                  // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.HandleStartGame
	 */
	struct UWBP_OptionMenu_CreateGame_C_HandleStartGame_Params
	{
	public:
		struct FFMapInfo                                           SelectedMapInfo;                                         // 0x0000(0x0048)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		struct FFGameModeInfo                                      SelectedGMInfo;                                          // 0x0048(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.AppendOptionsFromActiveModifiers
	 */
	struct UWBP_OptionMenu_CreateGame_C_AppendOptionsFromActiveModifiers_Params
	{	};

	/**
	 * Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.GetActiveModifiers
	 */
	struct UWBP_OptionMenu_CreateGame_C_GetActiveModifiers_Params
	{
	public:
		unsigned char                                              UnknownData_PWT1[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.AppendTravelURL
	 */
	struct UWBP_OptionMenu_CreateGame_C_AppendTravelURL_Params
	{
	public:
		class FString                                              OptionsToAdd;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.AddMapToList
	 */
	struct UWBP_OptionMenu_CreateGame_C_AddMapToList_Params
	{
	public:
		struct FFMapInfo                                           MapInfo;                                                 // 0x0000(0x0048)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		class UBP_MapListItemData_C*                               NewMapItem;                                              // 0x0048(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.CreateMapListItem
	 */
	struct UWBP_OptionMenu_CreateGame_C_CreateMapListItem_Params
	{
	public:
		struct FFMapInfo                                           MapInfo;                                                 // 0x0000(0x0048)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		class UBP_MapListItemData_C*                               MapItem;                                                 // 0x0048(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.RepopulateMapListFromRegistry
	 */
	struct UWBP_OptionMenu_CreateGame_C_RepopulateMapListFromRegistry_Params
	{
	public:
		class UBP_GMListItemData_C*                                GMItemFilter;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.RepopulateGameListFromRegistry
	 */
	struct UWBP_OptionMenu_CreateGame_C_RepopulateGameListFromRegistry_Params
	{	};

	/**
	 * Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.ShouldAddGMListing
	 */
	struct UWBP_OptionMenu_CreateGame_C_ShouldAddGMListing_Params
	{
	public:
		class UHDGameModeDefinition*                               GMDef;                                                   // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bAddListing;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.FetchGameModesFromRegistry
	 */
	struct UWBP_OptionMenu_CreateGame_C_FetchGameModesFromRegistry_Params
	{
	public:
		TArray<struct FFGameModeInfo>                              GMsFound;                                                // 0x0000(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.ShouldAddMapListing
	 */
	struct UWBP_OptionMenu_CreateGame_C_ShouldAddMapListing_Params
	{
	public:
		struct FPrimaryAssetId                                     MapAssetId;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		bool                                                       bAddListing;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.FetchMapsFromRegistry
	 */
	struct UWBP_OptionMenu_CreateGame_C_FetchMapsFromRegistry_Params
	{
	public:
		TArray<struct FFMapInfo>                                   MapsFound;                                               // 0x0000(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.Completed_D5E8D9AE41A0DF3C4DEC0184D72FF481
	 */
	struct UWBP_OptionMenu_CreateGame_C_Completed_D5E8D9AE41A0DF3C4DEC0184D72FF481_Params
	{
	public:
		TArray<class UObject*>                                     Loaded;                                                  // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.BndEvt__CreateGameBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_OptionMenu_CreateGame_C_BndEvt__CreateGameBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.OnInitialized
	 */
	struct UWBP_OptionMenu_CreateGame_C_OnInitialized_Params
	{	};

	/**
	 * Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.BndEvt__GMList_K2Node_ComponentBoundEvent_2_OnListItemSelectionChangedDynamic__DelegateSignature
	 */
	struct UWBP_OptionMenu_CreateGame_C_BndEvt__GMList_K2Node_ComponentBoundEvent_2_OnListItemSelectionChangedDynamic__DelegateSignature_Params
	{
	public:
		class UObject*                                             Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsSelected;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.BndEvt__GMList_K2Node_ComponentBoundEvent_3_OnListEntryInitializedDynamic__DelegateSignature
	 */
	struct UWBP_OptionMenu_CreateGame_C_BndEvt__GMList_K2Node_ComponentBoundEvent_3_OnListEntryInitializedDynamic__DelegateSignature_Params
	{
	public:
		class UObject*                                             Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UUserWidget*                                         Widget;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.BndEvt__MapList_K2Node_ComponentBoundEvent_5_OnListEntryInitializedDynamic__DelegateSignature
	 */
	struct UWBP_OptionMenu_CreateGame_C_BndEvt__MapList_K2Node_ComponentBoundEvent_5_OnListEntryInitializedDynamic__DelegateSignature_Params
	{
	public:
		class UObject*                                             Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UUserWidget*                                         Widget;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.BndEvt__MapList_K2Node_ComponentBoundEvent_1_OnListItemSelectionChangedDynamic__DelegateSignature
	 */
	struct UWBP_OptionMenu_CreateGame_C_BndEvt__MapList_K2Node_ComponentBoundEvent_1_OnListItemSelectionChangedDynamic__DelegateSignature_Params
	{
	public:
		class UObject*                                             Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsSelected;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.FetchGameModes
	 */
	struct UWBP_OptionMenu_CreateGame_C_FetchGameModes_Params
	{	};

	/**
	 * Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.Destruct
	 */
	struct UWBP_OptionMenu_CreateGame_C_Destruct_Params
	{	};

	/**
	 * Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.ExecuteUbergraph_WBP_OptionMenu_CreateGame
	 */
	struct UWBP_OptionMenu_CreateGame_C_ExecuteUbergraph_WBP_OptionMenu_CreateGame_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8IYD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C.OnBuildTravelURL__DelegateSignature
	 */
	struct UWBP_OptionMenu_CreateGame_C_OnBuildTravelURL__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
