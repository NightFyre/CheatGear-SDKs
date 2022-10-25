#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * Class RareEngine.RareGameEngine
	 * Size -> 0x0058 (FullSize[0x0A98] - InheritedSize[0x0A40])
	 */
	class URareGameEngine : public UGameEngine
	{
	public:
		unsigned char                                              UnknownData_Z4OI[0x58];                                  // 0x0A40(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RareEngine.AssetReferencer
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UAssetReferencer : public UDataAsset
	{
	public:
		TArray<TAssetPtr<class UObject>>                           AssetsToReference;                                       // 0x0028(0x0010) Edit, ZeroConstructor, UObjectWrapper

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RareEngine.AudioHardwareDeviceService
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UAudioHardwareDeviceService : public UObject
	{
	public:
		unsigned char                                              UnknownData_4MPZ[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RareEngine.HitchDiagnosisBlueprintFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UHitchDiagnosisBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SetHitchThreshold(int32_t InThreshold);
		class FString STATIC_GetMaxHitchNameThisFrame();
		int32_t STATIC_GetMaxHitchLengthThisFrameMs();
		void STATIC_DumpThisFramesHitchesToLog();
		bool STATIC_DidHitchOccurThisFrame();
		static UClass* StaticClass();
	};

	/**
	 * Class RareEngine.MemoryUsageVisualiserSettings
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UMemoryUsageVisualiserSettings : public UObject
	{
	public:
		TArray<struct FMemoryVisualiserCategory>                   VisualiserCategories;                                    // 0x0028(0x0010) Edit, ZeroConstructor, Config, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RareEngine.RareHUD
	 * Size -> 0x0000 (FullSize[0x04C0] - InheritedSize[0x04C0])
	 */
	class ARareHUD : public AHUD
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RareEngine.StallDetector
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UStallDetector : public UObject
	{
	public:
		unsigned char                                              UnknownData_JKFT[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             Callback;                                                // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		unsigned char                                              UnknownData_5T4E[0x10];                                  // 0x0040(0x0010) MISSED OFFSET (PADDING)

	public:
		void Deactivate();
		class UStallDetector* STATIC_CreateStallDetector(float Delay, bool CreateActive);
		void Activate();
		static UClass* StaticClass();
	};

	/**
	 * Class RareEngine.StaticMeshActorBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UStaticMeshActorBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_FindAllStaticMeshComponents(class UObject* WorldContextObject, TArray<class UStaticMesh*> MeshFilter, TArray<struct FStaticMeshComponentList>* OutComponentLists, class ULevel* RestrictToLevel);
		void STATIC_FindAllStaticMeshActors(class UObject* WorldContextObject, TArray<class UStaticMesh*> MeshFilter, TArray<struct FStaticMeshActorList>* OutActorLists, class ULevel* RestrictToLevel);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
