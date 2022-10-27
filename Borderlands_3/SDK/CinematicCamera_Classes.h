#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * Class CinematicCamera.CameraRig_Crane
	 * Size -> 0x0030 (FullSize[0x0488] - InheritedSize[0x0458])
	 */
	class ACameraRig_Crane : public AActor
	{
	public:
		float                                                      CranePitch;                                              // 0x0458(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CraneYaw;                                                // 0x045C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CraneArmLength;                                          // 0x0460(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLockMountPitch;                                         // 0x0464(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLockMountYaw;                                           // 0x0465(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TX5E[0x2];                                   // 0x0466(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     TransformComponent;                                      // 0x0468(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USceneComponent*                                     CraneYawControl;                                         // 0x0470(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USceneComponent*                                     CranePitchControl;                                       // 0x0478(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USceneComponent*                                     CraneCameraMount;                                        // 0x0480(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CinematicCamera.CameraRig_Rail
	 * Size -> 0x0020 (FullSize[0x0478] - InheritedSize[0x0458])
	 */
	class ACameraRig_Rail : public AActor
	{
	public:
		float                                                      CurrentPositionOnRail;                                   // 0x0458(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLockOrientationToRail;                                  // 0x045C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DJDK[0x3];                                   // 0x045D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     TransformComponent;                                      // 0x0460(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USplineComponent*                                    RailSplineComponent;                                     // 0x0468(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USceneComponent*                                     RailCameraMount;                                         // 0x0470(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CinematicCamera.CineCameraActor
	 * Size -> 0x0040 (FullSize[0x0AD0] - InheritedSize[0x0A90])
	 */
	class ACineCameraActor : public ACameraActor
	{
	public:
		struct FCameraLookatTrackingSettings                       LookatTrackingSettings;                                  // 0x0A90(0x0030) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C4XL[0x10];                                  // 0x0AC0(0x0010) MISSED OFFSET (PADDING)

	public:
		class UCineCameraComponent* GetCineCameraComponent();
		static UClass* StaticClass();
	};

	/**
	 * Class CinematicCamera.CineCameraComponent
	 * Size -> 0x00E0 (FullSize[0x0A40] - InheritedSize[0x0960])
	 */
	class UCineCameraComponent : public UCameraComponent
	{
	public:
		struct FCameraFilmbackSettings                             FilmbackSettings;                                        // 0x0960(0x000C) Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, NativeAccessSpecifierPublic
		struct FCameraLensSettings                                 LensSettings;                                            // 0x096C(0x0018) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RXHN[0x4];                                   // 0x0984(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCameraFocusSettings                                FocusSettings;                                           // 0x0988(0x0038) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float                                                      CurrentFocalLength;                                      // 0x09C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurrentAperture;                                         // 0x09C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurrentFocusDistance;                                    // 0x09C8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S6YK[0xC];                                   // 0x09CC(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         FocusPlaneVisualizationMesh;                             // 0x09D8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterial*                                           FocusPlaneVisualizationMaterial;                         // 0x09E0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UStaticMeshComponent*                                DebugFocusPlaneComponent;                                // 0x09E8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInstanceDynamic*                            DebugFocusPlaneMID;                                      // 0x09F0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FNamedFilmbackPreset>                        FilmbackPresets;                                         // 0x09F8(0x0010) ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected
		TArray<struct FNamedLensPreset>                            LensPresets;                                             // 0x0A08(0x0010) ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected
		class FString                                              DefaultFilmbackPresetName;                               // 0x0A18(0x0010) ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              DefaultLensPresetName;                                   // 0x0A28(0x0010) ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DefaultLensFocalLength;                                  // 0x0A38(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DefaultLensFStop;                                        // 0x0A3C(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetLensPresetByName(const class FString& InPresetName);
		void SetFilmbackPresetByName(const class FString& InPresetName);
		float GetVerticalFieldOfView();
		class FString GetLensPresetName();
		float GetHorizontalFieldOfView();
		class FString GetFilmbackPresetName();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
