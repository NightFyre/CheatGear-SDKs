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
	 * Class PortalSystem.BoxRenderableComponent
	 * Size -> 0x0010 (FullSize[0x0450] - InheritedSize[0x0440])
	 */
	class UBoxRenderableComponent : public UPrimitiveComponent
	{
	public:
		struct FColor                                              ShapeColor;                                              // 0x0440(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Visible;                                                 // 0x0444(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K2R1[0xB];                                   // 0x0445(0x000B) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PortalSystem.EmptyRenderableComponent
	 * Size -> 0x0000 (FullSize[0x0440] - InheritedSize[0x0440])
	 */
	class UEmptyRenderableComponent : public UPrimitiveComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PortalSystem.PortalSystemManager
	 * Size -> 0x0118 (FullSize[0x0338] - InheritedSize[0x0220])
	 */
	class APortalSystemManager : public AActor
	{
	public:
		bool                                                       _occluderInitHasStarted;                                 // 0x0220(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZT7N[0x7];                                   // 0x0221(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPortalZonesGrid                                    Grid;                                                    // 0x0228(0x0020) NativeAccessSpecifierPublic
		TArray<class APortalSystemPortal*>                         Portals;                                                 // 0x0248(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class APortalSystemPortal*>                         OutsidePortals;                                          // 0x0258(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class APortalSystemZone*>                           Zones;                                                   // 0x0268(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TMap<class ULightComponent*, class APortalSystemZone*>     LightToZoneMap;                                          // 0x0278(0x0050) ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class UPortalSystemOccluderComponent*>              Occluders;                                               // 0x02C8(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              LastRenderedZones[0x50];                                 // 0x02D8(0x0050) UNKNOWN PROPERTY: SetProperty
		bool                                                       ShowDebugLines;                                          // 0x0328(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnableOptimisation;                                      // 0x0329(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnableOptimisationInEditor;                              // 0x032A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ManualRebuildOnly;                                       // 0x032B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UpdateForAllViewLocations;                               // 0x032C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       LogWarningsOnRebuild;                                    // 0x032D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       LogVerboseWarnings;                                      // 0x032E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       LogGlobalInfosOfInternalState;                           // 0x032F(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       LogVerboseInfosOfInternalState;                          // 0x0330(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NF9P[0x7];                                   // 0x0331(0x0007) MISSED OFFSET (PADDING)

	public:
		void RegisterOccluder(class UPortalSystemOccluderComponent* occluder);
		void RebuildPortalSystemData(bool fromBeginPlay);
		void OnZonesVisibilityChanged(TArray<class APortalSystemZone*> zonesNewlyEnabled, TArray<class APortalSystemZone*> zonesNewlyDisabled);
		void NotifyLightMoved(class ULightComponent* LightComponent);
		class APortalSystemManager* GetPortalSystemManagerInstance(class UObject* WorldContextObject);
		void ForceUpdatePortalSystem();
		void AddLightFromActor(class AActor* Actor);
		void AddLight(class ULightComponent* LightComponent);
		static UClass* StaticClass();
	};

	/**
	 * Class PortalSystem.PortalSystemOccluderComponent
	 * Size -> 0x0030 (FullSize[0x0470] - InheritedSize[0x0440])
	 */
	class UPortalSystemOccluderComponent : public UPrimitiveComponent
	{
	public:
		struct FColor                                              ShapeColor;                                              // 0x0440(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBox                                                _box;                                                    // 0x0444(0x001C) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9BYK[0x1];                                   // 0x0460(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       FollowThisOccluderForPortalDetection;                    // 0x0461(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Visible;                                                 // 0x0462(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RBGN[0xD];                                   // 0x0463(0x000D) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PortalSystem.PortalSystemPortal
	 * Size -> 0x0060 (FullSize[0x0280] - InheritedSize[0x0220])
	 */
	class APortalSystemPortal : public AActor
	{
	public:
		bool                                                       IsOutsidePortal;                                         // 0x0220(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XCI9[0x3];                                   // 0x0221(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBox                                                _localBox;                                               // 0x0224(0x001C) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		float                                                      _radiusBounds;                                           // 0x0240(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IDNG[0x4];                                   // 0x0244(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     _points;                                                 // 0x0248(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FBasicLine>                                  _lines;                                                  // 0x0258(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		bool                                                       ManualZoneDetection;                                     // 0x0268(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3X2V[0x7];                                   // 0x0269(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class APortalSystemZone*>                           Zones;                                                   // 0x0270(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PortalSystem.PortalSystemZone
	 * Size -> 0x0068 (FullSize[0x0288] - InheritedSize[0x0220])
	 */
	class APortalSystemZone : public AActor
	{
	public:
		struct FBox                                                _box;                                                    // 0x0220(0x001C) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_I54C[0x4];                                   // 0x023C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     _points;                                                 // 0x0240(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FBasicLine>                                  _lines;                                                  // 0x0250(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4KQA[0x8];                                   // 0x0260(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ULightComponent*>                             Lights;                                                  // 0x0268(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class APortalSystemPortal*>                         Portals;                                                 // 0x0278(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		void OnZoneVisibilityChange(bool newVisibility);
		bool IsZoneVisible();
		bool ContainPoint(const struct FVector& Point);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
