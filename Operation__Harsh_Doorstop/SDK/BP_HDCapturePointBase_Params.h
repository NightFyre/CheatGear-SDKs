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
	 * Function BP_HDCapturePointBase.BP_HDCapturePointBase_C.UpdateFlagClothLOD
	 */
	struct ABP_HDCapturePointBase_C_UpdateFlagClothLOD_Params
	{	};

	/**
	 * Function BP_HDCapturePointBase.BP_HDCapturePointBase_C.AddPOI
	 */
	struct ABP_HDCapturePointBase_C_AddPOI_Params
	{	};

	/**
	 * Function BP_HDCapturePointBase.BP_HDCapturePointBase_C.RemovePOI
	 */
	struct ABP_HDCapturePointBase_C_RemovePOI_Params
	{	};

	/**
	 * Function BP_HDCapturePointBase.BP_HDCapturePointBase_C.UpdatePOIState
	 */
	struct ABP_HDCapturePointBase_C_UpdatePOIState_Params
	{	};

	/**
	 * Function BP_HDCapturePointBase.BP_HDCapturePointBase_C.InitPOI
	 */
	struct ABP_HDCapturePointBase_C_InitPOI_Params
	{
	public:
		class UDFMinimap*                                          Minimap;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDCapturePointBase.BP_HDCapturePointBase_C.UpdateFlagIcon
	 */
	struct ABP_HDCapturePointBase_C_UpdateFlagIcon_Params
	{
	public:
		EHDTeam                                                    InOwningTeam;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6C3W[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AHUD*                                                InLocalPlayerHUD;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDCapturePointBase.BP_HDCapturePointBase_C.UpdateFlagColor
	 */
	struct ABP_HDCapturePointBase_C_UpdateFlagColor_Params
	{
	public:
		EHDTeam                                                    InOwningTeam;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDCapturePointBase.BP_HDCapturePointBase_C.UserConstructionScript
	 */
	struct ABP_HDCapturePointBase_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_HDCapturePointBase.BP_HDCapturePointBase_C.ReceiveTick
	 */
	struct ABP_HDCapturePointBase_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDCapturePointBase.BP_HDCapturePointBase_C.ReceiveOnOwningTeamUpdated
	 */
	struct ABP_HDCapturePointBase_C_ReceiveOnOwningTeamUpdated_Params
	{
	public:
		EHDTeam                                                    LastOwningTeam;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDCapturePointBase.BP_HDCapturePointBase_C.ReceiveOnCaptureProgress
	 */
	struct ABP_HDCapturePointBase_C_ReceiveOnCaptureProgress_Params
	{
	public:
		bool                                                       bNewContested;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDCapturePointBase.BP_HDCapturePointBase_C.OnCaptureUpdate
	 */
	struct ABP_HDCapturePointBase_C_OnCaptureUpdate_Params
	{
	public:
		bool                                                       bContested;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JDUX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Progress;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDCapturePointBase.BP_HDCapturePointBase_C.ReceiveOnActive
	 */
	struct ABP_HDCapturePointBase_C_ReceiveOnActive_Params
	{
	public:
		bool                                                       bNewActive;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDCapturePointBase.BP_HDCapturePointBase_C.ReceiveOnLocked
	 */
	struct ABP_HDCapturePointBase_C_ReceiveOnLocked_Params
	{
	public:
		bool                                                       bNewLocked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDCapturePointBase.BP_HDCapturePointBase_C.ReceiveBeginPlay
	 */
	struct ABP_HDCapturePointBase_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_HDCapturePointBase.BP_HDCapturePointBase_C.ReceiveOnTeamCaptureStatusUpdated
	 */
	struct ABP_HDCapturePointBase_C_ReceiveOnTeamCaptureStatusUpdated_Params
	{	};

	/**
	 * Function BP_HDCapturePointBase.BP_HDCapturePointBase_C.ReceiveEndPlay
	 */
	struct ABP_HDCapturePointBase_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDCapturePointBase.BP_HDCapturePointBase_C.ExecuteUbergraph_BP_HDCapturePointBase
	 */
	struct ABP_HDCapturePointBase_C_ExecuteUbergraph_BP_HDCapturePointBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDCapturePointBase.BP_HDCapturePointBase_C.OnCaptureStatusUpdated__DelegateSignature
	 */
	struct ABP_HDCapturePointBase_C_OnCaptureStatusUpdated__DelegateSignature_Params
	{
	public:
		class ABP_HDCapturePointBase_C*                            ControlPoint;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
