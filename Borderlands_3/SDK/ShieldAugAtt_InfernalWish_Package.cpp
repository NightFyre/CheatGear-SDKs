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
	 * 		Name   -> PredefinedFunction UShieldAugAtt_InfernalWish_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShieldAugAtt_InfernalWish_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ShieldAugAtt_InfernalWish.ShieldAugAtt_InfernalWish_C");
		return ptr;
	}

}


