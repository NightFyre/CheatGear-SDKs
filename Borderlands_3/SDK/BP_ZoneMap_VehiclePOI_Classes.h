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
	 * BlueprintGeneratedClass BP_ZoneMap_VehiclePOI.BP_ZoneMap_VehiclePOI_C
	 * Size -> 0x0018 (FullSize[0x0658] - InheritedSize[0x0640])
	 */
	class ABP_ZoneMap_VehiclePOI_C : public AZoneMapVehicleIcon_POI
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0640(0x0008) Transient, DuplicateTransient
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x0648(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    Sphere;                                                  // 0x0650(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void Activate_POI();
		void ReceiveBeginPlay();
		void Begin_Zone_Map_Cursor_Over();
		void End_Zone_Map_Cursor_Over();
		void ExecuteUbergraph_BP_ZoneMap_VehiclePOI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
