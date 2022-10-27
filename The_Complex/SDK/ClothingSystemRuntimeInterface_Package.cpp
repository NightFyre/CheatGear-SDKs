/**
 * Name: The_Complex
 * Version: 9349459
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
	 * 		Name   -> PredefinedFunction UClothConfigBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClothConfigBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ClothingSystemRuntimeInterface.ClothConfigBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClothingSimulationFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClothingSimulationFactory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ClothingSystemRuntimeInterface.ClothingSimulationFactory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClothingInteractor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClothingInteractor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ClothingSystemRuntimeInterface.ClothingInteractor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x032EF440
	 * 		Name   -> Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetNumSubsteps
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            NumSubsteps                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UClothingSimulationInteractor::SetNumSubsteps(int32_t NumSubsteps)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetNumSubsteps");
		
		UClothingSimulationInteractor_SetNumSubsteps_Params params {};
		params.NumSubsteps = NumSubsteps;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x032EF3B0
	 * 		Name   -> Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetNumIterations
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            NumIterations                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UClothingSimulationInteractor::SetNumIterations(int32_t NumIterations)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetNumIterations");
		
		UClothingSimulationInteractor_SetNumIterations_Params params {};
		params.NumIterations = NumIterations;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x032EF320
	 * 		Name   -> Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetMaxNumIterations
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            MaxNumIterations                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UClothingSimulationInteractor::SetMaxNumIterations(int32_t MaxNumIterations)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetMaxNumIterations");
		
		UClothingSimulationInteractor_SetMaxNumIterations_Params params {};
		params.MaxNumIterations = MaxNumIterations;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x032EF290
	 * 		Name   -> Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetAnimDriveSpringStiffness
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InStiffness                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UClothingSimulationInteractor::SetAnimDriveSpringStiffness(float InStiffness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetAnimDriveSpringStiffness");
		
		UClothingSimulationInteractor_SetAnimDriveSpringStiffness_Params params {};
		params.InStiffness = InStiffness;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B111B0
	 * 		Name   -> Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.PhysicsAssetUpdated
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UClothingSimulationInteractor::PhysicsAssetUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.PhysicsAssetUpdated");
		
		UClothingSimulationInteractor_PhysicsAssetUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x032EF270
	 * 		Name   -> Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetSimulationTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UClothingSimulationInteractor::GetSimulationTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetSimulationTime");
		
		UClothingSimulationInteractor_GetSimulationTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x032EF250
	 * 		Name   -> Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumSubsteps
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UClothingSimulationInteractor::GetNumSubsteps()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumSubsteps");
		
		UClothingSimulationInteractor_GetNumSubsteps_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x032EF230
	 * 		Name   -> Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumKinematicParticles
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UClothingSimulationInteractor::GetNumKinematicParticles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumKinematicParticles");
		
		UClothingSimulationInteractor_GetNumKinematicParticles_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x032EF210
	 * 		Name   -> Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumIterations
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UClothingSimulationInteractor::GetNumIterations()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumIterations");
		
		UClothingSimulationInteractor_GetNumIterations_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x032EF1F0
	 * 		Name   -> Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumDynamicParticles
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UClothingSimulationInteractor::GetNumDynamicParticles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumDynamicParticles");
		
		UClothingSimulationInteractor_GetNumDynamicParticles_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x032EF1D0
	 * 		Name   -> Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumCloths
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UClothingSimulationInteractor::GetNumCloths()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumCloths");
		
		UClothingSimulationInteractor_GetNumCloths_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x032EF120
	 * 		Name   -> Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetClothingInteractor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FString                                      ClothingAssetName                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UClothingInteractor* UClothingSimulationInteractor::GetClothingInteractor(const class FString& ClothingAssetName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetClothingInteractor");
		
		UClothingSimulationInteractor_GetClothingInteractor_Params params {};
		params.ClothingAssetName = ClothingAssetName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x032EF090
	 * 		Name   -> Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.EnableGravityOverride
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     InVector                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UClothingSimulationInteractor::EnableGravityOverride(const struct FVector& InVector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.EnableGravityOverride");
		
		UClothingSimulationInteractor_EnableGravityOverride_Params params {};
		params.InVector = InVector;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B11000
	 * 		Name   -> Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.DisableGravityOverride
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UClothingSimulationInteractor::DisableGravityOverride()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.DisableGravityOverride");
		
		UClothingSimulationInteractor_DisableGravityOverride_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D05B30
	 * 		Name   -> Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.ClothConfigUpdated
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UClothingSimulationInteractor::ClothConfigUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.ClothConfigUpdated");
		
		UClothingSimulationInteractor_ClothConfigUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClothingSimulationInteractor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClothingSimulationInteractor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ClothingSystemRuntimeInterface.ClothingSimulationInteractor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClothSharedSimConfigBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClothSharedSimConfigBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ClothingSystemRuntimeInterface.ClothSharedSimConfigBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClothingAssetBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClothingAssetBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ClothingSystemRuntimeInterface.ClothingAssetBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClothPhysicalMeshDataBase_Legacy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClothPhysicalMeshDataBase_Legacy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ClothingSystemRuntimeInterface.ClothPhysicalMeshDataBase_Legacy");
		return ptr;
	}

}


