/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * 		Name   -> Function UI_CircularMenuSegment.UI_CircularMenuSegment_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CircularMenuSegment_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CircularMenuSegment.UI_CircularMenuSegment_C.PreConstruct");
		
		UUI_CircularMenuSegment_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CircularMenuSegment.UI_CircularMenuSegment_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_CircularMenuSegment_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CircularMenuSegment.UI_CircularMenuSegment_C.Construct");
		
		UUI_CircularMenuSegment_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CircularMenuSegment.UI_CircularMenuSegment_C.ExecuteUbergraph_UI_CircularMenuSegment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CircularMenuSegment_C::ExecuteUbergraph_UI_CircularMenuSegment(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CircularMenuSegment.UI_CircularMenuSegment_C.ExecuteUbergraph_UI_CircularMenuSegment");
		
		UUI_CircularMenuSegment_C_ExecuteUbergraph_UI_CircularMenuSegment_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_CircularMenuSegment_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CircularMenuSegment_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_CircularMenuSegment.UI_CircularMenuSegment_C");
		return ptr;
	}

}


