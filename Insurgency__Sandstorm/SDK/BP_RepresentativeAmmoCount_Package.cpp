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
	 * 		Name   -> Function BP_RepresentativeAmmoCount.BP_RepresentativeAmmoCount_C.SetColorText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSlateColor                                 NewColor                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_RepresentativeAmmoCount_C::SetColorText(const struct FSlateColor& NewColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RepresentativeAmmoCount.BP_RepresentativeAmmoCount_C.SetColorText");
		
		UBP_RepresentativeAmmoCount_C_SetColorText_Params params {};
		params.NewColor = NewColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RepresentativeAmmoCount.BP_RepresentativeAmmoCount_C.UpdateText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_RepresentativeAmmoCount_C::UpdateText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RepresentativeAmmoCount.BP_RepresentativeAmmoCount_C.UpdateText");
		
		UBP_RepresentativeAmmoCount_C_UpdateText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RepresentativeAmmoCount.BP_RepresentativeAmmoCount_C.UpdateCount
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bNewCurrent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_RepresentativeAmmoCount_C::UpdateCount(int32_t Count, bool bNewCurrent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RepresentativeAmmoCount.BP_RepresentativeAmmoCount_C.UpdateCount");
		
		UBP_RepresentativeAmmoCount_C_UpdateCount_Params params {};
		params.Count = Count;
		params.bNewCurrent = bNewCurrent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RepresentativeAmmoCount.BP_RepresentativeAmmoCount_C.SetColor
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSinglyLoaded                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<int32_t>                                    Counters                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UBP_RepresentativeAmmoCount_C::SetColor(bool bSinglyLoaded, TArray<int32_t>* Counters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RepresentativeAmmoCount.BP_RepresentativeAmmoCount_C.SetColor");
		
		UBP_RepresentativeAmmoCount_C_SetColor_Params params {};
		params.bSinglyLoaded = bSinglyLoaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Counters != nullptr)
			*Counters = params.Counters;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RepresentativeAmmoCount.BP_RepresentativeAmmoCount_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_RepresentativeAmmoCount_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RepresentativeAmmoCount.BP_RepresentativeAmmoCount_C.PreConstruct");
		
		UBP_RepresentativeAmmoCount_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RepresentativeAmmoCount.BP_RepresentativeAmmoCount_C.ExecuteUbergraph_BP_RepresentativeAmmoCount
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RepresentativeAmmoCount_C::ExecuteUbergraph_BP_RepresentativeAmmoCount(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RepresentativeAmmoCount.BP_RepresentativeAmmoCount_C.ExecuteUbergraph_BP_RepresentativeAmmoCount");
		
		UBP_RepresentativeAmmoCount_C_ExecuteUbergraph_BP_RepresentativeAmmoCount_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_RepresentativeAmmoCount_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_RepresentativeAmmoCount_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_RepresentativeAmmoCount.BP_RepresentativeAmmoCount_C");
		return ptr;
	}

}


