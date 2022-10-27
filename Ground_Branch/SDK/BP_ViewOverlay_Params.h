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
	 * Function BP_ViewOverlay.BP_ViewOverlay_C.UpdateMask
	 */
	struct ABP_ViewOverlay_C_UpdateMask_Params
	{
	public:
		class UTexture*                                            MaskTexture;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ViewOverlay.BP_ViewOverlay_C.UpdateAlpha
	 */
	struct ABP_ViewOverlay_C_UpdateAlpha_Params
	{
	public:
		float                                                      InAlpha;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ViewOverlay.BP_ViewOverlay_C.ReceiveTick
	 */
	struct ABP_ViewOverlay_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ViewOverlay.BP_ViewOverlay_C.ReceiveBeginPlay
	 */
	struct ABP_ViewOverlay_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_ViewOverlay.BP_ViewOverlay_C.SetWidget
	 */
	struct ABP_ViewOverlay_C_SetWidget_Params
	{
	public:
		class UUserWidget*                                         Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ViewOverlay.BP_ViewOverlay_C.OnDestroyed_Event_1
	 */
	struct ABP_ViewOverlay_C_OnDestroyed_Event_1_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ViewOverlay.BP_ViewOverlay_C.ExecuteUbergraph_BP_ViewOverlay
	 */
	struct ABP_ViewOverlay_C_ExecuteUbergraph_BP_ViewOverlay_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DGPV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
