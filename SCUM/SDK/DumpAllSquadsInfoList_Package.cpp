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
	 * 		Name   -> PredefinedFunction UDumpAllSquadsInfoList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDumpAllSquadsInfoList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DumpAllSquadsInfoList.DumpAllSquadsInfoList_C");
		return ptr;
	}

}


