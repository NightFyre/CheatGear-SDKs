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
	 * Class Oceanology_Plugin.Infinite_Compound
	 * Size -> 0x0018 (FullSize[0x0210] - InheritedSize[0x01F8])
	 */
	class UInfinite_Compound : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_IF2V[0x4];                                   // 0x01F8(0x0004) Fix Super Size
		float                                                      TimeJump;                                                // 0x01FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInfinityCategory                                          InfinityCategory;                                        // 0x0200(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5TTJ[0xF];                                   // 0x0201(0x000F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Oceanology_Plugin.Oceanology_PluginBPLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOceanology_PluginBPLibrary : public UBlueprintFunctionLibrary
	{
	public:
		float Oceanology_PluginSampleFunction(float Param);
		static UClass* StaticClass();
	};

	/**
	 * Class Oceanology_Plugin.OceanologySwimVolume
	 * Size -> 0x0000 (FullSize[0x0268] - InheritedSize[0x0268])
	 */
	class AOceanologySwimVolume : public APhysicsVolume
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Oceanology_Plugin.QuadTree
	 * Size -> 0x0010 (FullSize[0x0230] - InheritedSize[0x0220])
	 */
	class AQuadTree : public AActor
	{
	public:
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0220(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EditorTickIsEnabled;                                     // 0x0228(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XOH2[0x7];                                   // 0x0229(0x0007) MISSED OFFSET (PADDING)

	public:
		void SetEditorTickEnabled(bool bEnabled);
		void Procedural(class UHierarchicalInstancedStaticMeshComponent* HISMC, float GridSize, int32_t GridTiles, float CellSize);
		void EditorTick(float DeltaSeconds);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
