/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * 		Name   -> PredefinedFunction UGameStatsCollectionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameStatsCollectionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameStatsServer.GameStatsCollectionComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameStatsServerSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameStatsServerSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameStatsServer.GameStatsServerSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameStatsSession.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameStatsSession::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameStatsServer.GameStatsSession");
		return ptr;
	}

}


