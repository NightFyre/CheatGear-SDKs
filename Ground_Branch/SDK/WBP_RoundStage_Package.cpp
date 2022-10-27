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
	 * 		Name   -> Function WBP_RoundStage.WBP_RoundStage_C.GetFinalText
	 * 		Flags  -> ()
	 */
	class FText UWBP_RoundStage_C::GetFinalText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_RoundStage.WBP_RoundStage_C.GetFinalText");
		
		UWBP_RoundStage_C_GetFinalText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_RoundStage.WBP_RoundStage_C.GetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        OurText                                                    (Parm, OutParm)
	 */
	void UWBP_RoundStage_C::GetText(class FText* OurText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_RoundStage.WBP_RoundStage_C.GetText");
		
		UWBP_RoundStage_C_GetText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OurText != nullptr)
			*OurText = params.OurText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_RoundStage.WBP_RoundStage_C.GetTimeText
	 * 		Flags  -> ()
	 */
	class FText UWBP_RoundStage_C::GetTimeText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_RoundStage.WBP_RoundStage_C.GetTimeText");
		
		UWBP_RoundStage_C_GetTimeText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_RoundStage.WBP_RoundStage_C.DisplayText
	 * 		Flags  -> ()
	 */
	void UWBP_RoundStage_C::DisplayText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_RoundStage.WBP_RoundStage_C.DisplayText");
		
		UWBP_RoundStage_C_DisplayText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_RoundStage.WBP_RoundStage_C.Hide
	 * 		Flags  -> ()
	 */
	void UWBP_RoundStage_C::Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_RoundStage.WBP_RoundStage_C.Hide");
		
		UWBP_RoundStage_C_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_RoundStage.WBP_RoundStage_C.OnAnimationFinished_Event_1
	 * 		Flags  -> ()
	 */
	void UWBP_RoundStage_C::OnAnimationFinished_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_RoundStage.WBP_RoundStage_C.OnAnimationFinished_Event_1");
		
		UWBP_RoundStage_C_OnAnimationFinished_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_RoundStage.WBP_RoundStage_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_RoundStage_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_RoundStage.WBP_RoundStage_C.Tick");
		
		UWBP_RoundStage_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_RoundStage.WBP_RoundStage_C.OnInitialized
	 * 		Flags  -> ()
	 */
	void UWBP_RoundStage_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_RoundStage.WBP_RoundStage_C.OnInitialized");
		
		UWBP_RoundStage_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_RoundStage.WBP_RoundStage_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_RoundStage_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_RoundStage.WBP_RoundStage_C.Construct");
		
		UWBP_RoundStage_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_RoundStage.WBP_RoundStage_C.ExecuteUbergraph_WBP_RoundStage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_RoundStage_C::ExecuteUbergraph_WBP_RoundStage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_RoundStage.WBP_RoundStage_C.ExecuteUbergraph_WBP_RoundStage");
		
		UWBP_RoundStage_C_ExecuteUbergraph_WBP_RoundStage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_RoundStage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_RoundStage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_RoundStage.WBP_RoundStage_C");
		return ptr;
	}

}


