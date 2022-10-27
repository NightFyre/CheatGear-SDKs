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
	 * Function BP_Moskito_RF.BP_Moskito_RF_C.BindOnEndViewTarget
	 */
	struct ABP_Moskito_RF_C_BindOnEndViewTarget_Params
	{	};

	/**
	 * Function BP_Moskito_RF.BP_Moskito_RF_C.OnRep_bNightVisionMode
	 */
	struct ABP_Moskito_RF_C_OnRep_bNightVisionMode_Params
	{	};

	/**
	 * Function BP_Moskito_RF.BP_Moskito_RF_C.RangeFindRecursive
	 */
	struct ABP_Moskito_RF_C_RangeFindRecursive_Params
	{
	public:
		struct FVector                                             TraceStart;                                              // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      RemainingTraceDistance;                                  // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Moskito_RF.BP_Moskito_RF_C.UpdateCameraPOV
	 */
	struct ABP_Moskito_RF_C_UpdateCameraPOV_Params
	{
	public:
		class AGBPlayerController*                                 GBPlayerController;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             CameraLocation;                                          // 0x0008(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            CameraRotation;                                          // 0x0014(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CameraFOV;                                               // 0x0020(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DeltaTime;                                               // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                CameraStyle;                                             // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             OutCameraLocation;                                       // 0x0030(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            OutCameraRotation;                                       // 0x003C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      OutCameraFOV;                                            // 0x0048(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x004C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Moskito_RF.BP_Moskito_RF_C.GetHiddenComponents
	 */
	struct ABP_Moskito_RF_C_GetHiddenComponents_Params
	{
	public:
		TArray<class UPrimitiveComponent*>                         ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, ContainsInstancedReference)
	};

	/**
	 * Function BP_Moskito_RF.BP_Moskito_RF_C.GetWeaponsPositionTransitionTime
	 */
	struct ABP_Moskito_RF_C_GetWeaponsPositionTransitionTime_Params
	{
	public:
		EGBWeaponPosition                                          FromPosition;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EGBWeaponPosition                                          ToPosition;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5WRE[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Moskito_RF.BP_Moskito_RF_C.GatherAssets
	 */
	struct ABP_Moskito_RF_C_GatherAssets_Params
	{
	public:
		TArray<struct FSoftObjectPath>                             OutAssets;                                               // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_Moskito_RF.BP_Moskito_RF_C.InpActEvt_ToggleNightVision_K2Node_InputActionEvent_1
	 */
	struct ABP_Moskito_RF_C_InpActEvt_ToggleNightVision_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Moskito_RF.BP_Moskito_RF_C.RemoveOverlay
	 */
	struct ABP_Moskito_RF_C_RemoveOverlay_Params
	{	};

	/**
	 * Function BP_Moskito_RF.BP_Moskito_RF_C.EnsureOverlayExists
	 */
	struct ABP_Moskito_RF_C_EnsureOverlayExists_Params
	{	};

	/**
	 * Function BP_Moskito_RF.BP_Moskito_RF_C.UseOffHandPressed
	 */
	struct ABP_Moskito_RF_C_UseOffHandPressed_Params
	{	};

	/**
	 * Function BP_Moskito_RF.BP_Moskito_RF_C.OnLoadAssetsComplete
	 */
	struct ABP_Moskito_RF_C_OnLoadAssetsComplete_Params
	{	};

	/**
	 * Function BP_Moskito_RF.BP_Moskito_RF_C.UseOffHandReleased
	 */
	struct ABP_Moskito_RF_C_UseOffHandReleased_Params
	{	};

	/**
	 * Function BP_Moskito_RF.BP_Moskito_RF_C.UseMainHandPressed
	 */
	struct ABP_Moskito_RF_C_UseMainHandPressed_Params
	{	};

	/**
	 * Function BP_Moskito_RF.BP_Moskito_RF_C.OnBeingUnequipped
	 */
	struct ABP_Moskito_RF_C_OnBeingUnequipped_Params
	{	};

	/**
	 * Function BP_Moskito_RF.BP_Moskito_RF_C.OnBeingEquipped
	 */
	struct ABP_Moskito_RF_C_OnBeingEquipped_Params
	{	};

	/**
	 * Function BP_Moskito_RF.BP_Moskito_RF_C.OnDestroyed_Event_1
	 */
	struct ABP_Moskito_RF_C_OnDestroyed_Event_1_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Moskito_RF.BP_Moskito_RF_C.OnStartUsing
	 */
	struct ABP_Moskito_RF_C_OnStartUsing_Params
	{
	public:
		int32_t                                                    UseType;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Moskito_RF.BP_Moskito_RF_C.ServerSetRange
	 */
	struct ABP_Moskito_RF_C_ServerSetRange_Params
	{
	public:
		int32_t                                                    Range;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Moskito_RF.BP_Moskito_RF_C.UpdateRange
	 */
	struct ABP_Moskito_RF_C_UpdateRange_Params
	{
	public:
		int32_t                                                    NewRange;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Moskito_RF.BP_Moskito_RF_C.RangeError
	 */
	struct ABP_Moskito_RF_C_RangeError_Params
	{	};

	/**
	 * Function BP_Moskito_RF.BP_Moskito_RF_C.UpdateOverlayTexture
	 */
	struct ABP_Moskito_RF_C_UpdateOverlayTexture_Params
	{	};

	/**
	 * Function BP_Moskito_RF.BP_Moskito_RF_C.ExecuteUbergraph_BP_Moskito_RF
	 */
	struct ABP_Moskito_RF_C_ExecuteUbergraph_BP_Moskito_RF_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3BPX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
