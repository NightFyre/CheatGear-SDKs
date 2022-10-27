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
	 * 		Name   -> PredefinedFunction UInfinite_Compound.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInfinite_Compound::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Oceanology_Plugin.Infinite_Compound");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Oceanology_Plugin.Oceanology_PluginBPLibrary.Oceanology_PluginSampleFunction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Param                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UOceanology_PluginBPLibrary::Oceanology_PluginSampleFunction(float Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Oceanology_Plugin.Oceanology_PluginBPLibrary.Oceanology_PluginSampleFunction");
		
		UOceanology_PluginBPLibrary_Oceanology_PluginSampleFunction_Params params {};
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOceanology_PluginBPLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOceanology_PluginBPLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Oceanology_Plugin.Oceanology_PluginBPLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AOceanologySwimVolume.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOceanologySwimVolume::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Oceanology_Plugin.OceanologySwimVolume");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Oceanology_Plugin.QuadTree.SetEditorTickEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AQuadTree::SetEditorTickEnabled(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Oceanology_Plugin.QuadTree.SetEditorTickEnabled");
		
		AQuadTree_SetEditorTickEnabled_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Oceanology_Plugin.QuadTree.Procedural
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHierarchicalInstancedStaticMeshComponent*   HISMC                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              GridSize                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            GridTiles                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              CellSize                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AQuadTree::Procedural(class UHierarchicalInstancedStaticMeshComponent* HISMC, float GridSize, int32_t GridTiles, float CellSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Oceanology_Plugin.QuadTree.Procedural");
		
		AQuadTree_Procedural_Params params {};
		params.HISMC = HISMC;
		params.GridSize = GridSize;
		params.GridTiles = GridTiles;
		params.CellSize = CellSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Oceanology_Plugin.QuadTree.EditorTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AQuadTree::EditorTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Oceanology_Plugin.QuadTree.EditorTick");
		
		AQuadTree_EditorTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AQuadTree.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AQuadTree::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Oceanology_Plugin.QuadTree");
		return ptr;
	}

}


