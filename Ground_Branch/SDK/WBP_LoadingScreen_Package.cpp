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
	 * 		Name   -> Function WBP_LoadingScreen.WBP_LoadingScreen_C.GetFancyGameModeName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ScriptFileName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FText                                        FancyDanGameModeName                                       (Parm, OutParm)
	 */
	void UWBP_LoadingScreen_C::GetFancyGameModeName(const class FString& ScriptFileName, class FText* FancyDanGameModeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_LoadingScreen.WBP_LoadingScreen_C.GetFancyGameModeName");
		
		UWBP_LoadingScreen_C_GetFancyGameModeName_Params params {};
		params.ScriptFileName = ScriptFileName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FancyDanGameModeName != nullptr)
			*FancyDanGameModeName = params.FancyDanGameModeName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_LoadingScreen.WBP_LoadingScreen_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_LoadingScreen_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_LoadingScreen.WBP_LoadingScreen_C.Construct");
		
		UWBP_LoadingScreen_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_LoadingScreen.WBP_LoadingScreen_C.Setup
	 * 		Flags  -> ()
	 */
	void UWBP_LoadingScreen_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_LoadingScreen.WBP_LoadingScreen_C.Setup");
		
		UWBP_LoadingScreen_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_LoadingScreen.WBP_LoadingScreen_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_LoadingScreen_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_LoadingScreen.WBP_LoadingScreen_C.Tick");
		
		UWBP_LoadingScreen_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_LoadingScreen.WBP_LoadingScreen_C.InternalRemove
	 * 		Flags  -> ()
	 */
	void UWBP_LoadingScreen_C::InternalRemove()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_LoadingScreen.WBP_LoadingScreen_C.InternalRemove");
		
		UWBP_LoadingScreen_C_InternalRemove_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_LoadingScreen.WBP_LoadingScreen_C.BindOnLoadingScreenEvent
	 * 		Flags  -> ()
	 */
	void UWBP_LoadingScreen_C::BindOnLoadingScreenEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_LoadingScreen.WBP_LoadingScreen_C.BindOnLoadingScreenEvent");
		
		UWBP_LoadingScreen_C_BindOnLoadingScreenEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_LoadingScreen.WBP_LoadingScreen_C.OnLoadingScreenEvent_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Event                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_LoadingScreen_C::OnLoadingScreenEvent_Event(const class FName& Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_LoadingScreen.WBP_LoadingScreen_C.OnLoadingScreenEvent_Event");
		
		UWBP_LoadingScreen_C_OnLoadingScreenEvent_Event_Params params {};
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_LoadingScreen.WBP_LoadingScreen_C.StartFadeIn
	 * 		Flags  -> ()
	 */
	void UWBP_LoadingScreen_C::StartFadeIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_LoadingScreen.WBP_LoadingScreen_C.StartFadeIn");
		
		UWBP_LoadingScreen_C_StartFadeIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_LoadingScreen.WBP_LoadingScreen_C.ExecuteUbergraph_WBP_LoadingScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_LoadingScreen_C::ExecuteUbergraph_WBP_LoadingScreen(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_LoadingScreen.WBP_LoadingScreen_C.ExecuteUbergraph_WBP_LoadingScreen");
		
		UWBP_LoadingScreen_C_ExecuteUbergraph_WBP_LoadingScreen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_LoadingScreen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_LoadingScreen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_LoadingScreen.WBP_LoadingScreen_C");
		return ptr;
	}

}


