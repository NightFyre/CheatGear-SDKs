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
	 * DynamicClass BP_Drone_IED.BP_Drone_IED_C
	 * Size -> 0x0048 (FullSize[0x0798] - InheritedSize[0x0750])
	 */
	class ABP_Drone_IED_C : public AVehicleDrone
	{
	public:
		class UParticleSystemComponent*                            DamageParticle;                                          // 0x0750(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystemComponent*                            EngineSmoke;                                             // 0x0758(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVehicleDestructablePart*                            VehicleDestructablePart;                                 // 0x0760(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LastSampledLocation;                                     // 0x0768(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumTimesStuck;                                           // 0x0774(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LastStuckTest;                                           // 0x0778(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StuckThreshold;                                          // 0x077C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      K2Node_Event_DeltaSeconds;                               // 0x0780(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8VWI[0x4];                                   // 0x0784(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UVehiclePartComponent*                               K2Node_ComponentBoundEvent_VehiclePart;                  // 0x0788(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      K2Node_ComponentBoundEvent_Damage;                       // 0x0790(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LD1A[0x4];                                   // 0x0794(0x0004) MISSED OFFSET (PADDING)

	public:
		void ReceiveTick(float bpp__DeltaSeconds__pf);
		void CheckStuck();
		void BndEvt__VehicleDestructablePart_K2Node_ComponentBoundEvent_2_VehiclePartDamagedDelegate__DelegateSignature(class UVehiclePartComponent* bpp__VehiclePart__pf, float bpp__Damage__pf);
		void BndEvt__VehicleDestructablePart_K2Node_ComponentBoundEvent_0_VehiclePart_DestroyedDelegate__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
