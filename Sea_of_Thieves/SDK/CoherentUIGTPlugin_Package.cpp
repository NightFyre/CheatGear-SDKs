/**
 * Name: Sea_of_Thieves
 * Version: 9505844
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x04FE7E80
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.UpdateWholeDataModelFromStruct
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
	 * Parameters:
	 * 		class UStructProperty*                             Arg                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCoherentUIGTBaseComponent::UpdateWholeDataModelFromStruct(class UStructProperty* Arg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.UpdateWholeDataModelFromStruct");
		
		UCoherentUIGTBaseComponent_UpdateWholeDataModelFromStruct_Params params {};
		params.Arg = Arg;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE7D80
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.UpdateWholeDataModelFromObject
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
	 * Parameters:
	 * 		class UObject*                                     Model                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCoherentUIGTBaseComponent::UpdateWholeDataModelFromObject(class UObject* Model)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.UpdateWholeDataModelFromObject");
		
		UCoherentUIGTBaseComponent_UpdateWholeDataModelFromObject_Params params {};
		params.Model = Model;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE7AB0
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.TriggerJSEvent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UCoherentUIGTJSEvent*                        EventData                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCoherentUIGTBaseComponent::TriggerJSEvent(const class FString& Name, class UCoherentUIGTJSEvent* EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.TriggerJSEvent");
		
		UCoherentUIGTBaseComponent_TriggerJSEvent_Params params {};
		params.Name = Name;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE7A50
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.SynchronizeModels
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
	 */
	void UCoherentUIGTBaseComponent::SynchronizeModels()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.SynchronizeModels");
		
		UCoherentUIGTBaseComponent_SynchronizeModels_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE7930
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.ShowPaintRects
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               show                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCoherentUIGTBaseComponent::ShowPaintRects(bool show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.ShowPaintRects");
		
		UCoherentUIGTBaseComponent_ShowPaintRects_Params params {};
		params.show = show;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE7370
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.SetClickThroughAlphaThreshold
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Threshold                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCoherentUIGTBaseComponent::SetClickThroughAlphaThreshold(float Threshold)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.SetClickThroughAlphaThreshold");
		
		UCoherentUIGTBaseComponent_SetClickThroughAlphaThreshold_Params params {};
		params.Threshold = Threshold;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE72B0
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Resize
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Width                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Height                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCoherentUIGTBaseComponent::Resize(int32_t Width, int32_t Height)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Resize");
		
		UCoherentUIGTBaseComponent_Resize_Params params {};
		params.Width = Width;
		params.Height = Height;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE7270
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Reload
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UCoherentUIGTBaseComponent::Reload()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Reload");
		
		UCoherentUIGTBaseComponent_Reload_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE7230
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Redraw
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
	 */
	void UCoherentUIGTBaseComponent::Redraw()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Redraw");
		
		UCoherentUIGTBaseComponent_Redraw_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE6EA0
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Load
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      path                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UCoherentUIGTBaseComponent::Load(const class FString& path)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Load");
		
		UCoherentUIGTBaseComponent_Load_Params params {};
		params.path = path;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE6E40
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsTransparent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UCoherentUIGTBaseComponent::IsTransparent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsTransparent");
		
		UCoherentUIGTBaseComponent_IsTransparent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE6DE0
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsReadyToCreateView
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UCoherentUIGTBaseComponent::IsReadyToCreateView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsReadyToCreateView");
		
		UCoherentUIGTBaseComponent_IsReadyToCreateView_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE6D80
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsReadyForBindings
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UCoherentUIGTBaseComponent::IsReadyForBindings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsReadyForBindings");
		
		UCoherentUIGTBaseComponent_IsReadyForBindings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE6CF0
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsDocumentReady
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UCoherentUIGTBaseComponent::IsDocumentReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsDocumentReady");
		
		UCoherentUIGTBaseComponent_IsDocumentReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE6AE0
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.HasRequestedView
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UCoherentUIGTBaseComponent::HasRequestedView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.HasRequestedView");
		
		UCoherentUIGTBaseComponent_HasRequestedView_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE6810
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.GetClickThroughAlphaThreshold
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UCoherentUIGTBaseComponent::GetClickThroughAlphaThreshold()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.GetClickThroughAlphaThreshold");
		
		UCoherentUIGTBaseComponent_GetClickThroughAlphaThreshold_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE6740
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.EndDebugFrameSave
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UCoherentUIGTBaseComponent::EndDebugFrameSave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.EndDebugFrameSave");
		
		UCoherentUIGTBaseComponent_EndDebugFrameSave_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE66B0
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.EnableDelayedUpdate
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCoherentUIGTBaseComponent::EnableDelayedUpdate(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.EnableDelayedUpdate");
		
		UCoherentUIGTBaseComponent_EnableDelayedUpdate_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE6670
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.DebugSaveNextFrame
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UCoherentUIGTBaseComponent::DebugSaveNextFrame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.DebugSaveNextFrame");
		
		UCoherentUIGTBaseComponent_DebugSaveNextFrame_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE6590
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.CreateJSEvent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UCoherentUIGTJSEvent* UCoherentUIGTBaseComponent::CreateJSEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.CreateJSEvent");
		
		UCoherentUIGTBaseComponent_CreateJSEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE62E0
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.CreateDataModelFromStruct
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UStructProperty*                             Arg                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCoherentUIGTBaseComponent::CreateDataModelFromStruct(const class FString& Name, class UStructProperty* Arg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.CreateDataModelFromStruct");
		
		UCoherentUIGTBaseComponent_CreateDataModelFromStruct_Params params {};
		params.Name = Name;
		params.Arg = Arg;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE6120
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.CreateDataModelFromObject
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Model                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCoherentUIGTBaseComponent::CreateDataModelFromObject(const class FString& Name, class UObject* Model)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.CreateDataModelFromObject");
		
		UCoherentUIGTBaseComponent_CreateDataModelFromObject_Params params {};
		params.Name = Name;
		params.Model = Model;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE60E0
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.BeginDebugFrameSave
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UCoherentUIGTBaseComponent::BeginDebugFrameSave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.BeginDebugFrameSave");
		
		UCoherentUIGTBaseComponent_BeginDebugFrameSave_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoherentUIGTBaseComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoherentUIGTBaseComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTBaseComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoherentUIGTComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoherentUIGTComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE6FE0
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTLiveView.OnLiveViewSizeRequest
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UCoherentUIGTBaseComponent*                  BaseComponent                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            Width                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Height                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCoherentUIGTLiveView::OnLiveViewSizeRequest(class UCoherentUIGTBaseComponent* BaseComponent, const class FString& Name, int32_t* Width, int32_t* Height)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTLiveView.OnLiveViewSizeRequest");
		
		UCoherentUIGTLiveView_OnLiveViewSizeRequest_Params params {};
		params.BaseComponent = BaseComponent;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Width != nullptr)
			*Width = params.Width;
		if (Height != nullptr)
			*Height = params.Height;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoherentUIGTLiveView.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoherentUIGTLiveView::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTLiveView");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoherentUIGTRenderToTextureLiveView.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoherentUIGTRenderToTextureLiveView::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTRenderToTextureLiveView");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoherentUIGTAssetReferencer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoherentUIGTAssetReferencer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTAssetReferencer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACoherentUIGTSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACoherentUIGTSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE5F10
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddText
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UCoherentUIGTJSEvent::AddText(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddText");
		
		UCoherentUIGTJSEvent_AddText_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE5E50
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddStructArg
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UStructProperty*                             Arg                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCoherentUIGTJSEvent::AddStructArg(class UStructProperty* Arg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddStructArg");
		
		UCoherentUIGTJSEvent_AddStructArg_Params params {};
		params.Arg = Arg;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE5CD0
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddString
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Str                                                        (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UCoherentUIGTJSEvent::AddString(const class FString& Str)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddString");
		
		UCoherentUIGTJSEvent_AddString_Params params {};
		params.Str = Str;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE5B80
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddObject
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCoherentUIGTJSEvent::AddObject(class UObject* Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddObject");
		
		UCoherentUIGTJSEvent_AddObject_Params params {};
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE5A40
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddName
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        Name                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCoherentUIGTJSEvent::AddName(const class FName& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddName");
		
		UCoherentUIGTJSEvent_AddName_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE59C0
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddInt32
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            integer                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCoherentUIGTJSEvent::AddInt32(int32_t integer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddInt32");
		
		UCoherentUIGTJSEvent_AddInt32_Params params {};
		params.integer = integer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE5890
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddFloat
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              fl                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCoherentUIGTJSEvent::AddFloat(float fl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddFloat");
		
		UCoherentUIGTJSEvent_AddFloat_Params params {};
		params.fl = fl;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE5750
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddByte
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		unsigned char                                      byte                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCoherentUIGTJSEvent::AddByte(unsigned char byte)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddByte");
		
		UCoherentUIGTJSEvent_AddByte_Params params {};
		params.byte = byte;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE5610
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddBool
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               B                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCoherentUIGTJSEvent::AddBool(bool B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddBool");
		
		UCoherentUIGTJSEvent_AddBool_Params params {};
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE52D0
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddArray
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<int32_t>                                    Array                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UCoherentUIGTJSEvent::AddArray(TArray<int32_t> Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddArray");
		
		UCoherentUIGTJSEvent_AddArray_Params params {};
		params.Array = Array;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoherentUIGTJSEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoherentUIGTJSEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTJSEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE7170
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTJSPayload.ReadObject
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCoherentUIGTJSPayload::ReadObject(int32_t Index, class UObject* Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTJSPayload.ReadObject");
		
		UCoherentUIGTJSPayload_ReadObject_Params params {};
		params.Index = Index;
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE69F0
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetString
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FString UCoherentUIGTJSPayload::GetString(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetString");
		
		UCoherentUIGTJSPayload_GetString_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE6930
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetNumber
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UCoherentUIGTJSPayload::GetNumber(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetNumber");
		
		UCoherentUIGTJSPayload_GetNumber_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE68A0
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetInt32
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t UCoherentUIGTJSPayload::GetInt32(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetInt32");
		
		UCoherentUIGTJSPayload_GetInt32_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE6780
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetBool
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UCoherentUIGTJSPayload::GetBool(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetBool");
		
		UCoherentUIGTJSPayload_GetBool_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoherentUIGTJSPayload.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoherentUIGTJSPayload::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTJSPayload");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoherentUIGTEventHelpers.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoherentUIGTEventHelpers::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTEventHelpers");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoherentUIGTHUD.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoherentUIGTHUD::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTHUD");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE7B90
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.TriggerJSEvent
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UCoherentUIGTBaseComponent*                  Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      EventName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UCoherentUIGTJSEvent*                        JSEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCoherentUIGTBlueprintFunctionLibrary::STATIC_TriggerJSEvent(class UCoherentUIGTBaseComponent* Component, const class FString& EventName, class UCoherentUIGTJSEvent* JSEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.TriggerJSEvent");
		
		UCoherentUIGTBlueprintFunctionLibrary_TriggerJSEvent_Params params {};
		params.Component = Component;
		params.EventName = EventName;
		params.JSEvent = JSEvent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE7680
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.SetupLoadingScreen
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCoherentUIGTLoadingScreenSettings          Settings                                                   (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UCoherentUIGTBlueprintFunctionLibrary::STATIC_SetupLoadingScreen(class UObject* WorldContextObject, const struct FCoherentUIGTLoadingScreenSettings& Settings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.SetupLoadingScreen");
		
		UCoherentUIGTBlueprintFunctionLibrary_SetupLoadingScreen_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE65C0
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.CreateJSEvent
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UCoherentUIGTJSEvent* UCoherentUIGTBlueprintFunctionLibrary::STATIC_CreateJSEvent(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.CreateJSEvent");
		
		UCoherentUIGTBlueprintFunctionLibrary_CreateJSEvent_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE5D70
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddStructArg
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UCoherentUIGTJSEvent*                        JSEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStructProperty*                             Arg                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCoherentUIGTBlueprintFunctionLibrary::STATIC_AddStructArg(class UCoherentUIGTJSEvent* JSEvent, class UStructProperty* Arg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddStructArg");
		
		UCoherentUIGTBlueprintFunctionLibrary_AddStructArg_Params params {};
		params.JSEvent = JSEvent;
		params.Arg = Arg;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE5C00
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddString
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UCoherentUIGTJSEvent*                        JSEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Arg                                                        (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UCoherentUIGTBlueprintFunctionLibrary::STATIC_AddString(class UCoherentUIGTJSEvent* JSEvent, const class FString& Arg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddString");
		
		UCoherentUIGTBlueprintFunctionLibrary_AddString_Params params {};
		params.JSEvent = JSEvent;
		params.Arg = Arg;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE5AD0
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddObject
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UCoherentUIGTJSEvent*                        JSEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Arg                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCoherentUIGTBlueprintFunctionLibrary::STATIC_AddObject(class UCoherentUIGTJSEvent* JSEvent, class UObject* Arg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddObject");
		
		UCoherentUIGTBlueprintFunctionLibrary_AddObject_Params params {};
		params.JSEvent = JSEvent;
		params.Arg = Arg;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE5910
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddInt32
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UCoherentUIGTJSEvent*                        JSEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Arg                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCoherentUIGTBlueprintFunctionLibrary::STATIC_AddInt32(class UCoherentUIGTJSEvent* JSEvent, int32_t Arg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddInt32");
		
		UCoherentUIGTBlueprintFunctionLibrary_AddInt32_Params params {};
		params.JSEvent = JSEvent;
		params.Arg = Arg;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE57D0
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddFloat
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UCoherentUIGTJSEvent*                        JSEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Arg                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCoherentUIGTBlueprintFunctionLibrary::STATIC_AddFloat(class UCoherentUIGTJSEvent* JSEvent, float Arg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddFloat");
		
		UCoherentUIGTBlueprintFunctionLibrary_AddFloat_Params params {};
		params.JSEvent = JSEvent;
		params.Arg = Arg;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE56A0
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddByte
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UCoherentUIGTJSEvent*                        JSEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      Arg                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCoherentUIGTBlueprintFunctionLibrary::STATIC_AddByte(class UCoherentUIGTJSEvent* JSEvent, unsigned char Arg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddByte");
		
		UCoherentUIGTBlueprintFunctionLibrary_AddByte_Params params {};
		params.JSEvent = JSEvent;
		params.Arg = Arg;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE5550
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddBool
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UCoherentUIGTJSEvent*                        JSEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Arg                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCoherentUIGTBlueprintFunctionLibrary::STATIC_AddBool(class UCoherentUIGTJSEvent* JSEvent, bool Arg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddBool");
		
		UCoherentUIGTBlueprintFunctionLibrary_AddBool_Params params {};
		params.JSEvent = JSEvent;
		params.Arg = Arg;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE53C0
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddArrayOfStructs
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UCoherentUIGTJSEvent*                        JSEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<int32_t>                                    Arg                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UCoherentUIGTBlueprintFunctionLibrary::STATIC_AddArrayOfStructs(class UCoherentUIGTJSEvent* JSEvent, TArray<int32_t> Arg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddArrayOfStructs");
		
		UCoherentUIGTBlueprintFunctionLibrary_AddArrayOfStructs_Params params {};
		params.JSEvent = JSEvent;
		params.Arg = Arg;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE51A0
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddArray
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UCoherentUIGTJSEvent*                        JSEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<int32_t>                                    Arg                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		int32_t                                            ArrayType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCoherentUIGTBlueprintFunctionLibrary::STATIC_AddArray(class UCoherentUIGTJSEvent* JSEvent, TArray<int32_t> Arg, int32_t ArrayType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddArray");
		
		UCoherentUIGTBlueprintFunctionLibrary_AddArray_Params params {};
		params.JSEvent = JSEvent;
		params.Arg = Arg;
		params.ArrayType = ArrayType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoherentUIGTBlueprintFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoherentUIGTBlueprintFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE7760
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTGameHUD.SetupUIGTView
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      PageUrl                                                    (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               bIsTransparent                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ClickThroughAlphaThreshold                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              AnimationFrameDefer                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bDelayedUpdate                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACoherentUIGTGameHUD::SetupUIGTView(const class FString& PageUrl, bool bIsTransparent, float ClickThroughAlphaThreshold, float AnimationFrameDefer, bool bDelayedUpdate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTGameHUD.SetupUIGTView");
		
		ACoherentUIGTGameHUD_SetupUIGTView_Params params {};
		params.PageUrl = PageUrl;
		params.bIsTransparent = bIsTransparent;
		params.ClickThroughAlphaThreshold = ClickThroughAlphaThreshold;
		params.AnimationFrameDefer = AnimationFrameDefer;
		params.bDelayedUpdate = bDelayedUpdate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE6B40
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTGameHUD.HasSetupUIGTView
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, BlueprintCallable)
	 */
	bool ACoherentUIGTGameHUD::HasSetupUIGTView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTGameHUD.HasSetupUIGTView");
		
		ACoherentUIGTGameHUD_HasSetupUIGTView_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACoherentUIGTGameHUD.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACoherentUIGTGameHUD::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTGameHUD");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE7A90
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTInputActor.ToggleCoherentUIGTInputFocus
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ACoherentUIGTInputActor::ToggleCoherentUIGTInputFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTInputActor.ToggleCoherentUIGTInputFocus");
		
		ACoherentUIGTInputActor_ToggleCoherentUIGTInputFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE7600
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetLineTraceMode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EGTInputWidgetLineTraceMode                        Mode                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACoherentUIGTInputActor::SetLineTraceMode(EGTInputWidgetLineTraceMode Mode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetLineTraceMode");
		
		ACoherentUIGTInputActor_SetLineTraceMode_Params params {};
		params.Mode = Mode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE7580
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetInputPropagationBehaviour
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		ECoherentUIGTInputPropagationBehaviour             Propagation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACoherentUIGTInputActor::SetInputPropagationBehaviour(ECoherentUIGTInputPropagationBehaviour Propagation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetInputPropagationBehaviour");
		
		ACoherentUIGTInputActor_SetInputPropagationBehaviour_Params params {};
		params.Propagation = Propagation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE7500
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetCoherentUIGTViewFocus
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UCoherentUIGTBaseComponent*                  NewFocusedView                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACoherentUIGTInputActor::SetCoherentUIGTViewFocus(class UCoherentUIGTBaseComponent* NewFocusedView)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetCoherentUIGTViewFocus");
		
		ACoherentUIGTInputActor_SetCoherentUIGTViewFocus_Params params {};
		params.NewFocusedView = NewFocusedView;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE7470
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetCoherentUIGTInputFocus
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               FocusUI                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACoherentUIGTInputActor::SetCoherentUIGTInputFocus(bool FocusUI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetCoherentUIGTInputFocus");
		
		ACoherentUIGTInputActor_SetCoherentUIGTInputFocus_Params params {};
		params.FocusUI = FocusUI;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE6D50
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTInputActor.IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ACoherentUIGTInputActor::IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTInputActor.IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED");
		
		ACoherentUIGTInputActor_IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE6CC0
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTInputActor.IsCoherentUIGTFocused
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ACoherentUIGTInputActor::IsCoherentUIGTFocused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTInputActor.IsCoherentUIGTFocused");
		
		ACoherentUIGTInputActor_IsCoherentUIGTFocused_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE6B70
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTInputActor.Initialize
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		ECollisionChannel                                  CollisionChannel                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETextureAddress                                    AddressMode                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EGTInputWidgetRaycastQuality                       RaycastQuality                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            UVChannel                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACoherentUIGTInputActor::Initialize(ECollisionChannel CollisionChannel, ETextureAddress AddressMode, EGTInputWidgetRaycastQuality RaycastQuality, int32_t UVChannel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTInputActor.Initialize");
		
		ACoherentUIGTInputActor_Initialize_Params params {};
		params.CollisionChannel = CollisionChannel;
		params.AddressMode = AddressMode;
		params.RaycastQuality = RaycastQuality;
		params.UVChannel = UVChannel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE6870
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTInputActor.GetInputPropagationBehaviour
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	ECoherentUIGTInputPropagationBehaviour ACoherentUIGTInputActor::GetInputPropagationBehaviour()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTInputActor.GetInputPropagationBehaviour");
		
		ACoherentUIGTInputActor_GetInputPropagationBehaviour_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE6050
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTInputActor.AlwaysAcceptMouseInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bAccept                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACoherentUIGTInputActor::AlwaysAcceptMouseInput(bool bAccept)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTInputActor.AlwaysAcceptMouseInput");
		
		ACoherentUIGTInputActor_AlwaysAcceptMouseInput_Params params {};
		params.bAccept = bAccept;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE5FC0
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTInputActor.AllowJoystickInputWhileUIGTIsFocused_DEPRECATED
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bAllow                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACoherentUIGTInputActor::AllowJoystickInputWhileUIGTIsFocused_DEPRECATED(bool bAllow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTInputActor.AllowJoystickInputWhileUIGTIsFocused_DEPRECATED");
		
		ACoherentUIGTInputActor_AllowJoystickInputWhileUIGTIsFocused_DEPRECATED_Params params {};
		params.bAllow = bAllow;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACoherentUIGTInputActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACoherentUIGTInputActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTInputActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoherentUIGTSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoherentUIGTSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE7F70
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTWidget.UpdateWholeDataModelFromStruct
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
	 * Parameters:
	 * 		class UStructProperty*                             Arg                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCoherentUIGTWidget::UpdateWholeDataModelFromStruct(class UStructProperty* Arg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.UpdateWholeDataModelFromStruct");
		
		UCoherentUIGTWidget_UpdateWholeDataModelFromStruct_Params params {};
		params.Arg = Arg;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE7E00
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTWidget.UpdateWholeDataModelFromObject
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
	 * Parameters:
	 * 		class UObject*                                     Model                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCoherentUIGTWidget::UpdateWholeDataModelFromObject(class UObject* Model)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.UpdateWholeDataModelFromObject");
		
		UCoherentUIGTWidget_UpdateWholeDataModelFromObject_Params params {};
		params.Model = Model;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE7CA0
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTWidget.TriggerJSEvent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UCoherentUIGTJSEvent*                        EventData                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCoherentUIGTWidget::TriggerJSEvent(const class FString& Name, class UCoherentUIGTJSEvent* EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.TriggerJSEvent");
		
		UCoherentUIGTWidget_TriggerJSEvent_Params params {};
		params.Name = Name;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE7A70
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTWidget.SynchronizeModels
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
	 */
	void UCoherentUIGTWidget::SynchronizeModels()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.SynchronizeModels");
		
		UCoherentUIGTWidget_SynchronizeModels_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE79C0
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTWidget.ShowPaintRects
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               show                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCoherentUIGTWidget::ShowPaintRects(bool show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.ShowPaintRects");
		
		UCoherentUIGTWidget_ShowPaintRects_Params params {};
		params.show = show;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE73F0
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTWidget.SetClickThroughAlphaThreshold
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Threshold                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCoherentUIGTWidget::SetClickThroughAlphaThreshold(float Threshold)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.SetClickThroughAlphaThreshold");
		
		UCoherentUIGTWidget_SetClickThroughAlphaThreshold_Params params {};
		params.Threshold = Threshold;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE7290
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTWidget.Reload
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UCoherentUIGTWidget::Reload()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.Reload");
		
		UCoherentUIGTWidget_Reload_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE7250
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTWidget.Redraw
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
	 */
	void UCoherentUIGTWidget::Redraw()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.Redraw");
		
		UCoherentUIGTWidget_Redraw_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE6F40
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTWidget.Load
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      path                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UCoherentUIGTWidget::Load(const class FString& path)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.Load");
		
		UCoherentUIGTWidget_Load_Params params {};
		params.path = path;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE6E70
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTWidget.IsTransparent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UCoherentUIGTWidget::IsTransparent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.IsTransparent");
		
		UCoherentUIGTWidget_IsTransparent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE6E10
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTWidget.IsReadyToCreateView
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UCoherentUIGTWidget::IsReadyToCreateView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.IsReadyToCreateView");
		
		UCoherentUIGTWidget_IsReadyToCreateView_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE6DB0
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTWidget.IsReadyForBindings
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UCoherentUIGTWidget::IsReadyForBindings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.IsReadyForBindings");
		
		UCoherentUIGTWidget_IsReadyForBindings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE6D20
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTWidget.IsDocumentReady
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UCoherentUIGTWidget::IsDocumentReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.IsDocumentReady");
		
		UCoherentUIGTWidget_IsDocumentReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE6B10
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTWidget.HasRequestedView
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UCoherentUIGTWidget::HasRequestedView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.HasRequestedView");
		
		UCoherentUIGTWidget_HasRequestedView_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE69C0
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTWidget.GetRenderTexture
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UTextureRenderTarget2D* UCoherentUIGTWidget::GetRenderTexture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.GetRenderTexture");
		
		UCoherentUIGTWidget_GetRenderTexture_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE6840
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTWidget.GetClickThroughAlphaThreshold
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UCoherentUIGTWidget::GetClickThroughAlphaThreshold()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.GetClickThroughAlphaThreshold");
		
		UCoherentUIGTWidget_GetClickThroughAlphaThreshold_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE6760
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTWidget.EndDebugFrameSave
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UCoherentUIGTWidget::EndDebugFrameSave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.EndDebugFrameSave");
		
		UCoherentUIGTWidget_EndDebugFrameSave_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE6690
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTWidget.DebugSaveNextFrame
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UCoherentUIGTWidget::DebugSaveNextFrame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.DebugSaveNextFrame");
		
		UCoherentUIGTWidget_DebugSaveNextFrame_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE6640
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTWidget.CreateJSEvent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UCoherentUIGTJSEvent* UCoherentUIGTWidget::CreateJSEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.CreateJSEvent");
		
		UCoherentUIGTWidget_CreateJSEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE6430
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTWidget.CreateDataModelFromStruct
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UStructProperty*                             Arg                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCoherentUIGTWidget::CreateDataModelFromStruct(const class FString& Name, class UStructProperty* Arg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.CreateDataModelFromStruct");
		
		UCoherentUIGTWidget_CreateDataModelFromStruct_Params params {};
		params.Name = Name;
		params.Arg = Arg;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE6200
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTWidget.CreateDataModelFromObject
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Model                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCoherentUIGTWidget::CreateDataModelFromObject(const class FString& Name, class UObject* Model)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.CreateDataModelFromObject");
		
		UCoherentUIGTWidget_CreateDataModelFromObject_Params params {};
		params.Name = Name;
		params.Model = Model;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE6100
	 * 		Name   -> Function CoherentUIGTPlugin.CoherentUIGTWidget.BeginDebugFrameSave
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UCoherentUIGTWidget::BeginDebugFrameSave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.BeginDebugFrameSave");
		
		UCoherentUIGTWidget_BeginDebugFrameSave_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoherentUIGTWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoherentUIGTWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTWidget");
		return ptr;
	}

}


