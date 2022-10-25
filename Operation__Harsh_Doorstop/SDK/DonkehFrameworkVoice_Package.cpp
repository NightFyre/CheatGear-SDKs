/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * 		Name   -> PredefinedFunction UDFVoiceStatics.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDFVoiceStatics::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFrameworkVoice.DFVoiceStatics");
		return ptr;
	}

}


