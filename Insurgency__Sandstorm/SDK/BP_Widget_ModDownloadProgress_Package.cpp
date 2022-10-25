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
	 * 		Name   -> Function BP_Widget_ModDownloadProgress.BP_Widget_ModDownloadProgress_C.UpdateProgress
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Widget_ModDownloadProgress_C::UpdateProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_ModDownloadProgress.BP_Widget_ModDownloadProgress_C.UpdateProgress");
		
		UBP_Widget_ModDownloadProgress_C_UpdateProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_ModDownloadProgress.BP_Widget_ModDownloadProgress_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_Widget_ModDownloadProgress_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_ModDownloadProgress.BP_Widget_ModDownloadProgress_C.Construct");
		
		UBP_Widget_ModDownloadProgress_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_ModDownloadProgress.BP_Widget_ModDownloadProgress_C.OnDownloadStart
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FModObject                                  Mod                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_Widget_ModDownloadProgress_C::OnDownloadStart(const struct FModObject& Mod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_ModDownloadProgress.BP_Widget_ModDownloadProgress_C.OnDownloadStart");
		
		UBP_Widget_ModDownloadProgress_C_OnDownloadStart_Params params {};
		params.Mod = Mod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_ModDownloadProgress.BP_Widget_ModDownloadProgress_C.OnDownloadQueueFinished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Widget_ModDownloadProgress_C::OnDownloadQueueFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_ModDownloadProgress.BP_Widget_ModDownloadProgress_C.OnDownloadQueueFinished");
		
		UBP_Widget_ModDownloadProgress_C_OnDownloadQueueFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_ModDownloadProgress.BP_Widget_ModDownloadProgress_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Widget_ModDownloadProgress_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_ModDownloadProgress.BP_Widget_ModDownloadProgress_C.Tick");
		
		UBP_Widget_ModDownloadProgress_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_ModDownloadProgress.BP_Widget_ModDownloadProgress_C.ExecuteUbergraph_BP_Widget_ModDownloadProgress
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Widget_ModDownloadProgress_C::ExecuteUbergraph_BP_Widget_ModDownloadProgress(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_ModDownloadProgress.BP_Widget_ModDownloadProgress_C.ExecuteUbergraph_BP_Widget_ModDownloadProgress");
		
		UBP_Widget_ModDownloadProgress_C_ExecuteUbergraph_BP_Widget_ModDownloadProgress_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Widget_ModDownloadProgress_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Widget_ModDownloadProgress_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_Widget_ModDownloadProgress.BP_Widget_ModDownloadProgress_C");
		return ptr;
	}

}


