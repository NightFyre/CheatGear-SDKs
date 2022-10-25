#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class RuntimeGizmo.RTGizmoEditorComponent
	 * Size -> 0x0098 (FullSize[0x0148] - InheritedSize[0x00B0])
	 */
	class URTGizmoEditorComponent : public UActorComponent
	{
	public:
		TArray<class AActor*>                                      ActorSelectionList;                                      // 0x00B0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, EditConst, RepNotify, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class AActor*>                                      PrevActorSelectionList;                                  // 0x00C0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              DefaultGizmos[0x50];                                     // 0x00D0(0x0050) UNKNOWN PROPERTY: SetProperty
		TArray<class ABaseRTGizmo*>                                InactiveGizmos;                                          // 0x0120(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ABaseRTGizmo*                                        ActiveGizmo;                                             // 0x0130(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, EditConst, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bWorldSpaceManipulation : 1;                             // 0x0138(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bGridSnapping : 1;                                       // 0x0138(0x0001) BIT_FIELD Edit, BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IQI5[0x3];                                   // 0x0139(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TranslationGridSnapValue;                                // 0x013C(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotationGridSnapValue;                                   // 0x0140(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ScaleGridSnapValue;                                      // 0x0144(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void ToggleWorldSpaceManipulation();
		void SetWorldSpaceManipulation(bool bNewWorldSpace);
		void SetupGizmoDelegates(class ABaseRTGizmo* Gizmo);
		void SetTranslationGridSnapValue(float NewGridSnapValue);
		void SetScaleGridSnapValue(float NewGridSnapValue);
		void SetRotationGridSnapValue(float NewGridSnapValue);
		void SetNextInactiveGizmoAsActive();
		void SetGridSnapping(bool bNewGridSnapping);
		void SetActiveGizmo(class ABaseRTGizmo* NewActiveGizmo);
		void ServerTranslate(const struct FVector& Translation);
		void ServerToggleWorldSpaceManipulation();
		void ServerSetNextInactiveGizmoAsActive();
		void ServerSelectActor(class AActor* Actor, bool bNewSelection);
		void ServerScale(const struct FVector& NewScale);
		void ServerRotate(const struct FRotator& Rotation);
		void ServerDeselectAllActors();
		void ServerDeselectActor(class AActor* Actor);
		void SelectActor(class AActor* Actor, bool bNewSelection);
		void RemoveActorFromSelection(class AActor* Actor, bool bDeactivateGizmo);
		void OnTranslate(const struct FTransform& Transform);
		void OnScale(const struct FTransform& Transform);
		void OnRotate(const struct FTransform& Transform);
		void OnRep_ActorSelectionList();
		void OnRep_ActiveGizmo();
		void OnActorSelectionDestroyed(class AActor* DestroyedActor);
		void OnActorRemoved(class AActor* RemovedActor);
		void OnActorAdded(class AActor* AddedActor);
		bool IsManipulatingInWorldSpace();
		bool IsActorSelected(class AActor* Actor);
		ENetRole GetOwningRole();
		class AActor* GetLastActorSelection();
		class ABaseRTGizmo* GetActiveGizmo();
		void DeselectAllActors();
		void DeselectActor(class AActor* Actor);
		void AddGizmoFromClass(class UClass* NewGizmoClass);
		void AddActorToSelection(class AActor* Actor, bool bAttachActiveGizmo);
		static UClass* StaticClass();
	};

	/**
	 * Class RuntimeGizmo.BaseRTGizmo
	 * Size -> 0x00D0 (FullSize[0x02F0] - InheritedSize[0x0220])
	 */
	class ABaseRTGizmo : public AActor
	{
	public:
		unsigned char                                              UnknownData_9SI2[0x4];                                   // 0x0220(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      GridSnapValue;                                           // 0x0224(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGizmoAxis                                                 SelectedGizmoAxis;                                       // 0x0228(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bAllowAllAxisSelection : 1;                              // 0x0229(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_B27Y[0x2];                                   // 0x022A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AllAxisSelectionDistance;                                // 0x022C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  XAxisMaterial;                                           // 0x0230(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                XAxisMaterialSlotName;                                   // 0x0238(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  YAxisMaterial;                                           // 0x0240(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                YAxisMaterialSlotName;                                   // 0x0248(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  ZAxisMaterial;                                           // 0x0250(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                ZAxisMaterialSlotName;                                   // 0x0258(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  XYAxisMaterial;                                          // 0x0260(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                XYAxisMaterialSlotName;                                  // 0x0268(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  YZAxisMaterial;                                          // 0x0270(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                YZAxisMaterialSlotName;                                  // 0x0278(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  XZAxisMaterial;                                          // 0x0280(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                XZAxisMaterialSlotName;                                  // 0x0288(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  HighlightedAxisMaterial;                                 // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UWSB[0x18];                                  // 0x0298(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bDragging : 1;                                           // 0x02B0(0x0001) BIT_FIELD Edit, BlueprintVisible, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XD5C[0x3];                                   // 0x02B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LastDragLoc;                                             // 0x02B4(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             NewDragLoc;                                              // 0x02C0(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ScaleFactor;                                             // 0x02CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bWorldSpace : 1;                                         // 0x02D0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_I2YK[0x7];                                   // 0x02D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMeshComponent*                                Mesh;                                                    // 0x02D8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bActive : 1;                                             // 0x02E0(0x0001) BIT_FIELD Edit, BlueprintVisible, Net, Transient, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDrawDebug : 1;                                          // 0x02E0(0x0001) BIT_FIELD Edit, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8GC1[0x7];                                   // 0x02E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APlayerController*                                   OwnerPC;                                                 // 0x02E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void ToggleInput(bool bToggle);
		void SetWorldSpace(bool bWorldCoordinates);
		void SetConsumeInputOnGizmoDragBinding(bool bConsumeInput);
		void SetActive(bool bNewActive);
		void ResetAxisHighlighting();
		void OnRep_bWorldSpace();
		void OnRep_bActive();
		void OnGizmoStopDrag();
		void OnGizmoStartDrag();
		void OnGizmoDrag(float AxisValue);
		bool IsSelectingAllAxes(const struct FVector& TargetLocation);
		bool IsInWorldSpace();
		bool IsActive();
		void HighlightAxis(EGizmoAxis Axis, bool bHighlight);
		EGizmoAxis GetSelectedGizmoAxis();
		struct FVector GetPlaneNormalCorrespondingToCameraByAxis(EGizmoAxis Axis);
		class UMaterialInterface* GetMaterialForAxis(EGizmoAxis Axis);
		bool GetHitResultUnderCursorForGizmo(struct FHitResult* HitResult);
		EGizmoAxis GetGizmoAxisUnderCursor();
		struct FPlane GetCorrespondingPlaneByAxis(EGizmoAxis Axis);
		EGizmoAxis GetAxisForMaterial(class UMaterialInterface* Material);
		static UClass* StaticClass();
	};

	/**
	 * Class RuntimeGizmo.RTTranslationGizmo
	 * Size -> 0x0010 (FullSize[0x0300] - InheritedSize[0x02F0])
	 */
	class ARTTranslationGizmo : public ABaseRTGizmo
	{
	public:
		struct FVector                                             TranslationDelta;                                        // 0x02F0(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_J64I[0x4];                                   // 0x02FC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RuntimeGizmo.RTRotationGizmo
	 * Size -> 0x0000 (FullSize[0x02F0] - InheritedSize[0x02F0])
	 */
	class ARTRotationGizmo : public ABaseRTGizmo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RuntimeGizmo.RTScaleGizmo
	 * Size -> 0x0000 (FullSize[0x02F0] - InheritedSize[0x02F0])
	 */
	class ARTScaleGizmo : public ABaseRTGizmo
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
