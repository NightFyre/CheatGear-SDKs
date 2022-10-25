#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * Function MenuMap_P.MenuMap_P_C.FadeDownBlackScreen__FinishedFunc
	 */
	struct AMenuMap_P_C_FadeDownBlackScreen__FinishedFunc_Params
	{	};

	/**
	 * Function MenuMap_P.MenuMap_P_C.FadeDownBlackScreen__UpdateFunc
	 */
	struct AMenuMap_P_C_FadeDownBlackScreen__UpdateFunc_Params
	{	};

	/**
	 * Function MenuMap_P.MenuMap_P_C.HandRotate__FinishedFunc
	 */
	struct AMenuMap_P_C_HandRotate__FinishedFunc_Params
	{	};

	/**
	 * Function MenuMap_P.MenuMap_P_C.HandRotate__UpdateFunc
	 */
	struct AMenuMap_P_C_HandRotate__UpdateFunc_Params
	{	};

	/**
	 * Function MenuMap_P.MenuMap_P_C.BndEvt__MenuMapMenuFlow_1_K2Node_ActorBoundEvent_0_MenuMapMenuFlowDelegate__DelegateSignature
	 */
	struct AMenuMap_P_C_BndEvt__MenuMapMenuFlow_1_K2Node_ActorBoundEvent_0_MenuMapMenuFlowDelegate__DelegateSignature_Params
	{	};

	/**
	 * Function MenuMap_P.MenuMap_P_C.BndEvt__MenuMapMenuFlow_1_K2Node_ActorBoundEvent_14_MainMenuViewpointChangedDelegate__DelegateSignature
	 */
	struct AMenuMap_P_C_BndEvt__MenuMapMenuFlow_1_K2Node_ActorBoundEvent_14_MainMenuViewpointChangedDelegate__DelegateSignature_Params
	{
	public:
		EMainMenuViewpointType                                     MenuTransition;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MenuMap_P.MenuMap_P_C.BndEvt__MenuMapMenuFlow_1_K2Node_ActorBoundEvent_5_MenuMapPlaythroughChangedDelegate__DelegateSignature
	 */
	struct AMenuMap_P_C_BndEvt__MenuMapMenuFlow_1_K2Node_ActorBoundEvent_5_MenuMapPlaythroughChangedDelegate__DelegateSignature_Params
	{
	public:
		int32_t                                                    PreviousPlayThroughCount;                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NewPlayThroughCount;                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MenuMap_P.MenuMap_P_C.ReceiveBeginPlay
	 */
	struct AMenuMap_P_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function MenuMap_P.MenuMap_P_C.BndEvt__MenuMapMenuFlow_1_K2Node_ActorBoundEvent_1_MenuMapOnDifficultyChanged__DelegateSignature
	 */
	struct AMenuMap_P_C_BndEvt__MenuMapMenuFlow_1_K2Node_ActorBoundEvent_1_MenuMapOnDifficultyChanged__DelegateSignature_Params
	{
	public:
		EPlayerDifficultySetting                                   NewDifficultySetting;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MenuMap_P.MenuMap_P_C.BndEvt__MenuMapMenuFlow_1_K2Node_ActorBoundEvent_2_MenuMapOnUIGroupModeChanged__DelegateSignature
	 */
	struct AMenuMap_P_C_BndEvt__MenuMapMenuFlow_1_K2Node_ActorBoundEvent_2_MenuMapOnUIGroupModeChanged__DelegateSignature_Params
	{
	public:
		EOakGameStateUIGroupMode                                   NewGroupMode;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MenuMap_P.MenuMap_P_C.loadBTS
	 */
	struct AMenuMap_P_C_loadBTS_Params
	{	};

	/**
	 * Function MenuMap_P.MenuMap_P_C.ExecuteUbergraph_MenuMap_P
	 */
	struct AMenuMap_P_C_ExecuteUbergraph_MenuMap_P_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
