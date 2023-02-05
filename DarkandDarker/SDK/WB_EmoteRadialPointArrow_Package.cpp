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
	 * 		Name   -> Function WB_EmoteRadialPointArrow.WB_EmoteRadialPointArrow_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_EmoteRadialPointArrow_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_EmoteRadialPointArrow.WB_EmoteRadialPointArrow_C.PreConstruct");
		
		UWB_EmoteRadialPointArrow_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_EmoteRadialPointArrow.WB_EmoteRadialPointArrow_C.ExecuteUbergraph_WB_EmoteRadialPointArrow
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_EmoteRadialPointArrow_C::ExecuteUbergraph_WB_EmoteRadialPointArrow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_EmoteRadialPointArrow.WB_EmoteRadialPointArrow_C.ExecuteUbergraph_WB_EmoteRadialPointArrow");
		
		UWB_EmoteRadialPointArrow_C_ExecuteUbergraph_WB_EmoteRadialPointArrow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_EmoteRadialPointArrow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_EmoteRadialPointArrow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_EmoteRadialPointArrow.WB_EmoteRadialPointArrow_C");
		return ptr;
	}

}


