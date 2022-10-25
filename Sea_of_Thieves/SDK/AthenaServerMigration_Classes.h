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
	 * Class AthenaServerMigration.AthenaServerMigrationGameAuthorityProviderInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAthenaServerMigrationGameAuthorityProviderInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaServerMigration.MigrationProgressInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMigrationProgressInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaServerMigration.MigrationServiceInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMigrationServiceInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaServerMigration.ServerMigrationGatherableActorInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UServerMigrationGatherableActorInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaServerMigration.RegisterServerMigrationPointOfInterestComponent
	 * Size -> 0x0020 (FullSize[0x00E8] - InheritedSize[0x00C8])
	 */
	class URegisterServerMigrationPointOfInterestComponent : public UActorComponent
	{
	public:
		float                                                      MigrationRadius;                                         // 0x00C8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VKFR[0x1C];                                  // 0x00CC(0x001C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
