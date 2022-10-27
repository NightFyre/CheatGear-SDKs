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
	 * 		Name   -> PredefinedFunction UMaterialExpressionTimeOfDay.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMaterialExpressionTimeOfDay::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxTimeOfDay.MaterialExpressionTimeOfDay");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B6D10
	 * 		Name   -> Function GbxTimeOfDay.TimeOfDayActor.GetDirectionalLightComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	class UDirectionalLightComponent* ATimeOfDayActor::GetDirectionalLightComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTimeOfDay.TimeOfDayActor.GetDirectionalLightComponent");
		
		ATimeOfDayActor_GetDirectionalLightComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008ED060
	 * 		Name   -> Function GbxTimeOfDay.TimeOfDayActor.EnumerateLayerNames
	 * 		Flags  -> (Final, Native, Public, HasOutParms, Const)
	 * Parameters:
	 * 		TArray<class FName>                                OutLayerNames                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void ATimeOfDayActor::EnumerateLayerNames(TArray<class FName>* OutLayerNames)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTimeOfDay.TimeOfDayActor.EnumerateLayerNames");
		
		ATimeOfDayActor_EnumerateLayerNames_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLayerNames != nullptr)
			*OutLayerNames = params.OutLayerNames;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008ECF30
	 * 		Name   -> Function GbxTimeOfDay.TimeOfDayActor.AddEventListener
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     InListener                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATimeOfDayActor::AddEventListener(class UObject* InListener)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTimeOfDay.TimeOfDayActor.AddEventListener");
		
		ATimeOfDayActor_AddEventListener_Params params {};
		params.InListener = InListener;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATimeOfDayActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATimeOfDayActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxTimeOfDay.TimeOfDayActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008ED6F0
	 * 		Name   -> Function GbxTimeOfDay.TimeOfDayBlueprintLibrary.TransitionUpOneLayer
	 * 		Flags  -> (Final, Native, Static, Private, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TransitionDuration                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTimeOfDayBlueprintLibrary::STATIC_TransitionUpOneLayer(class UObject* WorldContextObject, float TransitionDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTimeOfDay.TimeOfDayBlueprintLibrary.TransitionUpOneLayer");
		
		UTimeOfDayBlueprintLibrary_TransitionUpOneLayer_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.TransitionDuration = TransitionDuration;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008ED590
	 * 		Name   -> Function GbxTimeOfDay.TimeOfDayBlueprintLibrary.TransitionToLayer
	 * 		Flags  -> (Final, Native, Static, Private, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ToLayer                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TransitionDuration                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTimeOfDayBlueprintLibrary::STATIC_TransitionToLayer(class UObject* WorldContextObject, const class FString& ToLayer, float TransitionDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTimeOfDay.TimeOfDayBlueprintLibrary.TransitionToLayer");
		
		UTimeOfDayBlueprintLibrary_TransitionToLayer_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ToLayer = ToLayer;
		params.TransitionDuration = TransitionDuration;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008ED4D0
	 * 		Name   -> Function GbxTimeOfDay.TimeOfDayBlueprintLibrary.TransitionDownOneLayer
	 * 		Flags  -> (Final, Native, Static, Private, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TransitionDuration                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTimeOfDayBlueprintLibrary::STATIC_TransitionDownOneLayer(class UObject* WorldContextObject, float TransitionDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTimeOfDay.TimeOfDayBlueprintLibrary.TransitionDownOneLayer");
		
		UTimeOfDayBlueprintLibrary_TransitionDownOneLayer_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.TransitionDuration = TransitionDuration;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008ED460
	 * 		Name   -> Function GbxTimeOfDay.TimeOfDayBlueprintLibrary.StartTimeOfDay
	 * 		Flags  -> (Final, Native, Static, Private, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTimeOfDayBlueprintLibrary::STATIC_StartTimeOfDay(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTimeOfDay.TimeOfDayBlueprintLibrary.StartTimeOfDay");
		
		UTimeOfDayBlueprintLibrary_StartTimeOfDay_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008ED310
	 * 		Name   -> Function GbxTimeOfDay.TimeOfDayBlueprintLibrary.SetTimeOfDay
	 * 		Flags  -> (Final, Native, Static, Private, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NewTimeOfDay                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTimeOfDayBlueprintLibrary::STATIC_SetTimeOfDay(class UObject* WorldContextObject, float NewTimeOfDay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTimeOfDay.TimeOfDayBlueprintLibrary.SetTimeOfDay");
		
		UTimeOfDayBlueprintLibrary_SetTimeOfDay_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.NewTimeOfDay = NewTimeOfDay;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008ED220
	 * 		Name   -> Function GbxTimeOfDay.TimeOfDayBlueprintLibrary.PauseTimeOfDay
	 * 		Flags  -> (Final, Native, Static, Private, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTimeOfDayBlueprintLibrary::STATIC_PauseTimeOfDay(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTimeOfDay.TimeOfDayBlueprintLibrary.PauseTimeOfDay");
		
		UTimeOfDayBlueprintLibrary_PauseTimeOfDay_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008ED1A0
	 * 		Name   -> Function GbxTimeOfDay.TimeOfDayBlueprintLibrary.GetTimeOfDayState
	 * 		Flags  -> (Final, Native, Static, Private, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ETimeOfDayState UTimeOfDayBlueprintLibrary::STATIC_GetTimeOfDayState(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTimeOfDay.TimeOfDayBlueprintLibrary.GetTimeOfDayState");
		
		UTimeOfDayBlueprintLibrary_GetTimeOfDayState_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008ED110
	 * 		Name   -> Function GbxTimeOfDay.TimeOfDayBlueprintLibrary.GetTimeOfDay
	 * 		Flags  -> (Final, Native, Static, Private, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UTimeOfDayBlueprintLibrary::STATIC_GetTimeOfDay(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTimeOfDay.TimeOfDayBlueprintLibrary.GetTimeOfDay");
		
		UTimeOfDayBlueprintLibrary_GetTimeOfDay_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008ECFB0
	 * 		Name   -> Function GbxTimeOfDay.TimeOfDayBlueprintLibrary.AddTimeOfDayListener
	 * 		Flags  -> (Final, Native, Static, Private, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     InListener                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTimeOfDayBlueprintLibrary::STATIC_AddTimeOfDayListener(class UObject* WorldContextObject, class UObject* InListener)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTimeOfDay.TimeOfDayBlueprintLibrary.AddTimeOfDayListener");
		
		UTimeOfDayBlueprintLibrary_AddTimeOfDayListener_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.InListener = InListener;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTimeOfDayBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTimeOfDayBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxTimeOfDay.TimeOfDayBlueprintLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008ED3D0
	 * 		Name   -> Function GbxTimeOfDay.TimeOfDayComponent.SetUseCinematicTimeOfDay
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               InUseCinematicTimeOfDay                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTimeOfDayComponent::SetUseCinematicTimeOfDay(bool InUseCinematicTimeOfDay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTimeOfDay.TimeOfDayComponent.SetUseCinematicTimeOfDay");
		
		UTimeOfDayComponent_SetUseCinematicTimeOfDay_Params params {};
		params.InUseCinematicTimeOfDay = InUseCinematicTimeOfDay;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008ED290
	 * 		Name   -> Function GbxTimeOfDay.TimeOfDayComponent.SetCinematicTimeOfDay
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InCinematicTimeOfDay                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTimeOfDayComponent::SetCinematicTimeOfDay(float InCinematicTimeOfDay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTimeOfDay.TimeOfDayComponent.SetCinematicTimeOfDay");
		
		UTimeOfDayComponent_SetCinematicTimeOfDay_Params params {};
		params.InCinematicTimeOfDay = InCinematicTimeOfDay;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTimeOfDayComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTimeOfDayComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxTimeOfDay.TimeOfDayComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTimeOfDayCycle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTimeOfDayCycle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxTimeOfDay.TimeOfDayCycle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTimeOfDayCycleInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTimeOfDayCycleInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxTimeOfDay.TimeOfDayCycleInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTimeOfDayKeyBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTimeOfDayKeyBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxTimeOfDay.TimeOfDayKeyBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTimeOfDayEventKey.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTimeOfDayEventKey::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxTimeOfDay.TimeOfDayEventKey");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTimeOfDayLayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTimeOfDayLayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxTimeOfDay.TimeOfDayLayer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTimeOfDayPropertyKey.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTimeOfDayPropertyKey::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxTimeOfDay.TimeOfDayPropertyKey");
		return ptr;
	}

}


