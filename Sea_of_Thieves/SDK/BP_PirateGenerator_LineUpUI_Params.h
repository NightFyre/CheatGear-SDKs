#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.GetLockStatus
	 */
	struct ABP_PirateGenerator_LineUpUI_C_GetLockStatus_Params
	{
	public:
		int32_t                                                    IndexToToggle;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Locked;                                                  // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.ToggleLockStatus
	 */
	struct ABP_PirateGenerator_LineUpUI_C_ToggleLockStatus_Params
	{
	public:
		int32_t                                                    IndexToToggle;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.ClearLockedPirates
	 */
	struct ABP_PirateGenerator_LineUpUI_C_ClearLockedPirates_Params
	{	};

	/**
	 * Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.GetTransitionState
	 */
	struct ABP_PirateGenerator_LineUpUI_C_GetTransitionState_Params
	{
	public:
		bool                                                       Transitioning;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GBK0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.GetAnimationDataFromClass
	 */
	struct ABP_PirateGenerator_LineUpUI_C_GetAnimationDataFromClass_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAD_FrontendPirate_Default_C*                        AnimationData;                                           // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.SanitizeAnimationPoses
	 */
	struct ABP_PirateGenerator_LineUpUI_C_SanitizeAnimationPoses_Params
	{	};

	/**
	 * Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.RandomizePirates
	 */
	struct ABP_PirateGenerator_LineUpUI_C_RandomizePirates_Params
	{	};

	/**
	 * Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.UserConstructionScript
	 */
	struct ABP_PirateGenerator_LineUpUI_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.ReceiveBeginPlay
	 */
	struct ABP_PirateGenerator_LineUpUI_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.LineUpPirateInitalized
	 */
	struct ABP_PirateGenerator_LineUpUI_C_LineUpPirateInitalized_Params
	{	};

	/**
	 * Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.ExecuteUbergraph_BP_PirateGenerator_LineUpUI
	 */
	struct ABP_PirateGenerator_LineUpUI_C_ExecuteUbergraph_BP_PirateGenerator_LineUpUI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.PirateLineUpInitializedDispatcher__DelegateSignature
	 */
	struct ABP_PirateGenerator_LineUpUI_C_PirateLineUpInitializedDispatcher__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
