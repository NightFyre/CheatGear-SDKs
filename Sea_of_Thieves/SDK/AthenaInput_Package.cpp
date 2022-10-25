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
	 * 		Name   -> PredefinedFunction UNotificationInputId.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNotificationInputId::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaInput.NotificationInputId");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnalogInputId.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnalogInputId::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaInput.AnalogInputId");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOpenEscapeMenuNotificationInputId.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOpenEscapeMenuNotificationInputId::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaInput.OpenEscapeMenuNotificationInputId");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReceivesInputInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReceivesInputInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaInput.ReceivesInputInterface");
		return ptr;
	}

}


