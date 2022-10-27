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
	 * 		Name   -> PredefinedFunction UDumpWetnessDebug_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDumpWetnessDebug_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DumpWetnessDebug.DumpWetnessDebug_C");
		return ptr;
	}

}


