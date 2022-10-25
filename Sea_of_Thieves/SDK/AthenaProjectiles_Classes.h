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
	 * Class AthenaProjectiles.AthenaProjectilesThrottledTickCollectionAsset
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UAthenaProjectilesThrottledTickCollectionAsset : public UDataAsset
	{
	public:
		TArray<struct FThrottledProjectileTickPool>                ProjectileTickPools;                                     // 0x0028(0x0010) Edit, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaProjectiles.ProjectileLauncherSpecificSettings
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UProjectileLauncherSpecificSettings : public UDeveloperSettings
	{
	public:
		TArray<struct FGlobalProjectileSettings>                   GlobalSettings;                                          // 0x0038(0x0010) Edit, ZeroConstructor, Config, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
