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
	 * Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.HideCompetitiveOnConsole
	 */
	struct UBP_Profile_Stats_Weapons_C_HideCompetitiveOnConsole_Params
	{	};

	/**
	 * Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.SetCustomNavigationRules
	 */
	struct UBP_Profile_Stats_Weapons_C_SetCustomNavigationRules_Params
	{	};

	/**
	 * Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.OnCustomNavigation
	 */
	struct UBP_Profile_Stats_Weapons_C_OnCustomNavigation_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                Key;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.GetMapNameSource
	 */
	struct UBP_Profile_Stats_Weapons_C_GetMapNameSource_Params
	{
	public:
		class FString                                              MapNameText;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              MapNameSource;                                           // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.GetMapNameText
	 */
	struct UBP_Profile_Stats_Weapons_C_GetMapNameText_Params
	{
	public:
		class FString                                              MapName;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Map_Text_Name;                                           // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.ReloadWeaponStats
	 */
	struct UBP_Profile_Stats_Weapons_C_ReloadWeaponStats_Params
	{	};

	/**
	 * Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.UpdateFilterBoxes
	 */
	struct UBP_Profile_Stats_Weapons_C_UpdateFilterBoxes_Params
	{
	public:
		bool                                                       UpdateGameType;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       UpdateMaps;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       UpdateModes;                                             // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HFDM[0x5];                                   // 0x0003(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.OnFocusReceived
	 */
	struct UBP_Profile_Stats_Weapons_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.SortByWeaponName
	 */
	struct UBP_Profile_Stats_Weapons_C_SortByWeaponName_Params
	{	};

	/**
	 * Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.GetWeaponNameSortIcon
	 */
	struct UBP_Profile_Stats_Weapons_C_GetWeaponNameSortIcon_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.GetWeaponNameTextColor
	 */
	struct UBP_Profile_Stats_Weapons_C_GetWeaponNameTextColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.GetWeaponNameBackgroundColor
	 */
	struct UBP_Profile_Stats_Weapons_C_GetWeaponNameBackgroundColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.SortByHeadshots
	 */
	struct UBP_Profile_Stats_Weapons_C_SortByHeadshots_Params
	{	};

	/**
	 * Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.GetHeadshotsSortIcon
	 */
	struct UBP_Profile_Stats_Weapons_C_GetHeadshotsSortIcon_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.GetHeadshotsTextColor
	 */
	struct UBP_Profile_Stats_Weapons_C_GetHeadshotsTextColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.GetHeadshotsBackgroundColor
	 */
	struct UBP_Profile_Stats_Weapons_C_GetHeadshotsBackgroundColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.SortByAccuracy
	 */
	struct UBP_Profile_Stats_Weapons_C_SortByAccuracy_Params
	{	};

	/**
	 * Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.GetAccuracySortIcon
	 */
	struct UBP_Profile_Stats_Weapons_C_GetAccuracySortIcon_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.GetAccuracyTextColor
	 */
	struct UBP_Profile_Stats_Weapons_C_GetAccuracyTextColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.GetAccuracyBackgroundColor
	 */
	struct UBP_Profile_Stats_Weapons_C_GetAccuracyBackgroundColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.SortByTimePlayed
	 */
	struct UBP_Profile_Stats_Weapons_C_SortByTimePlayed_Params
	{	};

	/**
	 * Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.GetTimePlayedSortIcon
	 */
	struct UBP_Profile_Stats_Weapons_C_GetTimePlayedSortIcon_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.GetTimePlayedTextColor
	 */
	struct UBP_Profile_Stats_Weapons_C_GetTimePlayedTextColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.GetTimePlayedBackgroundColor
	 */
	struct UBP_Profile_Stats_Weapons_C_GetTimePlayedBackgroundColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.GetKillsSortIcon
	 */
	struct UBP_Profile_Stats_Weapons_C_GetKillsSortIcon_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.GetKillsTextColor
	 */
	struct UBP_Profile_Stats_Weapons_C_GetKillsTextColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.GetKillsBackgroundColor
	 */
	struct UBP_Profile_Stats_Weapons_C_GetKillsBackgroundColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.OnProfileUpdated
	 */
	struct UBP_Profile_Stats_Weapons_C_OnProfileUpdated_Params
	{	};

	/**
	 * Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.SortByKills
	 */
	struct UBP_Profile_Stats_Weapons_C_SortByKills_Params
	{	};

	/**
	 * Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.RebuildTableData
	 */
	struct UBP_Profile_Stats_Weapons_C_RebuildTableData_Params
	{
	public:
		TArray<struct FStatisticsPlayerWeaponStats>                WeaponStatsArray;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.Construct
	 */
	struct UBP_Profile_Stats_Weapons_C_Construct_Params
	{	};

	/**
	 * Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.BndEvt__BtnHdrKills_K2Node_ComponentBoundEvent_283_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_Profile_Stats_Weapons_C_BndEvt__BtnHdrKills_K2Node_ComponentBoundEvent_283_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.BndEvt__BtnHdrTime_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_Profile_Stats_Weapons_C_BndEvt__BtnHdrTime_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.BndEvt__BtnHdrAccuracy_K2Node_ComponentBoundEvent_202_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_Profile_Stats_Weapons_C_BndEvt__BtnHdrAccuracy_K2Node_ComponentBoundEvent_202_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.BndEvt__BtnHdrHeadshots_K2Node_ComponentBoundEvent_246_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_Profile_Stats_Weapons_C_BndEvt__BtnHdrHeadshots_K2Node_ComponentBoundEvent_246_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.BndEvt__BtnHdrName_K2Node_ComponentBoundEvent_69_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_Profile_Stats_Weapons_C_BndEvt__BtnHdrName_K2Node_ComponentBoundEvent_69_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.BndEvt__ComboBoxGameType_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UBP_Profile_Stats_Weapons_C_BndEvt__ComboBoxGameType_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.BndEvt__ComboBoxMapName_K2Node_ComponentBoundEvent_224_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UBP_Profile_Stats_Weapons_C_BndEvt__ComboBoxMapName_K2Node_ComponentBoundEvent_224_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.BndEvt__ComboBoxModeName_K2Node_ComponentBoundEvent_31_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UBP_Profile_Stats_Weapons_C_BndEvt__ComboBoxModeName_K2Node_ComponentBoundEvent_31_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Profile_Stats_Weapons.BP_Profile_Stats_Weapons_C.ExecuteUbergraph_BP_Profile_Stats_Weapons
	 */
	struct UBP_Profile_Stats_Weapons_C_ExecuteUbergraph_BP_Profile_Stats_Weapons_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AMM4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
