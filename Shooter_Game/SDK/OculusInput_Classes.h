#pragma once

/**
 * Name: Shooter_Game
 * Version: 03.22.2014
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
	 * Class OculusInput.OculusHandComponent
	 * Size -> 0x0090 (FullSize[0x0880] - InheritedSize[0x07F0])
	 */
	class UOculusHandComponent : public UPoseableMeshComponent
	{
	public:
		class UMaterialInterface*                                  SystemGestureMaterial;                                   // 0x07F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInitializePhysics;                                      // 0x07F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUpdateHandScale;                                        // 0x07F9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I4K2[0x6];                                   // 0x07FA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  MaterialOverride;                                        // 0x0800(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<EBone, class FName>                                   BoneNameMappings;                                        // 0x0808(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FOculusCapsuleCollider>                      CollisionCapsules;                                       // 0x0858(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bSkeletalMeshInitialized;                                // 0x0868(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O0TC[0x17];                                  // 0x0869(0x0017) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OculusInput.OculusInputFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOculusInputFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool IsPointerPoseValid(EOculusHandType DeviceHand, int32_t ControllerIndex);
		bool IsHandTrackingEnabled();
		TArray<struct FOculusCapsuleCollider> InitializeHandPhysics(EOculusHandType SkeletonType, class USkinnedMeshComponent* HandComponent, float WorldToMeters);
		ETrackingConfidence GetTrackingConfidence(EOculusHandType DeviceHand, int32_t ControllerIndex);
		struct FTransform GetPointerPose(EOculusHandType DeviceHand, int32_t ControllerIndex);
		bool GetHandSkeletalMesh(class USkeletalMesh* HandSkeletalMesh, EOculusHandType SkeletonType, EOculusHandType MeshType, float WorldToMeters);
		float GetHandScale(EOculusHandType DeviceHand, int32_t ControllerIndex);
		EOculusHandType GetDominantHand(int32_t ControllerIndex);
		struct FQuat GetBoneRotation(EOculusHandType DeviceHand, EBone BoneId, int32_t ControllerIndex);
		class FString GetBoneName(EBone BoneId);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
