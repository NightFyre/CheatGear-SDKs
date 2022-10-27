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
	 * BlueprintGeneratedClass Door_Traditional03.Door_Traditional03_C
	 * Size -> 0x0030 (FullSize[0x04E8] - InheritedSize[0x04B8])
	 */
	class ADoor_Traditional03_C : public ABase_Door_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                DoorHandle;                                              // 0x04C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      DoorhandleOpenClose_HandleRotY_62A8E57D4A1FEBFCBA6788B1A1E49CBE; // 0x04C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         DoorhandleOpenClose__Direction_62A8E57D4A1FEBFCBA6788B1A1E49CBE; // 0x04CC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_FX9K[0x3];                                   // 0x04CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  DoorhandleOpenClose;                                     // 0x04D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Door_OpenClose01_DoorRotationZ_E1B2192C42463CDC498E1B9A30D583A5; // 0x04D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         Door_OpenClose01__Direction_E1B2192C42463CDC498E1B9A30D583A5; // 0x04DC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_WB4H[0x3];                                   // 0x04DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Door_OpenClose01;                                        // 0x04E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Door_OpenClose01__FinishedFunc();
		void Door_OpenClose01__UpdateFunc();
		void Door_OpenClose01__Opening_Finish_Trigger__EventFunc();
		void Door_OpenClose01__Closing_Finish_Trigger__EventFunc();
		void DoorhandleOpenClose__FinishedFunc();
		void DoorhandleOpenClose__UpdateFunc();
		void ActiveCalled();
		void DeActiveCalled();
		void ExecuteUbergraph_Door_Traditional03(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
