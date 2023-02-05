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
	 * 		Name   -> Function WB_CustomizeCharacterPreview.WB_CustomizeCharacterPreview_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWB_CustomizeCharacterPreview_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_CustomizeCharacterPreview.WB_CustomizeCharacterPreview_C.Construct");
		
		UWB_CustomizeCharacterPreview_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_CustomizeCharacterPreview.WB_CustomizeCharacterPreview_C.ExecuteUbergraph_WB_CustomizeCharacterPreview
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_CustomizeCharacterPreview_C::ExecuteUbergraph_WB_CustomizeCharacterPreview(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_CustomizeCharacterPreview.WB_CustomizeCharacterPreview_C.ExecuteUbergraph_WB_CustomizeCharacterPreview");
		
		UWB_CustomizeCharacterPreview_C_ExecuteUbergraph_WB_CustomizeCharacterPreview_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_CustomizeCharacterPreview_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_CustomizeCharacterPreview_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_CustomizeCharacterPreview.WB_CustomizeCharacterPreview_C");
		return ptr;
	}

}


