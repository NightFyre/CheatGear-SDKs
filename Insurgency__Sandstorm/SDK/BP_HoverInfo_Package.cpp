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
	 * 		Name   -> Function BP_HoverInfo.BP_HoverInfo_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_HoverInfo_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HoverInfo.BP_HoverInfo_C.PreConstruct");
		
		UBP_HoverInfo_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_HoverInfo.BP_HoverInfo_C.OnShow
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_HoverInfo_C::OnShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HoverInfo.BP_HoverInfo_C.OnShow");
		
		UBP_HoverInfo_C_OnShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_HoverInfo.BP_HoverInfo_C.OnHide
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_HoverInfo_C::OnHide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HoverInfo.BP_HoverInfo_C.OnHide");
		
		UBP_HoverInfo_C_OnHide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_HoverInfo.BP_HoverInfo_C.ExecuteUbergraph_BP_HoverInfo
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HoverInfo_C::ExecuteUbergraph_BP_HoverInfo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HoverInfo.BP_HoverInfo_C.ExecuteUbergraph_BP_HoverInfo");
		
		UBP_HoverInfo_C_ExecuteUbergraph_BP_HoverInfo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_HoverInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_HoverInfo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_HoverInfo.BP_HoverInfo_C");
		return ptr;
	}

}


