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
	 * BlueprintGeneratedClass Door_LockedSafe.Door_LockedSafe_C
	 * Size -> 0x0030 (FullSize[0x0520] - InheritedSize[0x04F0])
	 */
	class ADoor_LockedSafe_C : public ABase_LockedDoor_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x04F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      Timeline_0_Rotation_5170C3D2480AAD9BB81A6CA9E19A8303;    // 0x0500(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_0__Direction_5170C3D2480AAD9BB81A6CA9E19A8303;  // 0x0504(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_OQYX[0x3];                                   // 0x0505(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x0508(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Door_OpenClose01_DoorRotationZ_AB578E0D4266F3D9DE6CDFA478BEC814; // 0x0510(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         Door_OpenClose01__Direction_AB578E0D4266F3D9DE6CDFA478BEC814; // 0x0514(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_OBB7[0x3];                                   // 0x0515(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Door_OpenClose01;                                        // 0x0518(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Door_OpenClose01__FinishedFunc();
		void Door_OpenClose01__UpdateFunc();
		void Door_OpenClose01__Open_Finish_Trigger__EventFunc();
		void Door_OpenClose01__CloseingFinishTrigger__EventFunc();
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void ActiveCalled();
		void DeActiveCalled();
		void OnUnlocked();
		void OnTriedToOpenButLocked();
		void ExecuteUbergraph_Door_LockedSafe(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
