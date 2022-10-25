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
	 * 		Name   -> PredefinedFunction UAddPatchToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddPatchToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.AddPatchToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAddPatchToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddPatchToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.AddPatchToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAddPatchTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddPatchTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.AddPatchTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAddPrimitiveToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddPrimitiveToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.AddPrimitiveToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProceduralShapeToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProceduralShapeToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ProceduralShapeToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProceduralRectangleToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProceduralRectangleToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ProceduralRectangleToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProceduralBoxToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProceduralBoxToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ProceduralBoxToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProceduralRoundedRectangleToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProceduralRoundedRectangleToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ProceduralRoundedRectangleToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProceduralDiscToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProceduralDiscToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ProceduralDiscToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProceduralPuncturedDiscToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProceduralPuncturedDiscToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ProceduralPuncturedDiscToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProceduralTorusToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProceduralTorusToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ProceduralTorusToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProceduralCylinderToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProceduralCylinderToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ProceduralCylinderToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProceduralConeToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProceduralConeToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ProceduralConeToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProceduralArrowToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProceduralArrowToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ProceduralArrowToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProceduralSphereToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProceduralSphereToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ProceduralSphereToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProceduralSphericalBoxToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProceduralSphericalBoxToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ProceduralSphericalBoxToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULastActorInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULastActorInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.LastActorInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAddPrimitiveTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddPrimitiveTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.AddPrimitiveTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAddBoxPrimitiveTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddBoxPrimitiveTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.AddBoxPrimitiveTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAddCylinderPrimitiveTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddCylinderPrimitiveTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.AddCylinderPrimitiveTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAddConePrimitiveTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddConePrimitiveTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.AddConePrimitiveTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAddRectanglePrimitiveTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddRectanglePrimitiveTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.AddRectanglePrimitiveTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAddRoundedRectanglePrimitiveTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddRoundedRectanglePrimitiveTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.AddRoundedRectanglePrimitiveTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAddDiscPrimitiveTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddDiscPrimitiveTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.AddDiscPrimitiveTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAddPuncturedDiscPrimitiveTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddPuncturedDiscPrimitiveTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.AddPuncturedDiscPrimitiveTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAddTorusPrimitiveTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddTorusPrimitiveTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.AddTorusPrimitiveTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAddArrowPrimitiveTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddArrowPrimitiveTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.AddArrowPrimitiveTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAddSpherePrimitiveTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddSpherePrimitiveTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.AddSpherePrimitiveTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAddSphericalBoxPrimitiveTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddSphericalBoxPrimitiveTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.AddSphericalBoxPrimitiveTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAlignObjectsToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAlignObjectsToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.AlignObjectsToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAlignObjectsToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAlignObjectsToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.AlignObjectsToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAlignObjectsTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAlignObjectsTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.AlignObjectsTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBakeMeshAttributeMapsToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBakeMeshAttributeMapsToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.BakeMeshAttributeMapsToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshModelingTools.BakeMeshAttributeMapsToolProperties.GetUVLayerNamesFunc
	 * 		Flags  -> ()
	 */
	TArray<class FString> UBakeMeshAttributeMapsToolProperties::GetUVLayerNamesFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.BakeMeshAttributeMapsToolProperties.GetUVLayerNamesFunc");
		
		UBakeMeshAttributeMapsToolProperties_GetUVLayerNamesFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBakeMeshAttributeMapsToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBakeMeshAttributeMapsToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.BakeMeshAttributeMapsToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBakedNormalMapToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBakedNormalMapToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.BakedNormalMapToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBakedOcclusionMapToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBakedOcclusionMapToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.BakedOcclusionMapToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBakedOcclusionMapVisualizationProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBakedOcclusionMapVisualizationProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.BakedOcclusionMapVisualizationProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBakedCurvatureMapToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBakedCurvatureMapToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.BakedCurvatureMapToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBakedTexture2DImageProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBakedTexture2DImageProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.BakedTexture2DImageProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBakeMeshAttributeMapsTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBakeMeshAttributeMapsTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.BakeMeshAttributeMapsTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBakeTransformToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBakeTransformToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.BakeTransformToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBakeTransformToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBakeTransformToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.BakeTransformToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBakeTransformTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBakeTransformTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.BakeTransformTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPhysicsObjectToolPropertySet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPhysicsObjectToolPropertySet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PhysicsObjectToolPropertySet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCollisionGeometryVisualizationProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCollisionGeometryVisualizationProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.CollisionGeometryVisualizationProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCombineMeshesToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCombineMeshesToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.CombineMeshesToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCombineMeshesToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCombineMeshesToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.CombineMeshesToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCombineMeshesTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCombineMeshesTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.CombineMeshesTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConvertToPolygonsToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConvertToPolygonsToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ConvertToPolygonsToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConvertToPolygonsToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConvertToPolygonsToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ConvertToPolygonsToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConvertToPolygonsTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConvertToPolygonsTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ConvertToPolygonsTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSGMeshesToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSGMeshesToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.CSGMeshesToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSGMeshesTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSGMeshesTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.CSGMeshesTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSGMeshesToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSGMeshesToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.CSGMeshesToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDeformMeshPolygonsToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeformMeshPolygonsToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DeformMeshPolygonsToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDeformMeshPolygonsTransformProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeformMeshPolygonsTransformProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DeformMeshPolygonsTransformProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDeformMeshPolygonsTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeformMeshPolygonsTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DeformMeshPolygonsTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshModelingTools.DisplaceMeshCommonProperties.GetWeightMapsFunc
	 * 		Flags  -> ()
	 */
	TArray<class FString> UDisplaceMeshCommonProperties::GetWeightMapsFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.DisplaceMeshCommonProperties.GetWeightMapsFunc");
		
		UDisplaceMeshCommonProperties_GetWeightMapsFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDisplaceMeshCommonProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDisplaceMeshCommonProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DisplaceMeshCommonProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDisplaceMeshTextureMapProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDisplaceMeshTextureMapProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DisplaceMeshTextureMapProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDisplaceMeshDirectionalFilterProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDisplaceMeshDirectionalFilterProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DisplaceMeshDirectionalFilterProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDisplaceMeshPerlinNoiseProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDisplaceMeshPerlinNoiseProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DisplaceMeshPerlinNoiseProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDisplaceMeshSineWaveProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDisplaceMeshSineWaveProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DisplaceMeshSineWaveProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDisplaceMeshToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDisplaceMeshToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DisplaceMeshToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDisplaceMeshTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDisplaceMeshTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DisplaceMeshTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDrawAndRevolveToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDrawAndRevolveToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DrawAndRevolveToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URevolveProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URevolveProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.RevolveProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URevolveToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URevolveToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.RevolveToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URevolveOperatorFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URevolveOperatorFactory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.RevolveOperatorFactory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDrawAndRevolveTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDrawAndRevolveTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DrawAndRevolveTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDrawPolygonToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDrawPolygonToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DrawPolygonToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDrawPolygonToolStandardProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDrawPolygonToolStandardProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DrawPolygonToolStandardProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDrawPolygonToolSnapProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDrawPolygonToolSnapProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DrawPolygonToolSnapProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDrawPolygonTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDrawPolygonTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DrawPolygonTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDrawPolyPathToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDrawPolyPathToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DrawPolyPathToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDrawPolyPathProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDrawPolyPathProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DrawPolyPathProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDrawPolyPathExtrudeProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDrawPolyPathExtrudeProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DrawPolyPathExtrudeProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDrawPolyPathTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDrawPolyPathTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DrawPolyPathTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDynamicMeshBrushTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDynamicMeshBrushTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DynamicMeshBrushTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDynamicMeshSculptToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDynamicMeshSculptToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DynamicMeshSculptToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBrushSculptProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBrushSculptProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.BrushSculptProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshConstraintProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshConstraintProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MeshConstraintProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URemeshProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URemeshProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.RemeshProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBrushRemeshProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBrushRemeshProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.BrushRemeshProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFixedPlaneBrushProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFixedPlaneBrushProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.FixedPlaneBrushProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDynamicMeshSculptTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDynamicMeshSculptTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DynamicMeshSculptTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEdgeLoopInsertionToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEdgeLoopInsertionToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EdgeLoopInsertionToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEdgeLoopInsertionProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEdgeLoopInsertionProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EdgeLoopInsertionProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEdgeLoopInsertionOperatorFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEdgeLoopInsertionOperatorFactory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EdgeLoopInsertionOperatorFactory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEdgeLoopInsertionTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEdgeLoopInsertionTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EdgeLoopInsertionTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEditMeshPolygonsToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditMeshPolygonsToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditMeshPolygonsToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPolyEditCommonProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPolyEditCommonProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PolyEditCommonProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEditMeshPolygonsToolActionPropertySet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditMeshPolygonsToolActionPropertySet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditMeshPolygonsToolActionPropertySet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions.Retriangulate
	 * 		Flags  -> ()
	 */
	void UEditMeshPolygonsToolActions::Retriangulate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions.Retriangulate");
		
		UEditMeshPolygonsToolActions_Retriangulate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions.RecalcNormals
	 * 		Flags  -> ()
	 */
	void UEditMeshPolygonsToolActions::RecalcNormals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions.RecalcNormals");
		
		UEditMeshPolygonsToolActions_RecalcNormals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions.Outset
	 * 		Flags  -> ()
	 */
	void UEditMeshPolygonsToolActions::Outset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions.Outset");
		
		UEditMeshPolygonsToolActions_Outset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions.Offset
	 * 		Flags  -> ()
	 */
	void UEditMeshPolygonsToolActions::Offset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions.Offset");
		
		UEditMeshPolygonsToolActions_Offset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions.Merge
	 * 		Flags  -> ()
	 */
	void UEditMeshPolygonsToolActions::Merge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions.Merge");
		
		UEditMeshPolygonsToolActions_Merge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions.Inset
	 * 		Flags  -> ()
	 */
	void UEditMeshPolygonsToolActions::Inset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions.Inset");
		
		UEditMeshPolygonsToolActions_Inset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions.Flip
	 * 		Flags  -> ()
	 */
	void UEditMeshPolygonsToolActions::Flip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions.Flip");
		
		UEditMeshPolygonsToolActions_Flip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions.Extrude
	 * 		Flags  -> ()
	 */
	void UEditMeshPolygonsToolActions::Extrude()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions.Extrude");
		
		UEditMeshPolygonsToolActions_Extrude_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions.Disconnect
	 * 		Flags  -> ()
	 */
	void UEditMeshPolygonsToolActions::Disconnect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions.Disconnect");
		
		UEditMeshPolygonsToolActions_Disconnect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions.Delete
	 * 		Flags  -> ()
	 */
	void UEditMeshPolygonsToolActions::Delete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions.Delete");
		
		UEditMeshPolygonsToolActions_Delete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions.Decompose
	 * 		Flags  -> ()
	 */
	void UEditMeshPolygonsToolActions::Decompose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions.Decompose");
		
		UEditMeshPolygonsToolActions_Decompose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions.CutFaces
	 * 		Flags  -> ()
	 */
	void UEditMeshPolygonsToolActions::CutFaces()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions.CutFaces");
		
		UEditMeshPolygonsToolActions_CutFaces_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEditMeshPolygonsToolActions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditMeshPolygonsToolActions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditMeshPolygonsToolActions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.RecalcNormals
	 * 		Flags  -> ()
	 */
	void UEditMeshPolygonsToolActions_Triangles::RecalcNormals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.RecalcNormals");
		
		UEditMeshPolygonsToolActions_Triangles_RecalcNormals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Poke
	 * 		Flags  -> ()
	 */
	void UEditMeshPolygonsToolActions_Triangles::Poke()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Poke");
		
		UEditMeshPolygonsToolActions_Triangles_Poke_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Outset
	 * 		Flags  -> ()
	 */
	void UEditMeshPolygonsToolActions_Triangles::Outset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Outset");
		
		UEditMeshPolygonsToolActions_Triangles_Outset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Offset
	 * 		Flags  -> ()
	 */
	void UEditMeshPolygonsToolActions_Triangles::Offset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Offset");
		
		UEditMeshPolygonsToolActions_Triangles_Offset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Inset
	 * 		Flags  -> ()
	 */
	void UEditMeshPolygonsToolActions_Triangles::Inset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Inset");
		
		UEditMeshPolygonsToolActions_Triangles_Inset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Flip
	 * 		Flags  -> ()
	 */
	void UEditMeshPolygonsToolActions_Triangles::Flip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Flip");
		
		UEditMeshPolygonsToolActions_Triangles_Flip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Extrude
	 * 		Flags  -> ()
	 */
	void UEditMeshPolygonsToolActions_Triangles::Extrude()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Extrude");
		
		UEditMeshPolygonsToolActions_Triangles_Extrude_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Disconnect
	 * 		Flags  -> ()
	 */
	void UEditMeshPolygonsToolActions_Triangles::Disconnect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Disconnect");
		
		UEditMeshPolygonsToolActions_Triangles_Disconnect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Delete
	 * 		Flags  -> ()
	 */
	void UEditMeshPolygonsToolActions_Triangles::Delete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Delete");
		
		UEditMeshPolygonsToolActions_Triangles_Delete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.CutFaces
	 * 		Flags  -> ()
	 */
	void UEditMeshPolygonsToolActions_Triangles::CutFaces()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.CutFaces");
		
		UEditMeshPolygonsToolActions_Triangles_CutFaces_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEditMeshPolygonsToolActions_Triangles.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditMeshPolygonsToolActions_Triangles::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditMeshPolygonsToolActions_Triangles");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolUVActions.PlanarProjection
	 * 		Flags  -> ()
	 */
	void UEditMeshPolygonsToolUVActions::PlanarProjection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolUVActions.PlanarProjection");
		
		UEditMeshPolygonsToolUVActions_PlanarProjection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEditMeshPolygonsToolUVActions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditMeshPolygonsToolUVActions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditMeshPolygonsToolUVActions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolEdgeActions.Weld
	 * 		Flags  -> ()
	 */
	void UEditMeshPolygonsToolEdgeActions::Weld()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolEdgeActions.Weld");
		
		UEditMeshPolygonsToolEdgeActions_Weld_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolEdgeActions.Straighten
	 * 		Flags  -> ()
	 */
	void UEditMeshPolygonsToolEdgeActions::Straighten()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolEdgeActions.Straighten");
		
		UEditMeshPolygonsToolEdgeActions_Straighten_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolEdgeActions.FillHole
	 * 		Flags  -> ()
	 */
	void UEditMeshPolygonsToolEdgeActions::FillHole()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolEdgeActions.FillHole");
		
		UEditMeshPolygonsToolEdgeActions_FillHole_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEditMeshPolygonsToolEdgeActions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditMeshPolygonsToolEdgeActions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditMeshPolygonsToolEdgeActions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Weld
	 * 		Flags  -> ()
	 */
	void UEditMeshPolygonsToolEdgeActions_Triangles::Weld()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Weld");
		
		UEditMeshPolygonsToolEdgeActions_Triangles_Weld_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Split
	 * 		Flags  -> ()
	 */
	void UEditMeshPolygonsToolEdgeActions_Triangles::Split()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Split");
		
		UEditMeshPolygonsToolEdgeActions_Triangles_Split_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Flip
	 * 		Flags  -> ()
	 */
	void UEditMeshPolygonsToolEdgeActions_Triangles::Flip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Flip");
		
		UEditMeshPolygonsToolEdgeActions_Triangles_Flip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.FillHole
	 * 		Flags  -> ()
	 */
	void UEditMeshPolygonsToolEdgeActions_Triangles::FillHole()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.FillHole");
		
		UEditMeshPolygonsToolEdgeActions_Triangles_FillHole_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Collapse
	 * 		Flags  -> ()
	 */
	void UEditMeshPolygonsToolEdgeActions_Triangles::Collapse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Collapse");
		
		UEditMeshPolygonsToolEdgeActions_Triangles_Collapse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEditMeshPolygonsToolEdgeActions_Triangles.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditMeshPolygonsToolEdgeActions_Triangles::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPolyEditExtrudeProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPolyEditExtrudeProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PolyEditExtrudeProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPolyEditOffsetProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPolyEditOffsetProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PolyEditOffsetProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPolyEditInsetProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPolyEditInsetProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PolyEditInsetProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPolyEditOutsetProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPolyEditOutsetProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PolyEditOutsetProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPolyEditCutProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPolyEditCutProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PolyEditCutProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPolyEditSetUVProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPolyEditSetUVProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PolyEditSetUVProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEditMeshPolygonsTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditMeshPolygonsTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditMeshPolygonsTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEditNormalsToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditNormalsToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditNormalsToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEditNormalsToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditNormalsToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditNormalsToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEditNormalsAdvancedProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditNormalsAdvancedProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditNormalsAdvancedProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEditNormalsOperatorFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditNormalsOperatorFactory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditNormalsOperatorFactory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEditNormalsTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditNormalsTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditNormalsTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEditPivotToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditPivotToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditPivotToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEditPivotToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditPivotToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditPivotToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshModelingTools.EditPivotToolActionPropertySet.Top
	 * 		Flags  -> ()
	 */
	void UEditPivotToolActionPropertySet::Top()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditPivotToolActionPropertySet.Top");
		
		UEditPivotToolActionPropertySet_Top_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshModelingTools.EditPivotToolActionPropertySet.Right
	 * 		Flags  -> ()
	 */
	void UEditPivotToolActionPropertySet::Right()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditPivotToolActionPropertySet.Right");
		
		UEditPivotToolActionPropertySet_Right_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshModelingTools.EditPivotToolActionPropertySet.Left
	 * 		Flags  -> ()
	 */
	void UEditPivotToolActionPropertySet::Left()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditPivotToolActionPropertySet.Left");
		
		UEditPivotToolActionPropertySet_Left_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshModelingTools.EditPivotToolActionPropertySet.Front
	 * 		Flags  -> ()
	 */
	void UEditPivotToolActionPropertySet::Front()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditPivotToolActionPropertySet.Front");
		
		UEditPivotToolActionPropertySet_Front_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshModelingTools.EditPivotToolActionPropertySet.Center
	 * 		Flags  -> ()
	 */
	void UEditPivotToolActionPropertySet::Center()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditPivotToolActionPropertySet.Center");
		
		UEditPivotToolActionPropertySet_Center_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshModelingTools.EditPivotToolActionPropertySet.Bottom
	 * 		Flags  -> ()
	 */
	void UEditPivotToolActionPropertySet::Bottom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditPivotToolActionPropertySet.Bottom");
		
		UEditPivotToolActionPropertySet_Bottom_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshModelingTools.EditPivotToolActionPropertySet.Back
	 * 		Flags  -> ()
	 */
	void UEditPivotToolActionPropertySet::Back()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditPivotToolActionPropertySet.Back");
		
		UEditPivotToolActionPropertySet_Back_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEditPivotToolActionPropertySet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditPivotToolActionPropertySet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditPivotToolActionPropertySet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEditPivotTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditPivotTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditPivotTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEditUVIslandsToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditUVIslandsToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditUVIslandsToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEditUVIslandsTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditUVIslandsTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditUVIslandsTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UExtractCollisionGeometryToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UExtractCollisionGeometryToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ExtractCollisionGeometryToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UExtractCollisionGeometryTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UExtractCollisionGeometryTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ExtractCollisionGeometryTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGroupEdgeInsertionToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGroupEdgeInsertionToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.GroupEdgeInsertionToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGroupEdgeInsertionProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGroupEdgeInsertionProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.GroupEdgeInsertionProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGroupEdgeInsertionOperatorFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGroupEdgeInsertionOperatorFactory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.GroupEdgeInsertionOperatorFactory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGroupEdgeInsertionTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGroupEdgeInsertionTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.GroupEdgeInsertionTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHoleFillToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoleFillToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.HoleFillToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USmoothHoleFillProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USmoothHoleFillProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.SmoothHoleFillProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHoleFillToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoleFillToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.HoleFillToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshModelingTools.HoleFillToolActions.SelectAll
	 * 		Flags  -> ()
	 */
	void UHoleFillToolActions::SelectAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.HoleFillToolActions.SelectAll");
		
		UHoleFillToolActions_SelectAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshModelingTools.HoleFillToolActions.Clear
	 * 		Flags  -> ()
	 */
	void UHoleFillToolActions::Clear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.HoleFillToolActions.Clear");
		
		UHoleFillToolActions_Clear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHoleFillToolActions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoleFillToolActions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.HoleFillToolActions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHoleFillStatisticsProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoleFillStatisticsProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.HoleFillStatisticsProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHoleFillOperatorFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoleFillOperatorFactory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.HoleFillOperatorFactory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHoleFillTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoleFillTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.HoleFillTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshSculptBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshSculptBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MeshSculptBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseKelvinletBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseKelvinletBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.BaseKelvinletBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScaleKelvinletBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScaleKelvinletBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ScaleKelvinletBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPullKelvinletBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPullKelvinletBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PullKelvinletBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USharpPullKelvinletBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USharpPullKelvinletBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.SharpPullKelvinletBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTwistKelvinletBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTwistKelvinletBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.TwistKelvinletBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshAnalysisProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshAnalysisProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MeshAnalysisProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshAttributePaintToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshAttributePaintToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MeshAttributePaintToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshAttributePaintToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshAttributePaintToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MeshAttributePaintToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshAttributePaintEditActions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshAttributePaintEditActions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MeshAttributePaintEditActions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshAttributePaintTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshAttributePaintTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MeshAttributePaintTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshBoundaryToolBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshBoundaryToolBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MeshBoundaryToolBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInflateBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInflateBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.InflateBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshInspectorToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshInspectorToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MeshInspectorToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshInspectorProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshInspectorProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MeshInspectorProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshInspectorTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshInspectorTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MeshInspectorTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNewMeshMaterialProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNewMeshMaterialProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.NewMeshMaterialProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UExistingMeshMaterialProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UExistingMeshMaterialProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ExistingMeshMaterialProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshEditingViewProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshEditingViewProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MeshEditingViewProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMoveBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoveBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MoveBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPinchBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPinchBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PinchBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBasePlaneBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBasePlaneBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.BasePlaneBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlaneBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlaneBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PlaneBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UViewAlignedPlaneBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UViewAlignedPlaneBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ViewAlignedPlaneBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFixedPlaneBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFixedPlaneBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.FixedPlaneBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStandardSculptBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStandardSculptBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.StandardSculptBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UViewAlignedSculptBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UViewAlignedSculptBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ViewAlignedSculptBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USculptMaxBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USculptMaxBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.SculptMaxBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USculptBrushProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USculptBrushProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.SculptBrushProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKelvinBrushProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKelvinBrushProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.KelvinBrushProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWorkPlaneProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWorkPlaneProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.WorkPlaneProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USculptMaxBrushProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USculptMaxBrushProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.SculptMaxBrushProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshSculptToolBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshSculptToolBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MeshSculptToolBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshSelectionToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshSelectionToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MeshSelectionToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshSelectionToolActionPropertySet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshSelectionToolActionPropertySet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MeshSelectionToolActionPropertySet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshModelingTools.MeshSelectionEditActions.Shrink
	 * 		Flags  -> ()
	 */
	void UMeshSelectionEditActions::Shrink()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.MeshSelectionEditActions.Shrink");
		
		UMeshSelectionEditActions_Shrink_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshModelingTools.MeshSelectionEditActions.SelectLargestComponentByTriCount
	 * 		Flags  -> ()
	 */
	void UMeshSelectionEditActions::SelectLargestComponentByTriCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.MeshSelectionEditActions.SelectLargestComponentByTriCount");
		
		UMeshSelectionEditActions_SelectLargestComponentByTriCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshModelingTools.MeshSelectionEditActions.SelectLargestComponentByArea
	 * 		Flags  -> ()
	 */
	void UMeshSelectionEditActions::SelectLargestComponentByArea()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.MeshSelectionEditActions.SelectLargestComponentByArea");
		
		UMeshSelectionEditActions_SelectLargestComponentByArea_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshModelingTools.MeshSelectionEditActions.SelectAll
	 * 		Flags  -> ()
	 */
	void UMeshSelectionEditActions::SelectAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.MeshSelectionEditActions.SelectAll");
		
		UMeshSelectionEditActions_SelectAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshModelingTools.MeshSelectionEditActions.OptimizeSelection
	 * 		Flags  -> ()
	 */
	void UMeshSelectionEditActions::OptimizeSelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.MeshSelectionEditActions.OptimizeSelection");
		
		UMeshSelectionEditActions_OptimizeSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshModelingTools.MeshSelectionEditActions.Invert
	 * 		Flags  -> ()
	 */
	void UMeshSelectionEditActions::Invert()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.MeshSelectionEditActions.Invert");
		
		UMeshSelectionEditActions_Invert_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshModelingTools.MeshSelectionEditActions.Grow
	 * 		Flags  -> ()
	 */
	void UMeshSelectionEditActions::Grow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.MeshSelectionEditActions.Grow");
		
		UMeshSelectionEditActions_Grow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshModelingTools.MeshSelectionEditActions.ExpandToConnected
	 * 		Flags  -> ()
	 */
	void UMeshSelectionEditActions::ExpandToConnected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.MeshSelectionEditActions.ExpandToConnected");
		
		UMeshSelectionEditActions_ExpandToConnected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshModelingTools.MeshSelectionEditActions.Clear
	 * 		Flags  -> ()
	 */
	void UMeshSelectionEditActions::Clear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.MeshSelectionEditActions.Clear");
		
		UMeshSelectionEditActions_Clear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshSelectionEditActions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshSelectionEditActions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MeshSelectionEditActions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshModelingTools.MeshSelectionMeshEditActions.SeparateTriangles
	 * 		Flags  -> ()
	 */
	void UMeshSelectionMeshEditActions::SeparateTriangles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.MeshSelectionMeshEditActions.SeparateTriangles");
		
		UMeshSelectionMeshEditActions_SeparateTriangles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshModelingTools.MeshSelectionMeshEditActions.FlipNormals
	 * 		Flags  -> ()
	 */
	void UMeshSelectionMeshEditActions::FlipNormals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.MeshSelectionMeshEditActions.FlipNormals");
		
		UMeshSelectionMeshEditActions_FlipNormals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshModelingTools.MeshSelectionMeshEditActions.DisconnectTriangles
	 * 		Flags  -> ()
	 */
	void UMeshSelectionMeshEditActions::DisconnectTriangles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.MeshSelectionMeshEditActions.DisconnectTriangles");
		
		UMeshSelectionMeshEditActions_DisconnectTriangles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshModelingTools.MeshSelectionMeshEditActions.DeleteTriangles
	 * 		Flags  -> ()
	 */
	void UMeshSelectionMeshEditActions::DeleteTriangles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.MeshSelectionMeshEditActions.DeleteTriangles");
		
		UMeshSelectionMeshEditActions_DeleteTriangles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshModelingTools.MeshSelectionMeshEditActions.CreatePolygroup
	 * 		Flags  -> ()
	 */
	void UMeshSelectionMeshEditActions::CreatePolygroup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.MeshSelectionMeshEditActions.CreatePolygroup");
		
		UMeshSelectionMeshEditActions_CreatePolygroup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshSelectionMeshEditActions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshSelectionMeshEditActions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MeshSelectionMeshEditActions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshSelectionToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshSelectionToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MeshSelectionToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshSelectionTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshSelectionTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MeshSelectionTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseSmoothBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseSmoothBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.BaseSmoothBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USmoothBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USmoothBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.SmoothBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USecondarySmoothBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USecondarySmoothBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.SecondarySmoothBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USmoothFillBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USmoothFillBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.SmoothFillBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFlattenBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFlattenBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.FlattenBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEraseBrushOpProps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEraseBrushOpProps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EraseBrushOpProps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshSpaceDeformerToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshSpaceDeformerToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MeshSpaceDeformerToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpaceDeformerOperatorFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpaceDeformerOperatorFactory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.SpaceDeformerOperatorFactory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshSpaceDeformerTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshSpaceDeformerTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MeshSpaceDeformerTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshStatisticsProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshStatisticsProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MeshStatisticsProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshVertexSculptToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshVertexSculptToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MeshVertexSculptToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVertexBrushSculptProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVertexBrushSculptProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.VertexBrushSculptProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshVertexSculptTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshVertexSculptTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MeshVertexSculptTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMirrorToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMirrorToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MirrorToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMirrorToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMirrorToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MirrorToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMirrorOperatorFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMirrorOperatorFactory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MirrorOperatorFactory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshModelingTools.MirrorToolActionPropertySet.Up
	 * 		Flags  -> ()
	 */
	void UMirrorToolActionPropertySet::Up()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.MirrorToolActionPropertySet.Up");
		
		UMirrorToolActionPropertySet_Up_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshModelingTools.MirrorToolActionPropertySet.ShiftToCenter
	 * 		Flags  -> ()
	 */
	void UMirrorToolActionPropertySet::ShiftToCenter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.MirrorToolActionPropertySet.ShiftToCenter");
		
		UMirrorToolActionPropertySet_ShiftToCenter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshModelingTools.MirrorToolActionPropertySet.Right
	 * 		Flags  -> ()
	 */
	void UMirrorToolActionPropertySet::Right()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.MirrorToolActionPropertySet.Right");
		
		UMirrorToolActionPropertySet_Right_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshModelingTools.MirrorToolActionPropertySet.Left
	 * 		Flags  -> ()
	 */
	void UMirrorToolActionPropertySet::Left()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.MirrorToolActionPropertySet.Left");
		
		UMirrorToolActionPropertySet_Left_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshModelingTools.MirrorToolActionPropertySet.Forward
	 * 		Flags  -> ()
	 */
	void UMirrorToolActionPropertySet::Forward()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.MirrorToolActionPropertySet.Forward");
		
		UMirrorToolActionPropertySet_Forward_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshModelingTools.MirrorToolActionPropertySet.Down
	 * 		Flags  -> ()
	 */
	void UMirrorToolActionPropertySet::Down()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.MirrorToolActionPropertySet.Down");
		
		UMirrorToolActionPropertySet_Down_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshModelingTools.MirrorToolActionPropertySet.Backward
	 * 		Flags  -> ()
	 */
	void UMirrorToolActionPropertySet::Backward()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.MirrorToolActionPropertySet.Backward");
		
		UMirrorToolActionPropertySet_Backward_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMirrorToolActionPropertySet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMirrorToolActionPropertySet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MirrorToolActionPropertySet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMirrorTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMirrorTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MirrorTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOffsetMeshToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOffsetMeshToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.OffsetMeshToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOffsetWeightMapSetProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOffsetWeightMapSetProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.OffsetWeightMapSetProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIterativeOffsetProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIterativeOffsetProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.IterativeOffsetProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UImplicitOffsetProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UImplicitOffsetProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ImplicitOffsetProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOffsetMeshTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOffsetMeshTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.OffsetMeshTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOffsetMeshToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOffsetMeshToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.OffsetMeshToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPhysicsInspectorToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPhysicsInspectorToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PhysicsInspectorToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPhysicsInspectorTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPhysicsInspectorTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PhysicsInspectorTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlaneCutToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlaneCutToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PlaneCutToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAcceptOutputProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAcceptOutputProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.AcceptOutputProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlaneCutToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlaneCutToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PlaneCutToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlaneCutOperatorFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlaneCutOperatorFactory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PlaneCutOperatorFactory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshModelingTools.PlaneCutTool.Cut
	 * 		Flags  -> ()
	 */
	void UPlaneCutTool::Cut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.PlaneCutTool.Cut");
		
		UPlaneCutTool_Cut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlaneCutTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlaneCutTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PlaneCutTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPositionPlaneGizmoBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPositionPlaneGizmoBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PositionPlaneGizmoBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPositionPlaneGizmo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPositionPlaneGizmo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PositionPlaneGizmo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPositionPlaneOnSceneInputBehavior.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPositionPlaneOnSceneInputBehavior::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PositionPlaneOnSceneInputBehavior");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProjectToTargetToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProjectToTargetToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ProjectToTargetToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URemeshMeshToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URemeshMeshToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.RemeshMeshToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProjectToTargetToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProjectToTargetToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ProjectToTargetToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URemeshMeshTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URemeshMeshTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.RemeshMeshTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProjectToTargetTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProjectToTargetTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ProjectToTargetTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URemeshMeshToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URemeshMeshToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.RemeshMeshToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URemoveOccludedTrianglesToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URemoveOccludedTrianglesToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.RemoveOccludedTrianglesToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URemoveOccludedTrianglesToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URemoveOccludedTrianglesToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.RemoveOccludedTrianglesToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URemoveOccludedTrianglesAdvancedProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URemoveOccludedTrianglesAdvancedProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.RemoveOccludedTrianglesAdvancedProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URemoveOccludedTrianglesOperatorFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URemoveOccludedTrianglesOperatorFactory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.RemoveOccludedTrianglesOperatorFactory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URemoveOccludedTrianglesTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URemoveOccludedTrianglesTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.RemoveOccludedTrianglesTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URevolveBoundaryToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URevolveBoundaryToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.RevolveBoundaryToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URevolveBoundaryOperatorFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URevolveBoundaryOperatorFactory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.RevolveBoundaryOperatorFactory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URevolveBoundaryToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URevolveBoundaryToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.RevolveBoundaryToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URevolveBoundaryTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URevolveBoundaryTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.RevolveBoundaryTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USeamSculptToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USeamSculptToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.SeamSculptToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USeamSculptToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USeamSculptToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.SeamSculptToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USeamSculptTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USeamSculptTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.SeamSculptTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USelfUnionMeshesToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USelfUnionMeshesToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.SelfUnionMeshesToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USelfUnionMeshesTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USelfUnionMeshesTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.SelfUnionMeshesTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USelfUnionMeshesToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USelfUnionMeshesToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.SelfUnionMeshesToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USetCollisionGeometryToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USetCollisionGeometryToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.SetCollisionGeometryToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USetCollisionGeometryToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USetCollisionGeometryToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.SetCollisionGeometryToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USetCollisionGeometryTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USetCollisionGeometryTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.SetCollisionGeometryTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USmoothMeshToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USmoothMeshToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.SmoothMeshToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIterativeSmoothProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIterativeSmoothProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.IterativeSmoothProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDiffusionSmoothProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDiffusionSmoothProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DiffusionSmoothProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UImplicitSmoothProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UImplicitSmoothProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ImplicitSmoothProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USmoothWeightMapSetProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USmoothWeightMapSetProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.SmoothWeightMapSetProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USmoothMeshTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USmoothMeshTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.SmoothMeshTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USmoothMeshToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USmoothMeshToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.SmoothMeshToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTransformMeshesToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTransformMeshesToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.TransformMeshesToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTransformMeshesToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTransformMeshesToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.TransformMeshesToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTransformMeshesTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTransformMeshesTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.TransformMeshesTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUVProjectionToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUVProjectionToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.UVProjectionToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUVProjectionToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUVProjectionToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.UVProjectionToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUVProjectionAdvancedProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUVProjectionAdvancedProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.UVProjectionAdvancedProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUVProjectionOperatorFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUVProjectionOperatorFactory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.UVProjectionOperatorFactory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUVProjectionTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUVProjectionTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.UVProjectionTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVoxelBlendMeshesToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelBlendMeshesToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.VoxelBlendMeshesToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVoxelBlendMeshesTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelBlendMeshesTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.VoxelBlendMeshesTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVoxelBlendMeshesToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelBlendMeshesToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.VoxelBlendMeshesToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVoxelMorphologyMeshesToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelMorphologyMeshesToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.VoxelMorphologyMeshesToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVoxelMorphologyMeshesTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelMorphologyMeshesTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.VoxelMorphologyMeshesTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVoxelMorphologyMeshesToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelMorphologyMeshesToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.VoxelMorphologyMeshesToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVoxelSolidifyMeshesToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelSolidifyMeshesToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.VoxelSolidifyMeshesToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVoxelSolidifyMeshesTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelSolidifyMeshesTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.VoxelSolidifyMeshesTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVoxelSolidifyMeshesToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelSolidifyMeshesToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.VoxelSolidifyMeshesToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeldMeshEdgesToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeldMeshEdgesToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.WeldMeshEdgesToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeldMeshEdgesTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeldMeshEdgesTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.WeldMeshEdgesTool");
		return ptr;
	}

}


