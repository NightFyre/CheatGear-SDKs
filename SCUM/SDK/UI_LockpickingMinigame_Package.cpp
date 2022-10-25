/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * 		Name   -> Function UI_LockpickingMinigame.UI_LockpickingMinigame_C.SetDifficultyVisuals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELockPickingDifficulty                             Difficulty                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_LockpickingMinigame_C::SetDifficultyVisuals(ELockPickingDifficulty Difficulty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LockpickingMinigame.UI_LockpickingMinigame_C.SetDifficultyVisuals");
		
		UUI_LockpickingMinigame_C_SetDifficultyVisuals_Params params {};
		params.Difficulty = Difficulty;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_LockpickingMinigame.UI_LockpickingMinigame_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_LockpickingMinigame_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LockpickingMinigame.UI_LockpickingMinigame_C.Tick");
		
		UUI_LockpickingMinigame_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_LockpickingMinigame.UI_LockpickingMinigame_C.ShowInfo
	 * 		Flags  -> ()
	 */
	void UUI_LockpickingMinigame_C::ShowInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LockpickingMinigame.UI_LockpickingMinigame_C.ShowInfo");
		
		UUI_LockpickingMinigame_C_ShowInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_LockpickingMinigame.UI_LockpickingMinigame_C.HideInfo
	 * 		Flags  -> ()
	 */
	void UUI_LockpickingMinigame_C::HideInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LockpickingMinigame.UI_LockpickingMinigame_C.HideInfo");
		
		UUI_LockpickingMinigame_C_HideInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_LockpickingMinigame.UI_LockpickingMinigame_C.OnSuccess
	 * 		Flags  -> ()
	 */
	void UUI_LockpickingMinigame_C::OnSuccess()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LockpickingMinigame.UI_LockpickingMinigame_C.OnSuccess");
		
		UUI_LockpickingMinigame_C_OnSuccess_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_LockpickingMinigame.UI_LockpickingMinigame_C.OnFailure
	 * 		Flags  -> ()
	 */
	void UUI_LockpickingMinigame_C::OnFailure()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LockpickingMinigame.UI_LockpickingMinigame_C.OnFailure");
		
		UUI_LockpickingMinigame_C_OnFailure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_LockpickingMinigame.UI_LockpickingMinigame_C.SetLockPickingDifficulty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELockPickingDifficulty                             Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_LockpickingMinigame_C::SetLockPickingDifficulty(ELockPickingDifficulty Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LockpickingMinigame.UI_LockpickingMinigame_C.SetLockPickingDifficulty");
		
		UUI_LockpickingMinigame_C_SetLockPickingDifficulty_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_LockpickingMinigame.UI_LockpickingMinigame_C.ExecuteUbergraph_UI_LockpickingMinigame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_LockpickingMinigame_C::ExecuteUbergraph_UI_LockpickingMinigame(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LockpickingMinigame.UI_LockpickingMinigame_C.ExecuteUbergraph_UI_LockpickingMinigame");
		
		UUI_LockpickingMinigame_C_ExecuteUbergraph_UI_LockpickingMinigame_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_LockpickingMinigame_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_LockpickingMinigame_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_LockpickingMinigame.UI_LockpickingMinigame_C");
		return ptr;
	}

}


