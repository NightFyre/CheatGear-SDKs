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
	 * 		Name   -> PredefinedFunction UUI_CC_SkillSlider_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CC_SkillSlider_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_CC_SkillSlider.UI_CC_SkillSlider_C");
		return ptr;
	}

}


