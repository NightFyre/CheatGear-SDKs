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
	 * 		Name   -> Function WBP_CaptureStatus_FlagIcon.WBP_CaptureStatus_FlagIcon_C.SetBrushOpacityByCaptureStatus
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FSlateBrush                                 BrushToUpdate                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               bLocked                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EHDControlPointObjectiveType                       ObjType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateBrush                                 NewBrush                                                   (Parm, OutParm)
	 */
	void UWBP_CaptureStatus_FlagIcon_C::SetBrushOpacityByCaptureStatus(struct FSlateBrush* BrushToUpdate, bool bLocked, EHDControlPointObjectiveType ObjType, struct FSlateBrush* NewBrush)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CaptureStatus_FlagIcon.WBP_CaptureStatus_FlagIcon_C.SetBrushOpacityByCaptureStatus");
		
		UWBP_CaptureStatus_FlagIcon_C_SetBrushOpacityByCaptureStatus_Params params {};
		params.bLocked = bLocked;
		params.ObjType = ObjType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BrushToUpdate != nullptr)
			*BrushToUpdate = params.BrushToUpdate;
		if (NewBrush != nullptr)
			*NewBrush = params.NewBrush;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_CaptureStatus_FlagIcon.WBP_CaptureStatus_FlagIcon_C.TintBrushByTeam
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FSlateBrush                                 BrushToTint                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		EHDTeam                                            Team                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateBrush                                 NewBrush                                                   (Parm, OutParm)
	 */
	void UWBP_CaptureStatus_FlagIcon_C::TintBrushByTeam(struct FSlateBrush* BrushToTint, EHDTeam Team, struct FSlateBrush* NewBrush)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CaptureStatus_FlagIcon.WBP_CaptureStatus_FlagIcon_C.TintBrushByTeam");
		
		UWBP_CaptureStatus_FlagIcon_C_TintBrushByTeam_Params params {};
		params.Team = Team;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BrushToTint != nullptr)
			*BrushToTint = params.BrushToTint;
		if (NewBrush != nullptr)
			*NewBrush = params.NewBrush;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_CaptureStatus_FlagIcon.WBP_CaptureStatus_FlagIcon_C.UpdateBrushesByTeam
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bLocked                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EHDTeam                                            Team                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EHDControlPointObjectiveType                       ObjType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CaptureStatus_FlagIcon_C::UpdateBrushesByTeam(bool bLocked, EHDTeam Team, EHDControlPointObjectiveType ObjType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CaptureStatus_FlagIcon.WBP_CaptureStatus_FlagIcon_C.UpdateBrushesByTeam");
		
		UWBP_CaptureStatus_FlagIcon_C_UpdateBrushesByTeam_Params params {};
		params.bLocked = bLocked;
		params.Team = Team;
		params.ObjType = ObjType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_CaptureStatus_FlagIcon.WBP_CaptureStatus_FlagIcon_C.SetBrushes
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSlateBrush                                 IconFrame                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FSlateBrush                                 Bg                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FSlateBrush                                 Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_CaptureStatus_FlagIcon_C::SetBrushes(struct FSlateBrush* IconFrame, struct FSlateBrush* Bg, struct FSlateBrush* Icon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CaptureStatus_FlagIcon.WBP_CaptureStatus_FlagIcon_C.SetBrushes");
		
		UWBP_CaptureStatus_FlagIcon_C_SetBrushes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IconFrame != nullptr)
			*IconFrame = params.IconFrame;
		if (Bg != nullptr)
			*Bg = params.Bg;
		if (Icon != nullptr)
			*Icon = params.Icon;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_CaptureStatus_FlagIcon.WBP_CaptureStatus_FlagIcon_C.OnUpdateIcon
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bActive                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EHDTeam                                            Team                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bLocked                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EHDControlPointObjectiveType                       ObjType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CaptureStatus_FlagIcon_C::OnUpdateIcon(bool bActive, EHDTeam Team, bool bLocked, EHDControlPointObjectiveType ObjType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CaptureStatus_FlagIcon.WBP_CaptureStatus_FlagIcon_C.OnUpdateIcon");
		
		UWBP_CaptureStatus_FlagIcon_C_OnUpdateIcon_Params params {};
		params.bActive = bActive;
		params.Team = Team;
		params.bLocked = bLocked;
		params.ObjType = ObjType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_CaptureStatus_FlagIcon.WBP_CaptureStatus_FlagIcon_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_CaptureStatus_FlagIcon_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CaptureStatus_FlagIcon.WBP_CaptureStatus_FlagIcon_C.PreConstruct");
		
		UWBP_CaptureStatus_FlagIcon_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_CaptureStatus_FlagIcon.WBP_CaptureStatus_FlagIcon_C.ExecuteUbergraph_WBP_CaptureStatus_FlagIcon
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CaptureStatus_FlagIcon_C::ExecuteUbergraph_WBP_CaptureStatus_FlagIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CaptureStatus_FlagIcon.WBP_CaptureStatus_FlagIcon_C.ExecuteUbergraph_WBP_CaptureStatus_FlagIcon");
		
		UWBP_CaptureStatus_FlagIcon_C_ExecuteUbergraph_WBP_CaptureStatus_FlagIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_CaptureStatus_FlagIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_CaptureStatus_FlagIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_CaptureStatus_FlagIcon.WBP_CaptureStatus_FlagIcon_C");
		return ptr;
	}

}


