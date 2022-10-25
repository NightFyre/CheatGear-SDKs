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
	 * 		Name   -> Function VICODynamicsPlugin.BaseVDComponent.SetUseExplicitRigidBodyCollision
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               UseExplicitCollision                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBaseVDComponent::SetUseExplicitRigidBodyCollision(bool UseExplicitCollision)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.BaseVDComponent.SetUseExplicitRigidBodyCollision");
		
		UBaseVDComponent_SetUseExplicitRigidBodyCollision_Params params {};
		params.UseExplicitCollision = UseExplicitCollision;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.BaseVDComponent.SetAffectedByGlobalWind
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsAffected                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBaseVDComponent::SetAffectedByGlobalWind(bool IsAffected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.BaseVDComponent.SetAffectedByGlobalWind");
		
		UBaseVDComponent_SetAffectedByGlobalWind_Params params {};
		params.IsAffected = IsAffected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.BaseVDComponent.OnSync
	 * 		Flags  -> ()
	 */
	void UBaseVDComponent::OnSync()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.BaseVDComponent.OnSync");
		
		UBaseVDComponent_OnSync_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.BaseVDComponent.GetTensionConstraintCount
	 * 		Flags  -> ()
	 */
	int32_t UBaseVDComponent::GetTensionConstraintCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.BaseVDComponent.GetTensionConstraintCount");
		
		UBaseVDComponent_GetTensionConstraintCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.BaseVDComponent.GetParticleBuildInfo
	 * 		Flags  -> ()
	 */
	TArray<struct FVDParticleInfo> UBaseVDComponent::GetParticleBuildInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.BaseVDComponent.GetParticleBuildInfo");
		
		UBaseVDComponent_GetParticleBuildInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.BaseVDComponent.GetLastAppliedForceFromTensionConstraint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TensionConstraintIndex                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UBaseVDComponent::GetLastAppliedForceFromTensionConstraint(int32_t TensionConstraintIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.BaseVDComponent.GetLastAppliedForceFromTensionConstraint");
		
		UBaseVDComponent_GetLastAppliedForceFromTensionConstraint_Params params {};
		params.TensionConstraintIndex = TensionConstraintIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.BaseVDComponent.AttachToOverlappingRigidBodies
	 * 		Flags  -> ()
	 */
	void UBaseVDComponent::AttachToOverlappingRigidBodies()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.BaseVDComponent.AttachToOverlappingRigidBodies");
		
		UBaseVDComponent_AttachToOverlappingRigidBodies_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseVDComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseVDComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VICODynamicsPlugin.BaseVDComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDBlueprintFunctionLibrary.GetVICODynamicsSimulationInstance
	 * 		Flags  -> ()
	 */
	class UVDSimulation* UVDBlueprintFunctionLibrary::GetVICODynamicsSimulationInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDBlueprintFunctionLibrary.GetVICODynamicsSimulationInstance");
		
		UVDBlueprintFunctionLibrary_GetVICODynamicsSimulationInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVDBlueprintFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVDBlueprintFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VICODynamicsPlugin.VDBlueprintFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVDColliderComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVDColliderComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VICODynamicsPlugin.VDColliderComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDRopeComponent.SetNewRestLengthStartingAtParticle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ParticleIndexStart                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NewLength                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVDRopeComponent::SetNewRestLengthStartingAtParticle(int32_t ParticleIndexStart, float NewLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDRopeComponent.SetNewRestLengthStartingAtParticle");
		
		UVDRopeComponent_SetNewRestLengthStartingAtParticle_Params params {};
		params.ParticleIndexStart = ParticleIndexStart;
		params.NewLength = NewLength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDRopeComponent.SetNewRestLength
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewLength                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PieceIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVDRopeComponent::SetNewRestLength(float NewLength, int32_t PieceIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDRopeComponent.SetNewRestLength");
		
		UVDRopeComponent_SetNewRestLength_Params params {};
		params.NewLength = NewLength;
		params.PieceIndex = PieceIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDRopeComponent.ResetRope
	 * 		Flags  -> ()
	 */
	void UVDRopeComponent::ResetRope()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDRopeComponent.ResetRope");
		
		UVDRopeComponent_ResetRope_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDRopeComponent.GetTrueLength
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PieceIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UVDRopeComponent::GetTrueLength(int32_t PieceIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDRopeComponent.GetTrueLength");
		
		UVDRopeComponent_GetTrueLength_Params params {};
		params.PieceIndex = PieceIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDRopeComponent.GetPieces
	 * 		Flags  -> ()
	 */
	TArray<struct FRopePiece> UVDRopeComponent::GetPieces()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDRopeComponent.GetPieces");
		
		UVDRopeComponent_GetPieces_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDRopeComponent.CreateRopeGeometry_BP
	 * 		Flags  -> ()
	 */
	void UVDRopeComponent::CreateRopeGeometry_BP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDRopeComponent.CreateRopeGeometry_BP");
		
		UVDRopeComponent_CreateRopeGeometry_BP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDRopeComponent.BreakAtSegment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SegmentIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVDRopeComponent::BreakAtSegment(int32_t SegmentIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDRopeComponent.BreakAtSegment");
		
		UVDRopeComponent_BreakAtSegment_Params params {};
		params.SegmentIndex = SegmentIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVDRopeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVDRopeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VICODynamicsPlugin.VDRopeComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDDynamicRopeComponent.RebuildRopeAttached
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DistancePerSegment                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USceneComponent*                             StartAttachedTo                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        StartSocket                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               StartSimulateTension                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USceneComponent*                             EndAttachedTo                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        EndSocket                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               EndSimulateTension                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVDDynamicRopeComponent::RebuildRopeAttached(float DistancePerSegment, class USceneComponent* StartAttachedTo, const class FName& StartSocket, bool StartSimulateTension, class USceneComponent* EndAttachedTo, const class FName& EndSocket, bool EndSimulateTension)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDDynamicRopeComponent.RebuildRopeAttached");
		
		UVDDynamicRopeComponent_RebuildRopeAttached_Params params {};
		params.DistancePerSegment = DistancePerSegment;
		params.StartAttachedTo = StartAttachedTo;
		params.StartSocket = StartSocket;
		params.StartSimulateTension = StartSimulateTension;
		params.EndAttachedTo = EndAttachedTo;
		params.EndSocket = EndSocket;
		params.EndSimulateTension = EndSimulateTension;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDDynamicRopeComponent.RebuildRopeAtPoints
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DistancePerSegment                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     StartLocation                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     EndLocation                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRelativeLocations                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVDDynamicRopeComponent::RebuildRopeAtPoints(float DistancePerSegment, const struct FVector& StartLocation, const struct FVector& EndLocation, bool bRelativeLocations)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDDynamicRopeComponent.RebuildRopeAtPoints");
		
		UVDDynamicRopeComponent_RebuildRopeAtPoints_Params params {};
		params.DistancePerSegment = DistancePerSegment;
		params.StartLocation = StartLocation;
		params.EndLocation = EndLocation;
		params.bRelativeLocations = bRelativeLocations;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDDynamicRopeComponent.RebuildRope
	 * 		Flags  -> ()
	 */
	void UVDDynamicRopeComponent::RebuildRope()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDDynamicRopeComponent.RebuildRope");
		
		UVDDynamicRopeComponent_RebuildRope_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVDDynamicRopeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVDDynamicRopeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VICODynamicsPlugin.VDDynamicRopeComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDMeshClothComponent.GetVolumeConstraint
	 * 		Flags  -> ()
	 */
	class UVDMeshVolumeConstraint* UVDMeshClothComponent::GetVolumeConstraint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDMeshClothComponent.GetVolumeConstraint");
		
		UVDMeshClothComponent_GetVolumeConstraint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDMeshClothComponent.GetStretchConstraintsArray
	 * 		Flags  -> ()
	 */
	TArray<class UVDParticleSpringConstraint*> UVDMeshClothComponent::GetStretchConstraintsArray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDMeshClothComponent.GetStretchConstraintsArray");
		
		UVDMeshClothComponent_GetStretchConstraintsArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDMeshClothComponent.GetBendConstraintsArray
	 * 		Flags  -> ()
	 */
	TArray<class UVDParticleSpringConstraint*> UVDMeshClothComponent::GetBendConstraintsArray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDMeshClothComponent.GetBendConstraintsArray");
		
		UVDMeshClothComponent_GetBendConstraintsArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVDMeshClothComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVDMeshClothComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VICODynamicsPlugin.VDMeshClothComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDMeshVolumeConstraint.SetRestVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewVolume                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVDMeshVolumeConstraint::SetRestVolume(float NewVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDMeshVolumeConstraint.SetRestVolume");
		
		UVDMeshVolumeConstraint_SetRestVolume_Params params {};
		params.NewVolume = NewVolume;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDMeshVolumeConstraint.GetRestVolume
	 * 		Flags  -> ()
	 */
	float UVDMeshVolumeConstraint::GetRestVolume()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDMeshVolumeConstraint.GetRestVolume");
		
		UVDMeshVolumeConstraint_GetRestVolume_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDMeshVolumeConstraint.GetCurrentVolume
	 * 		Flags  -> ()
	 */
	float UVDMeshVolumeConstraint::GetCurrentVolume()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDMeshVolumeConstraint.GetCurrentVolume");
		
		UVDMeshVolumeConstraint_GetCurrentVolume_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVDMeshVolumeConstraint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVDMeshVolumeConstraint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VICODynamicsPlugin.VDMeshVolumeConstraint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDParticleSpringConstraint.SetStiffness
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewStiffness                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVDParticleSpringConstraint::SetStiffness(float NewStiffness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDParticleSpringConstraint.SetStiffness");
		
		UVDParticleSpringConstraint_SetStiffness_Params params {};
		params.NewStiffness = NewStiffness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDParticleSpringConstraint.SetRestDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewRestDistance                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVDParticleSpringConstraint::SetRestDistance(float NewRestDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDParticleSpringConstraint.SetRestDistance");
		
		UVDParticleSpringConstraint_SetRestDistance_Params params {};
		params.NewRestDistance = NewRestDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDParticleSpringConstraint.IsConstraining
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVDSimulatedParticle*                        Particle1                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UVDSimulatedParticle*                        Particle2                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVDParticleSpringConstraint::IsConstraining(class UVDSimulatedParticle* Particle1, class UVDSimulatedParticle* Particle2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDParticleSpringConstraint.IsConstraining");
		
		UVDParticleSpringConstraint_IsConstraining_Params params {};
		params.Particle1 = Particle1;
		params.Particle2 = Particle2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDParticleSpringConstraint.GetStifffness
	 * 		Flags  -> ()
	 */
	float UVDParticleSpringConstraint::GetStifffness()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDParticleSpringConstraint.GetStifffness");
		
		UVDParticleSpringConstraint_GetStifffness_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDParticleSpringConstraint.GetRestDistance
	 * 		Flags  -> ()
	 */
	float UVDParticleSpringConstraint::GetRestDistance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDParticleSpringConstraint.GetRestDistance");
		
		UVDParticleSpringConstraint_GetRestDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDParticleSpringConstraint.GetParticle2
	 * 		Flags  -> ()
	 */
	class UVDSimulatedParticle* UVDParticleSpringConstraint::GetParticle2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDParticleSpringConstraint.GetParticle2");
		
		UVDParticleSpringConstraint_GetParticle2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDParticleSpringConstraint.GetParticle1
	 * 		Flags  -> ()
	 */
	class UVDSimulatedParticle* UVDParticleSpringConstraint::GetParticle1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDParticleSpringConstraint.GetParticle1");
		
		UVDParticleSpringConstraint_GetParticle1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVDParticleSpringConstraint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVDParticleSpringConstraint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VICODynamicsPlugin.VDParticleSpringConstraint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVDProceduralClothComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVDProceduralClothComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VICODynamicsPlugin.VDProceduralClothComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedObject.SetSkipRelativeVelocityCheckDuringCollision
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Skip                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVDSimulatedObject::SetSkipRelativeVelocityCheckDuringCollision(bool Skip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulatedObject.SetSkipRelativeVelocityCheckDuringCollision");
		
		UVDSimulatedObject_SetSkipRelativeVelocityCheckDuringCollision_Params params {};
		params.Skip = Skip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedObject.SetObjectType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECollisionChannel                                  ObjectType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVDSimulatedObject::SetObjectType(ECollisionChannel ObjectType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulatedObject.SetObjectType");
		
		UVDSimulatedObject_SetObjectType_Params params {};
		params.ObjectType = ObjectType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedObject.SetMinimumConstraintSatisfactionDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              MinDistance                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVDSimulatedObject::SetMinimumConstraintSatisfactionDistance(float MinDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulatedObject.SetMinimumConstraintSatisfactionDistance");
		
		UVDSimulatedObject_SetMinimumConstraintSatisfactionDistance_Params params {};
		params.MinDistance = MinDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedObject.SetGravityScale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVDSimulatedObject::SetGravityScale(float Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulatedObject.SetGravityScale");
		
		UVDSimulatedObject_SetGravityScale_Params params {};
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedObject.SetCollisionResponseToObjectType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECollisionChannel                                  ObjectType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECollisionResponse                                 Response                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVDSimulatedObject::SetCollisionResponseToObjectType(ECollisionChannel ObjectType, ECollisionResponse Response)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulatedObject.SetCollisionResponseToObjectType");
		
		UVDSimulatedObject_SetCollisionResponseToObjectType_Params params {};
		params.ObjectType = ObjectType;
		params.Response = Response;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedObject.SetCollisionEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVDSimulatedObject::SetCollisionEnabled(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulatedObject.SetCollisionEnabled");
		
		UVDSimulatedObject_SetCollisionEnabled_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedObject.SetCollisionChannel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECollisionChannel                                  Channel                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVDSimulatedObject::SetCollisionChannel(ECollisionChannel Channel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulatedObject.SetCollisionChannel");
		
		UVDSimulatedObject_SetCollisionChannel_Params params {};
		params.Channel = Channel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedObject.SetAffectiveWindVector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     NewWindVector                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVDSimulatedObject::SetAffectiveWindVector(const struct FVector& NewWindVector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulatedObject.SetAffectiveWindVector");
		
		UVDSimulatedObject_SetAffectiveWindVector_Params params {};
		params.NewWindVector = NewWindVector;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedObject.GetSpringConstraints
	 * 		Flags  -> ()
	 */
	TArray<class UVDParticleSpringConstraint*> UVDSimulatedObject::GetSpringConstraints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulatedObject.GetSpringConstraints");
		
		UVDSimulatedObject_GetSpringConstraints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedObject.GetSkipRelativeVelocityCheckDuringCollision
	 * 		Flags  -> ()
	 */
	bool UVDSimulatedObject::GetSkipRelativeVelocityCheckDuringCollision()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulatedObject.GetSkipRelativeVelocityCheckDuringCollision");
		
		UVDSimulatedObject_GetSkipRelativeVelocityCheckDuringCollision_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedObject.GetParticles
	 * 		Flags  -> ()
	 */
	TArray<class UVDSimulatedParticle*> UVDSimulatedObject::GetParticles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulatedObject.GetParticles");
		
		UVDSimulatedObject_GetParticles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedObject.GetMinimumConstraintSatisfactionDistance
	 * 		Flags  -> ()
	 */
	float UVDSimulatedObject::GetMinimumConstraintSatisfactionDistance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulatedObject.GetMinimumConstraintSatisfactionDistance");
		
		UVDSimulatedObject_GetMinimumConstraintSatisfactionDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedObject.GetGravityScale
	 * 		Flags  -> ()
	 */
	float UVDSimulatedObject::GetGravityScale()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulatedObject.GetGravityScale");
		
		UVDSimulatedObject_GetGravityScale_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedObject.GetCollisionSettings
	 * 		Flags  -> ()
	 */
	struct FVDCollisionSettings UVDSimulatedObject::GetCollisionSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulatedObject.GetCollisionSettings");
		
		UVDSimulatedObject_GetCollisionSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedObject.GetCollisionEnabled
	 * 		Flags  -> ()
	 */
	bool UVDSimulatedObject::GetCollisionEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulatedObject.GetCollisionEnabled");
		
		UVDSimulatedObject_GetCollisionEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedObject.GetAffectiveWindVector
	 * 		Flags  -> ()
	 */
	struct FVector UVDSimulatedObject::GetAffectiveWindVector()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulatedObject.GetAffectiveWindVector");
		
		UVDSimulatedObject_GetAffectiveWindVector_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedObject.DestroyVolumeConstraint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVDMeshVolumeConstraint*                     Constraint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVDSimulatedObject::DestroyVolumeConstraint(class UVDMeshVolumeConstraint* Constraint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulatedObject.DestroyVolumeConstraint");
		
		UVDSimulatedObject_DestroyVolumeConstraint_Params params {};
		params.Constraint = Constraint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedObject.DestroyParticle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVDSimulatedParticle*                        Particle                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVDSimulatedObject::DestroyParticle(class UVDSimulatedParticle* Particle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulatedObject.DestroyParticle");
		
		UVDSimulatedObject_DestroyParticle_Params params {};
		params.Particle = Particle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedObject.DestroyConstraint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVDParticleSpringConstraint*                 Constraint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVDSimulatedObject::DestroyConstraint(class UVDParticleSpringConstraint* Constraint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulatedObject.DestroyConstraint");
		
		UVDSimulatedObject_DestroyConstraint_Params params {};
		params.Constraint = Constraint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedObject.CreateVolumeConstraint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    IndexList                                                  (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		float                                              Alpha                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              RestVolume                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UVDMeshVolumeConstraint* UVDSimulatedObject::CreateVolumeConstraint(TArray<int32_t> IndexList, float Alpha, float RestVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulatedObject.CreateVolumeConstraint");
		
		UVDSimulatedObject_CreateVolumeConstraint_Params params {};
		params.IndexList = IndexList;
		params.Alpha = Alpha;
		params.RestVolume = RestVolume;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedObject.CreateSpringConstraint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVDSimulatedParticle*                        Particle1                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UVDSimulatedParticle*                        Particle2                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              RestDistance                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Stiffness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UVDParticleSpringConstraint* UVDSimulatedObject::CreateSpringConstraint(class UVDSimulatedParticle* Particle1, class UVDSimulatedParticle* Particle2, float RestDistance, float Stiffness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulatedObject.CreateSpringConstraint");
		
		UVDSimulatedObject_CreateSpringConstraint_Params params {};
		params.Particle1 = Particle1;
		params.Particle2 = Particle2;
		params.RestDistance = RestDistance;
		params.Stiffness = Stiffness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedObject.CreateParticle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVDParticleInfo                             ParticleInfo                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UVDSimulatedParticle* UVDSimulatedObject::CreateParticle(const struct FVDParticleInfo& ParticleInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulatedObject.CreateParticle");
		
		UVDSimulatedObject_CreateParticle_Params params {};
		params.ParticleInfo = ParticleInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVDSimulatedObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVDSimulatedObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VICODynamicsPlugin.VDSimulatedObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedParticle.SetVelocity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     NewVelocity                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVDSimulatedParticle::SetVelocity(const struct FVector& NewVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulatedParticle.SetVelocity");
		
		UVDSimulatedParticle_SetVelocity_Params params {};
		params.NewVelocity = NewVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedParticle.SetRestitutionCoefficient
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewRestitutionCoefficient                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVDSimulatedParticle::SetRestitutionCoefficient(float NewRestitutionCoefficient)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulatedParticle.SetRestitutionCoefficient");
		
		UVDSimulatedParticle_SetRestitutionCoefficient_Params params {};
		params.NewRestitutionCoefficient = NewRestitutionCoefficient;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedParticle.SetRadius
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewRadius                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVDSimulatedParticle::SetRadius(float NewRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulatedParticle.SetRadius");
		
		UVDSimulatedParticle_SetRadius_Params params {};
		params.NewRadius = NewRadius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedParticle.SetMass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewMass                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVDSimulatedParticle::SetMass(float NewMass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulatedParticle.SetMass");
		
		UVDSimulatedParticle_SetMass_Params params {};
		params.NewMass = NewMass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedParticle.SetLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     NewLocation                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVDSimulatedParticle::SetLocation(const struct FVector& NewLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulatedParticle.SetLocation");
		
		UVDSimulatedParticle_SetLocation_Params params {};
		params.NewLocation = NewLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedParticle.SetIsWindOccluded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOccluded                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVDSimulatedParticle::SetIsWindOccluded(bool IsOccluded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulatedParticle.SetIsWindOccluded");
		
		UVDSimulatedParticle_SetIsWindOccluded_Params params {};
		params.IsOccluded = IsOccluded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedParticle.SetIsRigidBodyCollisionEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVDSimulatedParticle::SetIsRigidBodyCollisionEnabled(bool IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulatedParticle.SetIsRigidBodyCollisionEnabled");
		
		UVDSimulatedParticle_SetIsRigidBodyCollisionEnabled_Params params {};
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedParticle.SetIsParticleCollisionEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVDSimulatedParticle::SetIsParticleCollisionEnabled(bool IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulatedParticle.SetIsParticleCollisionEnabled");
		
		UVDSimulatedParticle_SetIsParticleCollisionEnabled_Params params {};
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedParticle.SetIsFree
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsFree                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVDSimulatedParticle::SetIsFree(bool IsFree)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulatedParticle.SetIsFree");
		
		UVDSimulatedParticle_SetIsFree_Params params {};
		params.IsFree = IsFree;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedParticle.SetFrictionCoefficient
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewFrictionCoefficient                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVDSimulatedParticle::SetFrictionCoefficient(float NewFrictionCoefficient)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulatedParticle.SetFrictionCoefficient");
		
		UVDSimulatedParticle_SetFrictionCoefficient_Params params {};
		params.NewFrictionCoefficient = NewFrictionCoefficient;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedParticle.SetDragCoefficient
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewDragCoefficient                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVDSimulatedParticle::SetDragCoefficient(float NewDragCoefficient)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulatedParticle.SetDragCoefficient");
		
		UVDSimulatedParticle_SetDragCoefficient_Params params {};
		params.NewDragCoefficient = NewDragCoefficient;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedParticle.GetVelocity
	 * 		Flags  -> ()
	 */
	struct FVector UVDSimulatedParticle::GetVelocity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulatedParticle.GetVelocity");
		
		UVDSimulatedParticle_GetVelocity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedParticle.GetRestitutionCoefficient
	 * 		Flags  -> ()
	 */
	float UVDSimulatedParticle::GetRestitutionCoefficient()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulatedParticle.GetRestitutionCoefficient");
		
		UVDSimulatedParticle_GetRestitutionCoefficient_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedParticle.GetRadius
	 * 		Flags  -> ()
	 */
	float UVDSimulatedParticle::GetRadius()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulatedParticle.GetRadius");
		
		UVDSimulatedParticle_GetRadius_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedParticle.GetMass
	 * 		Flags  -> ()
	 */
	float UVDSimulatedParticle::GetMass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulatedParticle.GetMass");
		
		UVDSimulatedParticle_GetMass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedParticle.GetLocation
	 * 		Flags  -> ()
	 */
	struct FVector UVDSimulatedParticle::GetLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulatedParticle.GetLocation");
		
		UVDSimulatedParticle_GetLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedParticle.GetIsWindOccluded
	 * 		Flags  -> ()
	 */
	bool UVDSimulatedParticle::GetIsWindOccluded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulatedParticle.GetIsWindOccluded");
		
		UVDSimulatedParticle_GetIsWindOccluded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedParticle.GetIsRigidBodyCollisionEnabled
	 * 		Flags  -> ()
	 */
	bool UVDSimulatedParticle::GetIsRigidBodyCollisionEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulatedParticle.GetIsRigidBodyCollisionEnabled");
		
		UVDSimulatedParticle_GetIsRigidBodyCollisionEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedParticle.GetIsParticleCollisionEnabled
	 * 		Flags  -> ()
	 */
	bool UVDSimulatedParticle::GetIsParticleCollisionEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulatedParticle.GetIsParticleCollisionEnabled");
		
		UVDSimulatedParticle_GetIsParticleCollisionEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedParticle.GetIsFree
	 * 		Flags  -> ()
	 */
	bool UVDSimulatedParticle::GetIsFree()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulatedParticle.GetIsFree");
		
		UVDSimulatedParticle_GetIsFree_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedParticle.GetFrictionCoefficient
	 * 		Flags  -> ()
	 */
	float UVDSimulatedParticle::GetFrictionCoefficient()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulatedParticle.GetFrictionCoefficient");
		
		UVDSimulatedParticle_GetFrictionCoefficient_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedParticle.GetDragCoefficient
	 * 		Flags  -> ()
	 */
	float UVDSimulatedParticle::GetDragCoefficient()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulatedParticle.GetDragCoefficient");
		
		UVDSimulatedParticle_GetDragCoefficient_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedParticle.GetAttachment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVDParticleAttachment                       OutAttachment                                              (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool UVDSimulatedParticle::GetAttachment(struct FVDParticleAttachment* OutAttachment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulatedParticle.GetAttachment");
		
		UVDSimulatedParticle_GetAttachment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAttachment != nullptr)
			*OutAttachment = params.OutAttachment;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedParticle.Detach
	 * 		Flags  -> ()
	 */
	void UVDSimulatedParticle::Detach()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulatedParticle.Detach");
		
		UVDSimulatedParticle_Detach_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedParticle.CopyAttachment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVDParticleAttachment                       attachment                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               UseCurrentMass                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVDSimulatedParticle::CopyAttachment(const struct FVDParticleAttachment& attachment, bool UseCurrentMass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulatedParticle.CopyAttachment");
		
		UVDSimulatedParticle_CopyAttachment_Params params {};
		params.attachment = attachment;
		params.UseCurrentMass = UseCurrentMass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedParticle.AttachToLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsRelative                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVDSimulatedParticle::AttachToLocation(const struct FVector& Location, bool IsRelative)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulatedParticle.AttachToLocation");
		
		UVDSimulatedParticle_AttachToLocation_Params params {};
		params.Location = Location;
		params.IsRelative = IsRelative;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedParticle.AttachToComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               SimulateTension                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Socket                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVDSimulatedParticle::AttachToComponent(class UPrimitiveComponent* Component, const struct FVector& Location, bool SimulateTension, const class FName& Socket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulatedParticle.AttachToComponent");
		
		UVDSimulatedParticle_AttachToComponent_Params params {};
		params.Component = Component;
		params.Location = Location;
		params.SimulateTension = SimulateTension;
		params.Socket = Socket;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedParticle.AttachToActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               SimulateTension                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Socket                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVDSimulatedParticle::AttachToActor(class AActor* Actor, const struct FVector& Location, bool SimulateTension, const class FName& Socket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulatedParticle.AttachToActor");
		
		UVDSimulatedParticle_AttachToActor_Params params {};
		params.Actor = Actor;
		params.Location = Location;
		params.SimulateTension = SimulateTension;
		params.Socket = Socket;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedParticle.AddForce
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     force                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVDSimulatedParticle::AddForce(const struct FVector& force)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulatedParticle.AddForce");
		
		UVDSimulatedParticle_AddForce_Params params {};
		params.force = force;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVDSimulatedParticle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVDSimulatedParticle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VICODynamicsPlugin.VDSimulatedParticle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulation.SetSubstepCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SubstepCount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVDSimulation::SetSubstepCount(int32_t SubstepCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulation.SetSubstepCount");
		
		UVDSimulation_SetSubstepCount_Params params {};
		params.SubstepCount = SubstepCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulation.SetSelfCollisionEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVDSimulation::SetSelfCollisionEnabled(bool IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulation.SetSelfCollisionEnabled");
		
		UVDSimulation_SetSelfCollisionEnabled_Params params {};
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulation.SetPhysXSceneCollisionEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVDSimulation::SetPhysXSceneCollisionEnabled(bool IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulation.SetPhysXSceneCollisionEnabled");
		
		UVDSimulation_SetPhysXSceneCollisionEnabled_Params params {};
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulation.SetPerFrameCollisionCacheEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVDSimulation::SetPerFrameCollisionCacheEnable(bool IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulation.SetPerFrameCollisionCacheEnable");
		
		UVDSimulation_SetPerFrameCollisionCacheEnable_Params params {};
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulation.SetPerformExtraCollisionResolutionLoop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVDSimulation::SetPerformExtraCollisionResolutionLoop(bool IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulation.SetPerformExtraCollisionResolutionLoop");
		
		UVDSimulation_SetPerformExtraCollisionResolutionLoop_Params params {};
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulation.SetIsExplicitRigidBodyCollisionEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVDSimulation::SetIsExplicitRigidBodyCollisionEnabled(bool IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulation.SetIsExplicitRigidBodyCollisionEnabled");
		
		UVDSimulation_SetIsExplicitRigidBodyCollisionEnabled_Params params {};
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulation.SetFrameRate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            FrameRate                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVDSimulation::SetFrameRate(int32_t FrameRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulation.SetFrameRate");
		
		UVDSimulation_SetFrameRate_Params params {};
		params.FrameRate = FrameRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulation.SetConstraintIterationCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ConstraintIterationCount                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVDSimulation::SetConstraintIterationCount(int32_t ConstraintIterationCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulation.SetConstraintIterationCount");
		
		UVDSimulation_SetConstraintIterationCount_Params params {};
		params.ConstraintIterationCount = ConstraintIterationCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulation.SetConstrainSimulationTo2DPlane
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVDSimulation::SetConstrainSimulationTo2DPlane(bool IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulation.SetConstrainSimulationTo2DPlane");
		
		UVDSimulation_SetConstrainSimulationTo2DPlane_Params params {};
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulation.SetConstrainPlaneOrigin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Origin                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVDSimulation::SetConstrainPlaneOrigin(const struct FVector& Origin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulation.SetConstrainPlaneOrigin");
		
		UVDSimulation_SetConstrainPlaneOrigin_Params params {};
		params.Origin = Origin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulation.SetConstrainPlaneNormal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Normal                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVDSimulation::SetConstrainPlaneNormal(const struct FVector& Normal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulation.SetConstrainPlaneNormal");
		
		UVDSimulation_SetConstrainPlaneNormal_Params params {};
		params.Normal = Normal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulation.RemoveExplicitColliderMapping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBaseVDComponent*                            VDComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         Collider                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVDSimulation::RemoveExplicitColliderMapping(class UBaseVDComponent* VDComponent, class UPrimitiveComponent* Collider)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulation.RemoveExplicitColliderMapping");
		
		UVDSimulation_RemoveExplicitColliderMapping_Params params {};
		params.VDComponent = VDComponent;
		params.Collider = Collider;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulation.RemoveAllExplicitColliderMappings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBaseVDComponent*                            VDComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVDSimulation::RemoveAllExplicitColliderMappings(class UBaseVDComponent* VDComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulation.RemoveAllExplicitColliderMappings");
		
		UVDSimulation_RemoveAllExplicitColliderMappings_Params params {};
		params.VDComponent = VDComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulation.k2QuerySphereOverlaps
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UVDSimulatedParticle*>                Overlaps                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<class UVDSimulatedObject*>                  SimObjectsToIgnore                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxOverlaps                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVDSimulation::k2QuerySphereOverlaps(const struct FVector& Location, float Radius, TArray<class UVDSimulatedParticle*>* Overlaps, TArray<class UVDSimulatedObject*> SimObjectsToIgnore, int32_t MaxOverlaps)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulation.k2QuerySphereOverlaps");
		
		UVDSimulation_k2QuerySphereOverlaps_Params params {};
		params.Location = Location;
		params.Radius = Radius;
		params.SimObjectsToIgnore = SimObjectsToIgnore;
		params.MaxOverlaps = MaxOverlaps;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Overlaps != nullptr)
			*Overlaps = params.Overlaps;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulation.k2QueryBoxOverlaps
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     HalfExtents                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UVDSimulatedParticle*>                Overlaps                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<class UVDSimulatedObject*>                  SimObjectsToIgnore                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxOverlaps                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVDSimulation::k2QueryBoxOverlaps(const struct FVector& Location, const struct FVector& HalfExtents, TArray<class UVDSimulatedParticle*>* Overlaps, TArray<class UVDSimulatedObject*> SimObjectsToIgnore, int32_t MaxOverlaps)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulation.k2QueryBoxOverlaps");
		
		UVDSimulation_k2QueryBoxOverlaps_Params params {};
		params.Location = Location;
		params.HalfExtents = HalfExtents;
		params.SimObjectsToIgnore = SimObjectsToIgnore;
		params.MaxOverlaps = MaxOverlaps;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Overlaps != nullptr)
			*Overlaps = params.Overlaps;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulation.GetSettings
	 * 		Flags  -> ()
	 */
	struct FVDSettings UVDSimulation::GetSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulation.GetSettings");
		
		UVDSimulation_GetSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulation.GetIsRunningOnWorkerThread
	 * 		Flags  -> ()
	 */
	bool UVDSimulation::GetIsRunningOnWorkerThread()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulation.GetIsRunningOnWorkerThread");
		
		UVDSimulation_GetIsRunningOnWorkerThread_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulation.GetIsExplicitRigidBodyCollisionEnabled
	 * 		Flags  -> ()
	 */
	bool UVDSimulation::GetIsExplicitRigidBodyCollisionEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulation.GetIsExplicitRigidBodyCollisionEnabled");
		
		UVDSimulation_GetIsExplicitRigidBodyCollisionEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulation.GetDirectionalWindParameters
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBaseVDComponent*                            VDComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutDirection                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutSpeed                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutGust                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVDSimulation::GetDirectionalWindParameters(class UBaseVDComponent* VDComponent, struct FVector* OutDirection, float* OutSpeed, float* OutGust)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulation.GetDirectionalWindParameters");
		
		UVDSimulation_GetDirectionalWindParameters_Params params {};
		params.VDComponent = VDComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutDirection != nullptr)
			*OutDirection = params.OutDirection;
		if (OutSpeed != nullptr)
			*OutSpeed = params.OutSpeed;
		if (OutGust != nullptr)
			*OutGust = params.OutGust;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulation.AddExplicitColliderMapping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBaseVDComponent*                            VDComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         Collider                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IgnoreConvexShapes                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVDSimulation::AddExplicitColliderMapping(class UBaseVDComponent* VDComponent, class UPrimitiveComponent* Collider, bool IgnoreConvexShapes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulation.AddExplicitColliderMapping");
		
		UVDSimulation_AddExplicitColliderMapping_Params params {};
		params.VDComponent = VDComponent;
		params.Collider = Collider;
		params.IgnoreConvexShapes = IgnoreConvexShapes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVDSimulation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVDSimulation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VICODynamicsPlugin.VDSimulation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulationSettingsActor.GetSettings
	 * 		Flags  -> ()
	 */
	struct FVDSettings AVDSimulationSettingsActor::GetSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDSimulationSettingsActor.GetSettings");
		
		AVDSimulationSettingsActor_GetSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AVDSimulationSettingsActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVDSimulationSettingsActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VICODynamicsPlugin.VDSimulationSettingsActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVDSkinnedRopeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVDSkinnedRopeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VICODynamicsPlugin.VDSkinnedRopeComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVDSplineRopeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVDSplineRopeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VICODynamicsPlugin.VDSplineRopeComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AVDWindDirectionalSourceActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVDWindDirectionalSourceActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VICODynamicsPlugin.VDWindDirectionalSourceActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDWindDirectionalSourceComponent.SetRadius
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InRadius                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVDWindDirectionalSourceComponent::SetRadius(float InRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDWindDirectionalSourceComponent.SetRadius");
		
		UVDWindDirectionalSourceComponent_SetRadius_Params params {};
		params.InRadius = InRadius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDWindDirectionalSourceComponent.GetCurrentGust
	 * 		Flags  -> ()
	 */
	float UVDWindDirectionalSourceComponent::GetCurrentGust()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VICODynamicsPlugin.VDWindDirectionalSourceComponent.GetCurrentGust");
		
		UVDWindDirectionalSourceComponent_GetCurrentGust_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVDWindDirectionalSourceComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVDWindDirectionalSourceComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VICODynamicsPlugin.VDWindDirectionalSourceComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVICODynamicsSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVICODynamicsSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VICODynamicsPlugin.VICODynamicsSettings");
		return ptr;
	}

}


