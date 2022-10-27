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
	 * Class ShipDamage.DamageablePartsInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDamageablePartsInterface : public UInterface
	{
	public:
		void UnregisterDamageablePart(class AActor* DamageableActor);
		void RegisterDamageablePart(class AActor* DamageableActor);
		TArray<class AActor*> GetDamageableParts();
		static UClass* StaticClass();
	};

	/**
	 * Class ShipDamage.HullDamageInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UHullDamageInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ShipDamage.HullDamageProviderInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UHullDamageProviderInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ShipDamage.LandscapeDamagerType
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULandscapeDamagerType : public UDamagerType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ShipDamage.ShipDamagerType
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UShipDamagerType : public UDamagerType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ShipDamage.ShipPartsDamageTrackerComponent
	 * Size -> 0x0008 (FullSize[0x00D0] - InheritedSize[0x00C8])
	 */
	class UShipPartsDamageTrackerComponent : public UActorComponent
	{
	public:
		int32_t                                                    IsAnyShipPartDamaged;                                    // 0x00C8(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XOCT[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ShipDamage.ShipRestorationSettings
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UShipRestorationSettings : public UDeveloperSettings
	{
	public:
		float                                                      MaxDistanceSquared;                                      // 0x0038(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_EB8S[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint64_t                                                   RestorationCooldown;                                     // 0x0040(0x0008) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ShipDamage.StrainDamagerType
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UStrainDamagerType : public UDamagerType
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
