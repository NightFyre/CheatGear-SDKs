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
	 * 		Name   -> Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.Get_MPI_CanvasPanel_Visibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UPrisonerLifeIndicatorsSprite_C::Get_MPI_CanvasPanel_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.Get_MPI_CanvasPanel_Visibility");
		
		UPrisonerLifeIndicatorsSprite_C_Get_MPI_CanvasPanel_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.GetAIDetectionBarPercent
	 * 		Flags  -> ()
	 */
	float UPrisonerLifeIndicatorsSprite_C::GetAIDetectionBarPercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.GetAIDetectionBarPercent");
		
		UPrisonerLifeIndicatorsSprite_C_GetAIDetectionBarPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.GetNoiseBarPercent
	 * 		Flags  -> ()
	 */
	float UPrisonerLifeIndicatorsSprite_C::GetNoiseBarPercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.GetNoiseBarPercent");
		
		UPrisonerLifeIndicatorsSprite_C_GetNoiseBarPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.Get_BloodDropBox_Visibility_1
	 * 		Flags  -> ()
	 */
	ESlateVisibility UPrisonerLifeIndicatorsSprite_C::Get_BloodDropBox_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.Get_BloodDropBox_Visibility_1");
		
		UPrisonerLifeIndicatorsSprite_C_Get_BloodDropBox_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.SetImageVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EBodyPart                                          bodyPart                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UImage*                                      Image                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPrisonerLifeIndicatorsSprite_C::SetImageVisibility(EBodyPart bodyPart, class UImage* Image)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.SetImageVisibility");
		
		UPrisonerLifeIndicatorsSprite_C_SetImageVisibility_Params params {};
		params.bodyPart = bodyPart;
		params.Image = Image;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.GetDefaultPrisoner
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APrisoner*                                   Prisoner                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPrisonerLifeIndicatorsSprite_C::GetDefaultPrisoner(class APrisoner** Prisoner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.GetDefaultPrisoner");
		
		UPrisonerLifeIndicatorsSprite_C_GetDefaultPrisoner_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Prisoner != nullptr)
			*Prisoner = params.Prisoner;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.GetProgressBar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCircularProgressBarSprites_C*               circularProgresBar                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPrisonerLifeIndicatorsSprite_C::GetProgressBar(int32_t Index, class UCircularProgressBarSprites_C** circularProgresBar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.GetProgressBar");
		
		UPrisonerLifeIndicatorsSprite_C_GetProgressBar_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (circularProgresBar != nullptr)
			*circularProgresBar = params.circularProgresBar;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.SetDefaultPrisonerToMonitor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrisonerLifeIndicatorsSprite_C::SetDefaultPrisonerToMonitor(bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.SetDefaultPrisonerToMonitor");
		
		UPrisonerLifeIndicatorsSprite_C_SetDefaultPrisonerToMonitor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.UpdateIndicators
	 * 		Flags  -> ()
	 */
	void UPrisonerLifeIndicatorsSprite_C::UpdateIndicators()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.UpdateIndicators");
		
		UPrisonerLifeIndicatorsSprite_C_UpdateIndicators_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.SetPrisonerToMonitor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APrisoner*                                   Prisoner                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrisonerLifeIndicatorsSprite_C::SetPrisonerToMonitor(class APrisoner* Prisoner, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.SetPrisonerToMonitor");
		
		UPrisonerLifeIndicatorsSprite_C_SetPrisonerToMonitor_Params params {};
		params.Prisoner = Prisoner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.Construct
	 * 		Flags  -> ()
	 */
	void UPrisonerLifeIndicatorsSprite_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.Construct");
		
		UPrisonerLifeIndicatorsSprite_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.UpdateLifeIndicatorsEvent
	 * 		Flags  -> ()
	 */
	void UPrisonerLifeIndicatorsSprite_C::UpdateLifeIndicatorsEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.UpdateLifeIndicatorsEvent");
		
		UPrisonerLifeIndicatorsSprite_C_UpdateLifeIndicatorsEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.OnPrisonerSet
	 * 		Flags  -> ()
	 */
	void UPrisonerLifeIndicatorsSprite_C::OnPrisonerSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.OnPrisonerSet");
		
		UPrisonerLifeIndicatorsSprite_C_OnPrisonerSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPrisonerLifeIndicatorsSprite_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.Tick");
		
		UPrisonerLifeIndicatorsSprite_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.SetNoiseBarPercent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPrisonerLifeIndicatorsSprite_C::SetNoiseBarPercent(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.SetNoiseBarPercent");
		
		UPrisonerLifeIndicatorsSprite_C_SetNoiseBarPercent_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.SetAIDetectionBarPercent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPrisonerLifeIndicatorsSprite_C::SetAIDetectionBarPercent(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.SetAIDetectionBarPercent");
		
		UPrisonerLifeIndicatorsSprite_C_SetAIDetectionBarPercent_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.ExecuteUbergraph_PrisonerLifeIndicatorsSprite
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPrisonerLifeIndicatorsSprite_C::ExecuteUbergraph_PrisonerLifeIndicatorsSprite(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.ExecuteUbergraph_PrisonerLifeIndicatorsSprite");
		
		UPrisonerLifeIndicatorsSprite_C_ExecuteUbergraph_PrisonerLifeIndicatorsSprite_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrisonerLifeIndicatorsSprite_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrisonerLifeIndicatorsSprite_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C");
		return ptr;
	}

}


