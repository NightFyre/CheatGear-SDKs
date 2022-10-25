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
	 * DynamicClass BP_Blackhawk.BP_Blackhawk_C
	 * Size -> 0x01B0 (FullSize[0x0830] - InheritedSize[0x0680])
	 */
	class ABP_Blackhawk_C : public AVehicleHoveringBase
	{
	public:
		class UParticleSystemComponent*                            TopRotorSmoke;                                           // 0x0680(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVehiclePartComponent*                               TopRotor;                                                // 0x0688(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                DriverBloodPlane;                                        // 0x0690(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystemComponent*                            EngineSmoke;                                             // 0x0698(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVehiclePartComponent*                               EnginePart;                                              // 0x06A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVehicleSeatComponent*                               LeftGunnerSeat;                                          // 0x06A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVehicleSeatComponent*                               RightGunnerSeat;                                         // 0x06B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVehiclePartComponent*                               TailRotor;                                               // 0x06B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVehicleSeatComponent*                               VehicleSeat2;                                            // 0x06C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVehicleSeatComponent*                               VehicleSeat1;                                            // 0x06C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVehicleSeatComponent*                               VehicleSeat;                                             // 0x06D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVehicleSeatComponent*                               PassengerSeat1;                                          // 0x06D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVehicleSeatComponent*                               PassengerSeat4;                                          // 0x06E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVehicleSeatComponent*                               PassengerSeat3;                                          // 0x06E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVehicleSeatComponent*                               PassengerSeat2;                                          // 0x06F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVehicleSeatComponent*                               DriverSeat;                                              // 0x06F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCameraComponent*                                    Camera;                                                  // 0x0700(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                TurretBase_R;                                            // 0x0708(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                TurretBase_L;                                            // 0x0710(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystemComponent*                            HeliExhaustParticle1;                                    // 0x0718(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystemComponent*                            HeliExhaustParticle2;                                    // 0x0720(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystemComponent*                            TailRotorSmoke;                                          // 0x0728(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                TurretYaw_R;                                             // 0x0730(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                TurretYaw_L;                                             // 0x0738(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Time;                                                    // 0x0740(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ERK0[0xC];                                   // 0x0744(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          GunnerOffsetTransform;                                   // 0x0750(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          PitchOffsetTransform;                                    // 0x0780(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    DeadGunners;                                             // 0x07B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      K2Node_Event_DeltaSeconds;                               // 0x07B4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CallFunc_BreakTransform_Location;                        // 0x07B8(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            CallFunc_BreakTransform_Rotation;                        // 0x07C4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             CallFunc_BreakTransform_Scale;                           // 0x07D0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_IsClosed_Variable;                             // 0x07DC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YU37[0x3];                                   // 0x07DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_BreakTransform_Location_2;                      // 0x07E0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            CallFunc_BreakTransform_Rotation_2;                      // 0x07EC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             CallFunc_BreakTransform_Scale_2;                         // 0x07F8(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LJC9[0x4];                                   // 0x0804(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UVehiclePartComponent*                               K2Node_ComponentBoundEvent_VehiclePart;                  // 0x0808(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      K2Node_ComponentBoundEvent_Damage;                       // 0x0810(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Has_Been_Initd_Variable;                       // 0x0814(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FTLD[0x3];                                   // 0x0815(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AINSCharacter*                                       K2Node_ComponentBoundEvent_Character;                    // 0x0818(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVehicleSeatComponent*                               K2Node_ComponentBoundEvent_Seat;                         // 0x0820(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8T9O[0x8];                                   // 0x0828(0x0008) MISSED OFFSET (PADDING)

	public:
		void ReceiveTick(float bpp__DeltaSeconds__pf);
		void ReceiveBeginPlay();
		void BndEvt__VehiclePart_K2Node_ComponentBoundEvent_0_VehiclePart_DestroyedDelegate__DelegateSignature();
		void BndEvt__TopRotor_K2Node_ComponentBoundEvent_2_VehiclePartDestroyedDelegate__DelegateSignature();
		void BndEvt__EnginePart_K2Node_ComponentBoundEvent_0_VehiclePartDestroyedDelegate__DelegateSignature();
		void BndEvt__EnginePart_K2Node_ComponentBoundEvent_0_VehiclePartDamagedDelegate__DelegateSignature(class UVehiclePartComponent* bpp__VehiclePart__pf, float bpp__Damage__pf);
		void BndEvt__DriverSeat_K2Node_ComponentBoundEvent_1_VehicleSeat_SeatEnterExitDelegate__DelegateSignature(class AINSCharacter* bpp__Character__pf, class UVehicleSeatComponent* bpp__Seat__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
