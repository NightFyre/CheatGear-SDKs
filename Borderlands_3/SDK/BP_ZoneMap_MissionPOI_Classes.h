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
	 * BlueprintGeneratedClass BP_ZoneMap_MissionPOI.BP_ZoneMap_MissionPOI_C
	 * Size -> 0x0014 (FullSize[0x06B4] - InheritedSize[0x06A0])
	 */
	class ABP_ZoneMap_MissionPOI_C : public AZoneMapMissionWaypointIcon
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x06A0(0x0008) Transient, DuplicateTransient
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x06A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Mission_Icon_Size_Scale;                                 // 0x06B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void BeginZoneMapCursorOver();
		void EndZoneMapCursorOver();
		void K2_OnWaypointUpdated();
		void ExecuteUbergraph_BP_ZoneMap_MissionPOI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
