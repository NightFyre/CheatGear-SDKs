#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * Class MeshMorpherRuntime.MeshMorpherRuntimeLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMeshMorpherRuntimeLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool RemoveMorphTarget(class USkeletalMesh* SkeletalMesh, const class FName& Name);
		class UMorphTarget* FindMorphTarget(class USkeletalMesh* SkeletalMesh, const class FName& Name);
		void DoBakeSingleStandalone(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class USkeletalMesh* SkeletalMesh, class UStandaloneMorphTarget* MorphTarget, float Weight, EMeshMorpherBakeBranches* Out);
		void DoBakeSingle(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class USkeletalMesh* SkeletalMesh, class UMorphTarget* MorphTarget, float Weight, EMeshMorpherBakeBranches* Out);
		void DoBakeMultipleStandalone(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class USkeletalMesh* SkeletalMesh, TMap<class UStandaloneMorphTarget*, float> MorphTargets, EMeshMorpherBakeBranches* Out);
		void DoBakeMultiple(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class USkeletalMesh* SkeletalMesh, TMap<class UMorphTarget*, float> MorphTargets, EMeshMorpherBakeBranches* Out);
		static UClass* StaticClass();
	};

	/**
	 * Class MeshMorpherRuntime.MeshMorpherWorkerLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMeshMorpherWorkerLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void WaitToFinish(class UObject* WorldContextObject, const struct FMeshMorpherWorkerRef& WorkerReference);
		bool IsValid(class UObject* WorldContextObject, const struct FMeshMorpherWorkerRef& WorkerReference);
		bool IsRunning(class UObject* WorldContextObject, const struct FMeshMorpherWorkerRef& WorkerReference);
		bool IsCanceled(class UObject* WorldContextObject, const struct FMeshMorpherWorkerRef& WorkerReference);
		void Cancel(class UObject* WorldContextObject, struct FMeshMorpherWorkerRef* WorkerReference, bool* bIsSuccess);
		static UClass* StaticClass();
	};

	/**
	 * Class MeshMorpherRuntime.StandaloneMorphTarget
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UStandaloneMorphTarget : public UObject
	{
	public:
		class USkeletalMesh*                                       BaseSkelMesh;                                            // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2YZA[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
