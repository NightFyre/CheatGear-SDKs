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
	 * 		Name   -> Function BP_Widget_RestrictedAreaWarning.BP_Widget_RestrictedAreaWarning_C.UpdateOutsidePlayableAreaText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Widget_RestrictedAreaWarning_C::UpdateOutsidePlayableAreaText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_RestrictedAreaWarning.BP_Widget_RestrictedAreaWarning_C.UpdateOutsidePlayableAreaText");
		
		UBP_Widget_RestrictedAreaWarning_C_UpdateOutsidePlayableAreaText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_RestrictedAreaWarning.BP_Widget_RestrictedAreaWarning_C.SetIsRestricted
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewRestricted                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bNewOutsidePlayableArea                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Widget_RestrictedAreaWarning_C::SetIsRestricted(bool bNewRestricted, bool bNewOutsidePlayableArea)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_RestrictedAreaWarning.BP_Widget_RestrictedAreaWarning_C.SetIsRestricted");
		
		UBP_Widget_RestrictedAreaWarning_C_SetIsRestricted_Params params {};
		params.bNewRestricted = bNewRestricted;
		params.bNewOutsidePlayableArea = bNewOutsidePlayableArea;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_RestrictedAreaWarning.BP_Widget_RestrictedAreaWarning_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Widget_RestrictedAreaWarning_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_RestrictedAreaWarning.BP_Widget_RestrictedAreaWarning_C.Tick");
		
		UBP_Widget_RestrictedAreaWarning_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_RestrictedAreaWarning.BP_Widget_RestrictedAreaWarning_C.ExecuteUbergraph_BP_Widget_RestrictedAreaWarning
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Widget_RestrictedAreaWarning_C::ExecuteUbergraph_BP_Widget_RestrictedAreaWarning(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_RestrictedAreaWarning.BP_Widget_RestrictedAreaWarning_C.ExecuteUbergraph_BP_Widget_RestrictedAreaWarning");
		
		UBP_Widget_RestrictedAreaWarning_C_ExecuteUbergraph_BP_Widget_RestrictedAreaWarning_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Widget_RestrictedAreaWarning_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Widget_RestrictedAreaWarning_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_Widget_RestrictedAreaWarning.BP_Widget_RestrictedAreaWarning_C");
		return ptr;
	}

}


