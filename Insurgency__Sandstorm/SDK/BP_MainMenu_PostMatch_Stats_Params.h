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
	 * Function BP_MainMenu_PostMatch_Stats.BP_MainMenu_PostMatch_Stats_C.UpdatePostMatchVisibility
	 */
	struct UBP_MainMenu_PostMatch_Stats_C_UpdatePostMatchVisibility_Params
	{	};

	/**
	 * Function BP_MainMenu_PostMatch_Stats.BP_MainMenu_PostMatch_Stats_C.UpdateCompetitiveWidgets
	 */
	struct UBP_MainMenu_PostMatch_Stats_C_UpdateCompetitiveWidgets_Params
	{	};

	/**
	 * Function BP_MainMenu_PostMatch_Stats.BP_MainMenu_PostMatch_Stats_C.OnExpProgressIncrementComplete
	 */
	struct UBP_MainMenu_PostMatch_Stats_C_OnExpProgressIncrementComplete_Params
	{	};

	/**
	 * Function BP_MainMenu_PostMatch_Stats.BP_MainMenu_PostMatch_Stats_C.OnIntroAnimationComplete
	 */
	struct UBP_MainMenu_PostMatch_Stats_C_OnIntroAnimationComplete_Params
	{	};

	/**
	 * Function BP_MainMenu_PostMatch_Stats.BP_MainMenu_PostMatch_Stats_C.StartNextAnimation
	 */
	struct UBP_MainMenu_PostMatch_Stats_C_StartNextAnimation_Params
	{	};

	/**
	 * Function BP_MainMenu_PostMatch_Stats.BP_MainMenu_PostMatch_Stats_C.Get_ExperienceGained_Text_1
	 */
	struct UBP_MainMenu_PostMatch_Stats_C_Get_ExperienceGained_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MainMenu_PostMatch_Stats.BP_MainMenu_PostMatch_Stats_C.UpdateInformation
	 */
	struct UBP_MainMenu_PostMatch_Stats_C_UpdateInformation_Params
	{	};

	/**
	 * Function BP_MainMenu_PostMatch_Stats.BP_MainMenu_PostMatch_Stats_C.OnLoaded_613CB4084D067ACF37D6D884638207F4
	 */
	struct UBP_MainMenu_PostMatch_Stats_C_OnLoaded_613CB4084D067ACF37D6D884638207F4_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_PostMatch_Stats.BP_MainMenu_PostMatch_Stats_C.Construct
	 */
	struct UBP_MainMenu_PostMatch_Stats_C_Construct_Params
	{	};

	/**
	 * Function BP_MainMenu_PostMatch_Stats.BP_MainMenu_PostMatch_Stats_C.Tick
	 */
	struct UBP_MainMenu_PostMatch_Stats_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_PostMatch_Stats.BP_MainMenu_PostMatch_Stats_C.UpdateExpBar
	 */
	struct UBP_MainMenu_PostMatch_Stats_C_UpdateExpBar_Params
	{	};

	/**
	 * Function BP_MainMenu_PostMatch_Stats.BP_MainMenu_PostMatch_Stats_C.BndEvt__Button_172_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_MainMenu_PostMatch_Stats_C_BndEvt__Button_172_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_PostMatch_Stats.BP_MainMenu_PostMatch_Stats_C.UpdateWeaponIcon
	 */
	struct UBP_MainMenu_PostMatch_Stats_C_UpdateWeaponIcon_Params
	{
	public:
		class FString                                              WeaponName;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_PostMatch_Stats.BP_MainMenu_PostMatch_Stats_C.OnScoreboardVisibilityChange
	 */
	struct UBP_MainMenu_PostMatch_Stats_C_OnScoreboardVisibilityChange_Params
	{
	public:
		bool                                                       bShow;                                                   // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MainMenu_PostMatch_Stats.BP_MainMenu_PostMatch_Stats_C.OnInGameMenuVisible
	 */
	struct UBP_MainMenu_PostMatch_Stats_C_OnInGameMenuVisible_Params
	{
	public:
		bool                                                       bNewVisibility;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MainMenu_PostMatch_Stats.BP_MainMenu_PostMatch_Stats_C.ExecuteUbergraph_BP_MainMenu_PostMatch_Stats
	 */
	struct UBP_MainMenu_PostMatch_Stats_C_ExecuteUbergraph_BP_MainMenu_PostMatch_Stats_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
