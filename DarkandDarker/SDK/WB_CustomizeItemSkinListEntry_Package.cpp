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
	 * 		Name   -> Function WB_CustomizeItemSkinListEntry.WB_CustomizeItemSkinListEntry_C.Get_Image_Hover_Visibility_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UWB_CustomizeItemSkinListEntry_C::Get_Image_Hover_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_CustomizeItemSkinListEntry.WB_CustomizeItemSkinListEntry_C.Get_Image_Hover_Visibility_1");
		
		UWB_CustomizeItemSkinListEntry_C_Get_Image_Hover_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_CustomizeItemSkinListEntry.WB_CustomizeItemSkinListEntry_C.Get_Image_FrameEquipped_Visibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UWB_CustomizeItemSkinListEntry_C::Get_Image_FrameEquipped_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_CustomizeItemSkinListEntry.WB_CustomizeItemSkinListEntry_C.Get_Image_FrameEquipped_Visibility");
		
		UWB_CustomizeItemSkinListEntry_C_Get_Image_FrameEquipped_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_CustomizeItemSkinListEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_CustomizeItemSkinListEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_CustomizeItemSkinListEntry.WB_CustomizeItemSkinListEntry_C");
		return ptr;
	}

}


