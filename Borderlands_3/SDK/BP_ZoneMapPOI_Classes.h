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
	 * BlueprintGeneratedClass BP_ZoneMapPOI.BP_ZoneMapPOI_C
	 * Size -> 0x0018 (FullSize[0x05C0] - InheritedSize[0x05A8])
	 */
	class ABP_ZoneMapPOI_C : public AOakZoneMapIcon_POI
	{
	public:
		unsigned char                                              UnknownData_06KO[0x8];                                   // 0x05A8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05B0(0x0008) Transient, DuplicateTransient
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x05B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void Activate_POI();
		void ReceiveBeginPlay();
		void Begin_Zone_Map_Cursor_Over();
		void End_Zone_Map_Cursor_Over();
		void ExecuteUbergraph_BP_ZoneMapPOI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
