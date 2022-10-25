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
	 * 		Name   -> PredefinedFunction UGbxLevelEditorPreviewComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxLevelEditorPreviewComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxLevelEditorPreview.GbxLevelEditorPreviewComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxLevelEditorPreviewDefinition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxLevelEditorPreviewDefinition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxLevelEditorPreview.GbxLevelEditorPreviewDefinition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxLevelEditorPreviewAnimation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxLevelEditorPreviewAnimation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxLevelEditorPreview.GbxLevelEditorPreviewAnimation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxLevelEditorPreviewSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxLevelEditorPreviewSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxLevelEditorPreview.GbxLevelEditorPreviewSettings");
		return ptr;
	}

}


