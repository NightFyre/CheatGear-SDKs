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
	 * 		RVA    -> 0x04FDFB40
	 * 		Name   -> Function MRMesh.MeshReconstructorBase.StopReconstruction
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UMeshReconstructorBase::StopReconstruction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MRMesh.MeshReconstructorBase.StopReconstruction");
		
		UMeshReconstructorBase_StopReconstruction_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06548FF0
	 * 		Name   -> Function MRMesh.MeshReconstructorBase.StartReconstruction
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UMeshReconstructorBase::StartReconstruction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MRMesh.MeshReconstructorBase.StartReconstruction");
		
		UMeshReconstructorBase_StartReconstruction_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FE3A30
	 * 		Name   -> Function MRMesh.MeshReconstructorBase.PauseReconstruction
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UMeshReconstructorBase::PauseReconstruction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MRMesh.MeshReconstructorBase.PauseReconstruction");
		
		UMeshReconstructorBase_PauseReconstruction_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06548FC0
	 * 		Name   -> Function MRMesh.MeshReconstructorBase.IsReconstructionStarted
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UMeshReconstructorBase::IsReconstructionStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MRMesh.MeshReconstructorBase.IsReconstructionStarted");
		
		UMeshReconstructorBase_IsReconstructionStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06548F90
	 * 		Name   -> Function MRMesh.MeshReconstructorBase.IsReconstructionPaused
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UMeshReconstructorBase::IsReconstructionPaused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MRMesh.MeshReconstructorBase.IsReconstructionPaused");
		
		UMeshReconstructorBase_IsReconstructionPaused_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F35FD0
	 * 		Name   -> Function MRMesh.MeshReconstructorBase.DisconnectMRMesh
	 * 		Flags  -> (Native, Public)
	 */
	void UMeshReconstructorBase::DisconnectMRMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MRMesh.MeshReconstructorBase.DisconnectMRMesh");
		
		UMeshReconstructorBase_DisconnectMRMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F95A30
	 * 		Name   -> Function MRMesh.MeshReconstructorBase.ConnectMRMesh
	 * 		Flags  -> (Native, Public)
	 * Parameters:
	 * 		class UMRMeshComponent*                            Mesh                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMeshReconstructorBase::ConnectMRMesh(class UMRMeshComponent* Mesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MRMesh.MeshReconstructorBase.ConnectMRMesh");
		
		UMeshReconstructorBase_ConnectMRMesh_Params params {};
		params.Mesh = Mesh;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshReconstructorBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshReconstructorBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MRMesh.MeshReconstructorBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> DelegateFunction MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector>                             Vertices                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    Triangles                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector>                             Normals                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      Confidence                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMockDataMeshTrackerComponent::OnMockDataMeshTrackerUpdated__DelegateSignature(int32_t Index, TArray<struct FVector> Vertices, TArray<int32_t> Triangles, TArray<struct FVector> Normals, TArray<float> Confidence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature");
		
		UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Params params {};
		params.Index = Index;
		params.Vertices = Vertices;
		params.Triangles = Triangles;
		params.Normals = Normals;
		params.Confidence = Confidence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06548EB0
	 * 		Name   -> Function MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMRMeshComponent*                            InMRMeshPtr                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMockDataMeshTrackerComponent::DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh");
		
		UMockDataMeshTrackerComponent_DisconnectMRMesh_Params params {};
		params.InMRMeshPtr = InMRMeshPtr;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06548E30
	 * 		Name   -> Function MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMRMeshComponent*                            InMRMeshPtr                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMockDataMeshTrackerComponent::ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh");
		
		UMockDataMeshTrackerComponent_ConnectMRMesh_Params params {};
		params.InMRMeshPtr = InMRMeshPtr;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMockDataMeshTrackerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMockDataMeshTrackerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MRMesh.MockDataMeshTrackerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06548F50
	 * 		Name   -> Function MRMesh.MRMeshComponent.IsConnected
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UMRMeshComponent::IsConnected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MRMesh.MRMeshComponent.IsConnected");
		
		UMRMeshComponent_IsConnected_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06548F30
	 * 		Name   -> Function MRMesh.MRMeshComponent.ForceNavMeshUpdate
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UMRMeshComponent::ForceNavMeshUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MRMesh.MRMeshComponent.ForceNavMeshUpdate");
		
		UMRMeshComponent_ForceNavMeshUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06548E00
	 * 		Name   -> Function MRMesh.MRMeshComponent.Clear
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UMRMeshComponent::Clear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MRMesh.MRMeshComponent.Clear");
		
		UMRMeshComponent_Clear_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMRMeshComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMRMeshComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MRMesh.MRMeshComponent");
		return ptr;
	}

}


