/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * 		Name   -> PredefinedFunction USparkNetConnection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USparkNetConnection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SocketSubsystemSpark.SparkNetConnection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USparkBeaconNetConnection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USparkBeaconNetConnection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SocketSubsystemSpark.SparkBeaconNetConnection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USparkNetDriver.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USparkNetDriver::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SocketSubsystemSpark.SparkNetDriver");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USparkBeaconNetDriver.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USparkBeaconNetDriver::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SocketSubsystemSpark.SparkBeaconNetDriver");
		return ptr;
	}

}


