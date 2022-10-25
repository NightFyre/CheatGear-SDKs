/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * 		Name   -> PredefinedFunction ARemote_Door_Sensor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARemote_Door_Sensor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Remote_Door_Sensor.Remote_Door_Sensor_C");
		return ptr;
	}

}


