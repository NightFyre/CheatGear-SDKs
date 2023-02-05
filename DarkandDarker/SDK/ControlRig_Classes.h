#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * Class ControlRig.ControlRig
	 * Size -> 0x0460 (FullSize[0x0488] - InheritedSize[0x0028])
	 */
	class UControlRig : public UObject
	{
	public:
		unsigned char                                              UnknownData_14R1[0x1E];                                  // 0x0028(0x001E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ERigExecutionType                                          ExecutionType;                                           // 0x0046(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0EJO[0x9];                                   // 0x0047(0x0009) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigVMRuntimeSettings                               VMRuntimeSettings;                                       // 0x0050(0x0050) NativeAccessSpecifierPublic
		TMap<struct FRigElementKey, struct FRigControlElementCustomization> ControlCustomizations;                                   // 0x00A0(0x0050) NativeAccessSpecifierPrivate
		class URigVM*                                              VM;                                                      // 0x00F0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class URigHierarchy*                                       DynamicHierarchy;                                        // 0x00F8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              GizmoLibrary[0x28];                                      // 0x0100(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              ShapeLibraries[0x10];                                    // 0x0128(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              UnknownData_UBSM[0x10];                                  // 0x0138(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, struct FCachedPropertyPath>              InputProperties;                                         // 0x0148(0x0050) Deprecated, NativeAccessSpecifierPrivate
		TMap<class FName, struct FCachedPropertyPath>              OutputProperties;                                        // 0x0198(0x0050) Deprecated, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LEWI[0xA0];                                  // 0x01E8(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FControlRigDrawContainer                            DrawContainer;                                           // 0x0288(0x0018) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FC6G[0x18];                                  // 0x02A0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimationDataSourceRegistry*                        DataSourceRegistry;                                      // 0x02B8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class FName>                                        EventQueue;                                              // 0x02C0(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Q472[0xA8];                                  // 0x02D0(0x00A8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigInfluenceMapPerEvent                            Influences;                                              // 0x0378(0x0060) NativeAccessSpecifierPrivate
		class UControlRig*                                         InteractionRig;                                          // 0x03D8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              InteractionRigClass;                                     // 0x03E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UAssetUserData*>                              AssetUserData;                                           // 0x03E8(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UNO2[0x90];                                  // 0x03F8(0x0090) Fix size for supers

	public:
		bool SupportsEvent(const class FName& InEventName);
		bool SetVariableFromString(const class FName& InVariableName, const class FString& InValue);
		void SetInteractionRigClass(class UClass* InInteractionRigClass);
		void SetInteractionRig(class UControlRig* InInteractionRig);
		void SetFramesPerSecond(float InFramesPerSecond);
		void SetDeltaTime(float InDeltaTime);
		void SetAbsoluteTime(float InAbsoluteTime, bool InSetDeltaTimeZero);
		void SetAbsoluteAndDeltaTime(float InAbsoluteTime, float InDeltaTime);
		void SelectControl(const class FName& InControlName, bool bSelect);
		void RequestSetup();
		void RequestInit();
		bool IsControlSelected(const class FName& InControlName);
		class URigVM* GetVM();
		class FName GetVariableType(const class FName& InVariableName);
		class FString GetVariableAsString(const class FName& InVariableName);
		TArray<class FName> GetSupportedEvents();
		TArray<class FName> GetScriptAccessibleVariables();
		class UClass* GetInteractionRigClass();
		class UControlRig* GetInteractionRig();
		class URigHierarchy* GetHierarchy();
		float GetCurrentFramesPerSecond();
		float GetAbsoluteTime();
		TArray<class UControlRig*> STATIC_FindControlRigs(class UObject* Outer, class UClass* OptionalClass);
		void Execute(EControlRigState State, const class FName& InEventName);
		TArray<class FName> CurrentControlSelection();
		bool ClearControlSelection();
		bool CanExecute();
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.AdditiveControlRig
	 * Size -> 0x0018 (FullSize[0x04A0] - InheritedSize[0x0488])
	 */
	class UAdditiveControlRig : public UControlRig
	{
	public:
		unsigned char                                              UnknownData_0HY4[0x8];                                   // 0x0488(0x0008) Fix Super Size
		unsigned char                                              UnknownData_RWU5[0x10];                                  // 0x0490(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.ControlRigAnimInstance
	 * Size -> 0x0008 (FullSize[0x0350] - InheritedSize[0x0348])
	 */
	class UControlRigAnimInstance : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_XHP0[0x8];                                   // 0x0348(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.ControlRigBlueprintGeneratedClass
	 * Size -> 0x0000 (FullSize[0x0328] - InheritedSize[0x0328])
	 */
	class UControlRigBlueprintGeneratedClass : public UBlueprintGeneratedClass
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.ControlRigComponent
	 * Size -> 0x0140 (FullSize[0x0680] - InheritedSize[0x0540])
	 */
	class UControlRigComponent : public UPrimitiveComponent
	{
	public:
		class UClass*                                              ControlRigClass;                                         // 0x0540(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPreInitializeDelegate;                                 // 0x0548(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPostInitializeDelegate;                                // 0x0558(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPreSetupDelegate;                                      // 0x0568(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPostSetupDelegate;                                     // 0x0578(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPreForwardsSolveDelegate;                              // 0x0588(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPostForwardsSolveDelegate;                             // 0x0598(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TArray<struct FControlRigComponentMappedElement>           MappedElements;                                          // 0x05A8(0x0010) Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bEnableLazyEvaluation;                                   // 0x05B8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SPZH[0x3];                                   // 0x05B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LazyEvaluationPositionThreshold;                         // 0x05BC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LazyEvaluationRotationThreshold;                         // 0x05C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LazyEvaluationScaleThreshold;                            // 0x05C4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bResetTransformBeforeTick;                               // 0x05C8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bResetInitialsBeforeSetup;                               // 0x05C9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUpdateRigOnTick;                                        // 0x05CA(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUpdateInEditor;                                         // 0x05CB(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawBones;                                              // 0x05CC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowDebugDrawing;                                       // 0x05CD(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NMZO[0x2];                                   // 0x05CE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UControlRig*                                         ControlRig;                                              // 0x05D0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DZLB[0xA8];                                  // 0x05D8(0x00A8) MISSED OFFSET (PADDING)

	public:
		void Update(float DeltaTime);
		void SetMappedElements(TArray<struct FControlRigComponentMappedElement> NewMappedElements);
		void SetInitialSpaceTransform(const class FName& SpaceName, const struct FTransform& InitialTransform, EControlRigComponentSpace Space);
		void SetInitialBoneTransform(const class FName& BoneName, const struct FTransform& InitialTransform, EControlRigComponentSpace Space, bool bPropagateToChildren);
		void SetControlVector2D(const class FName& ControlName, const struct FVector2D& Value);
		void SetControlTransform(const class FName& ControlName, const struct FTransform& Value, EControlRigComponentSpace Space);
		void SetControlScale(const class FName& ControlName, const struct FVector& Value, EControlRigComponentSpace Space);
		void SetControlRotator(const class FName& ControlName, const struct FRotator& Value, EControlRigComponentSpace Space);
		void SetControlPosition(const class FName& ControlName, const struct FVector& Value, EControlRigComponentSpace Space);
		void SetControlOffset(const class FName& ControlName, const struct FTransform& OffsetTransform, EControlRigComponentSpace Space);
		void SetControlInt(const class FName& ControlName, int32_t Value);
		void SetControlFloat(const class FName& ControlName, float Value);
		void SetControlBool(const class FName& ControlName, bool Value);
		void SetBoneTransform(const class FName& BoneName, const struct FTransform& Transform, EControlRigComponentSpace Space, float Weight, bool bPropagateToChildren);
		void SetBoneInitialTransformsFromSkeletalMesh(class USkeletalMesh* InSkeletalMesh);
		void OnPreSetup(class UControlRigComponent* Component);
		void OnPreInitialize(class UControlRigComponent* Component);
		void OnPreForwardsSolve(class UControlRigComponent* Component);
		void OnPostSetup(class UControlRigComponent* Component);
		void OnPostInitialize(class UControlRigComponent* Component);
		void OnPostForwardsSolve(class UControlRigComponent* Component);
		void Initialize();
		struct FTransform GetSpaceTransform(const class FName& SpaceName, EControlRigComponentSpace Space);
		struct FTransform GetInitialSpaceTransform(const class FName& SpaceName, EControlRigComponentSpace Space);
		struct FTransform GetInitialBoneTransform(const class FName& BoneName, EControlRigComponentSpace Space);
		TArray<class FName> GetElementNames(ERigElementType ElementType);
		struct FVector2D GetControlVector2D(const class FName& ControlName);
		struct FTransform GetControlTransform(const class FName& ControlName, EControlRigComponentSpace Space);
		struct FVector GetControlScale(const class FName& ControlName, EControlRigComponentSpace Space);
		struct FRotator GetControlRotator(const class FName& ControlName, EControlRigComponentSpace Space);
		class UControlRig* GetControlRig();
		struct FVector GetControlPosition(const class FName& ControlName, EControlRigComponentSpace Space);
		struct FTransform GetControlOffset(const class FName& ControlName, EControlRigComponentSpace Space);
		int32_t GetControlInt(const class FName& ControlName);
		float GetControlFloat(const class FName& ControlName);
		bool GetControlBool(const class FName& ControlName);
		struct FTransform GetBoneTransform(const class FName& BoneName, EControlRigComponentSpace Space);
		float GetAbsoluteTime();
		bool DoesElementExist(const class FName& Name, ERigElementType ElementType);
		void ClearMappedElements();
		bool CanExecute();
		void AddMappedSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent, TArray<struct FControlRigComponentMappedBone> Bones, TArray<struct FControlRigComponentMappedCurve> Curves);
		void AddMappedElements(TArray<struct FControlRigComponentMappedElement> NewMappedElements);
		void AddMappedComponents(TArray<struct FControlRigComponentMappedComponent> Components);
		void AddMappedCompleteSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent);
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.ControlRigControlActor
	 * Size -> 0x0098 (FullSize[0x0310] - InheritedSize[0x0278])
	 */
	class AControlRigControlActor : public AActor
	{
	public:
		class AActor*                                              ActorToTrack;                                            // 0x0278(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ControlRigClass;                                         // 0x0280(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRefreshOnTick;                                          // 0x0288(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsSelectable;                                           // 0x0289(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VOLX[0x6];                                   // 0x028A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  MaterialOverride;                                        // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ColorParameter;                                          // 0x0298(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCastShadows;                                            // 0x02A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8HWD[0x7];                                   // 0x02A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     ActorRootComponent;                                      // 0x02B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UControlRig*                                         ControlRig;                                              // 0x02B8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class FName>                                        ControlNames;                                            // 0x02C0(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<struct FTransform>                                  ShapeTransforms;                                         // 0x02D0(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<class UStaticMeshComponent*>                        Components;                                              // 0x02E0(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate
		TArray<class UMaterialInstanceDynamic*>                    Materials;                                               // 0x02F0(0x0010) ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate
		class FName                                                ColorParameterName;                                      // 0x0300(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MQXY[0x8];                                   // 0x0308(0x0008) MISSED OFFSET (PADDING)

	public:
		void Refresh();
		void Clear();
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.ControlRigShapeActor
	 * Size -> 0x0028 (FullSize[0x02A0] - InheritedSize[0x0278])
	 */
	class AControlRigShapeActor : public AActor
	{
	public:
		class USceneComponent*                                     ActorRootComponent;                                      // 0x0278(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                StaticMeshComponent;                                     // 0x0280(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   ControlRigIndex;                                         // 0x0288(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ControlName;                                             // 0x028C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ColorParameterName;                                      // 0x0294(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnabled : 1;                                            // 0x029C(0x0001) BIT_FIELD BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bSelected : 1;                                           // 0x029C(0x0001) BIT_FIELD BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bSelectable : 1;                                         // 0x029C(0x0001) BIT_FIELD BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bHovered : 1;                                            // 0x029C(0x0001) BIT_FIELD BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3UGC[0x3];                                   // 0x029D(0x0003) MISSED OFFSET (PADDING)

	public:
		void SetSelected(bool bInSelected);
		void SetSelectable(bool bInSelectable);
		void SetHovered(bool bInHovered);
		void SetGlobalTransform(const struct FTransform& InTransform);
		void SetEnabled(bool bInEnabled);
		void OnTransformChanged(const struct FTransform& NewTransform);
		void OnSelectionChanged(bool bIsSelected);
		void OnManipulatingChanged(bool bIsManipulating);
		void OnHoveredChanged(bool bIsSelected);
		void OnEnabledChanged(bool bIsEnabled);
		bool IsSelectedInEditor();
		bool IsHovered();
		bool IsEnabled();
		struct FTransform GetGlobalTransform();
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.ControlRigShapeLibrary
	 * Size -> 0x00F8 (FullSize[0x0120] - InheritedSize[0x0028])
	 */
	class UControlRigShapeLibrary : public UObject
	{
	public:
		unsigned char                                              UnknownData_XE79[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FControlRigShapeDefinition                          DefaultShape;                                            // 0x0030(0x00A0) Edit, NativeAccessSpecifierPublic
		unsigned char                                              DefaultMaterial[0x28];                                   // 0x00D0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class FName                                                MaterialColorParameter;                                  // 0x00F8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FControlRigShapeDefinition>                  Shapes;                                                  // 0x0100(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TGLG[0x10];                                  // 0x0110(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.ControlRigLayerInstance
	 * Size -> 0x0008 (FullSize[0x0350] - InheritedSize[0x0348])
	 */
	class UControlRigLayerInstance : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_JW5V[0x8];                                   // 0x0348(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.ControlRigValidationPass
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UControlRigValidationPass : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.ControlRigNumericalValidationPass
	 * Size -> 0x0098 (FullSize[0x00C0] - InheritedSize[0x0028])
	 */
	class UControlRigNumericalValidationPass : public UControlRigValidationPass
	{
	public:
		bool                                                       bCheckControls;                                          // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCheckBones;                                             // 0x0029(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCheckCurves;                                            // 0x002A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EKP3[0x1];                                   // 0x002B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TranslationPrecision;                                    // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotationPrecision;                                       // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ScalePrecision;                                          // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurvePrecision;                                          // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                EventNameA;                                              // 0x003C(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                EventNameB;                                              // 0x0044(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_15ZV[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigPose                                            Pose;                                                    // 0x0050(0x0070) Transient, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.ControlRigObjectHolder
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UControlRigObjectHolder : public UObject
	{
	public:
		TArray<class UObject*>                                     Objects;                                                 // 0x0028(0x0010) ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.ControlRigPoseAsset
	 * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
	 */
	class UControlRigPoseAsset : public UObject
	{
	public:
		struct FControlRigControlPose                              Pose;                                                    // 0x0028(0x0060) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		void SelectControls(class UControlRig* InControlRig, bool bDoMirror);
		void SavePose(class UControlRig* InControlRig, bool bUseAll);
		void ReplaceControlName(const class FName& CurrentName, const class FName& NewName);
		void PastePose(class UControlRig* InControlRig, bool bDoKey, bool bDoMirror);
		void GetCurrentPose(class UControlRig* InControlRig, struct FControlRigControlPose* OutPose);
		TArray<class FName> GetControlNames();
		bool DoesMirrorMatch(class UControlRig* ControlRig, const class FName& ControlName);
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.ControlRigPoseMirrorSettings
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UControlRigPoseMirrorSettings : public UObject
	{
	public:
		class FString                                              RightSide;                                               // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LeftSide;                                                // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAxis                                                      MirrorAxis;                                              // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAxis                                                      AxisToFlip;                                              // 0x0049(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W4ID[0x6];                                   // 0x004A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.ControlRigPoseProjectSettings
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UControlRigPoseProjectSettings : public UObject
	{
	public:
		TArray<struct FDirectoryPath>                              RootSaveDirs;                                            // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.ControlRigSequence
	 * Size -> 0x0058 (FullSize[0x0220] - InheritedSize[0x01C8])
	 */
	class UControlRigSequence : public ULevelSequence
	{
	public:
		unsigned char                                              LastExportedToAnimationSequence[0x28];                   // 0x01C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              LastExportedUsingSkeletalMesh[0x28];                     // 0x01F0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		float                                                      LastExportedFrameRate;                                   // 0x0218(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_901Q[0x4];                                   // 0x021C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.ControlRigSettings
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UControlRigSettings : public UDeveloperSettings
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.ControlRigEditorSettings
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UControlRigEditorSettings : public UDeveloperSettings
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.ControlRigSnapSettings
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UControlRigSnapSettings : public UObject
	{
	public:
		bool                                                       bKeepOffset;                                             // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSnapPosition;                                           // 0x0029(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSnapRotation;                                           // 0x002A(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSnapScale;                                              // 0x002B(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KEUB[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.ControlRigValidator
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UControlRigValidator : public UObject
	{
	public:
		TArray<class UControlRigValidationPass*>                   Passes;                                                  // 0x0028(0x0010) ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_447O[0x30];                                  // 0x0038(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.FKControlRig
	 * Size -> 0x0018 (FullSize[0x04A0] - InheritedSize[0x0488])
	 */
	class UFKControlRig : public UControlRig
	{
	public:
		TArray<bool>                                               IsControlActive;                                         // 0x0488(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		EControlRigFKRigExecuteMode                                ApplyMode;                                               // 0x0498(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_D3TO[0x7];                                   // 0x0499(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.MovieSceneControlRigParameterSection
	 * Size -> 0x0200 (FullSize[0x0348] - InheritedSize[0x0148])
	 */
	class UMovieSceneControlRigParameterSection : public UMovieSceneParameterSection
	{
	public:
		unsigned char                                              UnknownData_E8GY[0x18];                                  // 0x0148(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UControlRig*                                         ControlRig;                                              // 0x0160(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              ControlRigClass;                                         // 0x0168(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<bool>                                               ControlsMask;                                            // 0x0170(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FMovieSceneTransformMask                            TransformMask;                                           // 0x0180(0x0004) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O565[0x4];                                   // 0x0184(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneFloatChannel                             Weight;                                                  // 0x0188(0x00E8) NativeAccessSpecifierPublic
		TMap<class FName, struct FChannelMapInfo>                  ControlChannelMap;                                       // 0x0270(0x0050) NativeAccessSpecifierPublic
		TArray<struct FEnumParameterNameAndCurve>                  EnumParameterNamesAndCurves;                             // 0x02C0(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FIntegerParameterNameAndCurve>               IntegerParameterNamesAndCurves;                          // 0x02D0(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FSpaceControlNameAndChannel>                 SpaceChannels;                                           // 0x02E0(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JSOE[0x58];                                  // 0x02F0(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.MovieSceneControlRigParameterTrack
	 * Size -> 0x0050 (FullSize[0x00E0] - InheritedSize[0x0090])
	 */
	class UMovieSceneControlRigParameterTrack : public UMovieSceneNameableTrack
	{
	public:
		unsigned char                                              UnknownData_ZJ1H[0x28];                                  // 0x0090(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UControlRig*                                         ControlRig;                                              // 0x00B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMovieSceneSection*                                  SectionToKey;                                            // 0x00C0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UMovieSceneSection*>                          Sections;                                                // 0x00C8(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate
		class FName                                                TrackName;                                               // 0x00D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.RigHierarchy
	 * Size -> 0x01D8 (FullSize[0x0200] - InheritedSize[0x0028])
	 */
	class URigHierarchy : public UObject
	{
	public:
		unsigned char                                              UnknownData_SSKG[0x30];                                  // 0x0028(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint16_t                                                   TopologyVersion;                                         // 0x0058(0x0002) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bEnableDirtyPropagation;                                 // 0x005A(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VRFN[0x75];                                  // 0x005B(0x0075) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TransformStackIndex;                                     // 0x00D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JOQI[0x5C];                                  // 0x00D4(0x005C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class URigHierarchyController*                             HierarchyController;                                     // 0x0130(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7FUH[0x50];                                  // 0x0138(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<struct FRigElementKey, struct FRigElementKey>         PreviousNameMap;                                         // 0x0188(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_T4JH[0x20];                                  // 0x01D8(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class URigHierarchy*                                       HierarchyForCacheValidation;                             // 0x01F8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		bool SwitchToWorldSpace(const struct FRigElementKey& InChild, bool bInitial, bool bAffectChildren);
		bool SwitchToParent(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, bool bInitial, bool bAffectChildren);
		bool SwitchToDefaultParent(const struct FRigElementKey& InChild, bool bInitial, bool bAffectChildren);
		TArray<struct FRigElementKey> SortKeys(TArray<struct FRigElementKey> InKeys);
		void SetPose_ForBlueprint(const struct FRigPose& InPose);
		bool SetParentWeightArray(const struct FRigElementKey& InChild, TArray<struct FRigElementWeight> InWeights, bool bInitial, bool bAffectChildren);
		bool SetParentWeight(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, const struct FRigElementWeight& InWeight, bool bInitial, bool bAffectChildren);
		void SetLocalTransformByIndex(int32_t InElementIndex, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands);
		void SetLocalTransform(const struct FRigElementKey& InKey, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands);
		void SetGlobalTransformByIndex(int32_t InElementIndex, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo);
		void SetGlobalTransform(const struct FRigElementKey& InKey, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo);
		void SetCurveValueByIndex(int32_t InElementIndex, float InValue, bool bSetupUndo);
		void SetCurveValue(const struct FRigElementKey& InKey, float InValue, bool bSetupUndo);
		void SetControlVisibilityByIndex(int32_t InElementIndex, bool bVisibility);
		void SetControlVisibility(const struct FRigElementKey& InKey, bool bVisibility);
		void SetControlValueByIndex(int32_t InElementIndex, const struct FRigControlValue& InValue, ERigControlValueType InValueType, bool bSetupUndo, bool bPrintPythonCommands);
		void SetControlValue(const struct FRigElementKey& InKey, const struct FRigControlValue& InValue, ERigControlValueType InValueType, bool bSetupUndo, bool bPrintPythonCommands);
		void SetControlShapeTransformByIndex(int32_t InElementIndex, const struct FTransform& InTransform, bool bInitial, bool bSetupUndo);
		void SetControlShapeTransform(const struct FRigElementKey& InKey, const struct FTransform& InTransform, bool bInitial, bool bSetupUndo);
		void SetControlSettingsByIndex(int32_t InElementIndex, const struct FRigControlSettings& InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands);
		void SetControlSettings(const struct FRigElementKey& InKey, const struct FRigControlSettings& InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands);
		void SetControlOffsetTransformByIndex(int32_t InElementIndex, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands);
		void SetControlOffsetTransform(const struct FRigElementKey& InKey, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands);
		void SendAutoKeyEvent(const struct FRigElementKey& InElement, float InOffsetInSeconds, bool bAsynchronous);
		void ResetPoseToInitial(ERigElementType InTypeFilter);
		void ResetCurveValues();
		void Reset();
		int32_t Num();
		struct FRigControlValue STATIC_MakeControlValueFromVector2D(const struct FVector2D& InValue);
		struct FRigControlValue STATIC_MakeControlValueFromVector(const struct FVector& InValue);
		struct FRigControlValue STATIC_MakeControlValueFromTransformNoScale(const struct FTransformNoScale& InValue);
		struct FRigControlValue STATIC_MakeControlValueFromTransform(const struct FTransform& InValue);
		struct FRigControlValue STATIC_MakeControlValueFromRotator(const struct FRotator& InValue);
		struct FRigControlValue STATIC_MakeControlValueFromInt(int32_t InValue);
		struct FRigControlValue STATIC_MakeControlValueFromFloat(float InValue);
		struct FRigControlValue STATIC_MakeControlValueFromEulerTransform(const struct FEulerTransform& InValue);
		struct FRigControlValue STATIC_MakeControlValueFromBool(bool InValue);
		bool IsValidIndex(int32_t InElementIndex);
		bool IsSelectedByIndex(int32_t InIndex);
		bool IsSelected(const struct FRigElementKey& InKey);
		bool IsParentedTo(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent);
		struct FVector STATIC_GetVectorFromControlValue(const struct FRigControlValue& InValue);
		struct FVector2D STATIC_GetVector2DFromControlValue(const struct FRigControlValue& InValue);
		struct FTransformNoScale STATIC_GetTransformNoScaleFromControlValue(const struct FRigControlValue& InValue);
		struct FTransform STATIC_GetTransformFromControlValue(const struct FRigControlValue& InValue);
		TArray<struct FRigElementKey> GetSelectedKeys(ERigElementType InTypeFilter);
		struct FRotator STATIC_GetRotatorFromControlValue(const struct FRigControlValue& InValue);
		TArray<struct FRigElementKey> GetRigidBodyKeys(bool bTraverse);
		TArray<struct FRigElementKey> GetReferenceKeys(bool bTraverse);
		struct FRigElementKey GetPreviousParent(const struct FRigElementKey& InKey);
		class FName GetPreviousName(const struct FRigElementKey& InKey);
		struct FRigPose GetPose(bool bInitial);
		TArray<struct FRigElementWeight> GetParentWeightArray(const struct FRigElementKey& InChild, bool bInitial);
		struct FRigElementWeight GetParentWeight(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, bool bInitial);
		struct FTransform GetParentTransformByIndex(int32_t InElementIndex, bool bInitial);
		struct FTransform GetParentTransform(const struct FRigElementKey& InKey, bool bInitial);
		TArray<struct FRigElementKey> GetParents(const struct FRigElementKey& InKey, bool bRecursive);
		int32_t GetNumberOfParents(const struct FRigElementKey& InKey);
		TArray<struct FRigElementKey> GetNullKeys(bool bTraverse);
		struct FTransform GetLocalTransformByIndex(int32_t InElementIndex, bool bInitial);
		struct FTransform GetLocalTransform(const struct FRigElementKey& InKey, bool bInitial);
		struct FRigElementKey GetKey(int32_t InElementIndex);
		int32_t STATIC_GetIntFromControlValue(const struct FRigControlValue& InValue);
		int32_t GetIndex_ForBlueprint(const struct FRigElementKey& InKey);
		struct FTransform GetGlobalTransformByIndex(int32_t InElementIndex, bool bInitial);
		struct FTransform GetGlobalTransform(const struct FRigElementKey& InKey, bool bInitial);
		struct FTransform GetGlobalControlShapeTransformByIndex(int32_t InElementIndex, bool bInitial);
		struct FTransform GetGlobalControlShapeTransform(const struct FRigElementKey& InKey, bool bInitial);
		struct FTransform GetGlobalControlOffsetTransformByIndex(int32_t InElementIndex, bool bInitial);
		struct FTransform GetGlobalControlOffsetTransform(const struct FRigElementKey& InKey, bool bInitial);
		float STATIC_GetFloatFromControlValue(const struct FRigControlValue& InValue);
		struct FRigElementKey GetFirstParent(const struct FRigElementKey& InKey);
		struct FEulerTransform STATIC_GetEulerTransformFromControlValue(const struct FRigControlValue& InValue);
		float GetCurveValueByIndex(int32_t InElementIndex);
		float GetCurveValue(const struct FRigElementKey& InKey);
		TArray<struct FRigElementKey> GetCurveKeys();
		struct FRigControlValue GetControlValueByIndex(int32_t InElementIndex, ERigControlValueType InValueType);
		struct FRigControlValue GetControlValue(const struct FRigElementKey& InKey, ERigControlValueType InValueType);
		class URigHierarchyController* GetController(bool bCreateIfNeeded);
		TArray<struct FRigElementKey> GetControlKeys(bool bTraverse);
		TArray<struct FRigElementKey> GetChildren(const struct FRigElementKey& InKey, bool bRecursive);
		TArray<struct FRigElementKey> GetBoneKeys(bool bTraverse);
		TArray<struct FRigElementKey> GetAllKeys_ForBlueprint(bool bTraverse);
		struct FRigNullElement FindNull_ForBlueprintOnly(const struct FRigElementKey& InKey);
		struct FRigControlElement FindControl_ForBlueprintOnly(const struct FRigElementKey& InKey);
		struct FRigBoneElement FindBone_ForBlueprintOnly(const struct FRigElementKey& InKey);
		void CopyPose(class URigHierarchy* InHierarchy, bool bCurrent, bool bInitial);
		void CopyHierarchy(class URigHierarchy* InHierarchy);
		bool Contains_ForBlueprint(const struct FRigElementKey& InKey);
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.RigHierarchyController
	 * Size -> 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
	 */
	class URigHierarchyController : public UObject
	{
	public:
		bool                                                       bReportWarningsAndErrors;                                // 0x0028(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6QUH[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class URigHierarchy>                        Hierarchy;                                               // 0x002C(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MHWX[0x6C];                                  // 0x0034(0x006C) MISSED OFFSET (PADDING)

	public:
		bool SetSelection(TArray<struct FRigElementKey> InKeys, bool bPrintPythonCommand);
		bool SetParent(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand);
		void SetHierarchy(class URigHierarchy* InHierarchy);
		bool SetControlSettings(const struct FRigElementKey& InKey, const struct FRigControlSettings& InSettings, bool bSetupUndo);
		bool SelectElement(const struct FRigElementKey& InKey, bool bSelect, bool bClearSelection);
		struct FRigElementKey RenameElement(const struct FRigElementKey& InElement, const class FName& InName, bool bSetupUndo, bool bPrintPythonCommand, bool bClearSelection);
		bool RemoveParent(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand);
		bool RemoveElement(const struct FRigElementKey& InElement, bool bSetupUndo, bool bPrintPythonCommand);
		bool RemoveAllParents(const struct FRigElementKey& InChild, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand);
		TArray<struct FRigElementKey> MirrorElements(TArray<struct FRigElementKey> InKeys, const struct FRigMirrorSettings& InSettings, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands);
		TArray<struct FRigElementKey> ImportFromText(const class FString& InContent, bool bReplaceExistingElements, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands);
		TArray<struct FRigElementKey> ImportCurves(class USkeleton* InSkeleton, const class FName& InNameSpace, bool bSelectCurves, bool bSetupUndo, bool bPrintPythonCommand);
		TArray<struct FRigElementKey> ImportBones(class USkeleton* InSkeleton, const class FName& InNameSpace, bool bReplaceExistingBones, bool bRemoveObsoleteBones, bool bSelectBones, bool bSetupUndo, bool bPrintPythonCommand);
		class URigHierarchy* GetHierarchy();
		struct FRigControlSettings GetControlSettings(const struct FRigElementKey& InKey);
		class FString ExportToText(TArray<struct FRigElementKey> InKeys);
		class FString ExportSelectionToText();
		TArray<struct FRigElementKey> DuplicateElements(TArray<struct FRigElementKey> InKeys, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands);
		bool DeselectElement(const struct FRigElementKey& InKey);
		bool ClearSelection();
		struct FRigElementKey AddRigidBody(const class FName& InName, const struct FRigElementKey& InParent, const struct FRigRigidBodySettings& InSettings, const struct FTransform& InLocalTransform, bool bSetupUndo, bool bPrintPythonCommand);
		bool AddParent(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, float InWeight, bool bMaintainGlobalTransform, bool bSetupUndo);
		struct FRigElementKey AddNull(const class FName& InName, const struct FRigElementKey& InParent, const struct FTransform& InTransform, bool bTransformInGlobal, bool bSetupUndo, bool bPrintPythonCommand);
		struct FRigElementKey AddCurve(const class FName& InName, float InValue, bool bSetupUndo, bool bPrintPythonCommand);
		struct FRigElementKey AddControl_ForBlueprint(const class FName& InName, const struct FRigElementKey& InParent, const struct FRigControlSettings& InSettings, const struct FRigControlValue& InValue, bool bSetupUndo);
		struct FRigElementKey AddBone(const class FName& InName, const struct FRigElementKey& InParent, const struct FTransform& InTransform, bool bTransformInGlobal, ERigBoneType InBoneType, bool bSetupUndo, bool bPrintPythonCommand);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
