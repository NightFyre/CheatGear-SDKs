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
	 * 		Name   -> Function WBP_SpectaorMinimap_ActorBlips.WBP_SpectaorMinimap_ActorBlips_C.OnMouseButtonDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UWBP_SpectaorMinimap_ActorBlips_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpectaorMinimap_ActorBlips.WBP_SpectaorMinimap_ActorBlips_C.OnMouseButtonDown");
		
		UWBP_SpectaorMinimap_ActorBlips_C_OnMouseButtonDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SpectaorMinimap_ActorBlips.WBP_SpectaorMinimap_ActorBlips_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_SpectaorMinimap_ActorBlips_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpectaorMinimap_ActorBlips.WBP_SpectaorMinimap_ActorBlips_C.Tick");
		
		UWBP_SpectaorMinimap_ActorBlips_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SpectaorMinimap_ActorBlips.WBP_SpectaorMinimap_ActorBlips_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_SpectaorMinimap_ActorBlips_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpectaorMinimap_ActorBlips.WBP_SpectaorMinimap_ActorBlips_C.Construct");
		
		UWBP_SpectaorMinimap_ActorBlips_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SpectaorMinimap_ActorBlips.WBP_SpectaorMinimap_ActorBlips_C.UpdatePosition
	 * 		Flags  -> ()
	 */
	void UWBP_SpectaorMinimap_ActorBlips_C::UpdatePosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpectaorMinimap_ActorBlips.WBP_SpectaorMinimap_ActorBlips_C.UpdatePosition");
		
		UWBP_SpectaorMinimap_ActorBlips_C_UpdatePosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SpectaorMinimap_ActorBlips.WBP_SpectaorMinimap_ActorBlips_C.OnMouseEnter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_SpectaorMinimap_ActorBlips_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpectaorMinimap_ActorBlips.WBP_SpectaorMinimap_ActorBlips_C.OnMouseEnter");
		
		UWBP_SpectaorMinimap_ActorBlips_C_OnMouseEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SpectaorMinimap_ActorBlips.WBP_SpectaorMinimap_ActorBlips_C.OnMouseLeave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_SpectaorMinimap_ActorBlips_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpectaorMinimap_ActorBlips.WBP_SpectaorMinimap_ActorBlips_C.OnMouseLeave");
		
		UWBP_SpectaorMinimap_ActorBlips_C_OnMouseLeave_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SpectaorMinimap_ActorBlips.WBP_SpectaorMinimap_ActorBlips_C.ExecuteUbergraph_WBP_SpectaorMinimap_ActorBlips
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_SpectaorMinimap_ActorBlips_C::ExecuteUbergraph_WBP_SpectaorMinimap_ActorBlips(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpectaorMinimap_ActorBlips.WBP_SpectaorMinimap_ActorBlips_C.ExecuteUbergraph_WBP_SpectaorMinimap_ActorBlips");
		
		UWBP_SpectaorMinimap_ActorBlips_C_ExecuteUbergraph_WBP_SpectaorMinimap_ActorBlips_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_SpectaorMinimap_ActorBlips_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_SpectaorMinimap_ActorBlips_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_SpectaorMinimap_ActorBlips.WBP_SpectaorMinimap_ActorBlips_C");
		return ptr;
	}

}


