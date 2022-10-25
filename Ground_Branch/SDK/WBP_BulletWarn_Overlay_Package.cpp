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
	 * 		Name   -> Function WBP_BulletWarn_Overlay.WBP_BulletWarn_Overlay_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_BulletWarn_Overlay_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_BulletWarn_Overlay.WBP_BulletWarn_Overlay_C.Construct");
		
		UWBP_BulletWarn_Overlay_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_BulletWarn_Overlay.WBP_BulletWarn_Overlay_C.HitBack
	 * 		Flags  -> ()
	 */
	void UWBP_BulletWarn_Overlay_C::HitBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_BulletWarn_Overlay.WBP_BulletWarn_Overlay_C.HitBack");
		
		UWBP_BulletWarn_Overlay_C_HitBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_BulletWarn_Overlay.WBP_BulletWarn_Overlay_C.HitLeft
	 * 		Flags  -> ()
	 */
	void UWBP_BulletWarn_Overlay_C::HitLeft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_BulletWarn_Overlay.WBP_BulletWarn_Overlay_C.HitLeft");
		
		UWBP_BulletWarn_Overlay_C_HitLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_BulletWarn_Overlay.WBP_BulletWarn_Overlay_C.HitRight
	 * 		Flags  -> ()
	 */
	void UWBP_BulletWarn_Overlay_C::HitRight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_BulletWarn_Overlay.WBP_BulletWarn_Overlay_C.HitRight");
		
		UWBP_BulletWarn_Overlay_C_HitRight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_BulletWarn_Overlay.WBP_BulletWarn_Overlay_C.HitDown
	 * 		Flags  -> ()
	 */
	void UWBP_BulletWarn_Overlay_C::HitDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_BulletWarn_Overlay.WBP_BulletWarn_Overlay_C.HitDown");
		
		UWBP_BulletWarn_Overlay_C_HitDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_BulletWarn_Overlay.WBP_BulletWarn_Overlay_C.HitUp
	 * 		Flags  -> ()
	 */
	void UWBP_BulletWarn_Overlay_C::HitUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_BulletWarn_Overlay.WBP_BulletWarn_Overlay_C.HitUp");
		
		UWBP_BulletWarn_Overlay_C_HitUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_BulletWarn_Overlay.WBP_BulletWarn_Overlay_C.HitForward
	 * 		Flags  -> ()
	 */
	void UWBP_BulletWarn_Overlay_C::HitForward()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_BulletWarn_Overlay.WBP_BulletWarn_Overlay_C.HitForward");
		
		UWBP_BulletWarn_Overlay_C_HitForward_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_BulletWarn_Overlay.WBP_BulletWarn_Overlay_C.OnPlayerControllerBulletWarn_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     ViewLocation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    ViewRotation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     BulletLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bCanCrack                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_BulletWarn_Overlay_C::OnPlayerControllerBulletWarn_Event_1(const struct FVector& ViewLocation, const struct FRotator& ViewRotation, const struct FVector& BulletLocation, bool bCanCrack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_BulletWarn_Overlay.WBP_BulletWarn_Overlay_C.OnPlayerControllerBulletWarn_Event_1");
		
		UWBP_BulletWarn_Overlay_C_OnPlayerControllerBulletWarn_Event_1_Params params {};
		params.ViewLocation = ViewLocation;
		params.ViewRotation = ViewRotation;
		params.BulletLocation = BulletLocation;
		params.bCanCrack = bCanCrack;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_BulletWarn_Overlay.WBP_BulletWarn_Overlay_C.ExecuteUbergraph_WBP_BulletWarn_Overlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_BulletWarn_Overlay_C::ExecuteUbergraph_WBP_BulletWarn_Overlay(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_BulletWarn_Overlay.WBP_BulletWarn_Overlay_C.ExecuteUbergraph_WBP_BulletWarn_Overlay");
		
		UWBP_BulletWarn_Overlay_C_ExecuteUbergraph_WBP_BulletWarn_Overlay_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_BulletWarn_Overlay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_BulletWarn_Overlay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_BulletWarn_Overlay.WBP_BulletWarn_Overlay_C");
		return ptr;
	}

}


