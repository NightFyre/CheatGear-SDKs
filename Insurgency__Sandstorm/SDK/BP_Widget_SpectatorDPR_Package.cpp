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
	 * 		Name   -> Function BP_Widget_SpectatorDPR.BP_Widget_SpectatorDPR_C.RefreshInternal
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Widget_SpectatorDPR_C::RefreshInternal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_SpectatorDPR.BP_Widget_SpectatorDPR_C.RefreshInternal");
		
		UBP_Widget_SpectatorDPR_C_RefreshInternal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_SpectatorDPR.BP_Widget_SpectatorDPR_C.SetActive
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bActive                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Widget_SpectatorDPR_C::SetActive(bool bActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_SpectatorDPR.BP_Widget_SpectatorDPR_C.SetActive");
		
		UBP_Widget_SpectatorDPR_C_SetActive_Params params {};
		params.bActive = bActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_SpectatorDPR.BP_Widget_SpectatorDPR_C.UpdateImagesInternal
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewRequiredPlayers                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NewDeadPlayers                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Widget_SpectatorDPR_C::UpdateImagesInternal(int32_t NewRequiredPlayers, int32_t NewDeadPlayers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_SpectatorDPR.BP_Widget_SpectatorDPR_C.UpdateImagesInternal");
		
		UBP_Widget_SpectatorDPR_C_UpdateImagesInternal_Params params {};
		params.NewRequiredPlayers = NewRequiredPlayers;
		params.NewDeadPlayers = NewDeadPlayers;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_SpectatorDPR.BP_Widget_SpectatorDPR_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Widget_SpectatorDPR_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_SpectatorDPR.BP_Widget_SpectatorDPR_C.PreConstruct");
		
		UBP_Widget_SpectatorDPR_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_SpectatorDPR.BP_Widget_SpectatorDPR_C.ExecuteUbergraph_BP_Widget_SpectatorDPR
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Widget_SpectatorDPR_C::ExecuteUbergraph_BP_Widget_SpectatorDPR(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_SpectatorDPR.BP_Widget_SpectatorDPR_C.ExecuteUbergraph_BP_Widget_SpectatorDPR");
		
		UBP_Widget_SpectatorDPR_C_ExecuteUbergraph_BP_Widget_SpectatorDPR_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Widget_SpectatorDPR_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Widget_SpectatorDPR_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_Widget_SpectatorDPR.BP_Widget_SpectatorDPR_C");
		return ptr;
	}

}


