/**
 * Name: Shooter_Game
 * Version: 03.22.2014
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
	 * 		Name   -> DelegateFunction SteamVR.SteamVRChaperoneComponent.SteamVRChaperoneEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USteamVRChaperoneComponent::SteamVRChaperoneEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction SteamVR.SteamVRChaperoneComponent.SteamVRChaperoneEvent__DelegateSignature");
		
		USteamVRChaperoneComponent_SteamVRChaperoneEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamVR.SteamVRChaperoneComponent.GetBounds
	 * 		Flags  -> ()
	 */
	TArray<struct FVector> USteamVRChaperoneComponent::GetBounds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamVR.SteamVRChaperoneComponent.GetBounds");
		
		USteamVRChaperoneComponent_GetBounds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USteamVRChaperoneComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamVRChaperoneComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamVR.SteamVRChaperoneComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamVR.SteamVRFunctionLibrary.GetValidTrackedDeviceIds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESteamVRTrackedDeviceType                          DeviceType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    OutTrackedDeviceIds                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void USteamVRFunctionLibrary::GetValidTrackedDeviceIds(ESteamVRTrackedDeviceType DeviceType, TArray<int32_t>* OutTrackedDeviceIds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamVR.SteamVRFunctionLibrary.GetValidTrackedDeviceIds");
		
		USteamVRFunctionLibrary_GetValidTrackedDeviceIds_Params params {};
		params.DeviceType = DeviceType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTrackedDeviceIds != nullptr)
			*OutTrackedDeviceIds = params.OutTrackedDeviceIds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamVR.SteamVRFunctionLibrary.GetTrackedDevicePositionAndOrientation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            DeviceID                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutPosition                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    OutOrientation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool USteamVRFunctionLibrary::GetTrackedDevicePositionAndOrientation(int32_t DeviceID, struct FVector* OutPosition, struct FRotator* OutOrientation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamVR.SteamVRFunctionLibrary.GetTrackedDevicePositionAndOrientation");
		
		USteamVRFunctionLibrary_GetTrackedDevicePositionAndOrientation_Params params {};
		params.DeviceID = DeviceID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPosition != nullptr)
			*OutPosition = params.OutPosition;
		if (OutOrientation != nullptr)
			*OutOrientation = params.OutOrientation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamVR.SteamVRFunctionLibrary.GetHandPositionAndOrientation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ControllerIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EControllerHand                                    hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutPosition                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    OutOrientation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool USteamVRFunctionLibrary::GetHandPositionAndOrientation(int32_t ControllerIndex, EControllerHand hand, struct FVector* OutPosition, struct FRotator* OutOrientation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamVR.SteamVRFunctionLibrary.GetHandPositionAndOrientation");
		
		USteamVRFunctionLibrary_GetHandPositionAndOrientation_Params params {};
		params.ControllerIndex = ControllerIndex;
		params.hand = hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPosition != nullptr)
			*OutPosition = params.OutPosition;
		if (OutOrientation != nullptr)
			*OutOrientation = params.OutOrientation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USteamVRFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamVRFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamVR.SteamVRFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamVR.SteamVRHQStereoLayerShape.SetCurved
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InCurved                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamVRHQStereoLayerShape::SetCurved(bool InCurved)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamVR.SteamVRHQStereoLayerShape.SetCurved");
		
		USteamVRHQStereoLayerShape_SetCurved_Params params {};
		params.InCurved = InCurved;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamVR.SteamVRHQStereoLayerShape.SetAutoCurveMinDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InDistance                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamVRHQStereoLayerShape::SetAutoCurveMinDistance(float InDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamVR.SteamVRHQStereoLayerShape.SetAutoCurveMinDistance");
		
		USteamVRHQStereoLayerShape_SetAutoCurveMinDistance_Params params {};
		params.InDistance = InDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamVR.SteamVRHQStereoLayerShape.SetAutoCurveMaxDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InDistance                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamVRHQStereoLayerShape::SetAutoCurveMaxDistance(float InDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamVR.SteamVRHQStereoLayerShape.SetAutoCurveMaxDistance");
		
		USteamVRHQStereoLayerShape_SetAutoCurveMaxDistance_Params params {};
		params.InDistance = InDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamVR.SteamVRHQStereoLayerShape.SetAntiAlias
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InAntiAlias                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamVRHQStereoLayerShape::SetAntiAlias(bool InAntiAlias)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamVR.SteamVRHQStereoLayerShape.SetAntiAlias");
		
		USteamVRHQStereoLayerShape_SetAntiAlias_Params params {};
		params.InAntiAlias = InAntiAlias;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USteamVRHQStereoLayerShape.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamVRHQStereoLayerShape::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamVR.SteamVRHQStereoLayerShape");
		return ptr;
	}

}


