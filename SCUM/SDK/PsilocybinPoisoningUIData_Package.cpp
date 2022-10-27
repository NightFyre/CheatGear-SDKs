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
	 * 		Name   -> PredefinedFunction UPsilocybinPoisoningUIData_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPsilocybinPoisoningUIData_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PsilocybinPoisoningUIData.PsilocybinPoisoningUIData_C");
		return ptr;
	}

}


