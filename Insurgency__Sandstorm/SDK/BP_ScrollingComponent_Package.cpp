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
	 * 		Name   -> Function BP_ScrollingComponent.BP_ScrollingComponent_C.BeginFadeIn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ScrollingComponent_C::BeginFadeIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScrollingComponent.BP_ScrollingComponent_C.BeginFadeIn");
		
		UBP_ScrollingComponent_C_BeginFadeIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ScrollingComponent.BP_ScrollingComponent_C.FadeTransition
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               In                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_ScrollingComponent_C::FadeTransition(bool In)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScrollingComponent.BP_ScrollingComponent_C.FadeTransition");
		
		UBP_ScrollingComponent_C_FadeTransition_Params params {};
		params.In = In;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ScrollingComponent.BP_ScrollingComponent_C.IsFadingInOrOut
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool UBP_ScrollingComponent_C::IsFadingInOrOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScrollingComponent.BP_ScrollingComponent_C.IsFadingInOrOut");
		
		UBP_ScrollingComponent_C_IsFadingInOrOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ScrollingComponent.BP_ScrollingComponent_C.UpdateFading
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ScrollingComponent_C::UpdateFading()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScrollingComponent.BP_ScrollingComponent_C.UpdateFading");
		
		UBP_ScrollingComponent_C_UpdateFading_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ScrollingComponent.BP_ScrollingComponent_C.BeginFadeOut
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ScrollingComponent_C::BeginFadeOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScrollingComponent.BP_ScrollingComponent_C.BeginFadeOut");
		
		UBP_ScrollingComponent_C_BeginFadeOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ScrollingComponent.BP_ScrollingComponent_C.ShouldUpdateScrolling
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Update                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_ScrollingComponent_C::ShouldUpdateScrolling(float DeltaTime, bool* Update)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScrollingComponent.BP_ScrollingComponent_C.ShouldUpdateScrolling");
		
		UBP_ScrollingComponent_C_ShouldUpdateScrolling_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Update != nullptr)
			*Update = params.Update;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ScrollingComponent.BP_ScrollingComponent_C.ResetScrolling
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ScrollingComponent_C::ResetScrolling()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScrollingComponent.BP_ScrollingComponent_C.ResetScrolling");
		
		UBP_ScrollingComponent_C_ResetScrolling_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ScrollingComponent.BP_ScrollingComponent_C.UpdateScrolling
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ScrollingComponent_C::UpdateScrolling(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScrollingComponent.BP_ScrollingComponent_C.UpdateScrolling");
		
		UBP_ScrollingComponent_C_UpdateScrolling_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ScrollingComponent.BP_ScrollingComponent_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ScrollingComponent_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScrollingComponent.BP_ScrollingComponent_C.Tick");
		
		UBP_ScrollingComponent_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ScrollingComponent.BP_ScrollingComponent_C.InitScrollingComponent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UScrollBox*                                  ScrollBox                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FStruct_ScrollingComponentData              ScrollData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ScrollingComponent_C::InitScrollingComponent(class UScrollBox* ScrollBox, const struct FStruct_ScrollingComponentData& ScrollData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScrollingComponent.BP_ScrollingComponent_C.InitScrollingComponent");
		
		UBP_ScrollingComponent_C_InitScrollingComponent_Params params {};
		params.ScrollBox = ScrollBox;
		params.ScrollData = ScrollData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ScrollingComponent.BP_ScrollingComponent_C.ExecuteUbergraph_BP_ScrollingComponent
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ScrollingComponent_C::ExecuteUbergraph_BP_ScrollingComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScrollingComponent.BP_ScrollingComponent_C.ExecuteUbergraph_BP_ScrollingComponent");
		
		UBP_ScrollingComponent_C_ExecuteUbergraph_BP_ScrollingComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_ScrollingComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_ScrollingComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_ScrollingComponent.BP_ScrollingComponent_C");
		return ptr;
	}

}


