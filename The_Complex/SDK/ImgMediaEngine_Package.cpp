﻿/**
 * Name: The_Complex
 * Version: 9349459
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
	 * 		Name   -> PredefinedFunction UImgMediaPlaybackComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UImgMediaPlaybackComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ImgMediaEngine.ImgMediaPlaybackComponent");
		return ptr;
	}

}


