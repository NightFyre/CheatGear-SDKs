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
	 * 		RVA    -> 0x06AFF240
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
	 * 		RVA    -> 0x06548FF0
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
	 * 		RVA    -> 0x06AFF1B0
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
	 * 		RVA    -> 0x0563DA10
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
	 * 		RVA    -> 0x04FDFB40
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


