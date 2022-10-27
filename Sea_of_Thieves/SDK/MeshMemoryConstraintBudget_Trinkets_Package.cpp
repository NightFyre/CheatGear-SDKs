/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * 		Name   -> PredefinedFunction UMeshMemoryConstraintBudget_Trinkets_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshMemoryConstraintBudget_Trinkets_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MeshMemoryConstraintBudget_Trinkets.MeshMemoryConstraintBudget_Trinkets_C");
		return ptr;
	}

}


