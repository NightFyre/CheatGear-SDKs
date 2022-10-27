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
	 * 		Name   -> PredefinedFunction ULiveLinkSourceFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkSourceFactory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkSourceFactory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULiveLinkSourceSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkSourceSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkSourceSettings");
		return ptr;
	}

}


