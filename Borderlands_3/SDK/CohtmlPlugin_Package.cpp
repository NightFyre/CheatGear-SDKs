/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * 		Name   -> PredefinedFunction UCohtmlAssetReferencer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCohtmlAssetReferencer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CohtmlPlugin.CohtmlAssetReferencer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCohtmlAtlasContainedTextures.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCohtmlAtlasContainedTextures::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CohtmlPlugin.CohtmlAtlasContainedTextures");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCohtmlTextureAtlasDetails.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCohtmlTextureAtlasDetails::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CohtmlPlugin.CohtmlTextureAtlasDetails");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCohtmlAudioWrapper.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCohtmlAudioWrapper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CohtmlPlugin.CohtmlAudioWrapper");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0048F930
	 * 		Name   -> Function CohtmlPlugin.CohtmlBaseComponent.UpdateWholeDataModelFromStruct
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
	 * Parameters:
	 * 		class UStructProperty*                             Struct                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCohtmlBaseComponent::UpdateWholeDataModelFromStruct(class UStructProperty* Struct)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.UpdateWholeDataModelFromStruct");
		
		UCohtmlBaseComponent_UpdateWholeDataModelFromStruct_Params params {};
		params.Struct = Struct;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00496500
	 * 		Name   -> Function CohtmlPlugin.CohtmlBaseComponent.UpdateWholeDataModelFromObject
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
	 * Parameters:
	 * 		class UObject*                                     Model                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCohtmlBaseComponent::UpdateWholeDataModelFromObject(class UObject* Model)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.UpdateWholeDataModelFromObject");
		
		UCohtmlBaseComponent_UpdateWholeDataModelFromObject_Params params {};
		params.Model = Model;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00496230
	 * 		Name   -> Function CohtmlPlugin.CohtmlBaseComponent.TriggerJSEvent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCohtmlJSEvent*                              EventData                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCohtmlBaseComponent::TriggerJSEvent(const class FString& Name, class UCohtmlJSEvent* EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.TriggerJSEvent");
		
		UCohtmlBaseComponent_TriggerJSEvent_Params params {};
		params.Name = Name;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004961D0
	 * 		Name   -> Function CohtmlPlugin.CohtmlBaseComponent.SynchronizeModels
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
	 */
	void UCohtmlBaseComponent::SynchronizeModels()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.SynchronizeModels");
		
		UCohtmlBaseComponent_SynchronizeModels_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004960B0
	 * 		Name   -> Function CohtmlPlugin.CohtmlBaseComponent.ShowPaintRects
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               show                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCohtmlBaseComponent::ShowPaintRects(bool show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.ShowPaintRects");
		
		UCohtmlBaseComponent_ShowPaintRects_Params params {};
		params.show = show;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00495D10
	 * 		Name   -> Function CohtmlPlugin.CohtmlBaseComponent.SetSoundAttenuation
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSoundAttenuationSettings                   Settings                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCohtmlBaseComponent::SetSoundAttenuation(const struct FSoundAttenuationSettings& Settings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.SetSoundAttenuation");
		
		UCohtmlBaseComponent_SetSoundAttenuation_Params params {};
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004959C0
	 * 		Name   -> Function CohtmlPlugin.CohtmlBaseComponent.Resize
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Width                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Height                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCohtmlBaseComponent::Resize(int32_t Width, int32_t Height)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.Resize");
		
		UCohtmlBaseComponent_Resize_Params params {};
		params.Width = Width;
		params.Height = Height;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00495980
	 * 		Name   -> Function CohtmlPlugin.CohtmlBaseComponent.Reload
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UCohtmlBaseComponent::Reload()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.Reload");
		
		UCohtmlBaseComponent_Reload_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00495840
	 * 		Name   -> Function CohtmlPlugin.CohtmlBaseComponent.Load
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Path                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCohtmlBaseComponent::Load(const class FString& Path)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.Load");
		
		UCohtmlBaseComponent_Load_Params params {};
		params.Path = Path;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00495810
	 * 		Name   -> Function CohtmlPlugin.CohtmlBaseComponent.IsReadyToCreateView
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UCohtmlBaseComponent::IsReadyToCreateView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.IsReadyToCreateView");
		
		UCohtmlBaseComponent_IsReadyToCreateView_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004957B0
	 * 		Name   -> Function CohtmlPlugin.CohtmlBaseComponent.IsReadyForBindings
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UCohtmlBaseComponent::IsReadyForBindings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.IsReadyForBindings");
		
		UCohtmlBaseComponent_IsReadyForBindings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004955D0
	 * 		Name   -> Function CohtmlPlugin.CohtmlBaseComponent.HasRequestedView
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UCohtmlBaseComponent::HasRequestedView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.HasRequestedView");
		
		UCohtmlBaseComponent_HasRequestedView_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00495520
	 * 		Name   -> Function CohtmlPlugin.CohtmlBaseComponent.EndDebugFrameSave
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UCohtmlBaseComponent::EndDebugFrameSave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.EndDebugFrameSave");
		
		UCohtmlBaseComponent_EndDebugFrameSave_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00495490
	 * 		Name   -> Function CohtmlPlugin.CohtmlBaseComponent.EnableRendering
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCohtmlBaseComponent::EnableRendering(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.EnableRendering");
		
		UCohtmlBaseComponent_EnableRendering_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00495400
	 * 		Name   -> Function CohtmlPlugin.CohtmlBaseComponent.EnableDelayedUpdate
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCohtmlBaseComponent::EnableDelayedUpdate(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.EnableDelayedUpdate");
		
		UCohtmlBaseComponent_EnableDelayedUpdate_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004953E0
	 * 		Name   -> Function CohtmlPlugin.CohtmlBaseComponent.DebugSaveNextFrame
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UCohtmlBaseComponent::DebugSaveNextFrame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.DebugSaveNextFrame");
		
		UCohtmlBaseComponent_DebugSaveNextFrame_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00495330
	 * 		Name   -> Function CohtmlPlugin.CohtmlBaseComponent.CreateJSEvent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UCohtmlJSEvent* UCohtmlBaseComponent::CreateJSEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.CreateJSEvent");
		
		UCohtmlBaseComponent_CreateJSEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0048F660
	 * 		Name   -> Function CohtmlPlugin.CohtmlBaseComponent.CreateDataModelFromStruct
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UStructProperty*                             Arg                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCohtmlBaseComponent::CreateDataModelFromStruct(const class FString& Name, class UStructProperty* Arg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.CreateDataModelFromStruct");
		
		UCohtmlBaseComponent_CreateDataModelFromStruct_Params params {};
		params.Name = Name;
		params.Arg = Arg;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00495170
	 * 		Name   -> Function CohtmlPlugin.CohtmlBaseComponent.CreateDataModelFromObject
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     Model                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCohtmlBaseComponent::CreateDataModelFromObject(const class FString& Name, class UObject* Model)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.CreateDataModelFromObject");
		
		UCohtmlBaseComponent_CreateDataModelFromObject_Params params {};
		params.Name = Name;
		params.Model = Model;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00495150
	 * 		Name   -> Function CohtmlPlugin.CohtmlBaseComponent.BeginDebugFrameSave
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UCohtmlBaseComponent::BeginDebugFrameSave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.BeginDebugFrameSave");
		
		UCohtmlBaseComponent_BeginDebugFrameSave_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCohtmlBaseComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCohtmlBaseComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CohtmlPlugin.CohtmlBaseComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00496310
	 * 		Name   -> Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.TriggerJSEvent
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UCohtmlBaseComponent*                        Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      EventName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCohtmlJSEvent*                              JSEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCohtmlBlueprintFunctionLibrary::STATIC_TriggerJSEvent(class UCohtmlBaseComponent* Component, const class FString& EventName, class UCohtmlJSEvent* JSEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.TriggerJSEvent");
		
		UCohtmlBlueprintFunctionLibrary_TriggerJSEvent_Params params {};
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
	 * 		RVA    -> 0x00495360
	 * 		Name   -> Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.CreateJSEvent
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCohtmlJSEvent* UCohtmlBlueprintFunctionLibrary::STATIC_CreateJSEvent(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.CreateJSEvent");
		
		UCohtmlBlueprintFunctionLibrary_CreateJSEvent_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00494F10
	 * 		Name   -> Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddStructArg
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UCohtmlJSEvent*                              JSEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UStructProperty*                             Arg                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCohtmlBlueprintFunctionLibrary::STATIC_AddStructArg(class UCohtmlJSEvent* JSEvent, class UStructProperty* Arg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddStructArg");
		
		UCohtmlBlueprintFunctionLibrary_AddStructArg_Params params {};
		params.JSEvent = JSEvent;
		params.Arg = Arg;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00494DA0
	 * 		Name   -> Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddString
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UCohtmlJSEvent*                              JSEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Arg                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCohtmlBlueprintFunctionLibrary::STATIC_AddString(class UCohtmlJSEvent* JSEvent, const class FString& Arg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddString");
		
		UCohtmlBlueprintFunctionLibrary_AddString_Params params {};
		params.JSEvent = JSEvent;
		params.Arg = Arg;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00494C70
	 * 		Name   -> Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddObject
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UCohtmlJSEvent*                              JSEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     Arg                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCohtmlBlueprintFunctionLibrary::STATIC_AddObject(class UCohtmlJSEvent* JSEvent, class UObject* Arg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddObject");
		
		UCohtmlBlueprintFunctionLibrary_AddObject_Params params {};
		params.JSEvent = JSEvent;
		params.Arg = Arg;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00494AB0
	 * 		Name   -> Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddInt32
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UCohtmlJSEvent*                              JSEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Arg                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCohtmlBlueprintFunctionLibrary::STATIC_AddInt32(class UCohtmlJSEvent* JSEvent, int32_t Arg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddInt32");
		
		UCohtmlBlueprintFunctionLibrary_AddInt32_Params params {};
		params.JSEvent = JSEvent;
		params.Arg = Arg;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00494970
	 * 		Name   -> Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddFloat
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UCohtmlJSEvent*                              JSEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Arg                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCohtmlBlueprintFunctionLibrary::STATIC_AddFloat(class UCohtmlJSEvent* JSEvent, float Arg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddFloat");
		
		UCohtmlBlueprintFunctionLibrary_AddFloat_Params params {};
		params.JSEvent = JSEvent;
		params.Arg = Arg;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00494840
	 * 		Name   -> Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddByte
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UCohtmlJSEvent*                              JSEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Arg                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCohtmlBlueprintFunctionLibrary::STATIC_AddByte(class UCohtmlJSEvent* JSEvent, unsigned char Arg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddByte");
		
		UCohtmlBlueprintFunctionLibrary_AddByte_Params params {};
		params.JSEvent = JSEvent;
		params.Arg = Arg;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004946F0
	 * 		Name   -> Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddBool
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UCohtmlJSEvent*                              JSEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Arg                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCohtmlBlueprintFunctionLibrary::STATIC_AddBool(class UCohtmlJSEvent* JSEvent, bool Arg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddBool");
		
		UCohtmlBlueprintFunctionLibrary_AddBool_Params params {};
		params.JSEvent = JSEvent;
		params.Arg = Arg;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00494570
	 * 		Name   -> Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddArrayOfStructs
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UCohtmlJSEvent*                              JSEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    Arg                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCohtmlBlueprintFunctionLibrary::STATIC_AddArrayOfStructs(class UCohtmlJSEvent* JSEvent, TArray<int32_t> Arg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddArrayOfStructs");
		
		UCohtmlBlueprintFunctionLibrary_AddArrayOfStructs_Params params {};
		params.JSEvent = JSEvent;
		params.Arg = Arg;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00494450
	 * 		Name   -> Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddArray
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UCohtmlJSEvent*                              JSEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    Arg                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ArrayType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCohtmlBlueprintFunctionLibrary::STATIC_AddArray(class UCohtmlJSEvent* JSEvent, TArray<int32_t> Arg, int32_t ArrayType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddArray");
		
		UCohtmlBlueprintFunctionLibrary_AddArray_Params params {};
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
	 * 		Name   -> PredefinedFunction UCohtmlBlueprintFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCohtmlBlueprintFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CohtmlPlugin.CohtmlBlueprintFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCohtmlComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCohtmlComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CohtmlPlugin.CohtmlComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCohtmlEventHelpers.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCohtmlEventHelpers::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CohtmlPlugin.CohtmlEventHelpers");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00495F90
	 * 		Name   -> Function CohtmlPlugin.CohtmlGameHUD.SetupView
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      PageUrl                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bEnableComplexCSSSupport                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDelayedUpdate                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACohtmlGameHUD::SetupView(const class FString& PageUrl, bool bEnableComplexCSSSupport, bool bDelayedUpdate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlGameHUD.SetupView");
		
		ACohtmlGameHUD_SetupView_Params params {};
		params.PageUrl = PageUrl;
		params.bEnableComplexCSSSupport = bEnableComplexCSSSupport;
		params.bDelayedUpdate = bDelayedUpdate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACohtmlGameHUD.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACohtmlGameHUD::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CohtmlPlugin.CohtmlGameHUD");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCohtmlHUD.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCohtmlHUD::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CohtmlPlugin.CohtmlHUD");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00496210
	 * 		Name   -> Function CohtmlPlugin.CohtmlInputActor.ToggleCohtmlInputFocus
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ACohtmlInputActor::ToggleCohtmlInputFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlInputActor.ToggleCohtmlInputFocus");
		
		ACohtmlInputActor_ToggleCohtmlInputFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00495C90
	 * 		Name   -> Function CohtmlPlugin.CohtmlInputActor.SetLineTraceMode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		ECohtmlInputWidgetLineTraceMode                    Mode                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACohtmlInputActor::SetLineTraceMode(ECohtmlInputWidgetLineTraceMode Mode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlInputActor.SetLineTraceMode");
		
		ACohtmlInputActor_SetLineTraceMode_Params params {};
		params.Mode = Mode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00495B90
	 * 		Name   -> Function CohtmlPlugin.CohtmlInputActor.SetInputPropagationBehaviour
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		ECohtmlInputPropagationBehaviour                   Propagation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACohtmlInputActor::SetInputPropagationBehaviour(ECohtmlInputPropagationBehaviour Propagation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlInputActor.SetInputPropagationBehaviour");
		
		ACohtmlInputActor_SetInputPropagationBehaviour_Params params {};
		params.Propagation = Propagation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00495B10
	 * 		Name   -> Function CohtmlPlugin.CohtmlInputActor.SetCohtmlViewFocus
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UCohtmlBaseComponent*                        NewFocusedView                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACohtmlInputActor::SetCohtmlViewFocus(class UCohtmlBaseComponent* NewFocusedView)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlInputActor.SetCohtmlViewFocus");
		
		ACohtmlInputActor_SetCohtmlViewFocus_Params params {};
		params.NewFocusedView = NewFocusedView;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00495A80
	 * 		Name   -> Function CohtmlPlugin.CohtmlInputActor.SetCohtmlInputFocus
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               FocusUI                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACohtmlInputActor::SetCohtmlInputFocus(bool FocusUI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlInputActor.SetCohtmlInputFocus");
		
		ACohtmlInputActor_SetCohtmlInputFocus_Params params {};
		params.FocusUI = FocusUI;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00495780
	 * 		Name   -> Function CohtmlPlugin.CohtmlInputActor.IsCohtmlFocused
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ACohtmlInputActor::IsCohtmlFocused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlInputActor.IsCohtmlFocused");
		
		ACohtmlInputActor_IsCohtmlFocused_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00495630
	 * 		Name   -> Function CohtmlPlugin.CohtmlInputActor.Initialize
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		ECollisionChannel                                  CollisionChannel                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETextureAddress                                    AddressMode                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECohtmlInputWidgetRaycastQuality                   RaycastQuality                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            UVChannel                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACohtmlInputActor::Initialize(ECollisionChannel CollisionChannel, ETextureAddress AddressMode, ECohtmlInputWidgetRaycastQuality RaycastQuality, int32_t UVChannel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlInputActor.Initialize");
		
		ACohtmlInputActor_Initialize_Params params {};
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
	 * 		RVA    -> 0x00495540
	 * 		Name   -> Function CohtmlPlugin.CohtmlInputActor.GetInputPropagationBehaviour
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	ECohtmlInputPropagationBehaviour ACohtmlInputActor::GetInputPropagationBehaviour()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlInputActor.GetInputPropagationBehaviour");
		
		ACohtmlInputActor_GetInputPropagationBehaviour_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004950C0
	 * 		Name   -> Function CohtmlPlugin.CohtmlInputActor.AlwaysAcceptMouseInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bAccept                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACohtmlInputActor::AlwaysAcceptMouseInput(bool bAccept)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlInputActor.AlwaysAcceptMouseInput");
		
		ACohtmlInputActor_AlwaysAcceptMouseInput_Params params {};
		params.bAccept = bAccept;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACohtmlInputActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACohtmlInputActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CohtmlPlugin.CohtmlInputActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00494FF0
	 * 		Name   -> Function CohtmlPlugin.CohtmlJSEvent.AddText
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCohtmlJSEvent::AddText(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlJSEvent.AddText");
		
		UCohtmlJSEvent_AddText_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0048F5B0
	 * 		Name   -> Function CohtmlPlugin.CohtmlJSEvent.AddStructArg
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UStructProperty*                             Arg                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCohtmlJSEvent::AddStructArg(class UStructProperty* Arg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlJSEvent.AddStructArg");
		
		UCohtmlJSEvent_AddStructArg_Params params {};
		params.Arg = Arg;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00494E70
	 * 		Name   -> Function CohtmlPlugin.CohtmlJSEvent.AddString
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      str                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCohtmlJSEvent::AddString(const class FString& str)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlJSEvent.AddString");
		
		UCohtmlJSEvent_AddString_Params params {};
		params.str = str;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00494D20
	 * 		Name   -> Function CohtmlPlugin.CohtmlJSEvent.AddObject
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCohtmlJSEvent::AddObject(class UObject* Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlJSEvent.AddObject");
		
		UCohtmlJSEvent_AddObject_Params params {};
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00494BE0
	 * 		Name   -> Function CohtmlPlugin.CohtmlJSEvent.AddName
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        Name                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCohtmlJSEvent::AddName(const class FName& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlJSEvent.AddName");
		
		UCohtmlJSEvent_AddName_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00494B60
	 * 		Name   -> Function CohtmlPlugin.CohtmlJSEvent.AddInt32
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            integer                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCohtmlJSEvent::AddInt32(int32_t integer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlJSEvent.AddInt32");
		
		UCohtmlJSEvent_AddInt32_Params params {};
		params.integer = integer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00494A30
	 * 		Name   -> Function CohtmlPlugin.CohtmlJSEvent.AddFloat
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              fl                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCohtmlJSEvent::AddFloat(float fl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlJSEvent.AddFloat");
		
		UCohtmlJSEvent_AddFloat_Params params {};
		params.fl = fl;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004948F0
	 * 		Name   -> Function CohtmlPlugin.CohtmlJSEvent.AddByte
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		unsigned char                                      byte                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCohtmlJSEvent::AddByte(unsigned char byte)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlJSEvent.AddByte");
		
		UCohtmlJSEvent_AddByte_Params params {};
		params.byte = byte;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004947B0
	 * 		Name   -> Function CohtmlPlugin.CohtmlJSEvent.AddBool
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               B                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCohtmlJSEvent::AddBool(bool B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlJSEvent.AddBool");
		
		UCohtmlJSEvent_AddBool_Params params {};
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0048F3D0
	 * 		Name   -> Function CohtmlPlugin.CohtmlJSEvent.AddArray
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<int32_t>                                    Array                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCohtmlJSEvent::AddArray(TArray<int32_t> Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlJSEvent.AddArray");
		
		UCohtmlJSEvent_AddArray_Params params {};
		params.Array = Array;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCohtmlJSEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCohtmlJSEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CohtmlPlugin.CohtmlJSEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCohtmlSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCohtmlSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CohtmlPlugin.CohtmlSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACohtmlSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACohtmlSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CohtmlPlugin.CohtmlSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0048FA50
	 * 		Name   -> Function CohtmlPlugin.CohtmlWidget.UpdateWholeDataModelFromStruct
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
	 * Parameters:
	 * 		class UStructProperty*                             Struct                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCohtmlWidget::UpdateWholeDataModelFromStruct(class UStructProperty* Struct)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlWidget.UpdateWholeDataModelFromStruct");
		
		UCohtmlWidget_UpdateWholeDataModelFromStruct_Params params {};
		params.Struct = Struct;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00496580
	 * 		Name   -> Function CohtmlPlugin.CohtmlWidget.UpdateWholeDataModelFromObject
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
	 * Parameters:
	 * 		class UObject*                                     Model                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCohtmlWidget::UpdateWholeDataModelFromObject(class UObject* Model)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlWidget.UpdateWholeDataModelFromObject");
		
		UCohtmlWidget_UpdateWholeDataModelFromObject_Params params {};
		params.Model = Model;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00496420
	 * 		Name   -> Function CohtmlPlugin.CohtmlWidget.TriggerJSEvent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCohtmlJSEvent*                              EventData                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCohtmlWidget::TriggerJSEvent(const class FString& Name, class UCohtmlJSEvent* EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlWidget.TriggerJSEvent");
		
		UCohtmlWidget_TriggerJSEvent_Params params {};
		params.Name = Name;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004961F0
	 * 		Name   -> Function CohtmlPlugin.CohtmlWidget.SynchronizeModels
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
	 */
	void UCohtmlWidget::SynchronizeModels()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlWidget.SynchronizeModels");
		
		UCohtmlWidget_SynchronizeModels_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00496140
	 * 		Name   -> Function CohtmlPlugin.CohtmlWidget.ShowPaintRects
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               show                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCohtmlWidget::ShowPaintRects(bool show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlWidget.ShowPaintRects");
		
		UCohtmlWidget_ShowPaintRects_Params params {};
		params.show = show;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00495E50
	 * 		Name   -> Function CohtmlPlugin.CohtmlWidget.SetSoundAttenuation
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSoundAttenuationSettings                   Settings                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCohtmlWidget::SetSoundAttenuation(const struct FSoundAttenuationSettings& Settings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlWidget.SetSoundAttenuation");
		
		UCohtmlWidget_SetSoundAttenuation_Params params {};
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00495C10
	 * 		Name   -> Function CohtmlPlugin.CohtmlWidget.SetInputPropagationBehaviour
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		ECohtmlInputPropagationBehaviour                   Propagation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCohtmlWidget::SetInputPropagationBehaviour(ECohtmlInputPropagationBehaviour Propagation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlWidget.SetInputPropagationBehaviour");
		
		UCohtmlWidget_SetInputPropagationBehaviour_Params params {};
		params.Propagation = Propagation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004959A0
	 * 		Name   -> Function CohtmlPlugin.CohtmlWidget.Reload
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UCohtmlWidget::Reload()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlWidget.Reload");
		
		UCohtmlWidget_Reload_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004958E0
	 * 		Name   -> Function CohtmlPlugin.CohtmlWidget.Load
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Path                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCohtmlWidget::Load(const class FString& Path)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlWidget.Load");
		
		UCohtmlWidget_Load_Params params {};
		params.Path = Path;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00495810
	 * 		Name   -> Function CohtmlPlugin.CohtmlWidget.IsReadyToCreateView
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UCohtmlWidget::IsReadyToCreateView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlWidget.IsReadyToCreateView");
		
		UCohtmlWidget_IsReadyToCreateView_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004957E0
	 * 		Name   -> Function CohtmlPlugin.CohtmlWidget.IsReadyForBindings
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UCohtmlWidget::IsReadyForBindings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlWidget.IsReadyForBindings");
		
		UCohtmlWidget_IsReadyForBindings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00495600
	 * 		Name   -> Function CohtmlPlugin.CohtmlWidget.HasRequestedView
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UCohtmlWidget::HasRequestedView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlWidget.HasRequestedView");
		
		UCohtmlWidget_HasRequestedView_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004955A0
	 * 		Name   -> Function CohtmlPlugin.CohtmlWidget.GetRenderTexture
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UTextureRenderTarget2D* UCohtmlWidget::GetRenderTexture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlWidget.GetRenderTexture");
		
		UCohtmlWidget_GetRenderTexture_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00495570
	 * 		Name   -> Function CohtmlPlugin.CohtmlWidget.GetInputPropagationBehaviour
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	ECohtmlInputPropagationBehaviour UCohtmlWidget::GetInputPropagationBehaviour()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlWidget.GetInputPropagationBehaviour");
		
		UCohtmlWidget_GetInputPropagationBehaviour_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00495330
	 * 		Name   -> Function CohtmlPlugin.CohtmlWidget.CreateJSEvent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UCohtmlJSEvent* UCohtmlWidget::CreateJSEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlWidget.CreateJSEvent");
		
		UCohtmlWidget_CreateJSEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0048F7B0
	 * 		Name   -> Function CohtmlPlugin.CohtmlWidget.CreateDataModelFromStruct
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UStructProperty*                             Struct                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCohtmlWidget::CreateDataModelFromStruct(const class FString& Name, class UStructProperty* Struct)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlWidget.CreateDataModelFromStruct");
		
		UCohtmlWidget_CreateDataModelFromStruct_Params params {};
		params.Name = Name;
		params.Struct = Struct;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00495250
	 * 		Name   -> Function CohtmlPlugin.CohtmlWidget.CreateDataModelFromObject
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     Model                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCohtmlWidget::CreateDataModelFromObject(const class FString& Name, class UObject* Model)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlWidget.CreateDataModelFromObject");
		
		UCohtmlWidget_CreateDataModelFromObject_Params params {};
		params.Name = Name;
		params.Model = Model;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCohtmlWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCohtmlWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CohtmlPlugin.CohtmlWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHummingbirdBaseComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHummingbirdBaseComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CohtmlPlugin.HummingbirdBaseComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHummingbirdComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHummingbirdComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CohtmlPlugin.HummingbirdComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHummingbirdGameHUD.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHummingbirdGameHUD::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CohtmlPlugin.HummingbirdGameHUD");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHummingbirdHUD.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHummingbirdHUD::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CohtmlPlugin.HummingbirdHUD");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHummingbirdInputActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHummingbirdInputActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CohtmlPlugin.HummingbirdInputActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHummingbirdSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHummingbirdSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CohtmlPlugin.HummingbirdSystem");
		return ptr;
	}

}


