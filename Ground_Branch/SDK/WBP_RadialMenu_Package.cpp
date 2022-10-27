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
	 * 		Name   -> Function WBP_RadialMenu.WBP_RadialMenu_C.OverrideInputAxis
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		float                                              Delta                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NumSamples                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bGamepad                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UWBP_RadialMenu_C::OverrideInputAxis(const struct FKey& Key, float Delta, float DeltaTime, int32_t NumSamples, bool bGamepad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_RadialMenu.WBP_RadialMenu_C.OverrideInputAxis");
		
		UWBP_RadialMenu_C_OverrideInputAxis_Params params {};
		params.Key = Key;
		params.Delta = Delta;
		params.DeltaTime = DeltaTime;
		params.NumSamples = NumSamples;
		params.bGamepad = bGamepad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_RadialMenu.WBP_RadialMenu_C.OverrideInputKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		EBPInputEvent                                      EventType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              AmountDepressed                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bGamepad                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UWBP_RadialMenu_C::OverrideInputKey(const struct FKey& Key, EBPInputEvent EventType, float AmountDepressed, bool bGamepad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_RadialMenu.WBP_RadialMenu_C.OverrideInputKey");
		
		UWBP_RadialMenu_C_OverrideInputKey_Params params {};
		params.Key = Key;
		params.EventType = EventType;
		params.AmountDepressed = AmountDepressed;
		params.bGamepad = bGamepad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_RadialMenu.WBP_RadialMenu_C.GetRadialQuickbinds
	 * 		Flags  -> ()
	 */
	void UWBP_RadialMenu_C::GetRadialQuickbinds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_RadialMenu.WBP_RadialMenu_C.GetRadialQuickbinds");
		
		UWBP_RadialMenu_C_GetRadialQuickbinds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_RadialMenu.WBP_RadialMenu_C.SetupChildren
	 * 		Flags  -> ()
	 */
	void UWBP_RadialMenu_C::SetupChildren()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_RadialMenu.WBP_RadialMenu_C.SetupChildren");
		
		UWBP_RadialMenu_C_SetupChildren_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_RadialMenu.WBP_RadialMenu_C.UpdateSelectedEntry
	 * 		Flags  -> ()
	 */
	void UWBP_RadialMenu_C::UpdateSelectedEntry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_RadialMenu.WBP_RadialMenu_C.UpdateSelectedEntry");
		
		UWBP_RadialMenu_C_UpdateSelectedEntry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_RadialMenu.WBP_RadialMenu_C.Close
	 * 		Flags  -> ()
	 */
	void UWBP_RadialMenu_C::Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_RadialMenu.WBP_RadialMenu_C.Close");
		
		UWBP_RadialMenu_C_Close_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_RadialMenu.WBP_RadialMenu_C.AddEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 UserWidget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_RadialMenu_C::AddEntry(class UUserWidget* UserWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_RadialMenu.WBP_RadialMenu_C.AddEntry");
		
		UWBP_RadialMenu_C_AddEntry_Params params {};
		params.UserWidget = UserWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_RadialMenu.WBP_RadialMenu_C.Open
	 * 		Flags  -> ()
	 */
	void UWBP_RadialMenu_C::Open()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_RadialMenu.WBP_RadialMenu_C.Open");
		
		UWBP_RadialMenu_C_Open_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_RadialMenu.WBP_RadialMenu_C.Clear
	 * 		Flags  -> ()
	 */
	void UWBP_RadialMenu_C::Clear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_RadialMenu.WBP_RadialMenu_C.Clear");
		
		UWBP_RadialMenu_C_Clear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_RadialMenu.WBP_RadialMenu_C.UpdateAngle
	 * 		Flags  -> ()
	 */
	void UWBP_RadialMenu_C::UpdateAngle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_RadialMenu.WBP_RadialMenu_C.UpdateAngle");
		
		UWBP_RadialMenu_C_UpdateAngle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_RadialMenu.WBP_RadialMenu_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_RadialMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_RadialMenu.WBP_RadialMenu_C.Tick");
		
		UWBP_RadialMenu_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_RadialMenu.WBP_RadialMenu_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_RadialMenu_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_RadialMenu.WBP_RadialMenu_C.PreConstruct");
		
		UWBP_RadialMenu_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_RadialMenu.WBP_RadialMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_RadialMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_RadialMenu.WBP_RadialMenu_C.Construct");
		
		UWBP_RadialMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_RadialMenu.WBP_RadialMenu_C.ForceClosed
	 * 		Flags  -> ()
	 */
	void UWBP_RadialMenu_C::ForceClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_RadialMenu.WBP_RadialMenu_C.ForceClosed");
		
		UWBP_RadialMenu_C_ForceClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_RadialMenu.WBP_RadialMenu_C.ExecuteUbergraph_WBP_RadialMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_RadialMenu_C::ExecuteUbergraph_WBP_RadialMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_RadialMenu.WBP_RadialMenu_C.ExecuteUbergraph_WBP_RadialMenu");
		
		UWBP_RadialMenu_C_ExecuteUbergraph_WBP_RadialMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_RadialMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_RadialMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_RadialMenu.WBP_RadialMenu_C");
		return ptr;
	}

}


