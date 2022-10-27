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
	 * Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.UpdateCameraPOV
	 */
	struct ABP_ANPVS_15_NVG_C_UpdateCameraPOV_Params
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
	 * Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.GetHiddenComponents
	 */
	struct ABP_ANPVS_15_NVG_C_GetHiddenComponents_Params
	{
	public:
		TArray<class UPrimitiveComponent*>                         ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, ContainsInstancedReference)
	};

	/**
	 * Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.DecodeKit
	 */
	struct ABP_ANPVS_15_NVG_C_DecodeKit_Params
	{
	public:
		class UVaRestJsonObject*                                   ItemAsJson;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DecodedOwner;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AGBItem*                                             DecodedParentItem;                                       // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5HUH[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.AllowUsageWhileAttached
	 */
	struct ABP_ANPVS_15_NVG_C_AllowUsageWhileAttached_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.Timeline_0__FinishedFunc
	 */
	struct ABP_ANPVS_15_NVG_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.Timeline_0__UpdateFunc
	 */
	struct ABP_ANPVS_15_NVG_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.OnLoaded_4F18AE27471B5F9408A726A253D44324
	 */
	struct ABP_ANPVS_15_NVG_C_OnLoaded_4F18AE27471B5F9408A726A253D44324_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.OnLoaded_C2B63AC249909B6D095A6182A08E8C03
	 */
	struct ABP_ANPVS_15_NVG_C_OnLoaded_C2B63AC249909B6D095A6182A08E8C03_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.InpActEvt_ToggleNightVision_K2Node_InputActionEvent_1
	 */
	struct ABP_ANPVS_15_NVG_C_InpActEvt_ToggleNightVision_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.PlayAnimation
	 */
	struct ABP_ANPVS_15_NVG_C_PlayAnimation_Params
	{
	public:
		bool                                                       bForward;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.OnAddedToItem
	 */
	struct ABP_ANPVS_15_NVG_C_OnAddedToItem_Params
	{
	public:
		class AGBItem*                                             NewParentItem;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.SetNVGMountMesh
	 */
	struct ABP_ANPVS_15_NVG_C_SetNVGMountMesh_Params
	{	};

	/**
	 * Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.OnRemovedFromItem
	 */
	struct ABP_ANPVS_15_NVG_C_OnRemovedFromItem_Params
	{
	public:
		class AGBItem*                                             OldParentItem;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     OldParentComp;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                OldParentSocket;                                         // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.OnAddedToInventoryEvent
	 */
	struct ABP_ANPVS_15_NVG_C_OnAddedToInventoryEvent_Params
	{	};

	/**
	 * Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.OnRemovedFromInventoryEvent
	 */
	struct ABP_ANPVS_15_NVG_C_OnRemovedFromInventoryEvent_Params
	{	};

	/**
	 * Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.BindOnGameplayTagsUpdated
	 */
	struct ABP_ANPVS_15_NVG_C_BindOnGameplayTagsUpdated_Params
	{	};

	/**
	 * Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.OnGameplayTagsUpdated_Event_1
	 */
	struct ABP_ANPVS_15_NVG_C_OnGameplayTagsUpdated_Event_1_Params
	{
	public:
		class AGBCharacter*                                        Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.UnbindOnGameplayTagsUpdated
	 */
	struct ABP_ANPVS_15_NVG_C_UnbindOnGameplayTagsUpdated_Params
	{	};

	/**
	 * Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.UpdateBracketRotation
	 */
	struct ABP_ANPVS_15_NVG_C_UpdateBracketRotation_Params
	{	};

	/**
	 * Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.EnsureOverlayExists
	 */
	struct ABP_ANPVS_15_NVG_C_EnsureOverlayExists_Params
	{	};

	/**
	 * Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.RemoveOverlay
	 */
	struct ABP_ANPVS_15_NVG_C_RemoveOverlay_Params
	{	};

	/**
	 * Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.ExecuteUbergraph_BP_ANPVS_15_NVG
	 */
	struct ABP_ANPVS_15_NVG_C_ExecuteUbergraph_BP_ANPVS_15_NVG_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2DOF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
