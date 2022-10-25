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
	 * 		RVA    -> 0x005D70B0
	 * 		Name   -> Function TritonRuntime.TritonAcousticDataComponent.VisualizeMaterials
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UTritonAcousticDataComponent::VisualizeMaterials()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TritonRuntime.TritonAcousticDataComponent.VisualizeMaterials");
		
		UTritonAcousticDataComponent_VisualizeMaterials_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005D70B0
	 * 		Name   -> Function TritonRuntime.TritonAcousticDataComponent.UpdateProbeLocations
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UTritonAcousticDataComponent::UpdateProbeLocations()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TritonRuntime.TritonAcousticDataComponent.UpdateProbeLocations");
		
		UTritonAcousticDataComponent_UpdateProbeLocations_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005D70B0
	 * 		Name   -> Function TritonRuntime.TritonAcousticDataComponent.RefreshCachedVoxelData
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UTritonAcousticDataComponent::RefreshCachedVoxelData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TritonRuntime.TritonAcousticDataComponent.RefreshCachedVoxelData");
		
		UTritonAcousticDataComponent_RefreshCachedVoxelData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007FC560
	 * 		Name   -> Function TritonRuntime.TritonAcousticDataComponent.BuildFallbackAcousticData
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UTritonAcousticDataComponent::BuildFallbackAcousticData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TritonRuntime.TritonAcousticDataComponent.BuildFallbackAcousticData");
		
		UTritonAcousticDataComponent_BuildFallbackAcousticData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005D70B0
	 * 		Name   -> Function TritonRuntime.TritonAcousticDataComponent.AuditProbeLocations
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UTritonAcousticDataComponent::AuditProbeLocations()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TritonRuntime.TritonAcousticDataComponent.AuditProbeLocations");
		
		UTritonAcousticDataComponent_AuditProbeLocations_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTritonAcousticDataComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTritonAcousticDataComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TritonRuntime.TritonAcousticDataComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATritonZone.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATritonZone::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TritonRuntime.TritonZone");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATritonVoxelOverrideVolume.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATritonVoxelOverrideVolume::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TritonRuntime.TritonVoxelOverrideVolume");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATritonProbeHelper.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATritonProbeHelper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TritonRuntime.TritonProbeHelper");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007FC580
	 * 		Name   -> Function TritonRuntime.TritonProbeLocationProvider.FindProbeLocations
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults)
	 * Parameters:
	 * 		struct FBoxSphereBounds                            WorldBoxSphere                                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UAudioOcclusionVoxelDataProvider*            GeoVoxels                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAudioOcclusionVoxelDataProvider*            NavVoxels                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector>                             out_ResultProbeLocations                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void ATritonProbeLocationProvider::FindProbeLocations(const struct FBoxSphereBounds& WorldBoxSphere, class UAudioOcclusionVoxelDataProvider* GeoVoxels, class UAudioOcclusionVoxelDataProvider* NavVoxels, TArray<struct FVector>* out_ResultProbeLocations)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TritonRuntime.TritonProbeLocationProvider.FindProbeLocations");
		
		ATritonProbeLocationProvider_FindProbeLocations_Params params {};
		params.WorldBoxSphere = WorldBoxSphere;
		params.GeoVoxels = GeoVoxels;
		params.NavVoxels = NavVoxels;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (out_ResultProbeLocations != nullptr)
			*out_ResultProbeLocations = params.out_ResultProbeLocations;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATritonProbeLocationProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATritonProbeLocationProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TritonRuntime.TritonProbeLocationProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTritonSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTritonSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TritonRuntime.TritonSettings");
		return ptr;
	}

}


