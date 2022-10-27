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
	 * Class GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGbxBlueprintFunctionLibrariesBPLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SortActorListByDistance(class AActor* TargetActor, TArray<class AActor*>* ActorList);
		float STATIC_SimplexNoise4D(const struct FVector4& Location);
		float STATIC_SimplexNoise3D(const struct FVector& Location);
		float STATIC_SimplexNoise2D(const struct FVector2D& Location);
		float STATIC_SimplexNoise1D(float Location);
		void STATIC_SetForceMipLevelsToBeResidentForMaterialArray(TArray<class UMaterialInterface*> MaterialArray, bool OverrideForceMiplevelsToBeResident, bool bForceMiplevelsToBeResidentValue, float ForceDuration, int32_t CinematicTextureGroups);
		float STATIC_PerlinNoise2D(const struct FVector2D& Location, int32_t Octaves, float Persistence, float Amplitude);
		float STATIC_PerlinNoise1D(float X, int32_t Octaves, float Persistence, float Amplitude);
		bool STATIC_IsWithinRangeAndAngle(const struct FTransform& Source, class AActor* Target, float Range, float Angle);
		bool STATIC_IsInEditorMode();
		float STATIC_GbxBlueprintFunctionLibrariesSampleFunction(float Param);
		float STATIC_FloatDamp(float Current, float Target, float* CurrentVelocity, float SmoothDuration, float MaxSpeed, float DeltaTime);
		class ACharacter* STATIC_FindClosestPlayerCharacter(class UObject* WorldContextObject, const struct FVector& RefLocation);
		void STATIC_FindClosestActor(TArray<int32_t> ActorArray, const struct FVector& RefLocation, int32_t* ClosestActor);
		class UObject* STATIC_EditorLoadAsset();
		void STATIC_BroadcastRemoteEvent(class UObject* WorldContextObject, const class FName& EventName);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxBlueprintFunctionLibraries.HitResultFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UHitResultFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_IsBlockingHit(const struct FHitResult& HitResult);
		class UPhysicalMaterial* STATIC_GetPhysMaterial(const struct FHitResult& HitResult);
		struct FVector STATIC_GetHitNormal(const struct FHitResult& HitResult);
		struct FVector STATIC_GetHitLocation(const struct FHitResult& HitResult);
		float STATIC_GetHitDistance(const struct FHitResult& HitResult);
		class UPrimitiveComponent* STATIC_GetHitComponent(const struct FHitResult& HitResult);
		class AActor* STATIC_GetHitActor(const struct FHitResult& HitResult);
		class FName STATIC_GetBoneName(const struct FHitResult& HitResult);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxBlueprintFunctionLibraries.TagsFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTagsFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_RemoveTagFromComponent(class UActorComponent* Target, const class FName& Tag);
		void STATIC_RemoveTagFromActor(class AActor* Target, const class FName& Tag);
		bool STATIC_ComponentContainsTag(class UActorComponent* Target, const class FName& Tag);
		TArray<class FName> STATIC_CompareComponentTags(class UActorComponent* FirstComponent, class UActorComponent* SecondComponent, ECompareTag* Branches);
		TArray<class FName> STATIC_CompareActorTagsWithComponent(class AActor* Actor, class UActorComponent* Component, ECompareTag* Branches);
		TArray<class FName> STATIC_CompareActorTags(class AActor* FirstActor, class AActor* SecondActor, ECompareTag* Branches);
		void STATIC_AddTagToComponent(class UActorComponent* Target, const class FName& Tag);
		void STATIC_AddTagToActor(class AActor* Target, const class FName& Tag);
		bool STATIC_ActorContainsTag(class AActor* Target, const class FName& Tag);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
