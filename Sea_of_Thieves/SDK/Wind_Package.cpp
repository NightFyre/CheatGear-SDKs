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
	 * 		RVA    -> 0x034D1E40
	 * 		Name   -> Function Wind.WindZoneInterface.GetWindZoneParams
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	struct FWindZoneParams UWindZoneInterface::GetWindZoneParams()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wind.WindZoneInterface.GetWindZoneParams");
		
		UWindZoneInterface_GetWindZoneParams_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x034D1E00
	 * 		Name   -> Function Wind.WindZoneInterface.GetWindZoneLocation
	 * 		Flags  -> (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector2D UWindZoneInterface::GetWindZoneLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wind.WindZoneInterface.GetWindZoneLocation");
		
		UWindZoneInterface_GetWindZoneLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x034D1820
	 * 		Name   -> Function Wind.WindZoneInterface.GetTurbulence
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	struct FWindZoneTurbulence UWindZoneInterface::GetTurbulence(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wind.WindZoneInterface.GetTurbulence");
		
		UWindZoneInterface_GetTurbulence_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWindZoneInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWindZoneInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Wind.WindZoneInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x034D23A0
	 * 		Name   -> Function Wind.WindInterface.UnregisterWindZone
	 * 		Flags  -> (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 */
	void UWindInterface::UnregisterWindZone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wind.WindInterface.UnregisterWindZone");
		
		UWindInterface_UnregisterWindZone_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x034D2310
	 * 		Name   -> Function Wind.WindInterface.TriggerChange
	 * 		Flags  -> (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               ChangeInstantly                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWindInterface::TriggerChange(bool ChangeInstantly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wind.WindInterface.TriggerChange");
		
		UWindInterface_TriggerChange_Params params {};
		params.ChangeInstantly = ChangeInstantly;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x034D2270
	 * 		Name   -> Function Wind.WindInterface.SetParams
	 * 		Flags  -> (BlueprintAuthorityOnly, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FWindServiceParams                          Params                                                     (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UWindInterface::SetParams(const struct FWindServiceParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wind.WindInterface.SetParams");
		
		UWindInterface_SetParams_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x034D21E0
	 * 		Name   -> Function Wind.WindInterface.SetGlobalWindVector
	 * 		Flags  -> (BlueprintAuthorityOnly, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     InWindVector                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void UWindInterface::SetGlobalWindVector(const struct FVector& InWindVector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wind.WindInterface.SetGlobalWindVector");
		
		UWindInterface_SetGlobalWindVector_Params params {};
		params.InWindVector = InWindVector;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x034D2160
	 * 		Name   -> Function Wind.WindInterface.SetGlobalWindMagnitude
	 * 		Flags  -> (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InWindMagnitude                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWindInterface::SetGlobalWindMagnitude(float InWindMagnitude)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wind.WindInterface.SetGlobalWindMagnitude");
		
		UWindInterface_SetGlobalWindMagnitude_Params params {};
		params.InWindMagnitude = InWindMagnitude;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x034D20D0
	 * 		Name   -> Function Wind.WindInterface.SetGlobalWindDirection
	 * 		Flags  -> (BlueprintAuthorityOnly, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     InWindDirection                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void UWindInterface::SetGlobalWindDirection(const struct FVector& InWindDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wind.WindInterface.SetGlobalWindDirection");
		
		UWindInterface_SetGlobalWindDirection_Params params {};
		params.InWindDirection = InWindDirection;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x034D2050
	 * 		Name   -> Function Wind.WindInterface.SetGlobalWindAngle
	 * 		Flags  -> (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InAngle                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWindInterface::SetGlobalWindAngle(float InAngle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wind.WindInterface.SetGlobalWindAngle");
		
		UWindInterface_SetGlobalWindAngle_Params params {};
		params.InAngle = InAngle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x034D1F50
	 * 		Name   -> Function Wind.WindInterface.SetCustomMode
	 * 		Flags  -> (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               InCustomMode                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWindInterface::SetCustomMode(bool InCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wind.WindInterface.SetCustomMode");
		
		UWindInterface_SetCustomMode_Params params {};
		params.InCustomMode = InCustomMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x034D1EB0
	 * 		Name   -> Function Wind.WindInterface.RegisterWindZone
	 * 		Flags  -> (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 */
	void UWindInterface::RegisterWindZone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wind.WindInterface.RegisterWindZone");
		
		UWindInterface_RegisterWindZone_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x034D1D50
	 * 		Name   -> Function Wind.WindInterface.GetWindZoneAtLocation
	 * 		Flags  -> (BlueprintAuthorityOnly, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVector                                     SamplePosition                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void UWindInterface::GetWindZoneAtLocation(const struct FVector& SamplePosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wind.WindInterface.GetWindZoneAtLocation");
		
		UWindInterface_GetWindZoneAtLocation_Params params {};
		params.SamplePosition = SamplePosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x034D1CA0
	 * 		Name   -> Function Wind.WindInterface.GetWindVector
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVector                                     SamplePosition                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	struct FVector UWindInterface::GetWindVector(const struct FVector& SamplePosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wind.WindInterface.GetWindVector");
		
		UWindInterface_GetWindVector_Params params {};
		params.SamplePosition = SamplePosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x034D1BB0
	 * 		Name   -> Function Wind.WindInterface.GetWindMagnitude
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVector                                     SamplePosition                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	float UWindInterface::GetWindMagnitude(const struct FVector& SamplePosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wind.WindInterface.GetWindMagnitude");
		
		UWindInterface_GetWindMagnitude_Params params {};
		params.SamplePosition = SamplePosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x034D1B00
	 * 		Name   -> Function Wind.WindInterface.GetWindDirection
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVector                                     SamplePosition                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	struct FVector UWindInterface::GetWindDirection(const struct FVector& SamplePosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wind.WindInterface.GetWindDirection");
		
		UWindInterface_GetWindDirection_Params params {};
		params.SamplePosition = SamplePosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x034D1980
	 * 		Name   -> Function Wind.WindInterface.GetWindAngle
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVector                                     SamplePosition                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	float UWindInterface::GetWindAngle(const struct FVector& SamplePosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wind.WindInterface.GetWindAngle");
		
		UWindInterface_GetWindAngle_Params params {};
		params.SamplePosition = SamplePosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x034D18D0
	 * 		Name   -> Function Wind.WindInterface.GetTurbulenceForTrees
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVector                                     SamplePosition                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	struct FWindZoneTurbulence UWindInterface::GetTurbulenceForTrees(const struct FVector& SamplePosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wind.WindInterface.GetTurbulenceForTrees");
		
		UWindInterface_GetTurbulenceForTrees_Params params {};
		params.SamplePosition = SamplePosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x034D1770
	 * 		Name   -> Function Wind.WindInterface.GetTurbulence
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVector                                     SamplePosition                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	struct FWindZoneTurbulence UWindInterface::GetTurbulence(const struct FVector& SamplePosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wind.WindInterface.GetTurbulence");
		
		UWindInterface_GetTurbulence_Params params {};
		params.SamplePosition = SamplePosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x034D1740
	 * 		Name   -> Function Wind.WindInterface.GetMaxWindMagnitude
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UWindInterface::GetMaxWindMagnitude()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wind.WindInterface.GetMaxWindMagnitude");
		
		UWindInterface_GetMaxWindMagnitude_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWindInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWindInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Wind.WindInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDebugWindInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDebugWindInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Wind.DebugWindInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMockWindService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMockWindService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Wind.MockWindService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTestWindInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTestWindInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Wind.TestWindInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTestWindZone.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTestWindZone::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Wind.TestWindZone");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x034D1FE0
	 * 		Name   -> Function Wind.WindFunctions.SetDefaultWindBlowingNorth
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWindFunctions::STATIC_SetDefaultWindBlowingNorth(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wind.WindFunctions.SetDefaultWindBlowingNorth");
		
		UWindFunctions_SetDefaultWindBlowingNorth_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x034D1A20
	 * 		Name   -> Function Wind.WindFunctions.GetWindAtLocation
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     WorldPosition                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector UWindFunctions::STATIC_GetWindAtLocation(class UObject* WorldContextObject, const struct FVector& WorldPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wind.WindFunctions.GetWindAtLocation");
		
		UWindFunctions_GetWindAtLocation_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.WorldPosition = WorldPosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWindFunctions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWindFunctions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Wind.WindFunctions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x034D1E90
	 * 		Name   -> Function Wind.WindService.OnRep_WindMagnitude
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AWindService::OnRep_WindMagnitude()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wind.WindService.OnRep_WindMagnitude");
		
		AWindService_OnRep_WindMagnitude_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x034D1E70
	 * 		Name   -> Function Wind.WindService.OnRep_WindAngle
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AWindService::OnRep_WindAngle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wind.WindService.OnRep_WindAngle");
		
		AWindService_OnRep_WindAngle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x034D1C50
	 * 		Name   -> Function Wind.WindService.GetWindParams
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FWindServiceParams AWindService::GetWindParams()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wind.WindService.GetWindParams");
		
		AWindService_GetWindParams_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWindService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWindService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Wind.WindService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADebugWindService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADebugWindService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Wind.DebugWindService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x034D1640
	 * 		Name   -> Function Wind.WindServiceParamsFunctionLibrary.AreWindServiceParamsEqual
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FWindServiceParams                          Params1                                                    (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		struct FWindServiceParams                          Params2                                                    (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	bool UWindServiceParamsFunctionLibrary::STATIC_AreWindServiceParamsEqual(const struct FWindServiceParams& Params1, const struct FWindServiceParams& Params2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wind.WindServiceParamsFunctionLibrary.AreWindServiceParamsEqual");
		
		UWindServiceParamsFunctionLibrary_AreWindServiceParamsEqual_Params params {};
		params.Params1 = Params1;
		params.Params2 = Params2;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWindServiceParamsFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWindServiceParamsFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Wind.WindServiceParamsFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWindZoneComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWindZoneComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Wind.WindZoneComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTestWindZoneComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTestWindZoneComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Wind.TestWindZoneComponent");
		return ptr;
	}

}


