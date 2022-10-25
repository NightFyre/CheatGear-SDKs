#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * DynamicClass BP_VH_TechnicalLarge_DShK.BP_VH_TechnicalLarge_DShK_C
	 * Size -> 0x00F0 (FullSize[0x08E0] - InheritedSize[0x07F0])
	 */
	class ABP_VH_TechnicalLarge_DShK_C : public ABP_VH_TechnicalLarge_C
	{
	public:
		class UVehicleEmergencyExitComponent*                      EmergencyExit2_1;                                        // 0x07F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVehicleEmergencyExitComponent*                      EmergencyExit4_1;                                        // 0x07F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVehicleEmergencyExitComponent*                      EmergencyExit1_1;                                        // 0x0800(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVehicleEmergencyExitComponent*                      EmergencyExit3_1;                                        // 0x0808(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVehicleExitComponent*                               VehicleExit4;                                            // 0x0810(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                TurretYaw;                                               // 0x0818(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                Turret;                                                  // 0x0820(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVehicleSeatComponent*                               TurretGunner;                                            // 0x0828(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Time;                                                    // 0x0830(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DXSO[0xC];                                   // 0x0834(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          GunnerOffsetTransform;                                   // 0x0840(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          PitchOffsetTransform;                                    // 0x0870(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFireStartTester;                                       // 0x08A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFireEndTester;                                         // 0x08B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic
		class AItemFirearm*                                        SpawnedMountedGun;                                       // 0x08C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              K2Node_Event_OtherActor;                                 // 0x08C8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEndPlayReason                                             K2Node_Event_EndPlayReason;                              // 0x08D0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WFUJ[0xF];                                   // 0x08D1(0x000F) MISSED OFFSET (PADDING)

	public:
		void OnFireStartTester__DelegateSignature();
		void OnFireEndTester__DelegateSignature();
		void ReceiveEndPlay(EEndPlayReason bpp__EndPlayReason__pf);
		void ReceiveBeginPlay();
		void ReceiveActorBeginOverlap(class AActor* bpp__OtherActor__pf);
		void InitMountedGunVisualLogic();
		void InitMountedGunGameLogic();
		void BndEvt__TurretGunner_K2Node_ComponentBoundEvent_1_VehicleSeat_EventDelegate__DelegateSignature();
		void BndEvt__EnginePart_K2Node_ComponentBoundEvent_0_Engine_BlowUpDelegate__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
