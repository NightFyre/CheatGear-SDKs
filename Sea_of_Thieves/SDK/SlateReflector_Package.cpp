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
	 * 		Name   -> PredefinedFunction UWidgetReflectorNodeBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidgetReflectorNodeBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SlateReflector.WidgetReflectorNodeBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULiveWidgetReflectorNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveWidgetReflectorNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SlateReflector.LiveWidgetReflectorNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USnapshotWidgetReflectorNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USnapshotWidgetReflectorNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SlateReflector.SnapshotWidgetReflectorNode");
		return ptr;
	}

}


