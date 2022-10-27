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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAutotestCamera.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAutotestCamera::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StatsCollector.AutotestCamera");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CF52E0
	 * 		Name   -> Function StatsCollector.CustomStatsCollector.SetTickEnabled
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               bInEnabled                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomStatsCollector::SetTickEnabled(bool bInEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StatsCollector.CustomStatsCollector.SetTickEnabled");
		
		UCustomStatsCollector_SetTickEnabled_Params params {};
		params.bInEnabled = bInEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CF52C0
	 * 		Name   -> Function StatsCollector.CustomStatsCollector.OnSequanceLevelUnloaded
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UCustomStatsCollector::OnSequanceLevelUnloaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StatsCollector.CustomStatsCollector.OnSequanceLevelUnloaded");
		
		UCustomStatsCollector_OnSequanceLevelUnloaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CF52A0
	 * 		Name   -> Function StatsCollector.CustomStatsCollector.OnSequanceLevelStopped
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UCustomStatsCollector::OnSequanceLevelStopped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StatsCollector.CustomStatsCollector.OnSequanceLevelStopped");
		
		UCustomStatsCollector_OnSequanceLevelStopped_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CF5280
	 * 		Name   -> Function StatsCollector.CustomStatsCollector.OnSequanceLevelLoaded
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UCustomStatsCollector::OnSequanceLevelLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StatsCollector.CustomStatsCollector.OnSequanceLevelLoaded");
		
		UCustomStatsCollector_OnSequanceLevelLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CF5260
	 * 		Name   -> Function StatsCollector.CustomStatsCollector.OnAutotestLevelUnloaded
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UCustomStatsCollector::OnAutotestLevelUnloaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StatsCollector.CustomStatsCollector.OnAutotestLevelUnloaded");
		
		UCustomStatsCollector_OnAutotestLevelUnloaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CF5240
	 * 		Name   -> Function StatsCollector.CustomStatsCollector.OnAutotestLevelLoaded
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UCustomStatsCollector::OnAutotestLevelLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StatsCollector.CustomStatsCollector.OnAutotestLevelLoaded");
		
		UCustomStatsCollector_OnAutotestLevelLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CF51C0
	 * 		Name   -> Function StatsCollector.CustomStatsCollector.NewFrame
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		int64_t                                            targetFrame                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomStatsCollector::NewFrame(int64_t targetFrame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StatsCollector.CustomStatsCollector.NewFrame");
		
		UCustomStatsCollector_NewFrame_Params params {};
		params.targetFrame = targetFrame;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomStatsCollector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomStatsCollector::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StatsCollector.CustomStatsCollector");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStatsCollectorSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStatsCollectorSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StatsCollector.StatsCollectorSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CF5370
	 * 		Name   -> Function StatsCollector.FPSCounterWidget.UpdateFrameCount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UTextBlock*                                  FPSTextBlock                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTextBlock*                                  MAX_FPSTextBlock                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTextBlock*                                  AVR_FPSTextBlock                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFPSCounterWidget::UpdateFrameCount(class UTextBlock* FPSTextBlock, class UTextBlock* MAX_FPSTextBlock, class UTextBlock* AVR_FPSTextBlock, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StatsCollector.FPSCounterWidget.UpdateFrameCount");
		
		UFPSCounterWidget_UpdateFrameCount_Params params {};
		params.FPSTextBlock = FPSTextBlock;
		params.MAX_FPSTextBlock = MAX_FPSTextBlock;
		params.AVR_FPSTextBlock = AVR_FPSTextBlock;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CF5190
	 * 		Name   -> Function StatsCollector.FPSCounterWidget.GetMaxFPS
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	float UFPSCounterWidget::GetMaxFPS()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StatsCollector.FPSCounterWidget.GetMaxFPS");
		
		UFPSCounterWidget_GetMaxFPS_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CF5160
	 * 		Name   -> Function StatsCollector.FPSCounterWidget.GetCurrentFPS
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	float UFPSCounterWidget::GetCurrentFPS()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StatsCollector.FPSCounterWidget.GetCurrentFPS");
		
		UFPSCounterWidget_GetCurrentFPS_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CF5130
	 * 		Name   -> Function StatsCollector.FPSCounterWidget.GetAvrFPS
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	float UFPSCounterWidget::GetAvrFPS()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StatsCollector.FPSCounterWidget.GetAvrFPS");
		
		UFPSCounterWidget_GetAvrFPS_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFPSCounterWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFPSCounterWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StatsCollector.FPSCounterWidget");
		return ptr;
	}

}


