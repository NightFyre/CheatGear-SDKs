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
	 * 		Name   -> PredefinedFunction UVoxelDataProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelDataProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxFluidSimulation.VoxelDataProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFluidSimDataProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFluidSimDataProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxFluidSimulation.FluidSimDataProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005D70B0
	 * 		Name   -> Function GbxFluidSimulation.QuickFluidVelocitySolverDataProvider.StepSim
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UQuickFluidVelocitySolverDataProvider::StepSim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxFluidSimulation.QuickFluidVelocitySolverDataProvider.StepSim");
		
		UQuickFluidVelocitySolverDataProvider_StepSim_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005D70B0
	 * 		Name   -> Function GbxFluidSimulation.QuickFluidVelocitySolverDataProvider.RunSim
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UQuickFluidVelocitySolverDataProvider::RunSim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxFluidSimulation.QuickFluidVelocitySolverDataProvider.RunSim");
		
		UQuickFluidVelocitySolverDataProvider_RunSim_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005D70B0
	 * 		Name   -> Function GbxFluidSimulation.QuickFluidVelocitySolverDataProvider.ResetSim
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UQuickFluidVelocitySolverDataProvider::ResetSim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxFluidSimulation.QuickFluidVelocitySolverDataProvider.ResetSim");
		
		UQuickFluidVelocitySolverDataProvider_ResetSim_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005D70B0
	 * 		Name   -> Function GbxFluidSimulation.QuickFluidVelocitySolverDataProvider.InitSim
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UQuickFluidVelocitySolverDataProvider::InitSim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxFluidSimulation.QuickFluidVelocitySolverDataProvider.InitSim");
		
		UQuickFluidVelocitySolverDataProvider_InitSim_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005D70B0
	 * 		Name   -> Function GbxFluidSimulation.QuickFluidVelocitySolverDataProvider.ClearData
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UQuickFluidVelocitySolverDataProvider::ClearData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxFluidSimulation.QuickFluidVelocitySolverDataProvider.ClearData");
		
		UQuickFluidVelocitySolverDataProvider_ClearData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UQuickFluidVelocitySolverDataProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQuickFluidVelocitySolverDataProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxFluidSimulation.QuickFluidVelocitySolverDataProvider");
		return ptr;
	}

}


