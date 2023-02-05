/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_CustomizeCharacterSkinListEntry.WB_CustomizeCharacterSkinListEntry_C.Get_Image_FrameEquipped_Visibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UWB_CustomizeCharacterSkinListEntry_C::Get_Image_FrameEquipped_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_CustomizeCharacterSkinListEntry.WB_CustomizeCharacterSkinListEntry_C.Get_Image_FrameEquipped_Visibility");
		
		UWB_CustomizeCharacterSkinListEntry_C_Get_Image_FrameEquipped_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_CustomizeCharacterSkinListEntry.WB_CustomizeCharacterSkinListEntry_C.Get_Image_Hover_Visibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UWB_CustomizeCharacterSkinListEntry_C::Get_Image_Hover_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_CustomizeCharacterSkinListEntry.WB_CustomizeCharacterSkinListEntry_C.Get_Image_Hover_Visibility");
		
		UWB_CustomizeCharacterSkinListEntry_C_Get_Image_Hover_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_CustomizeCharacterSkinListEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_CustomizeCharacterSkinListEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_CustomizeCharacterSkinListEntry.WB_CustomizeCharacterSkinListEntry_C");
		return ptr;
	}

}


