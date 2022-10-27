/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_Compass.WBP_HUDElement_Compass_C.SetWidgetCanvasSlotSize
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   NewLayoutSize                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HUDElement_Compass_C::SetWidgetCanvasSlotSize(class UWidget* Widget, const struct FVector2D& NewLayoutSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_Compass.WBP_HUDElement_Compass_C.SetWidgetCanvasSlotSize");
		
		UWBP_HUDElement_Compass_C_SetWidgetCanvasSlotSize_Params params {};
		params.Widget = Widget;
		params.NewLayoutSize = NewLayoutSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_Compass.WBP_HUDElement_Compass_C.UpdateDirection
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_HUDElement_Compass_C::UpdateDirection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_Compass.WBP_HUDElement_Compass_C.UpdateDirection");
		
		UWBP_HUDElement_Compass_C_UpdateDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_Compass.WBP_HUDElement_Compass_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HUDElement_Compass_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_Compass.WBP_HUDElement_Compass_C.Tick");
		
		UWBP_HUDElement_Compass_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_Compass.WBP_HUDElement_Compass_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_HUDElement_Compass_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_Compass.WBP_HUDElement_Compass_C.PreConstruct");
		
		UWBP_HUDElement_Compass_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_Compass.WBP_HUDElement_Compass_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWBP_HUDElement_Compass_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_Compass.WBP_HUDElement_Compass_C.OnInitialized");
		
		UWBP_HUDElement_Compass_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_Compass.WBP_HUDElement_Compass_C.ExecuteUbergraph_WBP_HUDElement_Compass
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HUDElement_Compass_C::ExecuteUbergraph_WBP_HUDElement_Compass(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_Compass.WBP_HUDElement_Compass_C.ExecuteUbergraph_WBP_HUDElement_Compass");
		
		UWBP_HUDElement_Compass_C_ExecuteUbergraph_WBP_HUDElement_Compass_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_HUDElement_Compass_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_HUDElement_Compass_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_HUDElement_Compass.WBP_HUDElement_Compass_C");
		return ptr;
	}

}


