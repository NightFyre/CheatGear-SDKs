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
	 * 		Name   -> PredefinedFunction UMeshMemoryConstraintCategory_AI_Skeleton_Shadow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshMemoryConstraintCategory_AI_Skeleton_Shadow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MeshMemoryConstraintCategory_AI_Skeleton_Shadow.MeshMemoryConstraintCategory_AI_Skeleton_Shadow_C");
		return ptr;
	}

}


