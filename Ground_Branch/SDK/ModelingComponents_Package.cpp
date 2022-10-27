/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * 		Name   -> PredefinedFunction UBaseCreateFromSelectedToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseCreateFromSelectedToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.BaseCreateFromSelectedToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnAcceptHandleSourcesProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnAcceptHandleSourcesProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.OnAcceptHandleSourcesProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseCreateFromSelectedHandleSourceProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseCreateFromSelectedHandleSourceProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.BaseCreateFromSelectedHandleSourceProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTransformInputsToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTransformInputsToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.TransformInputsToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseCreateFromSelectedTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseCreateFromSelectedTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.BaseCreateFromSelectedTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseDynamicMeshComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseDynamicMeshComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.BaseDynamicMeshComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseMeshProcessingToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseMeshProcessingToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.BaseMeshProcessingToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseMeshProcessingTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseMeshProcessingTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.BaseMeshProcessingTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseVoxelTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseVoxelTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.BaseVoxelTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCollectSurfacePathMechanic.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCollectSurfacePathMechanic::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.CollectSurfacePathMechanic");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConstructionPlaneMechanic.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConstructionPlaneMechanic::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.ConstructionPlaneMechanic");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCurveControlPointsMechanic.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCurveControlPointsMechanic::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.CurveControlPointsMechanic");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDynamicMeshReplacementChangeTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDynamicMeshReplacementChangeTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.DynamicMeshReplacementChangeTarget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULineSetComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULineSetComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.LineSetComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshCommandChangeTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshCommandChangeTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.MeshCommandChangeTarget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshOpPreviewWithBackgroundCompute.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshOpPreviewWithBackgroundCompute::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.MeshOpPreviewWithBackgroundCompute");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshReplacementCommandChangeTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshReplacementCommandChangeTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.MeshReplacementCommandChangeTarget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshVertexCommandChangeTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshVertexCommandChangeTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.MeshVertexCommandChangeTarget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMultiTransformer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMultiTransformer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.MultiTransformer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOctreeDynamicMeshComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOctreeDynamicMeshComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.OctreeDynamicMeshComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlaneDistanceFromHitMechanic.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlaneDistanceFromHitMechanic::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.PlaneDistanceFromHitMechanic");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPointSetComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPointSetComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.PointSetComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPreviewMesh.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPreviewMesh::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.PreviewMesh");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPolyEditPreviewMesh.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPolyEditPreviewMesh::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.PolyEditPreviewMesh");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPolygonSelectionMechanicProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPolygonSelectionMechanicProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.PolygonSelectionMechanicProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPolygonSelectionMechanic.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPolygonSelectionMechanic::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.PolygonSelectionMechanic");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APreviewGeometryActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APreviewGeometryActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.PreviewGeometryActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ModelingComponents.PreviewGeometry.SetLineSetVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      LineSetIdentifier                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bVisible                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPreviewGeometry::SetLineSetVisibility(const class FString& LineSetIdentifier, bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModelingComponents.PreviewGeometry.SetLineSetVisibility");
		
		UPreviewGeometry_SetLineSetVisibility_Params params {};
		params.LineSetIdentifier = LineSetIdentifier;
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ModelingComponents.PreviewGeometry.SetLineSetMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      LineSetIdentifier                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMaterialInterface*                          NewMaterial                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPreviewGeometry::SetLineSetMaterial(const class FString& LineSetIdentifier, class UMaterialInterface* NewMaterial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModelingComponents.PreviewGeometry.SetLineSetMaterial");
		
		UPreviewGeometry_SetLineSetMaterial_Params params {};
		params.LineSetIdentifier = LineSetIdentifier;
		params.NewMaterial = NewMaterial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ModelingComponents.PreviewGeometry.SetAllLineSetsMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInterface*                          Material                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPreviewGeometry::SetAllLineSetsMaterial(class UMaterialInterface* Material)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModelingComponents.PreviewGeometry.SetAllLineSetsMaterial");
		
		UPreviewGeometry_SetAllLineSetsMaterial_Params params {};
		params.Material = Material;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ModelingComponents.PreviewGeometry.RemoveLineSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      LineSetIdentifier                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDestroy                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPreviewGeometry::RemoveLineSet(const class FString& LineSetIdentifier, bool bDestroy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModelingComponents.PreviewGeometry.RemoveLineSet");
		
		UPreviewGeometry_RemoveLineSet_Params params {};
		params.LineSetIdentifier = LineSetIdentifier;
		params.bDestroy = bDestroy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ModelingComponents.PreviewGeometry.RemoveAllLineSets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bDestroy                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPreviewGeometry::RemoveAllLineSets(bool bDestroy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModelingComponents.PreviewGeometry.RemoveAllLineSets");
		
		UPreviewGeometry_RemoveAllLineSets_Params params {};
		params.bDestroy = bDestroy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ModelingComponents.PreviewGeometry.GetActor
	 * 		Flags  -> ()
	 */
	class APreviewGeometryActor* UPreviewGeometry::GetActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModelingComponents.PreviewGeometry.GetActor");
		
		UPreviewGeometry_GetActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ModelingComponents.PreviewGeometry.FindLineSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      LineSetIdentifier                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULineSetComponent* UPreviewGeometry::FindLineSet(const class FString& LineSetIdentifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModelingComponents.PreviewGeometry.FindLineSet");
		
		UPreviewGeometry_FindLineSet_Params params {};
		params.LineSetIdentifier = LineSetIdentifier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ModelingComponents.PreviewGeometry.Disconnect
	 * 		Flags  -> ()
	 */
	void UPreviewGeometry::Disconnect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModelingComponents.PreviewGeometry.Disconnect");
		
		UPreviewGeometry_Disconnect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ModelingComponents.PreviewGeometry.CreateInWorld
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWorld*                                      World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  WithTransform                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UPreviewGeometry::CreateInWorld(class UWorld* World, const struct FTransform& WithTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModelingComponents.PreviewGeometry.CreateInWorld");
		
		UPreviewGeometry_CreateInWorld_Params params {};
		params.World = World;
		params.WithTransform = WithTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ModelingComponents.PreviewGeometry.AddLineSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      LineSetIdentifier                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULineSetComponent* UPreviewGeometry::AddLineSet(const class FString& LineSetIdentifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModelingComponents.PreviewGeometry.AddLineSet");
		
		UPreviewGeometry_AddLineSet_Params params {};
		params.LineSetIdentifier = LineSetIdentifier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPreviewGeometry.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPreviewGeometry::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.PreviewGeometry");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APreviewMeshActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APreviewMeshActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.PreviewMeshActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USimpleDynamicMeshComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USimpleDynamicMeshComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.SimpleDynamicMeshComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpaceCurveDeformationMechanicPropertySet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpaceCurveDeformationMechanicPropertySet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.SpaceCurveDeformationMechanicPropertySet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpaceCurveDeformationMechanic.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpaceCurveDeformationMechanic::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.SpaceCurveDeformationMechanic");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpatialCurveDistanceMechanic.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpatialCurveDistanceMechanic::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.SpatialCurveDistanceMechanic");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTriangleSetComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTriangleSetComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.TriangleSetComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUVLayoutPreviewProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUVLayoutPreviewProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.UVLayoutPreviewProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUVLayoutPreview.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUVLayoutPreview::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.UVLayoutPreview");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVoxelProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.VoxelProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ModelingComponents.WeightMapSetProperties.GetWeightMapsFunc
	 * 		Flags  -> ()
	 */
	TArray<class FString> UWeightMapSetProperties::GetWeightMapsFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModelingComponents.WeightMapSetProperties.GetWeightMapsFunc");
		
		UWeightMapSetProperties_GetWeightMapsFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeightMapSetProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeightMapSetProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.WeightMapSetProperties");
		return ptr;
	}

}


