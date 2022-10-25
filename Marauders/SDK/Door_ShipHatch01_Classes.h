#pragma once

/**
 * Name: Marauders
 * Version: 642675-attempt2
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
	 * BlueprintGeneratedClass Door_ShipHatch01.Door_ShipHatch01_C
	 * Size -> 0x0038 (FullSize[0x04F0] - InheritedSize[0x04B8])
	 */
	class ADoor_ShipHatch01_C : public ABase_Door_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x04C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UStaticMeshComponent*                                DoorHandle;                                              // 0x04C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      DoorhandleOpen_HandleRotY_D99221444634039B6B6685852252A786; // 0x04D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         DoorhandleOpen__Direction_D99221444634039B6B6685852252A786; // 0x04D4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_NQ15[0x3];                                   // 0x04D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  DoorhandleOpen;                                          // 0x04D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Door_OpenClose01_DoorRotationZ_90D35B1E4B536D3DCE1DD993D60FB8B0; // 0x04E0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         Door_OpenClose01__Direction_90D35B1E4B536D3DCE1DD993D60FB8B0; // 0x04E4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_8BOS[0x3];                                   // 0x04E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Door_OpenClose01;                                        // 0x04E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void DoorhandleOpen__FinishedFunc();
		void DoorhandleOpen__UpdateFunc();
		void Door_OpenClose01__FinishedFunc();
		void Door_OpenClose01__UpdateFunc();
		void Door_OpenClose01__Closing__EventFunc();
		void Door_OpenClose01__Opening_Finish_Trigger__EventFunc();
		void ActiveCalled();
		void DeActiveCalled();
		void ExecuteUbergraph_Door_ShipHatch01(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
