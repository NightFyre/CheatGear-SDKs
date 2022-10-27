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
	 * Class OakDestruction.CryoDestructibleComponent
	 * Size -> 0x00C0 (FullSize[0x0C90] - InheritedSize[0x0BD0])
	 */
	class UCryoDestructibleComponent : public UGbxDestructibleComponent
	{
	public:
		class UMaterialInterface*                                  BaseMaterial;                                            // 0x0BD0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FracturedLifeSpan;                                       // 0x0BD8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5RLT[0x4];                                   // 0x0BDC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  FracturedMaterial;                                       // 0x0BE0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  FracturedInteriorMaterial;                               // 0x0BE8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFractureEffect                                     FractureEffect;                                          // 0x0BF0(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		class UClass*                                              FracturedActorClass;                                     // 0x0C00(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FreezeRateVariation;                                     // 0x0C08(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ThawJitterSpeed;                                         // 0x0C0C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ThawJitterScale;                                         // 0x0C10(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4QJ8[0x4];                                   // 0x0C14(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ThawMaterialParamName;                                   // 0x0C18(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DissolveTime;                                            // 0x0C20(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DissolveDelayTime;                                       // 0x0C24(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DissolvePositionOffsetScale;                             // 0x0C28(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2N5E[0x4C];                                  // 0x0C2C(0x004C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDestructibleComponent*                              LinkedDestructible;                                      // 0x0C78(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FR4B[0x10];                                  // 0x0C80(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OakDestruction.OakDestructibleFXManager
	 * Size -> 0x0068 (FullSize[0x04C0] - InheritedSize[0x0458])
	 */
	class AOakDestructibleFXManager : public AActor
	{
	public:
		unsigned char                                              UnknownData_Z4KM[0x68];                                  // 0x0458(0x0068) MISSED OFFSET (PADDING)

	public:
		void OnDestructibleDestroyed(class AActor* DestroyedActor);
		void DestroyAllDestructibles();
		void ClientApplyRadiusDamage(uint32_t SyncID, float DamageAmount, const struct FVector& HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage);
		void ClientApplyDamage(uint32_t SyncID, float DamageAmount, const struct FVector& HitLocation, const struct FVector& ImpulseDir, float ImpulseStrength);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
