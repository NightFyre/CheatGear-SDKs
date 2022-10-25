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
	 * 		Name   -> PredefinedFunction UCV_COLOR_I57_FCWR_Juggernaut_2_Blood_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCV_COLOR_I57_FCWR_Juggernaut_2_Blood_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass CV_COLOR_I57_FCWR_Juggernaut_2_Blood.CV_COLOR_I57_FCWR_Juggernaut_2_Blood_C");
		return ptr;
	}

}


