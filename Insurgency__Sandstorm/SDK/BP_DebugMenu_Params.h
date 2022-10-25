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
	 * Function BP_DebugMenu.BP_DebugMenu_C.PopulateMusicEvents
	 */
	struct UBP_DebugMenu_C_PopulateMusicEvents_Params
	{	};

	/**
	 * Function BP_DebugMenu.BP_DebugMenu_C.OnSelectGoBack
	 */
	struct UBP_DebugMenu_C_OnSelectGoBack_Params
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBP_DebugMenuButton_C*                               Button;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DebugMenu.BP_DebugMenu_C.IsAdmin
	 */
	struct UBP_DebugMenu_C_IsAdmin_Params
	{
	public:
		bool                                                       bIsAdmin;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GRCV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_DebugMenu.BP_DebugMenu_C.BindingServerBtnEnabled
	 */
	struct UBP_DebugMenu_C_BindingServerBtnEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_DebugMenu.BP_DebugMenu_C.BackDefault
	 */
	struct UBP_DebugMenu_C_BackDefault_Params
	{
	public:
		class UBP_DebugMenuButton_C*                               SelectedButton;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DebugMenu.BP_DebugMenu_C.PopulateWeaponUpgrades
	 */
	struct UBP_DebugMenu_C_PopulateWeaponUpgrades_Params
	{	};

	/**
	 * Function BP_DebugMenu.BP_DebugMenu_C.PopulateWeaponList
	 */
	struct UBP_DebugMenu_C_PopulateWeaponList_Params
	{	};

	/**
	 * Function BP_DebugMenu.BP_DebugMenu_C.ToggleDebugMenu
	 */
	struct UBP_DebugMenu_C_ToggleDebugMenu_Params
	{	};

	/**
	 * Function BP_DebugMenu.BP_DebugMenu_C.GetText_1
	 */
	struct UBP_DebugMenu_C_GetText_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_DebugMenu.BP_DebugMenu_C.OnKeyDown
	 */
	struct UBP_DebugMenu_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_DebugMenu.BP_DebugMenu_C.OnFocusReceived
	 */
	struct UBP_DebugMenu_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_DebugMenu.BP_DebugMenu_C.GetWidgetToFocus
	 */
	struct UBP_DebugMenu_C_GetWidgetToFocus_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DebugMenu.BP_DebugMenu_C.PopHistory
	 */
	struct UBP_DebugMenu_C_PopHistory_Params
	{
	public:
		bool                                                       bHasData;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EBP_DebugMenuPages                                         Type;                                                    // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DebugMenu.BP_DebugMenu_C.PushHistory
	 */
	struct UBP_DebugMenu_C_PushHistory_Params
	{
	public:
		EBP_DebugMenuPages                                         Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3C5M[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_DebugMenu.BP_DebugMenu_C.GetTitleText
	 */
	struct UBP_DebugMenu_C_GetTitleText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_DebugMenu.BP_DebugMenu_C.Back
	 */
	struct UBP_DebugMenu_C_Back_Params
	{
	public:
		bool                                                       bCloseOnRoot;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_DebugMenu.BP_DebugMenu_C.OnChildCommand
	 */
	struct UBP_DebugMenu_C_OnChildCommand_Params
	{
	public:
		class FString                                              Command;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DebugMenu.BP_DebugMenu_C.OpenCommandList
	 */
	struct UBP_DebugMenu_C_OpenCommandList_Params
	{
	public:
		EBP_DebugMenuPages                                         Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_B5K6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_DebugMenu.BP_DebugMenu_C.Construct
	 */
	struct UBP_DebugMenu_C_Construct_Params
	{	};

	/**
	 * Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__BtnChangeLevelSubmenu_K2Node_ComponentBoundEvent_44_OnClicked__DelegateSignature
	 */
	struct UBP_DebugMenu_C_BndEvt__BtnChangeLevelSubmenu_K2Node_ComponentBoundEvent_44_OnClicked__DelegateSignature_Params
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBP_DebugMenuButton_C*                               Button;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__BtnLevelOpenCompoundFire_K2Node_ComponentBoundEvent_93_OnClicked__DelegateSignature
	 */
	struct UBP_DebugMenu_C_BndEvt__BtnLevelOpenCompoundFire_K2Node_ComponentBoundEvent_93_OnClicked__DelegateSignature_Params
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBP_DebugMenuButton_C*                               Button;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__BtnSubmenuAI_K2Node_ComponentBoundEvent_24_OnClicked__DelegateSignature
	 */
	struct UBP_DebugMenu_C_BndEvt__BtnSubmenuAI_K2Node_ComponentBoundEvent_24_OnClicked__DelegateSignature_Params
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBP_DebugMenuButton_C*                               Button;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__BtnSubmenuPlayer_K2Node_ComponentBoundEvent_110_OnClicked__DelegateSignature
	 */
	struct UBP_DebugMenu_C_BndEvt__BtnSubmenuPlayer_K2Node_ComponentBoundEvent_110_OnClicked__DelegateSignature_Params
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBP_DebugMenuButton_C*                               Button;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__BtnGiveWeapon_K2Node_ComponentBoundEvent_121_OnClicked__DelegateSignature
	 */
	struct UBP_DebugMenu_C_BndEvt__BtnGiveWeapon_K2Node_ComponentBoundEvent_121_OnClicked__DelegateSignature_Params
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBP_DebugMenuButton_C*                               Button;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__BtnGiveWeaponUpgrade_K2Node_ComponentBoundEvent_133_OnClicked__DelegateSignature
	 */
	struct UBP_DebugMenu_C_BndEvt__BtnGiveWeaponUpgrade_K2Node_ComponentBoundEvent_133_OnClicked__DelegateSignature_Params
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBP_DebugMenuButton_C*                               Button;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__BtnSubmenuVisuals_K2Node_ComponentBoundEvent_95_OnClicked__DelegateSignature
	 */
	struct UBP_DebugMenu_C_BndEvt__BtnSubmenuVisuals_K2Node_ComponentBoundEvent_95_OnClicked__DelegateSignature_Params
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBP_DebugMenuButton_C*                               Button;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__BtnToggleBulletImpacts_K2Node_ComponentBoundEvent_163_OnClicked__DelegateSignature
	 */
	struct UBP_DebugMenu_C_BndEvt__BtnToggleBulletImpacts_K2Node_ComponentBoundEvent_163_OnClicked__DelegateSignature_Params
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBP_DebugMenuButton_C*                               Button;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__BtnToggleBulletTraces_K2Node_ComponentBoundEvent_38_OnClicked__DelegateSignature
	 */
	struct UBP_DebugMenu_C_BndEvt__BtnToggleBulletTraces_K2Node_ComponentBoundEvent_38_OnClicked__DelegateSignature_Params
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBP_DebugMenuButton_C*                               Button;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__BtnSubmenuServer_K2Node_ComponentBoundEvent_35_OnClicked__DelegateSignature
	 */
	struct UBP_DebugMenu_C_BndEvt__BtnSubmenuServer_K2Node_ComponentBoundEvent_35_OnClicked__DelegateSignature_Params
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBP_DebugMenuButton_C*                               Button;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__BtnServerChangeLevel_K2Node_ComponentBoundEvent_222_OnClicked__DelegateSignature
	 */
	struct UBP_DebugMenu_C_BndEvt__BtnServerChangeLevel_K2Node_ComponentBoundEvent_222_OnClicked__DelegateSignature_Params
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBP_DebugMenuButton_C*                               Button;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__BtnServerEndRoundVictory_K2Node_ComponentBoundEvent_59_OnClicked__DelegateSignature
	 */
	struct UBP_DebugMenu_C_BndEvt__BtnServerEndRoundVictory_K2Node_ComponentBoundEvent_59_OnClicked__DelegateSignature_Params
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBP_DebugMenuButton_C*                               Button;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__BtnServerEndRoundDefeat_K2Node_ComponentBoundEvent_85_OnClicked__DelegateSignature
	 */
	struct UBP_DebugMenu_C_BndEvt__BtnServerEndRoundDefeat_K2Node_ComponentBoundEvent_85_OnClicked__DelegateSignature_Params
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBP_DebugMenuButton_C*                               Button;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DebugMenu.BP_DebugMenu_C.OnMusicEventSelected
	 */
	struct UBP_DebugMenu_C_OnMusicEventSelected_Params
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBP_DebugMenuButton_C*                               Button;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__BP_DebugMenuButton_C_2_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UBP_DebugMenu_C_BndEvt__BP_DebugMenuButton_C_2_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBP_DebugMenuButton_C*                               Button;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__BtnBeginProfiling_K2Node_ComponentBoundEvent_60_OnClicked__DelegateSignature
	 */
	struct UBP_DebugMenu_C_BndEvt__BtnBeginProfiling_K2Node_ComponentBoundEvent_60_OnClicked__DelegateSignature_Params
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBP_DebugMenuButton_C*                               Button;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__BtnBeginProfilingMatch_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UBP_DebugMenu_C_BndEvt__BtnBeginProfilingMatch_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBP_DebugMenuButton_C*                               Button;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__BtnSkipMatchWaiting_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UBP_DebugMenu_C_BndEvt__BtnSkipMatchWaiting_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBP_DebugMenuButton_C*                               Button;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__CloseImageButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 */
	struct UBP_DebugMenu_C_BndEvt__CloseImageButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__HurtMeHealthAmount_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UBP_DebugMenu_C_BndEvt__HurtMeHealthAmount_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__ZCords_K2Node_ComponentBoundEvent_6_OnEditableTextChangedEvent__DelegateSignature
	 */
	struct UBP_DebugMenu_C_BndEvt__ZCords_K2Node_ComponentBoundEvent_6_OnEditableTextChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__YCords_K2Node_ComponentBoundEvent_7_OnEditableTextChangedEvent__DelegateSignature
	 */
	struct UBP_DebugMenu_C_BndEvt__YCords_K2Node_ComponentBoundEvent_7_OnEditableTextChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__XCords_K2Node_ComponentBoundEvent_8_OnEditableTextChangedEvent__DelegateSignature
	 */
	struct UBP_DebugMenu_C_BndEvt__XCords_K2Node_ComponentBoundEvent_8_OnEditableTextChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_DebugMenu.BP_DebugMenu_C.ExecuteUbergraph_BP_DebugMenu
	 */
	struct UBP_DebugMenu_C_ExecuteUbergraph_BP_DebugMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IJ45[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
