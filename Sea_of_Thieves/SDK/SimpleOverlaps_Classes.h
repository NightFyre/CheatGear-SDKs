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
	 * Class SimpleOverlaps.SimpleOverlapZone
	 * Size -> 0x00D8 (FullSize[0x04A0] - InheritedSize[0x03C8])
	 */
	class ASimpleOverlapZone : public AActor
	{
	public:
		unsigned char                                              UnknownData_FSTU[0xA8];                                  // 0x03C8(0x00A8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             Blueprint_OnStartOverlap;                                // 0x0470(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		class FScriptMulticastDelegate                             Blueprint_OnStopOverlap;                                 // 0x0480(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		class UBoxComponent*                                       CollisionMesh;                                           // 0x0490(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       StartActive;                                             // 0x0498(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_G6N8[0x7];                                   // 0x0499(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SimpleOverlaps.DebugSimpleOverlapZoneVisualizerComponent
	 * Size -> 0x0020 (FullSize[0x00E8] - InheritedSize[0x00C8])
	 */
	class UDebugSimpleOverlapZoneVisualizerComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_W1BE[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             BoxCollisionDimensions;                                  // 0x00D0(0x000C) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor
		struct FColor                                              DebugColour;                                             // 0x00DC(0x0004) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor
		bool                                                       VisibleState;                                            // 0x00E0(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DMIA[0x7];                                   // 0x00E1(0x0007) MISSED OFFSET (PADDING)

	public:
		void OnRep_SetDebugDrawColour();
		void OnRep_DebugBoxDimensions();
		static UClass* StaticClass();
	};

	/**
	 * Class SimpleOverlaps.SimpleOverlapCollectionKey
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USimpleOverlapCollectionKey : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SimpleOverlaps.SimpleOverlapComponent
	 * Size -> 0x0008 (FullSize[0x00D0] - InheritedSize[0x00C8])
	 */
	class USimpleOverlapComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_6UEV[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
