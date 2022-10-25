#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * Function WBP_CaptureStatus.WBP_CaptureStatus_C.UpdateActiveUnits
	 */
	struct UWBP_CaptureStatus_C_UpdateActiveUnits_Params
	{
	public:
		bool                                                       bFriendly;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WQWD[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    UnitCount;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    MinUnitsRequired;                                        // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CaptureStatus.WBP_CaptureStatus_C.SetMinCountToCapture
	 */
	struct UWBP_CaptureStatus_C_SetMinCountToCapture_Params
	{
	public:
		int32_t                                                    MinCount;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CaptureStatus.WBP_CaptureStatus_C.ResizeGarrisonContainer
	 */
	struct UWBP_CaptureStatus_C_ResizeGarrisonContainer_Params
	{
	public:
		int32_t                                                    NewUnitIconCount;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CaptureStatus.WBP_CaptureStatus_C.UpdateTeamOwnerText
	 */
	struct UWBP_CaptureStatus_C_UpdateTeamOwnerText_Params
	{
	public:
		EHDTeam                                                    CaptureTeam;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XDYA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_CaptureStatus.WBP_CaptureStatus_C.UpdateProgressBarColor
	 */
	struct UWBP_CaptureStatus_C_UpdateProgressBarColor_Params
	{
	public:
		EHDTeam                                                    OwningTeam;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VBWD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_CaptureStatus.WBP_CaptureStatus_C.OwnerTouchingControlPoint
	 */
	struct UWBP_CaptureStatus_C_OwnerTouchingControlPoint_Params
	{
	public:
		class AHDBaseCapturePoint*                                 OverlappingCP;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInitial;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_CaptureStatus.WBP_CaptureStatus_C.OwnerNoControlPoint
	 */
	struct UWBP_CaptureStatus_C_OwnerNoControlPoint_Params
	{	};

	/**
	 * Function WBP_CaptureStatus.WBP_CaptureStatus_C.OnInitialized
	 */
	struct UWBP_CaptureStatus_C_OnInitialized_Params
	{	};

	/**
	 * Function WBP_CaptureStatus.WBP_CaptureStatus_C.ControlPointSetCaptureProgress
	 */
	struct UWBP_CaptureStatus_C_ControlPointSetCaptureProgress_Params
	{
	public:
		bool                                                       bContested;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_F5ZX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      NewValueNorm;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      OldValueNorm;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInitial;                                                // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_CaptureStatus.WBP_CaptureStatus_C.ControlPointSetOwnershipState
	 */
	struct UWBP_CaptureStatus_C_ControlPointSetOwnershipState_Params
	{
	public:
		bool                                                       bCaptured;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EHDTeam                                                    NewOwningTeam;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EHDTeam                                                    OldOwningTeam;                                           // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInitial;                                                // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_CaptureStatus.WBP_CaptureStatus_C.ControlPointSetGarrisonedPlayerCount
	 */
	struct UWBP_CaptureStatus_C_ControlPointSetGarrisonedPlayerCount_Params
	{
	public:
		int32_t                                                    NumFriendlies;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NumEnemies;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    MinNumRequiredForCapture;                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInitial;                                                // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_CaptureStatus.WBP_CaptureStatus_C.PreConstruct
	 */
	struct UWBP_CaptureStatus_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_CaptureStatus.WBP_CaptureStatus_C.ExecuteUbergraph_WBP_CaptureStatus
	 */
	struct UWBP_CaptureStatus_C_ExecuteUbergraph_WBP_CaptureStatus_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
