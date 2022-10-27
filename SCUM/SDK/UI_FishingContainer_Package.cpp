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
	 * 		Name   -> Function UI_FishingContainer.UI_FishingContainer_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_FishingContainer_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_FishingContainer.UI_FishingContainer_C.Construct");
		
		UUI_FishingContainer_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_FishingContainer.UI_FishingContainer_C.ExecuteUbergraph_UI_FishingContainer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_FishingContainer_C::ExecuteUbergraph_UI_FishingContainer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_FishingContainer.UI_FishingContainer_C.ExecuteUbergraph_UI_FishingContainer");
		
		UUI_FishingContainer_C_ExecuteUbergraph_UI_FishingContainer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_FishingContainer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_FishingContainer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_FishingContainer.UI_FishingContainer_C");
		return ptr;
	}

}


