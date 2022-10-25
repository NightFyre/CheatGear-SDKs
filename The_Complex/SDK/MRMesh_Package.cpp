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
	 * 		RVA    -> 0x02B113C0
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
	 * 		RVA    -> 0x02B113A0
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
	 * 		RVA    -> 0x02B111B0
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
	 * 		RVA    -> 0x02B11180
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
	 * 		RVA    -> 0x01001140
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
	 * 		RVA    -> 0x02B11000
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
	 * 		RVA    -> 0x02B10EE0
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
	 * 		RVA    -> 0x01766520
	 * 		Name   -> DelegateFunction MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector>                             Vertices                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    Triangles                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector>                             Normals                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      Confidence                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
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
	 * 		RVA    -> 0x02B11020
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
	 * 		RVA    -> 0x02B10F70
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMRMeshBodyHolder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMRMeshBodyHolder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MRMesh.MRMeshBodyHolder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F3F800
	 * 		Name   -> Function MRMesh.MRMeshComponent.SetWireframeMaterial
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMaterialInterface*                          InMaterial                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMRMeshComponent::SetWireframeMaterial(class UMaterialInterface* InMaterial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MRMesh.MRMeshComponent.SetWireframeMaterial");
		
		UMRMeshComponent_SetWireframeMaterial_Params params {};
		params.InMaterial = InMaterial;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B11310
	 * 		Name   -> Function MRMesh.MRMeshComponent.SetWireframeColor
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FLinearColor                                InColor                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMRMeshComponent::SetWireframeColor(const struct FLinearColor& InColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MRMesh.MRMeshComponent.SetWireframeColor");
		
		UMRMeshComponent_SetWireframeColor_Params params {};
		params.InColor = InColor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B11280
	 * 		Name   -> Function MRMesh.MRMeshComponent.SetUseWireframe
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bUseWireframe                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMRMeshComponent::SetUseWireframe(bool bUseWireframe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MRMesh.MRMeshComponent.SetUseWireframe");
		
		UMRMeshComponent_SetUseWireframe_Params params {};
		params.bUseWireframe = bUseWireframe;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B111F0
	 * 		Name   -> Function MRMesh.MRMeshComponent.SetEnableMeshOcclusion
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMRMeshComponent::SetEnableMeshOcclusion(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MRMesh.MRMeshComponent.SetEnableMeshOcclusion");
		
		UMRMeshComponent_SetEnableMeshOcclusion_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B111D0
	 * 		Name   -> Function MRMesh.MRMeshComponent.RequestNavMeshUpdate
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UMRMeshComponent::RequestNavMeshUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MRMesh.MRMeshComponent.RequestNavMeshUpdate");
		
		UMRMeshComponent_RequestNavMeshUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B11140
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
	 * 		RVA    -> 0x02B11110
	 * 		Name   -> Function MRMesh.MRMeshComponent.GetWireframeColor
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FLinearColor UMRMeshComponent::GetWireframeColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MRMesh.MRMeshComponent.GetWireframeColor");
		
		UMRMeshComponent_GetWireframeColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B110F0
	 * 		Name   -> Function MRMesh.MRMeshComponent.GetUseWireframe
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UMRMeshComponent::GetUseWireframe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MRMesh.MRMeshComponent.GetUseWireframe");
		
		UMRMeshComponent_GetUseWireframe_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B110D0
	 * 		Name   -> Function MRMesh.MRMeshComponent.GetEnableMeshOcclusion
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UMRMeshComponent::GetEnableMeshOcclusion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MRMesh.MRMeshComponent.GetEnableMeshOcclusion");
		
		UMRMeshComponent_GetEnableMeshOcclusion_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B110B0
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
	 * 		RVA    -> 0x02B10EB0
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


