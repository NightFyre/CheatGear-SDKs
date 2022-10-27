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
	 * BlueprintGeneratedClass Door_LockedItem.Door_LockedItem_C
	 * Size -> 0x0040 (FullSize[0x0530] - InheritedSize[0x04F0])
	 */
	class ADoor_LockedItem_C : public ABase_LockedDoor_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                DoorHandle;                                              // 0x04F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      Timeline_0_Rotation_62DB1A21497F8297D7D1528E052368C4;    // 0x0500(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_0__Direction_62DB1A21497F8297D7D1528E052368C4;  // 0x0504(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_A3ZL[0x3];                                   // 0x0505(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x0508(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DoorhandleOpenClose_HandleRotY_C6C2B5274FC23B55E2C755BC140D2ACE; // 0x0510(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         DoorhandleOpenClose__Direction_C6C2B5274FC23B55E2C755BC140D2ACE; // 0x0514(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_6ME8[0x3];                                   // 0x0515(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  DoorhandleOpenClose;                                     // 0x0518(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Door_OpenClose01_DoorRotationZ_FCC349B14391EA512723399FD06AC169; // 0x0520(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         Door_OpenClose01__Direction_FCC349B14391EA512723399FD06AC169; // 0x0524(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_84YE[0x3];                                   // 0x0525(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Door_OpenClose01;                                        // 0x0528(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Door_OpenClose01__FinishedFunc();
		void Door_OpenClose01__UpdateFunc();
		void Door_OpenClose01__Opening_Finish_Trigger__EventFunc();
		void Door_OpenClose01__Closing_Finish_Trigger__EventFunc();
		void DoorhandleOpenClose__FinishedFunc();
		void DoorhandleOpenClose__UpdateFunc();
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void ActiveCalled();
		void DeActiveCalled();
		void OnUnlocked();
		void OnTriedToOpenButLocked();
		void ExecuteUbergraph_Door_LockedItem(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
