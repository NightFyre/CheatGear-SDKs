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
	 * Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.UpdateObjectiveStatus
	 */
	struct UBP_Widget_TacticalMapPawn_C_UpdateObjectiveStatus_Params
	{	};

	/**
	 * Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.OnObjectiveStateChange
	 */
	struct UBP_Widget_TacticalMapPawn_C_OnObjectiveStateChange_Params
	{	};

	/**
	 * Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.UpdatePlayerClassIconVisibility
	 */
	struct UBP_Widget_TacticalMapPawn_C_UpdatePlayerClassIconVisibility_Params
	{	};

	/**
	 * Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.SetPlayerClassIcon
	 */
	struct UBP_Widget_TacticalMapPawn_C_SetPlayerClassIcon_Params
	{	};

	/**
	 * Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.UpdatePlayerColor
	 */
	struct UBP_Widget_TacticalMapPawn_C_UpdatePlayerColor_Params
	{	};

	/**
	 * Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.CheckLocalPlayerAnimation
	 */
	struct UBP_Widget_TacticalMapPawn_C_CheckLocalPlayerAnimation_Params
	{	};

	/**
	 * Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.GetNameVisibility
	 */
	struct UBP_Widget_TacticalMapPawn_C_GetNameVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.GetArrowColor
	 */
	struct UBP_Widget_TacticalMapPawn_C_GetArrowColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.Construct
	 */
	struct UBP_Widget_TacticalMapPawn_C_Construct_Params
	{	};

	/**
	 * Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.Tick
	 */
	struct UBP_Widget_TacticalMapPawn_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.BndEvt__SpectatePlayerBtn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_Widget_TacticalMapPawn_C_BndEvt__SpectatePlayerBtn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.BndEvt__SpectatePlayerBtn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBP_Widget_TacticalMapPawn_C_BndEvt__SpectatePlayerBtn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.BndEvt__SpectatePlayerBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBP_Widget_TacticalMapPawn_C_BndEvt__SpectatePlayerBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.BlueprintOnUpdateLocalViewTarget
	 */
	struct UBP_Widget_TacticalMapPawn_C_BlueprintOnUpdateLocalViewTarget_Params
	{	};

	/**
	 * Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.WidgetAnimationEvt_AnimPulse_K2Node_WidgetAnimationEvent_1
	 */
	struct UBP_Widget_TacticalMapPawn_C_WidgetAnimationEvt_AnimPulse_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.WidgetAnimationEvt_AnimPulse_K2Node_WidgetAnimationEvent_2
	 */
	struct UBP_Widget_TacticalMapPawn_C_WidgetAnimationEvt_AnimPulse_K2Node_WidgetAnimationEvent_2_Params
	{	};

	/**
	 * Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.BlueprintOnTeamChange
	 */
	struct UBP_Widget_TacticalMapPawn_C_BlueprintOnTeamChange_Params
	{
	public:
		unsigned char                                              TeamId;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KP3B[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ATeamInfo*                                           TeamInfo;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.OnPlayerClassChanged
	 */
	struct UBP_Widget_TacticalMapPawn_C_OnPlayerClassChanged_Params
	{
	public:
		class AINSSoldier*                                         Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.BlueprintOnUpdateObjective
	 */
	struct UBP_Widget_TacticalMapPawn_C_BlueprintOnUpdateObjective_Params
	{
	public:
		class AINSPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AObjectiveBase*                                      NewActiveObjective;                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.BlueprintOnObjectiveStateChange
	 */
	struct UBP_Widget_TacticalMapPawn_C_BlueprintOnObjectiveStateChange_Params
	{	};

	/**
	 * Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.ExecuteUbergraph_BP_Widget_TacticalMapPawn
	 */
	struct UBP_Widget_TacticalMapPawn_C_ExecuteUbergraph_BP_Widget_TacticalMapPawn_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_TacticalMapPawn.BP_Widget_TacticalMapPawn_C.OnHoverStatusChanged__DelegateSignature
	 */
	struct UBP_Widget_TacticalMapPawn_C_OnHoverStatusChanged__DelegateSignature_Params
	{
	public:
		class AINSPlayerState*                                     Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Hovered;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
