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
	 * BlueprintGeneratedClass BP_PlayerPOI.BP_PlayerPOI_C
	 * Size -> 0x0018 (FullSize[0x05E8] - InheritedSize[0x05D0])
	 */
	class ABP_PlayerPOI_C : public AZoneMapPlayerIcon_POI
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05D0(0x0008) Transient, DuplicateTransient
		class UStaticMeshComponent*                                SM_PlayerIcon;                                           // 0x05D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    Sphere;                                                  // 0x05E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void Activate_POI();
		void ReceiveBeginPlay();
		void Begin_Zone_Map_Cursor_Over();
		void End_Zone_Map_Cursor_Over();
		void ExecuteUbergraph_BP_PlayerPOI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
