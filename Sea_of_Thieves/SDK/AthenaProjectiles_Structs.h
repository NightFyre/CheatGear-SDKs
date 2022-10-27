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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum AthenaProjectiles.EProjectileFiredFrom
	 */
	enum class EProjectileFiredFrom : uint8_t
	{
		Cannon           = 0,
		Character        = 1,
		DeepSeaCannon    = 2,
		DeepSeaCharacter = 3,
		RowboatCannon    = 4,
		SeaFortCannon    = 5,
		MAX              = 6
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct AthenaProjectiles.ThrottledProjectileTickPool
	 * Size -> 0x0018
	 */
	struct FThrottledProjectileTickPool
	{
	public:
		int32_t                                                    MaxNumberToTickPerFrame;                                 // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8ZQQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      Projectiles;                                             // 0x0008(0x0010) Edit, ZeroConstructor, UObjectWrapper
	};

	/**
	 * ScriptStruct AthenaProjectiles.GlobalProjectileSettings
	 * Size -> 0x0010
	 */
	struct FGlobalProjectileSettings
	{
	public:
		EProjectileFiredFrom                                       SettingsFor;                                             // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PDWP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ProjectileDestroyDepth;                                  // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ProjectileOceanFloorDestroyDepth;                        // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ProjectileMinimumFallDistance;                           // 0x000C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
