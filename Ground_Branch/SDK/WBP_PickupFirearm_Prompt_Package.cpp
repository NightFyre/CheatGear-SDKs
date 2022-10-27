/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * 		Name   -> Function WBP_PickupFirearm_Prompt.WBP_PickupFirearm_Prompt_C.GetVisibility_1
	 * 		Flags  -> ()
	 */
	ESlateVisibility UWBP_PickupFirearm_Prompt_C::GetVisibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PickupFirearm_Prompt.WBP_PickupFirearm_Prompt_C.GetVisibility_1");
		
		UWBP_PickupFirearm_Prompt_C_GetVisibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_PickupFirearm_Prompt.WBP_PickupFirearm_Prompt_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_PickupFirearm_Prompt_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PickupFirearm_Prompt.WBP_PickupFirearm_Prompt_C.Construct");
		
		UWBP_PickupFirearm_Prompt_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_PickupFirearm_Prompt.WBP_PickupFirearm_Prompt_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_PickupFirearm_Prompt_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PickupFirearm_Prompt.WBP_PickupFirearm_Prompt_C.Tick");
		
		UWBP_PickupFirearm_Prompt_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_PickupFirearm_Prompt.WBP_PickupFirearm_Prompt_C.ExecuteUbergraph_WBP_PickupFirearm_Prompt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_PickupFirearm_Prompt_C::ExecuteUbergraph_WBP_PickupFirearm_Prompt(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PickupFirearm_Prompt.WBP_PickupFirearm_Prompt_C.ExecuteUbergraph_WBP_PickupFirearm_Prompt");
		
		UWBP_PickupFirearm_Prompt_C_ExecuteUbergraph_WBP_PickupFirearm_Prompt_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_PickupFirearm_Prompt_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_PickupFirearm_Prompt_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_PickupFirearm_Prompt.WBP_PickupFirearm_Prompt_C");
		return ptr;
	}

}


