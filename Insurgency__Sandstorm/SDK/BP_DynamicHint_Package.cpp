/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DynamicHint.BP_DynamicHint_C.Update Use Progress
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_DynamicHint_C::Update_Use_Progress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DynamicHint.BP_DynamicHint_C.Update Use Progress");
		
		UBP_DynamicHint_C_Update_Use_Progress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DynamicHint.BP_DynamicHint_C.Get Dynamic Hint  Opacity
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	float UBP_DynamicHint_C::Get_Dynamic_Hint_Opacity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DynamicHint.BP_DynamicHint_C.Get Dynamic Hint  Opacity");
		
		UBP_DynamicHint_C_Get_Dynamic_Hint_Opacity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DynamicHint.BP_DynamicHint_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DynamicHint_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DynamicHint.BP_DynamicHint_C.Tick");
		
		UBP_DynamicHint_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DynamicHint.BP_DynamicHint_C.UpdateVisibility
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_DynamicHint_C::UpdateVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DynamicHint.BP_DynamicHint_C.UpdateVisibility");
		
		UBP_DynamicHint_C_UpdateVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DynamicHint.BP_DynamicHint_C.OnFillRowWithInformation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsPrimaryRow                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        AdditionalText                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UTexture2D*                                  HintTexture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        ActionName                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Timeout                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DynamicHint_C::OnFillRowWithInformation(bool IsPrimaryRow, const class FText& AdditionalText, class UTexture2D* HintTexture, const class FName& ActionName, const struct FVector& Location, float Timeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DynamicHint.BP_DynamicHint_C.OnFillRowWithInformation");
		
		UBP_DynamicHint_C_OnFillRowWithInformation_Params params {};
		params.IsPrimaryRow = IsPrimaryRow;
		params.AdditionalText = AdditionalText;
		params.HintTexture = HintTexture;
		params.ActionName = ActionName;
		params.Location = Location;
		params.Timeout = Timeout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DynamicHint.BP_DynamicHint_C.OnFillRowWithInformationMultipleActions
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsPrimaryRow                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        AdditionalText                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UTexture2D*                                  HintTexture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FName>                                ActionNames                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Timeout                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DynamicHint_C::OnFillRowWithInformationMultipleActions(bool IsPrimaryRow, const class FText& AdditionalText, class UTexture2D* HintTexture, TArray<class FName> ActionNames, const struct FVector& Location, float Timeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DynamicHint.BP_DynamicHint_C.OnFillRowWithInformationMultipleActions");
		
		UBP_DynamicHint_C_OnFillRowWithInformationMultipleActions_Params params {};
		params.IsPrimaryRow = IsPrimaryRow;
		params.AdditionalText = AdditionalText;
		params.HintTexture = HintTexture;
		params.ActionNames = ActionNames;
		params.Location = Location;
		params.Timeout = Timeout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DynamicHint.BP_DynamicHint_C.ExecuteUbergraph_BP_DynamicHint
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DynamicHint_C::ExecuteUbergraph_BP_DynamicHint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DynamicHint.BP_DynamicHint_C.ExecuteUbergraph_BP_DynamicHint");
		
		UBP_DynamicHint_C_ExecuteUbergraph_BP_DynamicHint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_DynamicHint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_DynamicHint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_DynamicHint.BP_DynamicHint_C");
		return ptr;
	}

}


