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
	 * Function RuntimeGizmo.RTGizmoEditorComponent.ToggleWorldSpaceManipulation
	 */
	struct URTGizmoEditorComponent_ToggleWorldSpaceManipulation_Params
	{	};

	/**
	 * Function RuntimeGizmo.RTGizmoEditorComponent.SetWorldSpaceManipulation
	 */
	struct URTGizmoEditorComponent_SetWorldSpaceManipulation_Params
	{
	public:
		bool                                                       bNewWorldSpace;                                          // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RuntimeGizmo.RTGizmoEditorComponent.SetupGizmoDelegates
	 */
	struct URTGizmoEditorComponent_SetupGizmoDelegates_Params
	{
	public:
		class ABaseRTGizmo*                                        Gizmo;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RuntimeGizmo.RTGizmoEditorComponent.SetTranslationGridSnapValue
	 */
	struct URTGizmoEditorComponent_SetTranslationGridSnapValue_Params
	{
	public:
		float                                                      NewGridSnapValue;                                        // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RuntimeGizmo.RTGizmoEditorComponent.SetScaleGridSnapValue
	 */
	struct URTGizmoEditorComponent_SetScaleGridSnapValue_Params
	{
	public:
		float                                                      NewGridSnapValue;                                        // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RuntimeGizmo.RTGizmoEditorComponent.SetRotationGridSnapValue
	 */
	struct URTGizmoEditorComponent_SetRotationGridSnapValue_Params
	{
	public:
		float                                                      NewGridSnapValue;                                        // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RuntimeGizmo.RTGizmoEditorComponent.SetNextInactiveGizmoAsActive
	 */
	struct URTGizmoEditorComponent_SetNextInactiveGizmoAsActive_Params
	{	};

	/**
	 * Function RuntimeGizmo.RTGizmoEditorComponent.SetGridSnapping
	 */
	struct URTGizmoEditorComponent_SetGridSnapping_Params
	{
	public:
		bool                                                       bNewGridSnapping;                                        // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RuntimeGizmo.RTGizmoEditorComponent.SetActiveGizmo
	 */
	struct URTGizmoEditorComponent_SetActiveGizmo_Params
	{
	public:
		class ABaseRTGizmo*                                        NewActiveGizmo;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RuntimeGizmo.RTGizmoEditorComponent.ServerTranslate
	 */
	struct URTGizmoEditorComponent_ServerTranslate_Params
	{
	public:
		struct FVector                                             Translation;                                             // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RuntimeGizmo.RTGizmoEditorComponent.ServerToggleWorldSpaceManipulation
	 */
	struct URTGizmoEditorComponent_ServerToggleWorldSpaceManipulation_Params
	{	};

	/**
	 * Function RuntimeGizmo.RTGizmoEditorComponent.ServerSetNextInactiveGizmoAsActive
	 */
	struct URTGizmoEditorComponent_ServerSetNextInactiveGizmoAsActive_Params
	{	};

	/**
	 * Function RuntimeGizmo.RTGizmoEditorComponent.ServerSelectActor
	 */
	struct URTGizmoEditorComponent_ServerSelectActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bNewSelection;                                           // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RuntimeGizmo.RTGizmoEditorComponent.ServerScale
	 */
	struct URTGizmoEditorComponent_ServerScale_Params
	{
	public:
		struct FVector                                             NewScale;                                                // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RuntimeGizmo.RTGizmoEditorComponent.ServerRotate
	 */
	struct URTGizmoEditorComponent_ServerRotate_Params
	{
	public:
		struct FRotator                                            Rotation;                                                // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RuntimeGizmo.RTGizmoEditorComponent.ServerDeselectAllActors
	 */
	struct URTGizmoEditorComponent_ServerDeselectAllActors_Params
	{	};

	/**
	 * Function RuntimeGizmo.RTGizmoEditorComponent.ServerDeselectActor
	 */
	struct URTGizmoEditorComponent_ServerDeselectActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RuntimeGizmo.RTGizmoEditorComponent.SelectActor
	 */
	struct URTGizmoEditorComponent_SelectActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bNewSelection;                                           // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RuntimeGizmo.RTGizmoEditorComponent.RemoveActorFromSelection
	 */
	struct URTGizmoEditorComponent_RemoveActorFromSelection_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bDeactivateGizmo;                                        // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RuntimeGizmo.RTGizmoEditorComponent.OnTranslate
	 */
	struct URTGizmoEditorComponent_OnTranslate_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RuntimeGizmo.RTGizmoEditorComponent.OnScale
	 */
	struct URTGizmoEditorComponent_OnScale_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RuntimeGizmo.RTGizmoEditorComponent.OnRotate
	 */
	struct URTGizmoEditorComponent_OnRotate_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RuntimeGizmo.RTGizmoEditorComponent.OnRep_ActorSelectionList
	 */
	struct URTGizmoEditorComponent_OnRep_ActorSelectionList_Params
	{	};

	/**
	 * Function RuntimeGizmo.RTGizmoEditorComponent.OnRep_ActiveGizmo
	 */
	struct URTGizmoEditorComponent_OnRep_ActiveGizmo_Params
	{	};

	/**
	 * Function RuntimeGizmo.RTGizmoEditorComponent.OnActorSelectionDestroyed
	 */
	struct URTGizmoEditorComponent_OnActorSelectionDestroyed_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RuntimeGizmo.RTGizmoEditorComponent.OnActorRemoved
	 */
	struct URTGizmoEditorComponent_OnActorRemoved_Params
	{
	public:
		class AActor*                                              RemovedActor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RuntimeGizmo.RTGizmoEditorComponent.OnActorAdded
	 */
	struct URTGizmoEditorComponent_OnActorAdded_Params
	{
	public:
		class AActor*                                              AddedActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RuntimeGizmo.RTGizmoEditorComponent.IsManipulatingInWorldSpace
	 */
	struct URTGizmoEditorComponent_IsManipulatingInWorldSpace_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RuntimeGizmo.RTGizmoEditorComponent.IsActorSelected
	 */
	struct URTGizmoEditorComponent_IsActorSelected_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RuntimeGizmo.RTGizmoEditorComponent.GetOwningRole
	 */
	struct URTGizmoEditorComponent_GetOwningRole_Params
	{
	public:
		ENetRole                                                   ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RuntimeGizmo.RTGizmoEditorComponent.GetLastActorSelection
	 */
	struct URTGizmoEditorComponent_GetLastActorSelection_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RuntimeGizmo.RTGizmoEditorComponent.GetActiveGizmo
	 */
	struct URTGizmoEditorComponent_GetActiveGizmo_Params
	{
	public:
		class ABaseRTGizmo*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RuntimeGizmo.RTGizmoEditorComponent.DeselectAllActors
	 */
	struct URTGizmoEditorComponent_DeselectAllActors_Params
	{	};

	/**
	 * Function RuntimeGizmo.RTGizmoEditorComponent.DeselectActor
	 */
	struct URTGizmoEditorComponent_DeselectActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RuntimeGizmo.RTGizmoEditorComponent.AddGizmoFromClass
	 */
	struct URTGizmoEditorComponent_AddGizmoFromClass_Params
	{
	public:
		class UClass*                                              NewGizmoClass;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RuntimeGizmo.RTGizmoEditorComponent.AddActorToSelection
	 */
	struct URTGizmoEditorComponent_AddActorToSelection_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAttachActiveGizmo;                                      // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RuntimeGizmo.BaseRTGizmo.ToggleInput
	 */
	struct ABaseRTGizmo_ToggleInput_Params
	{
	public:
		bool                                                       bToggle;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RuntimeGizmo.BaseRTGizmo.SetWorldSpace
	 */
	struct ABaseRTGizmo_SetWorldSpace_Params
	{
	public:
		bool                                                       bWorldCoordinates;                                       // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RuntimeGizmo.BaseRTGizmo.SetConsumeInputOnGizmoDragBinding
	 */
	struct ABaseRTGizmo_SetConsumeInputOnGizmoDragBinding_Params
	{
	public:
		bool                                                       bConsumeInput;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RuntimeGizmo.BaseRTGizmo.SetActive
	 */
	struct ABaseRTGizmo_SetActive_Params
	{
	public:
		bool                                                       bNewActive;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RuntimeGizmo.BaseRTGizmo.ResetAxisHighlighting
	 */
	struct ABaseRTGizmo_ResetAxisHighlighting_Params
	{	};

	/**
	 * Function RuntimeGizmo.BaseRTGizmo.OnRep_bWorldSpace
	 */
	struct ABaseRTGizmo_OnRep_bWorldSpace_Params
	{	};

	/**
	 * Function RuntimeGizmo.BaseRTGizmo.OnRep_bActive
	 */
	struct ABaseRTGizmo_OnRep_bActive_Params
	{	};

	/**
	 * Function RuntimeGizmo.BaseRTGizmo.OnGizmoStopDrag
	 */
	struct ABaseRTGizmo_OnGizmoStopDrag_Params
	{	};

	/**
	 * Function RuntimeGizmo.BaseRTGizmo.OnGizmoStartDrag
	 */
	struct ABaseRTGizmo_OnGizmoStartDrag_Params
	{	};

	/**
	 * Function RuntimeGizmo.BaseRTGizmo.OnGizmoDrag
	 */
	struct ABaseRTGizmo_OnGizmoDrag_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RuntimeGizmo.BaseRTGizmo.IsSelectingAllAxes
	 */
	struct ABaseRTGizmo_IsSelectingAllAxes_Params
	{
	public:
		struct FVector                                             TargetLocation;                                          // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RuntimeGizmo.BaseRTGizmo.IsInWorldSpace
	 */
	struct ABaseRTGizmo_IsInWorldSpace_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RuntimeGizmo.BaseRTGizmo.IsActive
	 */
	struct ABaseRTGizmo_IsActive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RuntimeGizmo.BaseRTGizmo.HighlightAxis
	 */
	struct ABaseRTGizmo_HighlightAxis_Params
	{
	public:
		EGizmoAxis                                                 Axis;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bHighlight;                                              // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RuntimeGizmo.BaseRTGizmo.GetSelectedGizmoAxis
	 */
	struct ABaseRTGizmo_GetSelectedGizmoAxis_Params
	{
	public:
		EGizmoAxis                                                 ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RuntimeGizmo.BaseRTGizmo.GetPlaneNormalCorrespondingToCameraByAxis
	 */
	struct ABaseRTGizmo_GetPlaneNormalCorrespondingToCameraByAxis_Params
	{
	public:
		EGizmoAxis                                                 Axis;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_F98Q[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             ReturnValue;                                             // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RuntimeGizmo.BaseRTGizmo.GetMaterialForAxis
	 */
	struct ABaseRTGizmo_GetMaterialForAxis_Params
	{
	public:
		EGizmoAxis                                                 Axis;                                                    // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_331M[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMaterialInterface*                                  ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RuntimeGizmo.BaseRTGizmo.GetHitResultUnderCursorForGizmo
	 */
	struct ABaseRTGizmo_GetHitResultUnderCursorForGizmo_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x0088)  (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0088(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RuntimeGizmo.BaseRTGizmo.GetGizmoAxisUnderCursor
	 */
	struct ABaseRTGizmo_GetGizmoAxisUnderCursor_Params
	{
	public:
		EGizmoAxis                                                 ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RuntimeGizmo.BaseRTGizmo.GetCorrespondingPlaneByAxis
	 */
	struct ABaseRTGizmo_GetCorrespondingPlaneByAxis_Params
	{
	public:
		EGizmoAxis                                                 Axis;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KME8[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPlane                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RuntimeGizmo.BaseRTGizmo.GetAxisForMaterial
	 */
	struct ABaseRTGizmo_GetAxisForMaterial_Params
	{
	public:
		class UMaterialInterface*                                  Material;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGizmoAxis                                                 ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
