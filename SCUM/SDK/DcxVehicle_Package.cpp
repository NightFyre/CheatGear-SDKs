/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * 		Name   -> Function DcxVehicle.DcxVehicle.GetVehicleWheels
	 * 		Flags  -> ()
	 */
	class UDcxVehicleWheelsComponent* ADcxVehicle::GetVehicleWheels()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicle.GetVehicleWheels");
		
		ADcxVehicle_GetVehicleWheels_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicle.GetMesh
	 * 		Flags  -> ()
	 */
	class USkeletalMeshComponent* ADcxVehicle::GetMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicle.GetMesh");
		
		ADcxVehicle_GetMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicle.DcxVehicleSetBasisVectors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Up                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Forward                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADcxVehicle::DcxVehicleSetBasisVectors(const struct FVector& Up, const struct FVector& Forward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicle.DcxVehicleSetBasisVectors");
		
		ADcxVehicle_DcxVehicleSetBasisVectors_Params params {};
		params.Up = Up;
		params.Forward = Forward;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADcxVehicle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADcxVehicle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DcxVehicle.DcxVehicle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicle4W.GetVehicleDrive4W
	 * 		Flags  -> ()
	 */
	class UDcxVehicleDriveComponent4W* ADcxVehicle4W::GetVehicleDrive4W()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicle4W.GetVehicleDrive4W");
		
		ADcxVehicle4W_GetVehicleDrive4W_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADcxVehicle4W.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADcxVehicle4W::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DcxVehicle.DcxVehicle4W");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDcxVehicleAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDcxVehicleAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DcxVehicle.DcxVehicleAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleWheelsComponent.SetWheelOffset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            WheelIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Offset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDcxVehicleWheelsComponent::SetWheelOffset(int32_t WheelIndex, const struct FVector& Offset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.SetWheelOffset");
		
		UDcxVehicleWheelsComponent_SetWheelOffset_Params params {};
		params.WheelIndex = WheelIndex;
		params.Offset = Offset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleWheelsComponent.SetWheelData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            WheelIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDcxVehicleWheelData                        NewWheelData                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDcxVehicleWheelsComponent::SetWheelData(int32_t WheelIndex, const struct FDcxVehicleWheelData& NewWheelData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.SetWheelData");
		
		UDcxVehicleWheelsComponent_SetWheelData_Params params {};
		params.WheelIndex = WheelIndex;
		params.NewWheelData = NewWheelData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleWheelsComponent.SetTire
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            WheelId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDcxVehicleTire*                             NewTire                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDcxVehicleWheelsComponent::SetTire(int32_t WheelId, class UDcxVehicleTire* NewTire)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.SetTire");
		
		UDcxVehicleWheelsComponent_SetTire_Params params {};
		params.WheelId = WheelId;
		params.NewTire = NewTire;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleWheelsComponent.SetSuspensionData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            WheelIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDcxVehicleSuspensionData                   NewSuspensionData                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDcxVehicleWheelsComponent::SetSuspensionData(int32_t WheelIndex, const struct FDcxVehicleSuspensionData& NewSuspensionData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.SetSuspensionData");
		
		UDcxVehicleWheelsComponent_SetSuspensionData_Params params {};
		params.WheelIndex = WheelIndex;
		params.NewSuspensionData = NewSuspensionData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleWheelsComponent.SetGroupsToIgnore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FNavAvoidanceMask                           Mask                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDcxVehicleWheelsComponent::SetGroupsToIgnore(const struct FNavAvoidanceMask& Mask)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.SetGroupsToIgnore");
		
		UDcxVehicleWheelsComponent_SetGroupsToIgnore_Params params {};
		params.Mask = Mask;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleWheelsComponent.SetGroupsToAvoid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FNavAvoidanceMask                           Mask                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDcxVehicleWheelsComponent::SetGroupsToAvoid(const struct FNavAvoidanceMask& Mask)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.SetGroupsToAvoid");
		
		UDcxVehicleWheelsComponent_SetGroupsToAvoid_Params params {};
		params.Mask = Mask;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleWheelsComponent.SetChassisMass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Mass                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDcxVehicleWheelsComponent::SetChassisMass(float Mass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.SetChassisMass");
		
		UDcxVehicleWheelsComponent_SetChassisMass_Params params {};
		params.Mass = Mass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleWheelsComponent.SetAvoidanceGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FNavAvoidanceMask                           Mask                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDcxVehicleWheelsComponent::SetAvoidanceGroup(const struct FNavAvoidanceMask& Mask)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.SetAvoidanceGroup");
		
		UDcxVehicleWheelsComponent_SetAvoidanceGroup_Params params {};
		params.Mask = Mask;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleWheelsComponent.ServerUpdateState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDcxAnalogControlArray                      AnalogControls                                             (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FDcxGear                                    CurrentGear                                                (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDcxGear                                    TargetGear                                                 (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDcxVehicleWheelsComponent::ServerUpdateState(const struct FDcxAnalogControlArray& AnalogControls, const struct FDcxGear& CurrentGear, const struct FDcxGear& TargetGear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.ServerUpdateState");
		
		UDcxVehicleWheelsComponent_ServerUpdateState_Params params {};
		params.AnalogControls = AnalogControls;
		params.CurrentGear = CurrentGear;
		params.TargetGear = TargetGear;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleWheelsComponent.IsWheelDisabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            WheelIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDcxVehicleWheelsComponent::IsWheelDisabled(int32_t WheelIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.IsWheelDisabled");
		
		UDcxVehicleWheelsComponent_IsWheelDisabled_Params params {};
		params.WheelIndex = WheelIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            WheelIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDcxVehicleWheelState                       WheelState                                                 (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UDcxVehicleWheelsComponent::GetWheelState(int32_t WheelIndex, struct FDcxVehicleWheelState* WheelState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelState");
		
		UDcxVehicleWheelsComponent_GetWheelState_Params params {};
		params.WheelIndex = WheelIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WheelState != nullptr)
			*WheelState = params.WheelState;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelRotationSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            WheelIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UDcxVehicleWheelsComponent::GetWheelRotationSpeed(int32_t WheelIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelRotationSpeed");
		
		UDcxVehicleWheelsComponent_GetWheelRotationSpeed_Params params {};
		params.WheelIndex = WheelIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelRotationAngle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            WheelIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UDcxVehicleWheelsComponent::GetWheelRotationAngle(int32_t WheelIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelRotationAngle");
		
		UDcxVehicleWheelsComponent_GetWheelRotationAngle_Params params {};
		params.WheelIndex = WheelIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelOffset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            WheelIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UDcxVehicleWheelsComponent::GetWheelOffset(int32_t WheelIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelOffset");
		
		UDcxVehicleWheelsComponent_GetWheelOffset_Params params {};
		params.WheelIndex = WheelIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            WheelIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FDcxVehicleWheelData UDcxVehicleWheelsComponent::GetWheelData(int32_t WheelIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelData");
		
		UDcxVehicleWheelsComponent_GetWheelData_Params params {};
		params.WheelIndex = WheelIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleWheelsComponent.GetTire
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            WheelIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDcxVehicleTire* UDcxVehicleWheelsComponent::GetTire(int32_t WheelIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.GetTire");
		
		UDcxVehicleWheelsComponent_GetTire_Params params {};
		params.WheelIndex = WheelIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleWheelsComponent.GetSuspensionData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            WheelIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FDcxVehicleSuspensionData UDcxVehicleWheelsComponent::GetSuspensionData(int32_t WheelIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.GetSuspensionData");
		
		UDcxVehicleWheelsComponent_GetSuspensionData_Params params {};
		params.WheelIndex = WheelIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleWheelsComponent.GetRawInput
	 * 		Flags  -> ()
	 */
	class UDcxVehicleWheelsRawInput* UDcxVehicleWheelsComponent::GetRawInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.GetRawInput");
		
		UDcxVehicleWheelsComponent_GetRawInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleWheelsComponent.GetNumWheels
	 * 		Flags  -> ()
	 */
	int32_t UDcxVehicleWheelsComponent::GetNumWheels()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.GetNumWheels");
		
		UDcxVehicleWheelsComponent_GetNumWheels_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleWheelsComponent.GetForwardSpeed
	 * 		Flags  -> ()
	 */
	float UDcxVehicleWheelsComponent::GetForwardSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.GetForwardSpeed");
		
		UDcxVehicleWheelsComponent_GetForwardSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleWheelsComponent.GetChassisMass
	 * 		Flags  -> ()
	 */
	float UDcxVehicleWheelsComponent::GetChassisMass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.GetChassisMass");
		
		UDcxVehicleWheelsComponent_GetChassisMass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleWheelsComponent.GetBoneName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            WheelIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName UDcxVehicleWheelsComponent::GetBoneName(int32_t WheelIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.GetBoneName");
		
		UDcxVehicleWheelsComponent_GetBoneName_Params params {};
		params.WheelIndex = WheelIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleWheelsComponent.GetAnalogControl
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      Control                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UDcxVehicleWheelsComponent::GetAnalogControl(unsigned char Control)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.GetAnalogControl");
		
		UDcxVehicleWheelsComponent_GetAnalogControl_Params params {};
		params.Control = Control;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleWheelsComponent.EnableWheel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            WheelIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDcxVehicleWheelsComponent::EnableWheel(int32_t WheelIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.EnableWheel");
		
		UDcxVehicleWheelsComponent_EnableWheel_Params params {};
		params.WheelIndex = WheelIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleWheelsComponent.EnableAvoidance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDcxVehicleWheelsComponent::EnableAvoidance(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.EnableAvoidance");
		
		UDcxVehicleWheelsComponent_EnableAvoidance_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleWheelsComponent.DisableWheel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            WheelIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDcxVehicleWheelsComponent::DisableWheel(int32_t WheelIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.DisableWheel");
		
		UDcxVehicleWheelsComponent_DisableWheel_Params params {};
		params.WheelIndex = WheelIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDcxVehicleWheelsComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDcxVehicleWheelsComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DcxVehicle.DcxVehicleWheelsComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleDriveComponent.SetTargetGear
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewGear                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bImmediate                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDcxVehicleDriveComponent::SetTargetGear(int32_t NewGear, bool bImmediate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent.SetTargetGear");
		
		UDcxVehicleDriveComponent_SetTargetGear_Params params {};
		params.NewGear = NewGear;
		params.bImmediate = bImmediate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleDriveComponent.SetGearboxType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDcxVehicleGearbox                                 NewGearboxType                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDcxVehicleDriveComponent::SetGearboxType(EDcxVehicleGearbox NewGearboxType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent.SetGearboxType");
		
		UDcxVehicleDriveComponent_SetGearboxType_Params params {};
		params.NewGearboxType = NewGearboxType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleDriveComponent.SetGearboxData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDcxVehicleGearboxData                      NewGearboxData                                             (Parm, NativeAccessSpecifierPublic)
	 */
	void UDcxVehicleDriveComponent::SetGearboxData(const struct FDcxVehicleGearboxData& NewGearboxData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent.SetGearboxData");
		
		UDcxVehicleDriveComponent_SetGearboxData_Params params {};
		params.NewGearboxData = NewGearboxData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleDriveComponent.SetEngineRotationSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              RPM                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDcxVehicleDriveComponent::SetEngineRotationSpeed(float RPM)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent.SetEngineRotationSpeed");
		
		UDcxVehicleDriveComponent_SetEngineRotationSpeed_Params params {};
		params.RPM = RPM;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleDriveComponent.SetEngineData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDcxVehicleEngineData                       NewEngineData                                              (Parm, NativeAccessSpecifierPublic)
	 */
	void UDcxVehicleDriveComponent::SetEngineData(const struct FDcxVehicleEngineData& NewEngineData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent.SetEngineData");
		
		UDcxVehicleDriveComponent_SetEngineData_Params params {};
		params.NewEngineData = NewEngineData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleDriveComponent.SetClutchData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDcxVehicleClutchData                       NewClutchData                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDcxVehicleDriveComponent::SetClutchData(const struct FDcxVehicleClutchData& NewClutchData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent.SetClutchData");
		
		UDcxVehicleDriveComponent_SetClutchData_Params params {};
		params.NewClutchData = NewClutchData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleDriveComponent.GetTargetGear
	 * 		Flags  -> ()
	 */
	int32_t UDcxVehicleDriveComponent::GetTargetGear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent.GetTargetGear");
		
		UDcxVehicleDriveComponent_GetTargetGear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleDriveComponent.GetGearboxType
	 * 		Flags  -> ()
	 */
	EDcxVehicleGearbox UDcxVehicleDriveComponent::GetGearboxType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent.GetGearboxType");
		
		UDcxVehicleDriveComponent_GetGearboxType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleDriveComponent.GetGearboxData
	 * 		Flags  -> ()
	 */
	struct FDcxVehicleGearboxData UDcxVehicleDriveComponent::GetGearboxData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent.GetGearboxData");
		
		UDcxVehicleDriveComponent_GetGearboxData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleDriveComponent.GetEngineRotationSpeed
	 * 		Flags  -> ()
	 */
	float UDcxVehicleDriveComponent::GetEngineRotationSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent.GetEngineRotationSpeed");
		
		UDcxVehicleDriveComponent_GetEngineRotationSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleDriveComponent.GetEngineData
	 * 		Flags  -> ()
	 */
	struct FDcxVehicleEngineData UDcxVehicleDriveComponent::GetEngineData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent.GetEngineData");
		
		UDcxVehicleDriveComponent_GetEngineData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleDriveComponent.GetCurrentGear
	 * 		Flags  -> ()
	 */
	int32_t UDcxVehicleDriveComponent::GetCurrentGear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent.GetCurrentGear");
		
		UDcxVehicleDriveComponent_GetCurrentGear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleDriveComponent.GetClutchData
	 * 		Flags  -> ()
	 */
	struct FDcxVehicleClutchData UDcxVehicleDriveComponent::GetClutchData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent.GetClutchData");
		
		UDcxVehicleDriveComponent_GetClutchData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDcxVehicleDriveComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDcxVehicleDriveComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DcxVehicle.DcxVehicleDriveComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleDriveComponent4W.SetDifferentialData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDcxVehicleDifferentialData4W               NewDifferentialData                                        (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDcxVehicleDriveComponent4W::SetDifferentialData(const struct FDcxVehicleDifferentialData4W& NewDifferentialData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent4W.SetDifferentialData");
		
		UDcxVehicleDriveComponent4W_SetDifferentialData_Params params {};
		params.NewDifferentialData = NewDifferentialData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleDriveComponent4W.GetRawInput4W
	 * 		Flags  -> ()
	 */
	class UDcxVehicleDriveRawInput4W* UDcxVehicleDriveComponent4W::GetRawInput4W()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent4W.GetRawInput4W");
		
		UDcxVehicleDriveComponent4W_GetRawInput4W_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleDriveComponent4W.GetDifferentialData
	 * 		Flags  -> ()
	 */
	struct FDcxVehicleDifferentialData4W UDcxVehicleDriveComponent4W::GetDifferentialData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent4W.GetDifferentialData");
		
		UDcxVehicleDriveComponent4W_GetDifferentialData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDcxVehicleDriveComponent4W.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDcxVehicleDriveComponent4W::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DcxVehicle.DcxVehicleDriveComponent4W");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleDriveComponentNW.SetDrivenWheel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            WheelIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsDriven                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDcxVehicleDriveComponentNW::SetDrivenWheel(int32_t WheelIndex, bool bIsDriven)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponentNW.SetDrivenWheel");
		
		UDcxVehicleDriveComponentNW_SetDrivenWheel_Params params {};
		params.WheelIndex = WheelIndex;
		params.bIsDriven = bIsDriven;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleDriveComponentNW.IsDrivenWheel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            WheelIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDcxVehicleDriveComponentNW::IsDrivenWheel(int32_t WheelIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponentNW.IsDrivenWheel");
		
		UDcxVehicleDriveComponentNW_IsDrivenWheel_Params params {};
		params.WheelIndex = WheelIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleDriveComponentNW.GetRawInputNW
	 * 		Flags  -> ()
	 */
	class UDcxVehicleDriveRawInputNW* UDcxVehicleDriveComponentNW::GetRawInputNW()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponentNW.GetRawInputNW");
		
		UDcxVehicleDriveComponentNW_GetRawInputNW_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDcxVehicleDriveComponentNW.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDcxVehicleDriveComponentNW::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DcxVehicle.DcxVehicleDriveComponentNW");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleDriveComponentTank.SetDriveModel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDcxVehicleDriveControlModelTank                   ControlModel                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDcxVehicleDriveComponentTank::SetDriveModel(EDcxVehicleDriveControlModelTank ControlModel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponentTank.SetDriveModel");
		
		UDcxVehicleDriveComponentTank_SetDriveModel_Params params {};
		params.ControlModel = ControlModel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleDriveComponentTank.GetRawInputTank
	 * 		Flags  -> ()
	 */
	class UDcxVehicleDriveRawInputTank* UDcxVehicleDriveComponentTank::GetRawInputTank()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponentTank.GetRawInputTank");
		
		UDcxVehicleDriveComponentTank_GetRawInputTank_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleDriveComponentTank.GetDriveModel
	 * 		Flags  -> ()
	 */
	EDcxVehicleDriveControlModelTank UDcxVehicleDriveComponentTank::GetDriveModel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponentTank.GetDriveModel");
		
		UDcxVehicleDriveComponentTank_GetDriveModel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDcxVehicleDriveComponentTank.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDcxVehicleDriveComponentTank::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DcxVehicle.DcxVehicleDriveComponentTank");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleWheelsRawInput.SetThrottle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Throttle                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDcxVehicleWheelsRawInput::SetThrottle(float Throttle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsRawInput.SetThrottle");
		
		UDcxVehicleWheelsRawInput_SetThrottle_Params params {};
		params.Throttle = Throttle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleWheelsRawInput.GetThrottle
	 * 		Flags  -> ()
	 */
	float UDcxVehicleWheelsRawInput::GetThrottle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsRawInput.GetThrottle");
		
		UDcxVehicleWheelsRawInput_GetThrottle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDcxVehicleWheelsRawInput.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDcxVehicleWheelsRawInput::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DcxVehicle.DcxVehicleWheelsRawInput");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleDriveRawInput.SetGearUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bGearUpPressed                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDcxVehicleDriveRawInput::SetGearUp(bool bGearUpPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInput.SetGearUp");
		
		UDcxVehicleDriveRawInput_SetGearUp_Params params {};
		params.bGearUpPressed = bGearUpPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleDriveRawInput.SetGearDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bGearDownPressed                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDcxVehicleDriveRawInput::SetGearDown(bool bGearDownPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInput.SetGearDown");
		
		UDcxVehicleDriveRawInput_SetGearDown_Params params {};
		params.bGearDownPressed = bGearDownPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleDriveRawInput.SetClutch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Clutch                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDcxVehicleDriveRawInput::SetClutch(float Clutch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInput.SetClutch");
		
		UDcxVehicleDriveRawInput_SetClutch_Params params {};
		params.Clutch = Clutch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleDriveRawInput.GetGearUp
	 * 		Flags  -> ()
	 */
	bool UDcxVehicleDriveRawInput::GetGearUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInput.GetGearUp");
		
		UDcxVehicleDriveRawInput_GetGearUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleDriveRawInput.GetGearDown
	 * 		Flags  -> ()
	 */
	bool UDcxVehicleDriveRawInput::GetGearDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInput.GetGearDown");
		
		UDcxVehicleDriveRawInput_GetGearDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleDriveRawInput.GetClutch
	 * 		Flags  -> ()
	 */
	float UDcxVehicleDriveRawInput::GetClutch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInput.GetClutch");
		
		UDcxVehicleDriveRawInput_GetClutch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDcxVehicleDriveRawInput.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDcxVehicleDriveRawInput::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DcxVehicle.DcxVehicleDriveRawInput");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleDriveRawInput4W.SetSteer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Steer                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDcxVehicleDriveRawInput4W::SetSteer(float Steer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInput4W.SetSteer");
		
		UDcxVehicleDriveRawInput4W_SetSteer_Params params {};
		params.Steer = Steer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleDriveRawInput4W.SetHandbrake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Handbrake                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDcxVehicleDriveRawInput4W::SetHandbrake(float Handbrake)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInput4W.SetHandbrake");
		
		UDcxVehicleDriveRawInput4W_SetHandbrake_Params params {};
		params.Handbrake = Handbrake;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleDriveRawInput4W.SetBrake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Brake                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDcxVehicleDriveRawInput4W::SetBrake(float Brake)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInput4W.SetBrake");
		
		UDcxVehicleDriveRawInput4W_SetBrake_Params params {};
		params.Brake = Brake;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleDriveRawInput4W.GetSteer
	 * 		Flags  -> ()
	 */
	float UDcxVehicleDriveRawInput4W::GetSteer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInput4W.GetSteer");
		
		UDcxVehicleDriveRawInput4W_GetSteer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleDriveRawInput4W.GetHandbrake
	 * 		Flags  -> ()
	 */
	float UDcxVehicleDriveRawInput4W::GetHandbrake()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInput4W.GetHandbrake");
		
		UDcxVehicleDriveRawInput4W_GetHandbrake_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleDriveRawInput4W.GetBrake
	 * 		Flags  -> ()
	 */
	float UDcxVehicleDriveRawInput4W::GetBrake()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInput4W.GetBrake");
		
		UDcxVehicleDriveRawInput4W_GetBrake_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDcxVehicleDriveRawInput4W.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDcxVehicleDriveRawInput4W::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DcxVehicle.DcxVehicleDriveRawInput4W");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDcxVehicleDriveRawInputNW.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDcxVehicleDriveRawInputNW::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DcxVehicle.DcxVehicleDriveRawInputNW");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleDriveRawInputTank.SetRightThrust
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Thrust                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDcxVehicleDriveRawInputTank::SetRightThrust(float Thrust)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInputTank.SetRightThrust");
		
		UDcxVehicleDriveRawInputTank_SetRightThrust_Params params {};
		params.Thrust = Thrust;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleDriveRawInputTank.SetRightBrake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Brake                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDcxVehicleDriveRawInputTank::SetRightBrake(float Brake)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInputTank.SetRightBrake");
		
		UDcxVehicleDriveRawInputTank_SetRightBrake_Params params {};
		params.Brake = Brake;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleDriveRawInputTank.SetLeftThrust
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Thrust                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDcxVehicleDriveRawInputTank::SetLeftThrust(float Thrust)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInputTank.SetLeftThrust");
		
		UDcxVehicleDriveRawInputTank_SetLeftThrust_Params params {};
		params.Thrust = Thrust;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleDriveRawInputTank.SetLeftBrake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Brake                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDcxVehicleDriveRawInputTank::SetLeftBrake(float Brake)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInputTank.SetLeftBrake");
		
		UDcxVehicleDriveRawInputTank_SetLeftBrake_Params params {};
		params.Brake = Brake;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleDriveRawInputTank.GetRightThrust
	 * 		Flags  -> ()
	 */
	float UDcxVehicleDriveRawInputTank::GetRightThrust()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInputTank.GetRightThrust");
		
		UDcxVehicleDriveRawInputTank_GetRightThrust_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleDriveRawInputTank.GetRightBrake
	 * 		Flags  -> ()
	 */
	float UDcxVehicleDriveRawInputTank::GetRightBrake()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInputTank.GetRightBrake");
		
		UDcxVehicleDriveRawInputTank_GetRightBrake_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleDriveRawInputTank.GetLeftThrust
	 * 		Flags  -> ()
	 */
	float UDcxVehicleDriveRawInputTank::GetLeftThrust()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInputTank.GetLeftThrust");
		
		UDcxVehicleDriveRawInputTank_GetLeftThrust_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleDriveRawInputTank.GetLeftBrake
	 * 		Flags  -> ()
	 */
	float UDcxVehicleDriveRawInputTank::GetLeftBrake()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInputTank.GetLeftBrake");
		
		UDcxVehicleDriveRawInputTank_GetLeftBrake_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDcxVehicleDriveRawInputTank.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDcxVehicleDriveRawInputTank::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DcxVehicle.DcxVehicleDriveRawInputTank");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleNoDrive.GetVehicleNoDrive
	 * 		Flags  -> ()
	 */
	class UDcxVehicleNoDriveComponent* ADcxVehicleNoDrive::GetVehicleNoDrive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleNoDrive.GetVehicleNoDrive");
		
		ADcxVehicleNoDrive_GetVehicleNoDrive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADcxVehicleNoDrive.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADcxVehicleNoDrive::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DcxVehicle.DcxVehicleNoDrive");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleNoDriveComponent.SetSteerAngle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            WheelIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SteerAngle                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDcxVehicleNoDriveComponent::SetSteerAngle(int32_t WheelIndex, float SteerAngle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleNoDriveComponent.SetSteerAngle");
		
		UDcxVehicleNoDriveComponent_SetSteerAngle_Params params {};
		params.WheelIndex = WheelIndex;
		params.SteerAngle = SteerAngle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleNoDriveComponent.SetDriveTorque
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            WheelIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DriveTorque                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDcxVehicleNoDriveComponent::SetDriveTorque(int32_t WheelIndex, float DriveTorque)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleNoDriveComponent.SetDriveTorque");
		
		UDcxVehicleNoDriveComponent_SetDriveTorque_Params params {};
		params.WheelIndex = WheelIndex;
		params.DriveTorque = DriveTorque;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleNoDriveComponent.SetBrakeTorque
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            WheelIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              BrakeTorque                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDcxVehicleNoDriveComponent::SetBrakeTorque(int32_t WheelIndex, float BrakeTorque)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleNoDriveComponent.SetBrakeTorque");
		
		UDcxVehicleNoDriveComponent_SetBrakeTorque_Params params {};
		params.WheelIndex = WheelIndex;
		params.BrakeTorque = BrakeTorque;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleNoDriveComponent.GetSteerAngle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            WheelIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UDcxVehicleNoDriveComponent::GetSteerAngle(int32_t WheelIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleNoDriveComponent.GetSteerAngle");
		
		UDcxVehicleNoDriveComponent_GetSteerAngle_Params params {};
		params.WheelIndex = WheelIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleNoDriveComponent.GetRawInputND
	 * 		Flags  -> ()
	 */
	class UDcxVehicleNoDriveRawInput* UDcxVehicleNoDriveComponent::GetRawInputND()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleNoDriveComponent.GetRawInputND");
		
		UDcxVehicleNoDriveComponent_GetRawInputND_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleNoDriveComponent.GetDriveTorque
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            WheelIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UDcxVehicleNoDriveComponent::GetDriveTorque(int32_t WheelIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleNoDriveComponent.GetDriveTorque");
		
		UDcxVehicleNoDriveComponent_GetDriveTorque_Params params {};
		params.WheelIndex = WheelIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleNoDriveComponent.GetBrakeTorque
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            WheelIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UDcxVehicleNoDriveComponent::GetBrakeTorque(int32_t WheelIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleNoDriveComponent.GetBrakeTorque");
		
		UDcxVehicleNoDriveComponent_GetBrakeTorque_Params params {};
		params.WheelIndex = WheelIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDcxVehicleNoDriveComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDcxVehicleNoDriveComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DcxVehicle.DcxVehicleNoDriveComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleNoDriveRawInput.SetSteer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewSteer                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDcxVehicleNoDriveRawInput::SetSteer(float NewSteer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleNoDriveRawInput.SetSteer");
		
		UDcxVehicleNoDriveRawInput_SetSteer_Params params {};
		params.NewSteer = NewSteer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleNoDriveRawInput.SetBrake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewBrake                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDcxVehicleNoDriveRawInput::SetBrake(float NewBrake)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleNoDriveRawInput.SetBrake");
		
		UDcxVehicleNoDriveRawInput_SetBrake_Params params {};
		params.NewBrake = NewBrake;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleNoDriveRawInput.GetSteer
	 * 		Flags  -> ()
	 */
	float UDcxVehicleNoDriveRawInput::GetSteer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleNoDriveRawInput.GetSteer");
		
		UDcxVehicleNoDriveRawInput_GetSteer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleNoDriveRawInput.GetBrake
	 * 		Flags  -> ()
	 */
	float UDcxVehicleNoDriveRawInput::GetBrake()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleNoDriveRawInput.GetBrake");
		
		UDcxVehicleNoDriveRawInput_GetBrake_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDcxVehicleNoDriveRawInput.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDcxVehicleNoDriveRawInput::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DcxVehicle.DcxVehicleNoDriveRawInput");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleNW.GetVehicleDriveNW
	 * 		Flags  -> ()
	 */
	class UDcxVehicleDriveComponentNW* ADcxVehicleNW::GetVehicleDriveNW()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleNW.GetVehicleDriveNW");
		
		ADcxVehicleNW_GetVehicleDriveNW_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADcxVehicleNW.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADcxVehicleNW::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DcxVehicle.DcxVehicleNW");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DcxVehicle.DcxVehicleTank.GetVehicleDriveTank
	 * 		Flags  -> ()
	 */
	class UDcxVehicleDriveComponentTank* ADcxVehicleTank::GetVehicleDriveTank()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleTank.GetVehicleDriveTank");
		
		ADcxVehicleTank_GetVehicleDriveTank_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADcxVehicleTank.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADcxVehicleTank::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DcxVehicle.DcxVehicleTank");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDcxVehicleTire.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDcxVehicleTire::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DcxVehicle.DcxVehicleTire");
		return ptr;
	}

}


