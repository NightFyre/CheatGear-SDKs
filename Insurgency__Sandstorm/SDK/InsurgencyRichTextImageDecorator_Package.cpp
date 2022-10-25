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
	 * 		Name   -> PredefinedFunction UInsurgencyRichTextImageDecorator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInsurgencyRichTextImageDecorator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass InsurgencyRichTextImageDecorator.InsurgencyRichTextImageDecorator_C");
		return ptr;
	}

}


