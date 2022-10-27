#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.GatherAssets
	 */
	struct ABP_AN_PEQ_Master_C_GatherAssets_Params
	{
	public:
		TArray<struct FSoftObjectPath>                             OutAssets;                                               // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.OnRep_bIlluminator_High
	 */
	struct ABP_AN_PEQ_Master_C_OnRep_bIlluminator_High_Params
	{	};

	/**
	 * Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.OnRep_bMode_IRLaser
	 */
	struct ABP_AN_PEQ_Master_C_OnRep_bMode_IRLaser_Params
	{	};

	/**
	 * Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.OnRep_bIlluminatorActive
	 */
	struct ABP_AN_PEQ_Master_C_OnRep_bIlluminatorActive_Params
	{	};

	/**
	 * Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.OnRep_bLaserActive
	 */
	struct ABP_AN_PEQ_Master_C_OnRep_bLaserActive_Params
	{	};

	/**
	 * Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.AllowUsageWhileAttached
	 */
	struct ABP_AN_PEQ_Master_C_AllowUsageWhileAttached_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.InpActEvt_ToggleLaser_K2Node_InputActionEvent_7
	 */
	struct ABP_AN_PEQ_Master_C_InpActEvt_ToggleLaser_K2Node_InputActionEvent_7_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.InpActEvt_ToggleLaser_K2Node_InputActionEvent_6
	 */
	struct ABP_AN_PEQ_Master_C_InpActEvt_ToggleLaser_K2Node_InputActionEvent_6_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.InpActEvt_ToggleLightSource_K2Node_InputActionEvent_5
	 */
	struct ABP_AN_PEQ_Master_C_InpActEvt_ToggleLightSource_K2Node_InputActionEvent_5_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.InpActEvt_ToggleLightSource_K2Node_InputActionEvent_4
	 */
	struct ABP_AN_PEQ_Master_C_InpActEvt_ToggleLightSource_K2Node_InputActionEvent_4_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.InpActEvt_IncreaseReticleBrightnessLevel_K2Node_InputActionEvent_3
	 */
	struct ABP_AN_PEQ_Master_C_InpActEvt_IncreaseReticleBrightnessLevel_K2Node_InputActionEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.InpActEvt_DecreaseReticleBrightnessLevel_K2Node_InputActionEvent_2
	 */
	struct ABP_AN_PEQ_Master_C_InpActEvt_DecreaseReticleBrightnessLevel_K2Node_InputActionEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.InpActEvt_ToggleLaserMode_K2Node_InputActionEvent_1
	 */
	struct ABP_AN_PEQ_Master_C_InpActEvt_ToggleLaserMode_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.AddAttachedUseMenuEntries
	 */
	struct ABP_AN_PEQ_Master_C_AddAttachedUseMenuEntries_Params
	{
	public:
		class UUserWidget*                                         UsageMenu;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.OnSelected_Laser_Event
	 */
	struct ABP_AN_PEQ_Master_C_OnSelected_Laser_Event_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.OnStartUsing
	 */
	struct ABP_AN_PEQ_Master_C_OnStartUsing_Params
	{
	public:
		int32_t                                                    UseType;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.AddLaserEntry
	 */
	struct ABP_AN_PEQ_Master_C_AddLaserEntry_Params
	{
	public:
		class UWBP_RadialMenu_C*                                   UsageMenu;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.InternalUpdateLaser
	 */
	struct ABP_AN_PEQ_Master_C_InternalUpdateLaser_Params
	{	};

	/**
	 * Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.CharacterPlayDying_Event_1
	 */
	struct ABP_AN_PEQ_Master_C_CharacterPlayDying_Event_1_Params
	{
	public:
		class AGBCharacter*                                        Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.ReceiveBeginPlay
	 */
	struct ABP_AN_PEQ_Master_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.OnLocalPlayerTagsUpdated_Event_1
	 */
	struct ABP_AN_PEQ_Master_C_OnLocalPlayerTagsUpdated_Event_1_Params
	{
	public:
		class AGBPlayerController*                                 PlayerController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.InteralUpdateIlluminatorStatus
	 */
	struct ABP_AN_PEQ_Master_C_InteralUpdateIlluminatorStatus_Params
	{	};

	/**
	 * Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.AddIlluminatorEntry
	 */
	struct ABP_AN_PEQ_Master_C_AddIlluminatorEntry_Params
	{
	public:
		class UWBP_RadialMenu_C*                                   UsageMenu;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.OnSelected_Illuminator_Event
	 */
	struct ABP_AN_PEQ_Master_C_OnSelected_Illuminator_Event_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.BindToLocalPlayerTagsUpdated
	 */
	struct ABP_AN_PEQ_Master_C_BindToLocalPlayerTagsUpdated_Params
	{	};

	/**
	 * Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.OnStopUsing
	 */
	struct ABP_AN_PEQ_Master_C_OnStopUsing_Params
	{
	public:
		int32_t                                                    UseType;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.OnSelected_LaserMode_Event
	 */
	struct ABP_AN_PEQ_Master_C_OnSelected_LaserMode_Event_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.DisplayLaserModeChangeMessage
	 */
	struct ABP_AN_PEQ_Master_C_DisplayLaserModeChangeMessage_Params
	{	};

	/**
	 * Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.OnBeingUnequipped
	 */
	struct ABP_AN_PEQ_Master_C_OnBeingUnequipped_Params
	{	};

	/**
	 * Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.OnBeingEquipped
	 */
	struct ABP_AN_PEQ_Master_C_OnBeingEquipped_Params
	{	};

	/**
	 * Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.MulticastSetLaserActive
	 */
	struct ABP_AN_PEQ_Master_C_MulticastSetLaserActive_Params
	{
	public:
		bool                                                       bLaserActive;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.MulticastSetIlluminatorActive
	 */
	struct ABP_AN_PEQ_Master_C_MulticastSetIlluminatorActive_Params
	{
	public:
		bool                                                       bIlluminatorActive;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.MulticasModeIRLaser
	 */
	struct ABP_AN_PEQ_Master_C_MulticasModeIRLaser_Params
	{
	public:
		bool                                                       bMode_IRLaser;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.MulticastSetIlluminatorHigh
	 */
	struct ABP_AN_PEQ_Master_C_MulticastSetIlluminatorHigh_Params
	{
	public:
		bool                                                       bIlluminator_High;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.OnLoadAssetsComplete
	 */
	struct ABP_AN_PEQ_Master_C_OnLoadAssetsComplete_Params
	{	};

	/**
	 * Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.OnAddedToInventoryEvent
	 */
	struct ABP_AN_PEQ_Master_C_OnAddedToInventoryEvent_Params
	{	};

	/**
	 * Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.OnRemovedFromInventoryEvent
	 */
	struct ABP_AN_PEQ_Master_C_OnRemovedFromInventoryEvent_Params
	{	};

	/**
	 * Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.ExecuteUbergraph_BP_AN_PEQ_Master
	 */
	struct ABP_AN_PEQ_Master_C_ExecuteUbergraph_BP_AN_PEQ_Master_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q14O[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
