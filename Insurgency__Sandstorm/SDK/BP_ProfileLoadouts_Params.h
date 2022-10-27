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
	 * Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.OnNavToFuctionDown
	 */
	struct UBP_ProfileLoadouts_C_OnNavToFuctionDown_Params
	{
	public:
		class UWidget*                                             CurrentPosition;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.GetMenuSection
	 */
	struct UBP_ProfileLoadouts_C_GetMenuSection_Params
	{
	public:
		struct FMenuSquadLayoutSection                             MenuSection;                                             // 0x0000(0x0028)  (Parm, OutParm)
	};

	/**
	 * Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.OnXPUpdated
	 */
	struct UBP_ProfileLoadouts_C_OnXPUpdated_Params
	{
	public:
		int64_t                                                    InXP;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.OnCustomNavigation
	 */
	struct UBP_ProfileLoadouts_C_OnCustomNavigation_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                Key;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.IsCompetitiveSection
	 */
	struct UBP_ProfileLoadouts_C_IsCompetitiveSection_Params
	{
	public:
		struct FMenuSquadLayoutSection                             Layout_section;                                          // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_60A3[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.OnTimeButtonClicked
	 */
	struct UBP_ProfileLoadouts_C_OnTimeButtonClicked_Params
	{
	public:
		class FString                                              Parameter;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.SetWeaponPreviewRotation
	 */
	struct UBP_ProfileLoadouts_C_SetWeaponPreviewRotation_Params
	{	};

	/**
	 * Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.RegisterWeaponPreview
	 */
	struct UBP_ProfileLoadouts_C_RegisterWeaponPreview_Params
	{	};

	/**
	 * Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.GetPlayerExperience
	 */
	struct UBP_ProfileLoadouts_C_GetPlayerExperience_Params
	{
	public:
		int32_t                                                    PlayerExperience;                                        // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RF7A[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.IsClassRestricted
	 */
	struct UBP_ProfileLoadouts_C_IsClassRestricted_Params
	{
	public:
		struct FPlayerClassLimit                                   Class_Slot;                                              // 0x0000(0x0210)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       Result;                                                  // 0x0210(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8BMX[0x3];                                   // 0x0211(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.OnFocusReceived
	 */
	struct UBP_ProfileLoadouts_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.CanNavigateBack
	 */
	struct UBP_ProfileLoadouts_C_CanNavigateBack_Params
	{
	public:
		bool                                                       CanNavigate;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JQ13[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.PressBackButton
	 */
	struct UBP_ProfileLoadouts_C_PressBackButton_Params
	{	};

	/**
	 * Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.ResetPreviewMeshes
	 */
	struct UBP_ProfileLoadouts_C_ResetPreviewMeshes_Params
	{	};

	/**
	 * Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.SelectLoadoutCamera
	 */
	struct UBP_ProfileLoadouts_C_SelectLoadoutCamera_Params
	{
	public:
		bool                                                       bCharacter;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Q36N[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.OnTabSelected
	 */
	struct UBP_ProfileLoadouts_C_OnTabSelected_Params
	{	};

	/**
	 * Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.HoveredPlayerClass
	 */
	struct UBP_ProfileLoadouts_C_HoveredPlayerClass_Params
	{
	public:
		class UPlayerClass*                                        PlayerClass;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Slot;                                                    // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bHoverState;                                             // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_15PF[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPlayerClassLimit                                   PlayerClassLimit;                                        // 0x0010(0x0210)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.SaveLoadout
	 */
	struct UBP_ProfileLoadouts_C_SaveLoadout_Params
	{	};

	/**
	 * Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.SelectPlayerClass
	 */
	struct UBP_ProfileLoadouts_C_SelectPlayerClass_Params
	{
	public:
		class UPlayerClass*                                        PlayerClass;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ClassSlot;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2KFZ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.UpdateSelectedGametypeButton
	 */
	struct UBP_ProfileLoadouts_C_UpdateSelectedGametypeButton_Params
	{	};

	/**
	 * Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.UpdateSelectedFactionButton
	 */
	struct UBP_ProfileLoadouts_C_UpdateSelectedFactionButton_Params
	{	};

	/**
	 * Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.SetupPlayerClasses
	 */
	struct UBP_ProfileLoadouts_C_SetupPlayerClasses_Params
	{
	public:
		struct FMenuSquadLayoutSection                             MenuSection;                                             // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.SelectGametype
	 */
	struct UBP_ProfileLoadouts_C_SelectGametype_Params
	{
	public:
		int32_t                                                    GameTypeId;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FZTG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.SelectFaction
	 */
	struct UBP_ProfileLoadouts_C_SelectFaction_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.OnGametypeButtonPressed
	 */
	struct UBP_ProfileLoadouts_C_OnGametypeButtonPressed_Params
	{
	public:
		class FString                                              Parameter;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.OnFactionButtonPressed
	 */
	struct UBP_ProfileLoadouts_C_OnFactionButtonPressed_Params
	{
	public:
		class FString                                              Parameter;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.RefreshData
	 */
	struct UBP_ProfileLoadouts_C_RefreshData_Params
	{	};

	/**
	 * Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.Construct
	 */
	struct UBP_ProfileLoadouts_C_Construct_Params
	{	};

	/**
	 * Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.OnRefreshMenuSquadLayouts
	 */
	struct UBP_ProfileLoadouts_C_OnRefreshMenuSquadLayouts_Params
	{	};

	/**
	 * Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.BndEvt__KitSelectUI_K2Node_ComponentBoundEvent_0_OnLoadoutConfirmed__DelegateSignature
	 */
	struct UBP_ProfileLoadouts_C_BndEvt__KitSelectUI_K2Node_ComponentBoundEvent_0_OnLoadoutConfirmed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.BndEvt__KitSelectUI_K2Node_ComponentBoundEvent_1_OnSetWeaponCamera__DelegateSignature
	 */
	struct UBP_ProfileLoadouts_C_BndEvt__KitSelectUI_K2Node_ComponentBoundEvent_1_OnSetWeaponCamera__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.BndEvt__KitSelectUI_K2Node_ComponentBoundEvent_2_OnSetSoldierCamera__DelegateSignature
	 */
	struct UBP_ProfileLoadouts_C_BndEvt__KitSelectUI_K2Node_ComponentBoundEvent_2_OnSetSoldierCamera__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.BndEvt__KitSelectUI_K2Node_ComponentBoundEvent_3_OnCharacterRotated__DelegateSignature
	 */
	struct UBP_ProfileLoadouts_C_BndEvt__KitSelectUI_K2Node_ComponentBoundEvent_3_OnCharacterRotated__DelegateSignature_Params
	{
	public:
		struct FRotator                                            NewRotation;                                             // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.BndEvt__KitSelectUI_K2Node_ComponentBoundEvent_4_OnItemSlotSelectedDelegate__DelegateSignature
	 */
	struct UBP_ProfileLoadouts_C_BndEvt__KitSelectUI_K2Node_ComponentBoundEvent_4_OnItemSlotSelectedDelegate__DelegateSignature_Params
	{
	public:
		EItemSlot                                                  ItemSlot;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OPNR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    SubSlot;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSoldierCamera;                                          // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.BndEvt__KitSelectUI_K2Node_ComponentBoundEvent_5_OnWeaponRotated__DelegateSignature
	 */
	struct UBP_ProfileLoadouts_C_BndEvt__KitSelectUI_K2Node_ComponentBoundEvent_5_OnWeaponRotated__DelegateSignature_Params
	{
	public:
		struct FRotator                                            NewRotation;                                             // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.OnLoadoutCanceled
	 */
	struct UBP_ProfileLoadouts_C_OnLoadoutCanceled_Params
	{	};

	/**
	 * Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.OnLightScenarioSelected
	 */
	struct UBP_ProfileLoadouts_C_OnLightScenarioSelected_Params
	{	};

	/**
	 * Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.BndEvt__KitSelectUI_K2Node_ComponentBoundEvent_6_OnNavigateBack__DelegateSignature
	 */
	struct UBP_ProfileLoadouts_C_BndEvt__KitSelectUI_K2Node_ComponentBoundEvent_6_OnNavigateBack__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_7_OnPressed__DelegateSignature
	 */
	struct UBP_ProfileLoadouts_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_7_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.ExecuteUbergraph_BP_ProfileLoadouts
	 */
	struct UBP_ProfileLoadouts_C_ExecuteUbergraph_BP_ProfileLoadouts_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NIS4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.OnPressedBackButton__DelegateSignature
	 */
	struct UBP_ProfileLoadouts_C_OnPressedBackButton__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ProfileLoadouts.BP_ProfileLoadouts_C.OnLoadoutPanelSwitched__DelegateSignature
	 */
	struct UBP_ProfileLoadouts_C_OnLoadoutPanelSwitched__DelegateSignature_Params
	{
	public:
		int32_t                                                    NewPanelIndex;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
