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
	 * 		Name   -> PredefinedFunction UClothesCharacterMeshBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClothesCharacterMeshBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ClothesCharacterMeshBase.ClothesCharacterMeshBase_C");
		return ptr;
	}

}


