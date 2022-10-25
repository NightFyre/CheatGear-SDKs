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
	 * Function BP_Tablet.BP_Tablet_C.UpdateCameraPOV
	 */
	struct ABP_Tablet_C_UpdateCameraPOV_Params
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
	 * Function BP_Tablet.BP_Tablet_C.GetWeaponsPositionTransitionTime
	 */
	struct ABP_Tablet_C_GetWeaponsPositionTransitionTime_Params
	{
	public:
		EGBWeaponPosition                                          FromPosition;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EGBWeaponPosition                                          ToPosition;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CTBP[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Tablet.BP_Tablet_C.GetEquipInfo
	 */
	struct ABP_Tablet_C_GetEquipInfo_Params
	{
	public:
		EHand                                                      TargetHand;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IXT9[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGBSwitchItemInfo                                   OutEquipInfo;                                            // 0x0010(0x0070)  (Parm, OutParm, ContainsInstancedReference)
		bool                                                       ReturnValue;                                             // 0x0080(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AU4D[0xF];                                   // 0x0081(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Tablet.BP_Tablet_C.GatherAssets
	 */
	struct ABP_Tablet_C_GatherAssets_Params
	{
	public:
		TArray<struct FSoftObjectPath>                             OutAssets;                                               // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_Tablet.BP_Tablet_C.InpActEvt_MissionIntel_K2Node_InputActionEvent_1
	 */
	struct ABP_Tablet_C_InpActEvt_MissionIntel_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Tablet.BP_Tablet_C.OnLoadAssetsComplete
	 */
	struct ABP_Tablet_C_OnLoadAssetsComplete_Params
	{	};

	/**
	 * Function BP_Tablet.BP_Tablet_C.OnBeingEquipped
	 */
	struct ABP_Tablet_C_OnBeingEquipped_Params
	{	};

	/**
	 * Function BP_Tablet.BP_Tablet_C.EnableWidget
	 */
	struct ABP_Tablet_C_EnableWidget_Params
	{	};

	/**
	 * Function BP_Tablet.BP_Tablet_C.DisableWidget
	 */
	struct ABP_Tablet_C_DisableWidget_Params
	{	};

	/**
	 * Function BP_Tablet.BP_Tablet_C.OnBeingUnequipped
	 */
	struct ABP_Tablet_C_OnBeingUnequipped_Params
	{	};

	/**
	 * Function BP_Tablet.BP_Tablet_C.UseOffHandPressed
	 */
	struct ABP_Tablet_C_UseOffHandPressed_Params
	{	};

	/**
	 * Function BP_Tablet.BP_Tablet_C.UseOffHandReleased
	 */
	struct ABP_Tablet_C_UseOffHandReleased_Params
	{	};

	/**
	 * Function BP_Tablet.BP_Tablet_C.OnAddedToInventoryEvent
	 */
	struct ABP_Tablet_C_OnAddedToInventoryEvent_Params
	{	};

	/**
	 * Function BP_Tablet.BP_Tablet_C.OnRemovedFromInventoryEvent
	 */
	struct ABP_Tablet_C_OnRemovedFromInventoryEvent_Params
	{	};

	/**
	 * Function BP_Tablet.BP_Tablet_C.ExecuteUbergraph_BP_Tablet
	 */
	struct ABP_Tablet_C_ExecuteUbergraph_BP_Tablet_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QPID[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
