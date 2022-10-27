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
	 * Function BP_FireSupportIndicator.BP_FireSupportIndicator_C.UpdateInteractionHighlightVisibility
	 */
	struct UBP_FireSupportIndicator_C_UpdateInteractionHighlightVisibility_Params
	{	};

	/**
	 * Function BP_FireSupportIndicator.BP_FireSupportIndicator_C.UpdateClassIcons
	 */
	struct UBP_FireSupportIndicator_C_UpdateClassIcons_Params
	{	};

	/**
	 * Function BP_FireSupportIndicator.BP_FireSupportIndicator_C.UpdateRadioClassInteractionColor
	 */
	struct UBP_FireSupportIndicator_C_UpdateRadioClassInteractionColor_Params
	{	};

	/**
	 * Function BP_FireSupportIndicator.BP_FireSupportIndicator_C.OnUpdateTargetCharacter
	 */
	struct UBP_FireSupportIndicator_C_OnUpdateTargetCharacter_Params
	{	};

	/**
	 * Function BP_FireSupportIndicator.BP_FireSupportIndicator_C.OnUpdateWithinRadioRange
	 */
	struct UBP_FireSupportIndicator_C_OnUpdateWithinRadioRange_Params
	{	};

	/**
	 * Function BP_FireSupportIndicator.BP_FireSupportIndicator_C.UpdateCooldownVisibility
	 */
	struct UBP_FireSupportIndicator_C_UpdateCooldownVisibility_Params
	{	};

	/**
	 * Function BP_FireSupportIndicator.BP_FireSupportIndicator_C.UpdateSelectedFireSupportVisibility
	 */
	struct UBP_FireSupportIndicator_C_UpdateSelectedFireSupportVisibility_Params
	{	};

	/**
	 * Function BP_FireSupportIndicator.BP_FireSupportIndicator_C.OnFireSupportChanged
	 */
	struct UBP_FireSupportIndicator_C_OnFireSupportChanged_Params
	{	};

	/**
	 * Function BP_FireSupportIndicator.BP_FireSupportIndicator_C.UpdateRemainingUses
	 */
	struct UBP_FireSupportIndicator_C_UpdateRemainingUses_Params
	{
	public:
		int32_t                                                    NewRemainingUses;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FireSupportIndicator.BP_FireSupportIndicator_C.UpdatePlayerClass
	 */
	struct UBP_FireSupportIndicator_C_UpdatePlayerClass_Params
	{
	public:
		class UPlayerClass*                                        PlayerClass;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FireSupportIndicator.BP_FireSupportIndicator_C.UpdateFireSupportCooldownTime
	 */
	struct UBP_FireSupportIndicator_C_UpdateFireSupportCooldownTime_Params
	{	};

	/**
	 * Function BP_FireSupportIndicator.BP_FireSupportIndicator_C.UpdateFireSupportData
	 */
	struct UBP_FireSupportIndicator_C_UpdateFireSupportData_Params
	{	};

	/**
	 * Function BP_FireSupportIndicator.BP_FireSupportIndicator_C.SetDefaultFireSupportOption
	 */
	struct UBP_FireSupportIndicator_C_SetDefaultFireSupportOption_Params
	{	};

	/**
	 * Function BP_FireSupportIndicator.BP_FireSupportIndicator_C.SetRadialMenuClass
	 */
	struct UBP_FireSupportIndicator_C_SetRadialMenuClass_Params
	{	};

	/**
	 * Function BP_FireSupportIndicator.BP_FireSupportIndicator_C.Update Distance to Target
	 */
	struct UBP_FireSupportIndicator_C_Update_Distance_to_Target_Params
	{	};

	/**
	 * Function BP_FireSupportIndicator.BP_FireSupportIndicator_C.ShouldRefreshRadioTargetCharacter
	 */
	struct UBP_FireSupportIndicator_C_ShouldRefreshRadioTargetCharacter_Params
	{
	public:
		bool                                                       ShouldRefresh;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_W3J3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_FireSupportIndicator.BP_FireSupportIndicator_C.SetClassId
	 */
	struct UBP_FireSupportIndicator_C_SetClassId_Params
	{
	public:
		class UPlayerClass*                                        NewClass;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FireSupportIndicator.BP_FireSupportIndicator_C.SetPlayerClass
	 */
	struct UBP_FireSupportIndicator_C_SetPlayerClass_Params
	{	};

	/**
	 * Function BP_FireSupportIndicator.BP_FireSupportIndicator_C.RefreshRadioTargetCharacter
	 */
	struct UBP_FireSupportIndicator_C_RefreshRadioTargetCharacter_Params
	{	};

	/**
	 * Function BP_FireSupportIndicator.BP_FireSupportIndicator_C.Construct
	 */
	struct UBP_FireSupportIndicator_C_Construct_Params
	{	};

	/**
	 * Function BP_FireSupportIndicator.BP_FireSupportIndicator_C.Tick
	 */
	struct UBP_FireSupportIndicator_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FireSupportIndicator.BP_FireSupportIndicator_C.OnResupply
	 */
	struct UBP_FireSupportIndicator_C_OnResupply_Params
	{
	public:
		class AINSSoldier*                                         Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FireSupportIndicator.BP_FireSupportIndicator_C.PreConstruct
	 */
	struct UBP_FireSupportIndicator_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_FireSupportIndicator.BP_FireSupportIndicator_C.PawnOnPlayerClassChange
	 */
	struct UBP_FireSupportIndicator_C_PawnOnPlayerClassChange_Params
	{
	public:
		class AINSSoldier*                                         Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FireSupportIndicator.BP_FireSupportIndicator_C.SoldierSpawn
	 */
	struct UBP_FireSupportIndicator_C_SoldierSpawn_Params
	{	};

	/**
	 * Function BP_FireSupportIndicator.BP_FireSupportIndicator_C.ExecuteUbergraph_BP_FireSupportIndicator
	 */
	struct UBP_FireSupportIndicator_C_ExecuteUbergraph_BP_FireSupportIndicator_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
