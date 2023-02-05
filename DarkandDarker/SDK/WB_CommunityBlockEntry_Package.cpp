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
	 * 		Name   -> Function WB_CommunityBlockEntry.WB_CommunityBlockEntry_C.Get Portrait Image
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateBrush UWB_CommunityBlockEntry_C::GetPortraitImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_CommunityBlockEntry.WB_CommunityBlockEntry_C.Get Portrait Image");
		
		UWB_CommunityBlockEntry_C_GetPortraitImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_CommunityBlockEntry.WB_CommunityBlockEntry_C.Get Class Icon
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateBrush UWB_CommunityBlockEntry_C::GetClassIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_CommunityBlockEntry.WB_CommunityBlockEntry_C.Get Class Icon");
		
		UWB_CommunityBlockEntry_C_GetClassIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_CommunityBlockEntry.WB_CommunityBlockEntry_C.Get Nick Name Text
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UWB_CommunityBlockEntry_C::GetNickNameText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_CommunityBlockEntry.WB_CommunityBlockEntry_C.Get Nick Name Text");
		
		UWB_CommunityBlockEntry_C_GetNickNameText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_CommunityBlockEntry.WB_CommunityBlockEntry_C.Get Selected Visibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UWB_CommunityBlockEntry_C::GetSelectedVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_CommunityBlockEntry.WB_CommunityBlockEntry_C.Get Selected Visibility");
		
		UWB_CommunityBlockEntry_C_GetSelectedVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_CommunityBlockEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_CommunityBlockEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_CommunityBlockEntry.WB_CommunityBlockEntry_C");
		return ptr;
	}

}


