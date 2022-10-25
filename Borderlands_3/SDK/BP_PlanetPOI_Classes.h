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
	 * BlueprintGeneratedClass BP_PlanetPOI.BP_PlanetPOI_C
	 * Size -> 0x0051 (FullSize[0x05F9] - InheritedSize[0x05A8])
	 */
	class ABP_PlanetPOI_C : public AOakZoneMapIcon_POI
	{
	public:
		unsigned char                                              UnknownData_CD3A[0x8];                                   // 0x05A8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05B0(0x0008) Transient, DuplicateTransient
		class UStaticMeshComponent*                                SM_PlanetRegion;                                         // 0x05B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Select_Alpha_302A372A49B5F5677C5019B5F63D6E29;           // 0x05C0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Select__Direction_302A372A49B5F5677C5019B5F63D6E29;      // 0x05C4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9460[0x3];                                   // 0x05C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Select;                                                  // 0x05C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        Color;                                                   // 0x05D0(0x0010) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AZoneMapViewer*                                      Owning_Zone_Map;                                         // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UZoneMapData_Base_C*                                 Zone_Map_Data;                                           // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            DMI_PlanetPOI;                                           // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Highlighted;                                             // 0x05F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void Select__FinishedFunc();
		void Select__UpdateFunc();
		void Activate_POI();
		void ReceiveBeginPlay();
		void End_Zone_Map_Cursor_Over();
		void Begin_Zone_Map_Cursor_Over();
		void Highlight_POI();
		void ExecuteUbergraph_BP_PlanetPOI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
