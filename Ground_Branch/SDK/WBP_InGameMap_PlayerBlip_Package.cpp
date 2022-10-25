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
	 * 		Name   -> Function WBP_InGameMap_PlayerBlip.WBP_InGameMap_PlayerBlip_C.GetIconForTeammate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     TeammateLocation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_InGameMap_PlayerBlip_C::GetIconForTeammate(const struct FVector& TeammateLocation, class UTexture2D** NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InGameMap_PlayerBlip.WBP_InGameMap_PlayerBlip_C.GetIconForTeammate");
		
		UWBP_InGameMap_PlayerBlip_C_GetIconForTeammate_Params params {};
		params.TeammateLocation = TeammateLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InGameMap_PlayerBlip.WBP_InGameMap_PlayerBlip_C.OnMouseButtonDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UWBP_InGameMap_PlayerBlip_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InGameMap_PlayerBlip.WBP_InGameMap_PlayerBlip_C.OnMouseButtonDown");
		
		UWBP_InGameMap_PlayerBlip_C_OnMouseButtonDown_Params params {};
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
	 * 		Name   -> Function WBP_InGameMap_PlayerBlip.WBP_InGameMap_PlayerBlip_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_InGameMap_PlayerBlip_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InGameMap_PlayerBlip.WBP_InGameMap_PlayerBlip_C.Tick");
		
		UWBP_InGameMap_PlayerBlip_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InGameMap_PlayerBlip.WBP_InGameMap_PlayerBlip_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_InGameMap_PlayerBlip_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InGameMap_PlayerBlip.WBP_InGameMap_PlayerBlip_C.Construct");
		
		UWBP_InGameMap_PlayerBlip_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InGameMap_PlayerBlip.WBP_InGameMap_PlayerBlip_C.UpdatePosition
	 * 		Flags  -> ()
	 */
	void UWBP_InGameMap_PlayerBlip_C::UpdatePosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InGameMap_PlayerBlip.WBP_InGameMap_PlayerBlip_C.UpdatePosition");
		
		UWBP_InGameMap_PlayerBlip_C_UpdatePosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InGameMap_PlayerBlip.WBP_InGameMap_PlayerBlip_C.SetTeamElementColour
	 * 		Flags  -> ()
	 */
	void UWBP_InGameMap_PlayerBlip_C::SetTeamElementColour()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InGameMap_PlayerBlip.WBP_InGameMap_PlayerBlip_C.SetTeamElementColour");
		
		UWBP_InGameMap_PlayerBlip_C_SetTeamElementColour_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InGameMap_PlayerBlip.WBP_InGameMap_PlayerBlip_C.ExecuteUbergraph_WBP_InGameMap_PlayerBlip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_InGameMap_PlayerBlip_C::ExecuteUbergraph_WBP_InGameMap_PlayerBlip(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InGameMap_PlayerBlip.WBP_InGameMap_PlayerBlip_C.ExecuteUbergraph_WBP_InGameMap_PlayerBlip");
		
		UWBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_InGameMap_PlayerBlip_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_InGameMap_PlayerBlip_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_InGameMap_PlayerBlip.WBP_InGameMap_PlayerBlip_C");
		return ptr;
	}

}


