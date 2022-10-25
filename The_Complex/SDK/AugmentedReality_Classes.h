#pragma once

/**
 * Name: The_Complex
 * Version: 9349459
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
	 * Class AugmentedReality.ARActor
	 * Size -> 0x0000 (FullSize[0x0278] - InheritedSize[0x0278])
	 */
	class AARActor : public AActor
	{
	public:
		class UARComponent* AddARComponent(class UClass* InComponentClass, const struct FGuid& NativeID);
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UARBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_UnpinComponent(class USceneComponent* ComponentToUnpin);
		bool STATIC_ToggleARCapture(bool bOnOff, EARCaptureType CaptureType);
		void STATIC_StopARSession();
		void STATIC_StartARSession(class UARSessionConfig* SessionConfig);
		void STATIC_SetEnabledXRCamera(bool bOnOff);
		void STATIC_SetARWorldScale(float InWorldScale);
		void STATIC_SetARWorldOriginLocationAndRotation(const struct FVector& OriginLocation, const struct FRotator& OriginRotation, bool bIsTransformInWorldSpace, bool bMaintainUpDirection);
		void STATIC_SetAlignmentTransform(const struct FTransform& InAlignmentTransform);
		bool STATIC_SaveARPinToLocalStore(const class FName& InSaveName, class UARPin* InPin);
		struct FIntPoint STATIC_ResizeXRCamera(const struct FIntPoint& InSize);
		void STATIC_RemovePin(class UARPin* PinToRemove);
		void STATIC_RemoveARPinFromLocalStore(const class FName& InSaveName);
		void STATIC_RemoveAllARPinsFromLocalStore();
		class UARPin* STATIC_PinComponentToTraceResult(class USceneComponent* ComponentToPin, const struct FARTraceResult& TraceResult, const class FName& DebugName);
		bool STATIC_PinComponentToARPin(class USceneComponent* ComponentToPin, class UARPin* Pin);
		class UARPin* STATIC_PinComponent(class USceneComponent* ComponentToPin, const struct FTransform& PinToWorldTransform, class UARTrackedGeometry* TrackedGeometry, const class FName& DebugName);
		void STATIC_PauseARSession();
		TMap<class FName, class UARPin*> STATIC_LoadARPinsFromLocalStore();
		TArray<struct FARTraceResult> STATIC_LineTraceTrackedObjects3D(const struct FVector& Start, const struct FVector& End, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon);
		TArray<struct FARTraceResult> STATIC_LineTraceTrackedObjects(const struct FVector2D& ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon);
		bool STATIC_IsSessionTypeSupported(EARSessionType SessionType);
		bool STATIC_IsSessionTrackingFeatureSupported(EARSessionType SessionType, EARSessionTrackingFeature SessionTrackingFeature);
		bool STATIC_IsSceneReconstructionSupported(EARSessionType SessionType, EARSceneReconstruction SceneReconstructionMethod);
		bool STATIC_IsARSupported();
		bool STATIC_IsARPinLocalStoreSupported();
		bool STATIC_IsARPinLocalStoreReady();
		EARWorldMappingState STATIC_GetWorldMappingStatus();
		EARTrackingQualityReason STATIC_GetTrackingQualityReason();
		EARTrackingQuality STATIC_GetTrackingQuality();
		TArray<struct FARVideoFormat> STATIC_GetSupportedVideoFormats(EARSessionType SessionType);
		class UARSessionConfig* STATIC_GetSessionConfig();
		TArray<struct FVector> STATIC_GetPointCloud();
		class UARTexture* STATIC_GetPersonSegmentationImage();
		class UARTexture* STATIC_GetPersonSegmentationDepthImage();
		bool STATIC_GetObjectClassificationAtLocation(const struct FVector& InWorldLocation, EARObjectClassification* OutClassification, struct FVector* OutClassificationLocation, float MaxLocationDiff);
		int32_t STATIC_GetNumberOfTrackedFacesSupported();
		class UARLightEstimate* STATIC_GetCurrentLightEstimate();
		bool STATIC_GetCameraIntrinsics(struct FARCameraIntrinsics* OutCameraIntrinsics);
		class UARTextureCameraImage* STATIC_GetCameraImage();
		class UARTextureCameraDepth* STATIC_GetCameraDepth();
		float STATIC_GetARWorldScale();
		class UARTexture* STATIC_GetARTexture(EARTextureType TextureType);
		struct FARSessionStatus STATIC_GetARSessionStatus();
		TArray<class UARTrackedPose*> STATIC_GetAllTrackedPoses();
		TArray<class UARTrackedPoint*> STATIC_GetAllTrackedPoints();
		TArray<class UARPlaneGeometry*> STATIC_GetAllTrackedPlanes();
		TArray<class UARTrackedImage*> STATIC_GetAllTrackedImages();
		TArray<class UAREnvironmentCaptureProbe*> STATIC_GetAllTrackedEnvironmentCaptureProbes();
		TArray<struct FARPose2D> STATIC_GetAllTracked2DPoses();
		TArray<class UARPin*> STATIC_GetAllPins();
		TArray<class UARTrackedGeometry*> STATIC_GetAllGeometriesByClass(class UClass* GeometryClass);
		TArray<class UARTrackedGeometry*> STATIC_GetAllGeometries();
		struct FTransform STATIC_GetAlignmentTransform();
		TArray<class UARTrackedPoint*> STATIC_FindTrackedPointsByName(const class FString& PointName);
		void STATIC_DebugDrawTrackedGeometry(class UARTrackedGeometry* TrackedGeometry, class UObject* WorldContextObject, const struct FLinearColor& Color, float OutlineThickness, float PersistForSeconds);
		void STATIC_DebugDrawPin(class UARPin* ARPin, class UObject* WorldContextObject, const struct FLinearColor& Color, float Scale, float PersistForSeconds);
		void STATIC_CalculateClosestIntersection(TArray<struct FVector> StartPoints, TArray<struct FVector> EndPoints, struct FVector* ClosestIntersection);
		void STATIC_CalculateAlignmentTransform(const struct FTransform& TransformInFirstCoordinateSystem, const struct FTransform& TransformInSecondCoordinateSystem, struct FTransform* AlignmentTransform);
		bool STATIC_AddTrackedPointWithName(const struct FTransform& WorldTransform, const class FString& PointName, bool bDeletePointsWithSameName);
		class UARCandidateImage* STATIC_AddRuntimeCandidateImage(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, const class FString& FriendlyName, float PhysicalWidth);
		bool STATIC_AddManualEnvironmentCaptureProbe(const struct FVector& Location, const struct FVector& Extent);
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARTraceResultLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UARTraceResultLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class UARTrackedGeometry* STATIC_GetTrackedGeometry(const struct FARTraceResult& TraceResult);
		EARLineTraceChannels STATIC_GetTraceChannel(const struct FARTraceResult& TraceResult);
		struct FTransform STATIC_GetLocalTransform(const struct FARTraceResult& TraceResult);
		struct FTransform STATIC_GetLocalToWorldTransform(const struct FARTraceResult& TraceResult);
		struct FTransform STATIC_GetLocalToTrackingTransform(const struct FARTraceResult& TraceResult);
		float STATIC_GetDistanceFromCamera(const struct FARTraceResult& TraceResult);
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARBaseAsyncTaskBlueprintProxy
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UARBaseAsyncTaskBlueprintProxy : public UBlueprintAsyncActionBase
	{
	public:
		unsigned char                                              UnknownData_FUXF[0x20];                                  // 0x0030(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy
	 * Size -> 0x0030 (FullSize[0x0080] - InheritedSize[0x0050])
	 */
	class UARSaveWorldAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailed;                                                // 0x0060(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SJBZ[0x10];                                  // 0x0070(0x0010) MISSED OFFSET (PADDING)

	public:
		class UARSaveWorldAsyncTaskBlueprintProxy* STATIC_ARSaveWorld(class UObject* WorldContextObject);
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy
	 * Size -> 0x0060 (FullSize[0x00B0] - InheritedSize[0x0050])
	 */
	class UARGetCandidateObjectAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailed;                                                // 0x0060(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VGJW[0x40];                                  // 0x0070(0x0040) MISSED OFFSET (PADDING)

	public:
		class UARGetCandidateObjectAsyncTaskBlueprintProxy* STATIC_ARGetCandidateObject(class UObject* WorldContextObject, const struct FVector& Location, const struct FVector& Extent);
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARComponent
	 * Size -> 0x0080 (FullSize[0x0330] - InheritedSize[0x02B0])
	 */
	class UARComponent : public USceneComponent
	{
	public:
		struct FGuid                                               NativeID;                                                // 0x02B0(0x0010) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KWFI[0x30];                                  // 0x02C0(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bUseDefaultReplication;                                  // 0x02F0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_G23T[0x7];                                   // 0x02F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  DefaultMeshMaterial;                                     // 0x02F8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  DefaultWireframeMeshMaterial;                            // 0x0300(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMRMeshComponent*                                    MRMeshComponent;                                         // 0x0308(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UARTrackedGeometry*                                  MyTrackedGeometry;                                       // 0x0310(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BPIE[0x18];                                  // 0x0318(0x0018) MISSED OFFSET (PADDING)

	public:
		void UpdateVisualization();
		void SetNativeID(const struct FGuid& NativeID);
		void ReceiveRemove();
		void OnRep_Payload();
		class UMRMeshComponent* GetMRMesh();
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARPlaneComponent
	 * Size -> 0x00D0 (FullSize[0x0400] - InheritedSize[0x0330])
	 */
	class UARPlaneComponent : public UARComponent
	{
	public:
		struct FARPlaneUpdatePayload                               ReplicatedPayload;                                       // 0x0330(0x00D0) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, Protected, NativeAccessSpecifierProtected

	public:
		void STATIC_SetPlaneComponentDebugMode(EPlaneComponentDebugMode NewDebugMode);
		void STATIC_SetObjectClassificationDebugColors(TMap<EARObjectClassification, struct FLinearColor> InColors);
		void ServerUpdatePayload(const struct FARPlaneUpdatePayload& NewPayload);
		void ReceiveUpdate(const struct FARPlaneUpdatePayload& Payload);
		void ReceiveAdd(const struct FARPlaneUpdatePayload& Payload);
		TMap<EARObjectClassification, struct FLinearColor> STATIC_GetObjectClassificationDebugColors();
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARPointComponent
	 * Size -> 0x0010 (FullSize[0x0340] - InheritedSize[0x0330])
	 */
	class UARPointComponent : public UARComponent
	{
	public:
		struct FARPointUpdatePayload                               ReplicatedPayload;                                       // 0x0330(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_I32M[0xF];                                   // 0x0331(0x000F) MISSED OFFSET (PADDING)

	public:
		void ServerUpdatePayload(const struct FARPointUpdatePayload& NewPayload);
		void ReceiveUpdate(const struct FARPointUpdatePayload& Payload);
		void ReceiveAdd(const struct FARPointUpdatePayload& Payload);
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARFaceComponent
	 * Size -> 0x0090 (FullSize[0x03C0] - InheritedSize[0x0330])
	 */
	class UARFaceComponent : public UARComponent
	{
	public:
		EARFaceTransformMixing                                     TransformSetting;                                        // 0x0330(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bUpdateVertexNormal;                                     // 0x0331(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bFaceOutOfScreen;                                        // 0x0332(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QR1G[0x5];                                   // 0x0333(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FARFaceUpdatePayload                                ReplicatedPayload;                                       // 0x0338(0x0060) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7TKR[0x28];                                  // 0x0398(0x0028) MISSED OFFSET (PADDING)

	public:
		void STATIC_SetFaceComponentDebugMode(EFaceComponentDebugMode NewDebugMode);
		void ServerUpdatePayload(const struct FARFaceUpdatePayload& NewPayload);
		void ReceiveUpdate(const struct FARFaceUpdatePayload& Payload);
		void ReceiveAdd(const struct FARFaceUpdatePayload& Payload);
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARImageComponent
	 * Size -> 0x00A0 (FullSize[0x03D0] - InheritedSize[0x0330])
	 */
	class UARImageComponent : public UARComponent
	{
	public:
		struct FARImageUpdatePayload                               ReplicatedPayload;                                       // 0x0330(0x00A0) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected

	public:
		void STATIC_SetImageComponentDebugMode(EImageComponentDebugMode NewDebugMode);
		void ServerUpdatePayload(const struct FARImageUpdatePayload& NewPayload);
		void ReceiveUpdate(const struct FARImageUpdatePayload& Payload);
		void ReceiveAdd(const struct FARImageUpdatePayload& Payload);
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARQRCodeComponent
	 * Size -> 0x00B0 (FullSize[0x03E0] - InheritedSize[0x0330])
	 */
	class UARQRCodeComponent : public UARComponent
	{
	public:
		struct FARQRCodeUpdatePayload                              ReplicatedPayload;                                       // 0x0330(0x00B0) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, Protected, NativeAccessSpecifierProtected

	public:
		void STATIC_SetQRCodeComponentDebugMode(EQRCodeComponentDebugMode NewDebugMode);
		void ServerUpdatePayload(const struct FARQRCodeUpdatePayload& NewPayload);
		void ReceiveUpdate(const struct FARQRCodeUpdatePayload& Payload);
		void ReceiveAdd(const struct FARQRCodeUpdatePayload& Payload);
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARPoseComponent
	 * Size -> 0x0070 (FullSize[0x03A0] - InheritedSize[0x0330])
	 */
	class UARPoseComponent : public UARComponent
	{
	public:
		struct FARPoseUpdatePayload                                ReplicatedPayload;                                       // 0x0330(0x0070) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, Protected, NativeAccessSpecifierProtected

	public:
		void STATIC_SetPoseComponentDebugMode(EPoseComponentDebugMode NewDebugMode);
		void ServerUpdatePayload(const struct FARPoseUpdatePayload& NewPayload);
		void ReceiveUpdate(const struct FARPoseUpdatePayload& Payload);
		void ReceiveAdd(const struct FARPoseUpdatePayload& Payload);
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.AREnvironmentProbeComponent
	 * Size -> 0x0060 (FullSize[0x0390] - InheritedSize[0x0330])
	 */
	class UAREnvironmentProbeComponent : public UARComponent
	{
	public:
		struct FAREnvironmentProbeUpdatePayload                    ReplicatedPayload;                                       // 0x0330(0x0060) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected

	public:
		void ServerUpdatePayload(const struct FAREnvironmentProbeUpdatePayload& NewPayload);
		void ReceiveUpdate(const struct FAREnvironmentProbeUpdatePayload& Payload);
		void ReceiveAdd(const struct FAREnvironmentProbeUpdatePayload& Payload);
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARObjectComponent
	 * Size -> 0x0060 (FullSize[0x0390] - InheritedSize[0x0330])
	 */
	class UARObjectComponent : public UARComponent
	{
	public:
		struct FARObjectUpdatePayload                              ReplicatedPayload;                                       // 0x0330(0x0060) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected

	public:
		void ServerUpdatePayload(const struct FARObjectUpdatePayload& NewPayload);
		void ReceiveUpdate(const struct FARObjectUpdatePayload& Payload);
		void ReceiveAdd(const struct FARObjectUpdatePayload& Payload);
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARMeshComponent
	 * Size -> 0x0090 (FullSize[0x03C0] - InheritedSize[0x0330])
	 */
	class UARMeshComponent : public UARComponent
	{
	public:
		struct FARMeshUpdatePayload                                ReplicatedPayload;                                       // 0x0330(0x0090) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected

	public:
		void ServerUpdatePayload(const struct FARMeshUpdatePayload& NewPayload);
		void ReceiveUpdate(const struct FARMeshUpdatePayload& Payload);
		void ReceiveAdd(const struct FARMeshUpdatePayload& Payload);
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARGeoAnchorComponent
	 * Size -> 0x00A0 (FullSize[0x03D0] - InheritedSize[0x0330])
	 */
	class UARGeoAnchorComponent : public UARComponent
	{
	public:
		struct FARGeoAnchorUpdatePayload                           ReplicatedPayload;                                       // 0x0330(0x00A0) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, Protected, NativeAccessSpecifierProtected

	public:
		void STATIC_SetGeoAnchorComponentDebugMode(EGeoAnchorComponentDebugMode NewDebugMode);
		void ServerUpdatePayload(const struct FARGeoAnchorUpdatePayload& NewPayload);
		void ReceiveUpdate(const struct FARGeoAnchorUpdatePayload& Payload);
		void ReceiveAdd(const struct FARGeoAnchorUpdatePayload& Payload);
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARDependencyHandler
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UARDependencyHandler : public UObject
	{
	public:
		void StartARSessionLatent(class UObject* WorldContextObject, class UARSessionConfig* SessionConfig, const struct FLatentActionInfo& LatentInfo);
		void RequestARSessionPermission(class UObject* WorldContextObject, class UARSessionConfig* SessionConfig, const struct FLatentActionInfo& LatentInfo, EARServicePermissionRequestResult* OutPermissionResult);
		void InstallARService(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, EARServiceInstallRequestResult* OutInstallResult);
		class UARDependencyHandler* STATIC_GetARDependencyHandler();
		void CheckARServiceAvailability(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, EARServiceAvailability* OutAvailability);
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARGeoTrackingSupport
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UARGeoTrackingSupport : public UObject
	{
	public:
		class UARGeoTrackingSupport* STATIC_GetGeoTrackingSupport();
		EARGeoTrackingStateReason GetGeoTrackingStateReason();
		EARGeoTrackingState GetGeoTrackingState();
		EARGeoTrackingAccuracy GetGeoTrackingAccuracy();
		bool AddGeoAnchorAtLocationWithAltitude(float Longitude, float Latitude, float AltitudeMeters, const class FString& OptionalAnchorName);
		bool AddGeoAnchorAtLocation(float Longitude, float Latitude, const class FString& OptionalAnchorName);
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy
	 * Size -> 0x0050 (FullSize[0x00A0] - InheritedSize[0x0050])
	 */
	class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailed;                                                // 0x0060(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8I2M[0x30];                                  // 0x0070(0x0030) MISSED OFFSET (PADDING)

	public:
		void GeoTrackingAvailabilityDelegate__DelegateSignature(bool bIsAvailable, const class FString& Error);
		class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* STATIC_CheckGeoTrackingAvailabilityAtLocation(class UObject* WorldContextObject, float Longitude, float Latitude);
		class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* STATIC_CheckGeoTrackingAvailability(class UObject* WorldContextObject);
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy
	 * Size -> 0x0058 (FullSize[0x00A8] - InheritedSize[0x0050])
	 */
	class UGetGeoLocationAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailed;                                                // 0x0060(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6QJW[0x38];                                  // 0x0070(0x0038) MISSED OFFSET (PADDING)

	public:
		void GetGeoLocationDelegate__DelegateSignature(float Longitude, float Latitude, float Altitude, const class FString& Error);
		class UGetGeoLocationAsyncTaskBlueprintProxy* STATIC_GetGeoLocationAtWorldPosition(class UObject* WorldContextObject, const struct FVector& WorldPosition);
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARLifeCycleComponent
	 * Size -> 0x0030 (FullSize[0x02E0] - InheritedSize[0x02B0])
	 */
	class UARLifeCycleComponent : public USceneComponent
	{
	public:
		class FScriptMulticastDelegate                             OnARActorSpawnedDelegate;                                // 0x02B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnARActorToBeDestroyedDelegate;                          // 0x02C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IOPY[0x10];                                  // 0x02D0(0x0010) MISSED OFFSET (PADDING)

	public:
		void ServerSpawnARActor(class UClass* ComponentClass, const struct FGuid& NativeID);
		void ServerDestroyARActor(class AARActor* Actor);
		void InstanceARActorToBeDestroyedDelegate__DelegateSignature(class AARActor* Actor);
		void InstanceARActorSpawnedDelegate__DelegateSignature(class UClass* ComponentClass, const struct FGuid& NativeID, class AARActor* SpawnedActor);
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARLightEstimate
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UARLightEstimate : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARBasicLightEstimate
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UARBasicLightEstimate : public UARLightEstimate
	{
	public:
		float                                                      AmbientIntensityLumens;                                  // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      AmbientColorTemperatureKelvin;                           // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        AmbientColor;                                            // 0x0030(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		float GetAmbientIntensityLumens();
		float GetAmbientColorTemperatureKelvin();
		struct FLinearColor GetAmbientColor();
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.AROriginActor
	 * Size -> 0x0000 (FullSize[0x0278] - InheritedSize[0x0278])
	 */
	class AAROriginActor : public AActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARPin
	 * Size -> 0x0128 (FullSize[0x0150] - InheritedSize[0x0028])
	 */
	class UARPin : public UObject
	{
	public:
		class UARTrackedGeometry*                                  TrackedGeometry;                                         // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USceneComponent*                                     PinnedComponent;                                         // 0x0030(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2VKA[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          LocalToTrackingTransform;                                // 0x0040(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		struct FTransform                                          LocalToAlignedTrackingTransform;                         // 0x00A0(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		EARTrackingState                                           TrackingState;                                           // 0x0100(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EW2O[0x1F];                                  // 0x0101(0x001F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnARTrackingStateChanged;                                // 0x0120(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnARTransformUpdated;                                    // 0x0130(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2AES[0x10];                                  // 0x0140(0x0010) MISSED OFFSET (PADDING)

	public:
		EARTrackingState GetTrackingState();
		class UARTrackedGeometry* GetTrackedGeometry();
		class USceneComponent* GetPinnedComponent();
		struct FTransform GetLocalToWorldTransform();
		struct FTransform GetLocalToTrackingTransform();
		class FName GetDebugName();
		void DebugDraw(class UWorld* World, const struct FLinearColor& Color, float Scale, float PersistForSeconds);
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARSessionConfig
	 * Size -> 0x00E0 (FullSize[0x0110] - InheritedSize[0x0030])
	 */
	class UARSessionConfig : public UDataAsset
	{
	public:
		bool                                                       bGenerateMeshDataFromTrackedGeometry;                    // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGenerateCollisionForMeshData;                           // 0x0031(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGenerateNavMeshForMeshData;                             // 0x0032(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseMeshDataForOcclusion;                                // 0x0033(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRenderMeshDataInWireframe;                              // 0x0034(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTrackSceneObjects;                                      // 0x0035(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUsePersonSegmentationForOcclusion;                      // 0x0036(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseSceneDepthForOcclusion;                              // 0x0037(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseAutomaticImageScaleEstimation;                       // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseStandardOnboardingUX;                                // 0x0039(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EARWorldAlignment                                          WorldAlignment;                                          // 0x003A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EARSessionType                                             SessionType;                                             // 0x003B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EARPlaneDetectionMode                                      PlaneDetectionMode;                                      // 0x003C(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHorizontalPlaneDetection;                               // 0x003D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bVerticalPlaneDetection;                                 // 0x003E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEnableAutoFocus;                                        // 0x003F(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EARLightEstimationMode                                     LightEstimationMode;                                     // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EARFrameSyncMode                                           FrameSyncMode;                                           // 0x0041(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEnableAutomaticCameraOverlay;                           // 0x0042(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEnableAutomaticCameraTracking;                          // 0x0043(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bResetCameraTracking;                                    // 0x0044(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bResetTrackedObjects;                                    // 0x0045(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QTOV[0x2];                                   // 0x0046(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UARCandidateImage*>                           CandidateImages;                                         // 0x0048(0x0010) Edit, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		int32_t                                                    MaxNumSimultaneousImagesTracked;                         // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EAREnvironmentCaptureProbeType                             EnvironmentCaptureProbeType;                             // 0x005C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_M4W1[0x3];                                   // 0x005D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      WorldMapData;                                            // 0x0060(0x0010) Edit, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected
		TArray<class UARCandidateObject*>                          CandidateObjects;                                        // 0x0070(0x0010) Edit, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		struct FARVideoFormat                                      DesiredVideoFormat;                                      // 0x0080(0x000C) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bUseOptimalVideoFormat;                                  // 0x008C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EARFaceTrackingDirection                                   FaceTrackingDirection;                                   // 0x008D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EARFaceTrackingUpdate                                      FaceTrackingUpdate;                                      // 0x008E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_150W[0x1];                                   // 0x008F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxNumberOfTrackedFaces;                                 // 0x0090(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_M8GS[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      SerializedARCandidateImageDatabase;                      // 0x0098(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		EARSessionTrackingFeature                                  EnabledSessionTrackingFeature;                           // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EARSceneReconstruction                                     SceneReconstructionMethod;                               // 0x00A9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9NXC[0x6];                                   // 0x00AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              PlaneComponentClass;                                     // 0x00B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              PointComponentClass;                                     // 0x00B8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              FaceComponentClass;                                      // 0x00C0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              ImageComponentClass;                                     // 0x00C8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              QRCodeComponentClass;                                    // 0x00D0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              PoseComponentClass;                                      // 0x00D8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              EnvironmentProbeComponentClass;                          // 0x00E0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              ObjectComponentClass;                                    // 0x00E8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              MeshComponentClass;                                      // 0x00F0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              GeoAnchorComponentClass;                                 // 0x00F8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  DefaultMeshMaterial;                                     // 0x0100(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  DefaultWireframeMeshMaterial;                            // 0x0108(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		bool ShouldResetTrackedObjects();
		bool ShouldResetCameraTracking();
		bool ShouldRenderCameraOverlay();
		bool ShouldEnableCameraTracking();
		bool ShouldEnableAutoFocus();
		void SetWorldMapData(TArray<unsigned char> WorldMapData);
		void SetSessionTrackingFeatureToEnable(EARSessionTrackingFeature InSessionTrackingFeature);
		void SetSceneReconstructionMethod(EARSceneReconstruction InSceneReconstructionMethod);
		void SetResetTrackedObjects(bool bNewValue);
		void SetResetCameraTracking(bool bNewValue);
		void SetFaceTrackingUpdate(EARFaceTrackingUpdate InUpdate);
		void SetFaceTrackingDirection(EARFaceTrackingDirection InDirection);
		void SetEnableAutoFocus(bool bNewValue);
		void SetDesiredVideoFormat(const struct FARVideoFormat& NewFormat);
		void SetCandidateObjectList(TArray<class UARCandidateObject*> InCandidateObjects);
		TArray<unsigned char> GetWorldMapData();
		EARWorldAlignment GetWorldAlignment();
		EARSessionType GetSessionType();
		EARSceneReconstruction GetSceneReconstructionMethod();
		EARPlaneDetectionMode GetPlaneDetectionMode();
		int32_t GetMaxNumSimultaneousImagesTracked();
		EARLightEstimationMode GetLightEstimationMode();
		EARFrameSyncMode GetFrameSyncMode();
		EARFaceTrackingUpdate GetFaceTrackingUpdate();
		EARFaceTrackingDirection GetFaceTrackingDirection();
		EAREnvironmentCaptureProbeType GetEnvironmentCaptureProbeType();
		EARSessionTrackingFeature GetEnabledSessionTrackingFeature();
		struct FARVideoFormat GetDesiredVideoFormat();
		TArray<class UARCandidateObject*> GetCandidateObjectList();
		TArray<class UARCandidateImage*> GetCandidateImageList();
		void AddCandidateObject(class UARCandidateObject* CandidateObject);
		void AddCandidateImage(class UARCandidateImage* NewCandidateImage);
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARSharedWorldGameMode
	 * Size -> 0x0068 (FullSize[0x03C8] - InheritedSize[0x0360])
	 */
	class AARSharedWorldGameMode : public AGameMode
	{
	public:
		int32_t                                                    BufferSizePerChunk;                                      // 0x0360(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GLHH[0x64];                                  // 0x0364(0x0064) MISSED OFFSET (PADDING)

	public:
		void SetPreviewImageData(TArray<unsigned char> ImageData);
		void SetARWorldSharingIsReady();
		void SetARSharedWorldData(TArray<unsigned char> ARWorldData);
		class AARSharedWorldGameState* GetARSharedWorldGameState();
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARSharedWorldGameState
	 * Size -> 0x0038 (FullSize[0x0320] - InheritedSize[0x02E8])
	 */
	class AARSharedWorldGameState : public AGameState
	{
	public:
		TArray<unsigned char>                                      PreviewImageData;                                        // 0x02E8(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      ARWorldData;                                             // 0x02F8(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    PreviewImageBytesTotal;                                  // 0x0308(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ARWorldBytesTotal;                                       // 0x030C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PreviewImageBytesDelivered;                              // 0x0310(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ARWorldBytesDelivered;                                   // 0x0314(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9X04[0x8];                                   // 0x0318(0x0008) MISSED OFFSET (PADDING)

	public:
		void K2_OnARWorldMapIsReady();
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARSharedWorldPlayerController
	 * Size -> 0x0008 (FullSize[0x07D0] - InheritedSize[0x07C8])
	 */
	class AARSharedWorldPlayerController : public APlayerController
	{
	public:
		unsigned char                                              UnknownData_338A[0x8];                                   // 0x07C8(0x0008) MISSED OFFSET (PADDING)

	public:
		void ServerMarkReadyForReceiving();
		void ClientUpdatePreviewImageData(int32_t Offset, TArray<unsigned char> Buffer);
		void ClientUpdateARWorldData(int32_t Offset, TArray<unsigned char> Buffer);
		void ClientInitSharedWorld(int32_t PreviewImageSize, int32_t ARWorldDataSize);
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARSkyLight
	 * Size -> 0x0010 (FullSize[0x0298] - InheritedSize[0x0288])
	 */
	class AARSkyLight : public ASkyLight
	{
	public:
		class UAREnvironmentCaptureProbe*                          CaptureProbe;                                            // 0x0288(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EQOU[0x8];                                   // 0x0290(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetEnvironmentCaptureProbe(class UAREnvironmentCaptureProbe* InCaptureProbe);
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARTexture
	 * Size -> 0x0030 (FullSize[0x0220] - InheritedSize[0x01F0])
	 */
	class UARTexture : public UTexture
	{
	public:
		EARTextureType                                             TextureType;                                             // 0x01F0(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HR8E[0x3];                                   // 0x01F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Timestamp;                                               // 0x01F4(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               ExternalTextureGuid;                                     // 0x01F8(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Size;                                                    // 0x0208(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OPFG[0x8];                                   // 0x0218(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARTextureCameraImage
	 * Size -> 0x0000 (FullSize[0x0220] - InheritedSize[0x0220])
	 */
	class UARTextureCameraImage : public UARTexture
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARTextureCameraDepth
	 * Size -> 0x0000 (FullSize[0x0220] - InheritedSize[0x0220])
	 */
	class UARTextureCameraDepth : public UARTexture
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.AREnvironmentCaptureProbeTexture
	 * Size -> 0x0030 (FullSize[0x02C0] - InheritedSize[0x0290])
	 */
	class UAREnvironmentCaptureProbeTexture : public UTextureCube
	{
	public:
		EARTextureType                                             TextureType;                                             // 0x0290(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IDGY[0x3];                                   // 0x0291(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Timestamp;                                               // 0x0294(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               ExternalTextureGuid;                                     // 0x0298(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Size;                                                    // 0x02A8(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WXEZ[0x8];                                   // 0x02B8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARTraceResultDummy
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UARTraceResultDummy : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARTrackedGeometry
	 * Size -> 0x0130 (FullSize[0x0158] - InheritedSize[0x0028])
	 */
	class UARTrackedGeometry : public UObject
	{
	public:
		struct FGuid                                               UniqueId;                                                // 0x0028(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_53PM[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          LocalToTrackingTransform;                                // 0x0040(0x0060) IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FTransform                                          LocalToAlignedTrackingTransform;                         // 0x00A0(0x0060) IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		EARTrackingState                                           TrackingState;                                           // 0x0100(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GJTY[0xF];                                   // 0x0101(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMRMeshComponent*                                    UnderlyingMesh;                                          // 0x0110(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EARObjectClassification                                    ObjectClassification;                                    // 0x0118(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EARSpatialMeshUsageFlags                                   SpatialMeshUsageFlags;                                   // 0x0119(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_W9GZ[0x16];                                  // 0x011A(0x0016) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LastUpdateFrameNumber;                                   // 0x0130(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_C33R[0xC];                                   // 0x0134(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                DebugName;                                               // 0x0140(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_M9Z4[0x10];                                  // 0x0148(0x0010) Fix size for supers

	public:
		bool IsTracked();
		bool HasSpatialMeshUsageFlag(EARSpatialMeshUsageFlags InFlag);
		class UMRMeshComponent* GetUnderlyingMesh();
		EARTrackingState GetTrackingState();
		EARObjectClassification GetObjectClassification();
		class FString GetName();
		struct FTransform GetLocalToWorldTransform();
		struct FTransform GetLocalToTrackingTransform();
		float GetLastUpdateTimestamp();
		int32_t GetLastUpdateFrameNumber();
		class FName GetDebugName();
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARPlaneGeometry
	 * Size -> 0x0058 (FullSize[0x01B0] - InheritedSize[0x0158])
	 */
	class UARPlaneGeometry : public UARTrackedGeometry
	{
	public:
		unsigned char                                              UnknownData_FUBM[0x8];                                   // 0x0158(0x0008) Fix Super Size
		struct FVector                                             Center;                                                  // 0x0160(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             Extent;                                                  // 0x0178(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FVector>                                     BoundaryPolygon;                                         // 0x0190(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		class UARPlaneGeometry*                                    SubsumedBy;                                              // 0x01A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QSOD[0x8];                                   // 0x01A8(0x0008) MISSED OFFSET (PADDING)

	public:
		class UARPlaneGeometry* GetSubsumedBy();
		EARPlaneOrientation GetOrientation();
		struct FVector GetExtent();
		struct FVector GetCenter();
		TArray<struct FVector> GetBoundaryPolygonInLocalSpace();
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARTrackedPoint
	 * Size -> 0x0008 (FullSize[0x0160] - InheritedSize[0x0158])
	 */
	class UARTrackedPoint : public UARTrackedGeometry
	{
	public:
		unsigned char                                              UnknownData_Z03G[0x8];                                   // 0x0158(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARTrackedImage
	 * Size -> 0x0018 (FullSize[0x0170] - InheritedSize[0x0158])
	 */
	class UARTrackedImage : public UARTrackedGeometry
	{
	public:
		class UARCandidateImage*                                   DetectedImage;                                           // 0x0158(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector2D                                           EstimatedSize;                                           // 0x0160(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		struct FVector2D GetEstimateSize();
		class UARCandidateImage* GetDetectedImage();
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARTrackedQRCode
	 * Size -> 0x0020 (FullSize[0x0190] - InheritedSize[0x0170])
	 */
	class UARTrackedQRCode : public UARTrackedImage
	{
	public:
		class FString                                              QRCode;                                                  // 0x0170(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Version;                                                 // 0x0180(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H9QJ[0xC];                                   // 0x0184(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARFaceGeometry
	 * Size -> 0x0168 (FullSize[0x02C0] - InheritedSize[0x0158])
	 */
	class UARFaceGeometry : public UARTrackedGeometry
	{
	public:
		struct FVector                                             LookAtTarget;                                            // 0x0158(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsTracked;                                              // 0x0170(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_12IW[0x7];                                   // 0x0171(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EARFaceBlendShape, float>                             BlendShapes;                                             // 0x0178(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7MI9[0x38];                                  // 0x01C8(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          LeftEyeTransform;                                        // 0x0200(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		struct FTransform                                          RightEyeTransform;                                       // 0x0260(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate

	public:
		struct FTransform GetWorldSpaceEyeTransform(EAREye Eye);
		struct FTransform GetLocalSpaceEyeTransform(EAREye Eye);
		float GetBlendShapeValue(EARFaceBlendShape BlendShape);
		TMap<EARFaceBlendShape, float> GetBlendShapes();
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.AREnvironmentCaptureProbe
	 * Size -> 0x0028 (FullSize[0x0180] - InheritedSize[0x0158])
	 */
	class UAREnvironmentCaptureProbe : public UARTrackedGeometry
	{
	public:
		struct FVector                                             Extent;                                                  // 0x0158(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAREnvironmentCaptureProbeTexture*                   EnvironmentCaptureTexture;                               // 0x0170(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BAMF[0x8];                                   // 0x0178(0x0008) MISSED OFFSET (PADDING)

	public:
		struct FVector GetExtent();
		class UAREnvironmentCaptureProbeTexture* GetEnvironmentCaptureTexture();
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARTrackedObject
	 * Size -> 0x0008 (FullSize[0x0160] - InheritedSize[0x0158])
	 */
	class UARTrackedObject : public UARTrackedGeometry
	{
	public:
		class UARCandidateObject*                                  DetectedObject;                                          // 0x0158(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		class UARCandidateObject* GetDetectedObject();
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARTrackedPose
	 * Size -> 0x0058 (FullSize[0x01B0] - InheritedSize[0x0158])
	 */
	class UARTrackedPose : public UARTrackedGeometry
	{
	public:
		struct FARPose3D                                           TrackedPose;                                             // 0x0158(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RR8N[0x8];                                   // 0x01A8(0x0008) MISSED OFFSET (PADDING)

	public:
		struct FARPose3D GetTrackedPoseData();
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARMeshGeometry
	 * Size -> 0x0008 (FullSize[0x0160] - InheritedSize[0x0158])
	 */
	class UARMeshGeometry : public UARTrackedGeometry
	{
	public:
		unsigned char                                              UnknownData_533I[0x8];                                   // 0x0158(0x0008) Fix Super Size

	public:
		bool GetObjectClassificationAtLocation(const struct FVector& InWorldLocation, EARObjectClassification* OutClassification, struct FVector* OutClassificationLocation, float MaxLocationDiff);
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARGeoAnchor
	 * Size -> 0x0018 (FullSize[0x0170] - InheritedSize[0x0158])
	 */
	class UARGeoAnchor : public UARTrackedGeometry
	{
	public:
		unsigned char                                              UnknownData_NCLB[0x8];                                   // 0x0158(0x0008) Fix Super Size
		unsigned char                                              UnknownData_C7CM[0x10];                                  // 0x0160(0x0010) MISSED OFFSET (PADDING)

	public:
		float GetLongitude();
		float GetLatitude();
		EARAltitudeSource GetAltitudeSource();
		float GetAltitudeMeters();
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARTrackableNotifyComponent
	 * Size -> 0x0150 (FullSize[0x0200] - InheritedSize[0x00B0])
	 */
	class UARTrackableNotifyComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnAddTrackedGeometry;                                    // 0x00B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUpdateTrackedGeometry;                                 // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRemoveTrackedGeometry;                                 // 0x00D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAddTrackedPlane;                                       // 0x00E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUpdateTrackedPlane;                                    // 0x00F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRemoveTrackedPlane;                                    // 0x0100(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAddTrackedPoint;                                       // 0x0110(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUpdateTrackedPoint;                                    // 0x0120(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRemoveTrackedPoint;                                    // 0x0130(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAddTrackedImage;                                       // 0x0140(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUpdateTrackedImage;                                    // 0x0150(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRemoveTrackedImage;                                    // 0x0160(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAddTrackedFace;                                        // 0x0170(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUpdateTrackedFace;                                     // 0x0180(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRemoveTrackedFace;                                     // 0x0190(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAddTrackedEnvProbe;                                    // 0x01A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUpdateTrackedEnvProbe;                                 // 0x01B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRemoveTrackedEnvProbe;                                 // 0x01C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAddTrackedObject;                                      // 0x01D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUpdateTrackedObject;                                   // 0x01E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRemoveTrackedObject;                                   // 0x01F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARTypesDummyClass
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UARTypesDummyClass : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARCandidateImage
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class UARCandidateImage : public UDataAsset
	{
	public:
		class UTexture2D*                                          CandidateTexture;                                        // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              FriendlyName;                                            // 0x0038(0x0010) Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Width;                                                   // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Height;                                                  // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EARCandidateImageOrientation                               Orientation;                                             // 0x0050(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_220J[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)

	public:
		float GetPhysicalWidth();
		float GetPhysicalHeight();
		EARCandidateImageOrientation GetOrientation();
		class FString GetFriendlyName();
		class UTexture2D* GetCandidateTexture();
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARCandidateObject
	 * Size -> 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
	 */
	class UARCandidateObject : public UDataAsset
	{
	public:
		TArray<unsigned char>                                      CandidateObjectData;                                     // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		class FString                                              FriendlyName;                                            // 0x0040(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FBox                                                BoundingBox;                                             // 0x0050(0x0038) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate

	public:
		void SetFriendlyName(const class FString& NewName);
		void SetCandidateObjectData(TArray<unsigned char> InCandidateObject);
		void SetBoundingBox(const struct FBox& InBoundingBox);
		class FString GetFriendlyName();
		TArray<unsigned char> GetCandidateObjectData();
		struct FBox GetBoundingBox();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
