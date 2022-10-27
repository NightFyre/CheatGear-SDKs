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
	 * 		Name   -> Function UI_HealthWidget2.UI_HealthWidget2_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_HealthWidget2_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HealthWidget2.UI_HealthWidget2_C.Construct");
		
		UUI_HealthWidget2_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HealthWidget2.UI_HealthWidget2_C.SetHealthPercentage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HealthWidget2_C::SetHealthPercentage(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HealthWidget2.UI_HealthWidget2_C.SetHealthPercentage");
		
		UUI_HealthWidget2_C_SetHealthPercentage_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HealthWidget2.UI_HealthWidget2_C.SetMaxHealthPercentage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HealthWidget2_C::SetMaxHealthPercentage(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HealthWidget2.UI_HealthWidget2_C.SetMaxHealthPercentage");
		
		UUI_HealthWidget2_C_SetMaxHealthPercentage_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HealthWidget2.UI_HealthWidget2_C.ExecuteUbergraph_UI_HealthWidget2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HealthWidget2_C::ExecuteUbergraph_UI_HealthWidget2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HealthWidget2.UI_HealthWidget2_C.ExecuteUbergraph_UI_HealthWidget2");
		
		UUI_HealthWidget2_C_ExecuteUbergraph_UI_HealthWidget2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_HealthWidget2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_HealthWidget2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_HealthWidget2.UI_HealthWidget2_C");
		return ptr;
	}

}


