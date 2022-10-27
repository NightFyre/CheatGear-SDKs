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
	 * Function AnimAction_SwitchItem_Master.AnimAction_SwitchItem_Master_C.GatherAssets
	 */
	struct UAnimAction_SwitchItem_Master_C_GatherAssets_Params
	{
	public:
		TArray<struct FSoftObjectPath>                             OutAssets;                                               // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function AnimAction_SwitchItem_Master.AnimAction_SwitchItem_Master_C.TriggerAction
	 */
	struct UAnimAction_SwitchItem_Master_C_TriggerAction_Params
	{	};

	/**
	 * Function AnimAction_SwitchItem_Master.AnimAction_SwitchItem_Master_C.Equip
	 */
	struct UAnimAction_SwitchItem_Master_C_Equip_Params
	{	};

	/**
	 * Function AnimAction_SwitchItem_Master.AnimAction_SwitchItem_Master_C.Unequip
	 */
	struct UAnimAction_SwitchItem_Master_C_Unequip_Params
	{	};

	/**
	 * Function AnimAction_SwitchItem_Master.AnimAction_SwitchItem_Master_C.PlaySound
	 */
	struct UAnimAction_SwitchItem_Master_C_PlaySound_Params
	{
	public:
		class UAkAudioEvent*                                       AkEvent;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AnimAction_SwitchItem_Master.AnimAction_SwitchItem_Master_C.OnLoadAssetsComplete
	 */
	struct UAnimAction_SwitchItem_Master_C_OnLoadAssetsComplete_Params
	{	};

	/**
	 * Function AnimAction_SwitchItem_Master.AnimAction_SwitchItem_Master_C.OnMontageEndedEvent
	 */
	struct UAnimAction_SwitchItem_Master_C_OnMontageEndedEvent_Params
	{
	public:
		bool                                                       bInterrupted;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AnimAction_SwitchItem_Master.AnimAction_SwitchItem_Master_C.TryEndAction
	 */
	struct UAnimAction_SwitchItem_Master_C_TryEndAction_Params
	{	};

	/**
	 * Function AnimAction_SwitchItem_Master.AnimAction_SwitchItem_Master_C.ExecuteUbergraph_AnimAction_SwitchItem_Master
	 */
	struct UAnimAction_SwitchItem_Master_C_ExecuteUbergraph_AnimAction_SwitchItem_Master_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
