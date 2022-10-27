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
	 * 		Name   -> PredefinedFunction ABarrelsOfPlentyDebugSpawnLocation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABarrelsOfPlentyDebugSpawnLocation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BarrelsOfPlenty.BarrelsOfPlentyDebugSpawnLocation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABarrelsOfPlentySpawnProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABarrelsOfPlentySpawnProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BarrelsOfPlenty.BarrelsOfPlentySpawnProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpawnBarrelsOfPlentyStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpawnBarrelsOfPlentyStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BarrelsOfPlenty.SpawnBarrelsOfPlentyStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpawnBarrelsOfPlentyStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpawnBarrelsOfPlentyStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BarrelsOfPlenty.SpawnBarrelsOfPlentyStepDesc");
		return ptr;
	}

}


