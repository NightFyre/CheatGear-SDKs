/**
 * Name: Sea_of_Thieves
 * Version: 9505844
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAthenaServerMigrationGameAuthorityProviderInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAthenaServerMigrationGameAuthorityProviderInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaServerMigration.AthenaServerMigrationGameAuthorityProviderInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMigrationProgressInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMigrationProgressInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaServerMigration.MigrationProgressInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMigrationServiceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMigrationServiceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaServerMigration.MigrationServiceInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UServerMigrationGatherableActorInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UServerMigrationGatherableActorInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaServerMigration.ServerMigrationGatherableActorInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URegisterServerMigrationPointOfInterestComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URegisterServerMigrationPointOfInterestComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaServerMigration.RegisterServerMigrationPointOfInterestComponent");
		return ptr;
	}

}


