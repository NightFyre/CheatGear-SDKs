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
	 * 		Name   -> PredefinedFunction URconClient.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URconClient::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Rcon.RconClient");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URconListener.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URconListener::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Rcon.RconListener");
		return ptr;
	}

}


