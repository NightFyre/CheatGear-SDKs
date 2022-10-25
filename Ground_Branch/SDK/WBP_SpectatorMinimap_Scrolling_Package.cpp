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
	 * 		Name   -> Function WBP_SpectatorMinimap_Scrolling.WBP_SpectatorMinimap_Scrolling_C.GetSpectatorArrowVis
	 * 		Flags  -> ()
	 */
	ESlateVisibility UWBP_SpectatorMinimap_Scrolling_C::GetSpectatorArrowVis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpectatorMinimap_Scrolling.WBP_SpectatorMinimap_Scrolling_C.GetSpectatorArrowVis");
		
		UWBP_SpectatorMinimap_Scrolling_C_GetSpectatorArrowVis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SpectatorMinimap_Scrolling.WBP_SpectatorMinimap_Scrolling_C.AddPlayersToMinimap
	 * 		Flags  -> ()
	 */
	void UWBP_SpectatorMinimap_Scrolling_C::AddPlayersToMinimap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpectatorMinimap_Scrolling.WBP_SpectatorMinimap_Scrolling_C.AddPlayersToMinimap");
		
		UWBP_SpectatorMinimap_Scrolling_C_AddPlayersToMinimap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SpectatorMinimap_Scrolling.WBP_SpectatorMinimap_Scrolling_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_SpectatorMinimap_Scrolling_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpectatorMinimap_Scrolling.WBP_SpectatorMinimap_Scrolling_C.Construct");
		
		UWBP_SpectatorMinimap_Scrolling_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SpectatorMinimap_Scrolling.WBP_SpectatorMinimap_Scrolling_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_SpectatorMinimap_Scrolling_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpectatorMinimap_Scrolling.WBP_SpectatorMinimap_Scrolling_C.Tick");
		
		UWBP_SpectatorMinimap_Scrolling_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SpectatorMinimap_Scrolling.WBP_SpectatorMinimap_Scrolling_C.SetZoom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Zoom                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_SpectatorMinimap_Scrolling_C::SetZoom(float Zoom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpectatorMinimap_Scrolling.WBP_SpectatorMinimap_Scrolling_C.SetZoom");
		
		UWBP_SpectatorMinimap_Scrolling_C_SetZoom_Params params {};
		params.Zoom = Zoom;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SpectatorMinimap_Scrolling.WBP_SpectatorMinimap_Scrolling_C.SetMinimapStyle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NewStyle                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_SpectatorMinimap_Scrolling_C::SetMinimapStyle(const class FName& NewStyle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpectatorMinimap_Scrolling.WBP_SpectatorMinimap_Scrolling_C.SetMinimapStyle");
		
		UWBP_SpectatorMinimap_Scrolling_C_SetMinimapStyle_Params params {};
		params.NewStyle = NewStyle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SpectatorMinimap_Scrolling.WBP_SpectatorMinimap_Scrolling_C.UpdateTranslation
	 * 		Flags  -> ()
	 */
	void UWBP_SpectatorMinimap_Scrolling_C::UpdateTranslation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpectatorMinimap_Scrolling.WBP_SpectatorMinimap_Scrolling_C.UpdateTranslation");
		
		UWBP_SpectatorMinimap_Scrolling_C_UpdateTranslation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SpectatorMinimap_Scrolling.WBP_SpectatorMinimap_Scrolling_C.UpdateRotation
	 * 		Flags  -> ()
	 */
	void UWBP_SpectatorMinimap_Scrolling_C::UpdateRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpectatorMinimap_Scrolling.WBP_SpectatorMinimap_Scrolling_C.UpdateRotation");
		
		UWBP_SpectatorMinimap_Scrolling_C_UpdateRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SpectatorMinimap_Scrolling.WBP_SpectatorMinimap_Scrolling_C.ExecuteUbergraph_WBP_SpectatorMinimap_Scrolling
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_SpectatorMinimap_Scrolling_C::ExecuteUbergraph_WBP_SpectatorMinimap_Scrolling(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpectatorMinimap_Scrolling.WBP_SpectatorMinimap_Scrolling_C.ExecuteUbergraph_WBP_SpectatorMinimap_Scrolling");
		
		UWBP_SpectatorMinimap_Scrolling_C_ExecuteUbergraph_WBP_SpectatorMinimap_Scrolling_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_SpectatorMinimap_Scrolling_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_SpectatorMinimap_Scrolling_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_SpectatorMinimap_Scrolling.WBP_SpectatorMinimap_Scrolling_C");
		return ptr;
	}

}


