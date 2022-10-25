#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * Class SafeZoneReservationFramework.SafeZoneComponent
	 * Size -> 0x0140 (FullSize[0x0720] - InheritedSize[0x05E0])
	 */
	class USafeZoneComponent : public UCapsuleComponent
	{
	public:
		class FScriptMulticastDelegate                             OnSafeZoneIsEmptyDelegate;                               // 0x05E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		float                                                      ExclusionRadius;                                         // 0x05F0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TM7B[0x4];                                   // 0x05F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ExclusionHeight;                                         // 0x05F8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                SafeZoneEmptyCollisionProfile;                           // 0x05FC(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AutoActivateSafeZone;                                    // 0x0604(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DeactivateSafeZoneAfterExclusionRadiusIsEmpty;           // 0x0605(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UsePlayerTeleport;                                       // 0x0606(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MV05[0x1];                                   // 0x0607(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PlayerTeleportRadius;                                    // 0x0608(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9N3V[0x4];                                   // 0x060C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       UseRepelForce;                                           // 0x0610(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_72KO[0x3];                                   // 0x0611(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RepelForceRadius;                                        // 0x0614(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_O8A7[0x4];                                   // 0x0618(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RepelForceExtents;                                       // 0x061C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RepelForceMin;                                           // 0x0620(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RepelForceMax;                                           // 0x0624(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ApplyRepelForceAtCentreOfMass;                           // 0x0628(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_W5MM[0x7];                                   // 0x0629(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  RepelForceGradientCurve;                                 // 0x0630(0x0080) Edit, DisableEditOnInstance
		bool                                                       UseAngularImpulse;                                       // 0x06B0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_C8DU[0x3];                                   // 0x06B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AngularImpulseRadius;                                    // 0x06B4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_I1MP[0x4];                                   // 0x06B8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AngularImpulseForce;                                     // 0x06BC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TargetDeflectionAngle;                                   // 0x06C0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsSafeZoneEmpty;                                         // 0x06C4(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor
		bool                                                       StopAISpawning;                                          // 0x06C5(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SSB5[0x2];                                   // 0x06C6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                CurrentCollisionProfile;                                 // 0x06C8(0x0008) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		ESafeZoneState                                             SafeZoneState;                                           // 0x06D0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_O4QO[0x4F];                                  // 0x06D1(0x004F) MISSED OFFSET (PADDING)

	public:
		void SafeZoneIsEmpty__DelegateSignature();
		void OnRep_UpdateCollisionProfile();
		void OnRep_EmptyStateChanged();
		void DeactivateSafeZone();
		void DeactivateCollider();
		void ActivateSafeZone();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
