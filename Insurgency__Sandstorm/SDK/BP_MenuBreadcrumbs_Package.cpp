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
	 * 		Name   -> Function BP_MenuBreadcrumbs.BP_MenuBreadcrumbs_C.GetVisibility_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_MenuBreadcrumbs_C::GetVisibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuBreadcrumbs.BP_MenuBreadcrumbs_C.GetVisibility_1");
		
		UBP_MenuBreadcrumbs_C_GetVisibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuBreadcrumbs.BP_MenuBreadcrumbs_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MenuBreadcrumbs_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuBreadcrumbs.BP_MenuBreadcrumbs_C.PreConstruct");
		
		UBP_MenuBreadcrumbs_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuBreadcrumbs.BP_MenuBreadcrumbs_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_MenuBreadcrumbs_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuBreadcrumbs.BP_MenuBreadcrumbs_C.Construct");
		
		UBP_MenuBreadcrumbs_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuBreadcrumbs.BP_MenuBreadcrumbs_C.UpdatePlatform
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bConsole                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MenuBreadcrumbs_C::UpdatePlatform(bool bConsole)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuBreadcrumbs.BP_MenuBreadcrumbs_C.UpdatePlatform");
		
		UBP_MenuBreadcrumbs_C_UpdatePlatform_Params params {};
		params.bConsole = bConsole;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MenuBreadcrumbs.BP_MenuBreadcrumbs_C.ExecuteUbergraph_BP_MenuBreadcrumbs
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MenuBreadcrumbs_C::ExecuteUbergraph_BP_MenuBreadcrumbs(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuBreadcrumbs.BP_MenuBreadcrumbs_C.ExecuteUbergraph_BP_MenuBreadcrumbs");
		
		UBP_MenuBreadcrumbs_C_ExecuteUbergraph_BP_MenuBreadcrumbs_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_MenuBreadcrumbs_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_MenuBreadcrumbs_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MenuBreadcrumbs.BP_MenuBreadcrumbs_C");
		return ptr;
	}

}


