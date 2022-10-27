/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * 		Name   -> PredefinedFunction UConstructionSystemTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConstructionSystemTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ConstructionSystemRuntime.ConstructionSystemTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0083E790
	 * 		Name   -> Function ConstructionSystemRuntime.ConstructionSystemBuildTool.SetActivePrefab
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UPrefabricatorAssetInterface*                InActivePrefabAsset                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UConstructionSystemBuildTool::SetActivePrefab(class UPrefabricatorAssetInterface* InActivePrefabAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConstructionSystemRuntime.ConstructionSystemBuildTool.SetActivePrefab");
		
		UConstructionSystemBuildTool_SetActivePrefab_Params params {};
		params.InActivePrefabAsset = InActivePrefabAsset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0083E400
	 * 		Name   -> Function ConstructionSystemRuntime.ConstructionSystemBuildTool.HandleInput_RotateCursorStep
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		float                                              NumSteps                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UConstructionSystemBuildTool::HandleInput_RotateCursorStep(float NumSteps)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConstructionSystemRuntime.ConstructionSystemBuildTool.HandleInput_RotateCursorStep");
		
		UConstructionSystemBuildTool_HandleInput_RotateCursorStep_Params params {};
		params.NumSteps = NumSteps;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0083E3C0
	 * 		Name   -> Function ConstructionSystemRuntime.ConstructionSystemBuildTool.HandleInput_CursorMovePrev
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UConstructionSystemBuildTool::HandleInput_CursorMovePrev()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConstructionSystemRuntime.ConstructionSystemBuildTool.HandleInput_CursorMovePrev");
		
		UConstructionSystemBuildTool_HandleInput_CursorMovePrev_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0083E3A0
	 * 		Name   -> Function ConstructionSystemRuntime.ConstructionSystemBuildTool.HandleInput_CursorMoveNext
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UConstructionSystemBuildTool::HandleInput_CursorMoveNext()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConstructionSystemRuntime.ConstructionSystemBuildTool.HandleInput_CursorMoveNext");
		
		UConstructionSystemBuildTool_HandleInput_CursorMoveNext_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0083E380
	 * 		Name   -> Function ConstructionSystemRuntime.ConstructionSystemBuildTool.HandleInput_ConstructAtCursor
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UConstructionSystemBuildTool::HandleInput_ConstructAtCursor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConstructionSystemRuntime.ConstructionSystemBuildTool.HandleInput_ConstructAtCursor");
		
		UConstructionSystemBuildTool_HandleInput_ConstructAtCursor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConstructionSystemBuildTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConstructionSystemBuildTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ConstructionSystemRuntime.ConstructionSystemBuildTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0083E8B0
	 * 		Name   -> Function ConstructionSystemRuntime.ConstructionSystemComponent.ToggleConstructionSystem
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UConstructionSystemComponent::ToggleConstructionSystem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConstructionSystemRuntime.ConstructionSystemComponent.ToggleConstructionSystem");
		
		UConstructionSystemComponent_ToggleConstructionSystem_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0083E890
	 * 		Name   -> Function ConstructionSystemRuntime.ConstructionSystemComponent.ShowBuildMenu
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UConstructionSystemComponent::ShowBuildMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConstructionSystemRuntime.ConstructionSystemComponent.ShowBuildMenu");
		
		UConstructionSystemComponent_ShowBuildMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0083E810
	 * 		Name   -> Function ConstructionSystemRuntime.ConstructionSystemComponent.SetActiveTool
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EConstructionSystemToolType                        InToolType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UConstructionSystemComponent::SetActiveTool(EConstructionSystemToolType InToolType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConstructionSystemRuntime.ConstructionSystemComponent.SetActiveTool");
		
		UConstructionSystemComponent_SetActiveTool_Params params {};
		params.InToolType = InToolType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0083E480
	 * 		Name   -> Function ConstructionSystemRuntime.ConstructionSystemComponent.HideBuildMenu
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UConstructionSystemComponent::HideBuildMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConstructionSystemRuntime.ConstructionSystemComponent.HideBuildMenu");
		
		UConstructionSystemComponent_HideBuildMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0083E280
	 * 		Name   -> Function ConstructionSystemRuntime.ConstructionSystemComponent.GetTool
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		EConstructionSystemToolType                        InToolType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UConstructionSystemTool* UConstructionSystemComponent::GetTool(EConstructionSystemToolType InToolType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConstructionSystemRuntime.ConstructionSystemComponent.GetTool");
		
		UConstructionSystemComponent_GetTool_Params params {};
		params.InToolType = InToolType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0083E260
	 * 		Name   -> Function ConstructionSystemRuntime.ConstructionSystemComponent.GetActiveToolType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EConstructionSystemToolType UConstructionSystemComponent::GetActiveToolType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConstructionSystemRuntime.ConstructionSystemComponent.GetActiveToolType");
		
		UConstructionSystemComponent_GetActiveToolType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0083E230
	 * 		Name   -> Function ConstructionSystemRuntime.ConstructionSystemComponent.GetActiveTool
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	class UConstructionSystemTool* UConstructionSystemComponent::GetActiveTool()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConstructionSystemRuntime.ConstructionSystemComponent.GetActiveTool");
		
		UConstructionSystemComponent_GetActiveTool_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0083E1B0
	 * 		Name   -> Function ConstructionSystemRuntime.ConstructionSystemComponent.EnableConstructionSystem
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EConstructionSystemToolType                        InToolType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UConstructionSystemComponent::EnableConstructionSystem(EConstructionSystemToolType InToolType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConstructionSystemRuntime.ConstructionSystemComponent.EnableConstructionSystem");
		
		UConstructionSystemComponent_EnableConstructionSystem_Params params {};
		params.InToolType = InToolType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0083E190
	 * 		Name   -> Function ConstructionSystemRuntime.ConstructionSystemComponent.DisableConstructionSystem
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UConstructionSystemComponent::DisableConstructionSystem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConstructionSystemRuntime.ConstructionSystemComponent.DisableConstructionSystem");
		
		UConstructionSystemComponent_DisableConstructionSystem_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConstructionSystemComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConstructionSystemComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ConstructionSystemRuntime.ConstructionSystemComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConstructionSystemItemUserData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConstructionSystemItemUserData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ConstructionSystemRuntime.ConstructionSystemItemUserData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConstructionSystemCursor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConstructionSystemCursor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ConstructionSystemRuntime.ConstructionSystemCursor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0083E3E0
	 * 		Name   -> Function ConstructionSystemRuntime.ConstructionSystemRemoveTool.HandleInput_RemoveAtCursor
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UConstructionSystemRemoveTool::HandleInput_RemoveAtCursor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConstructionSystemRuntime.ConstructionSystemRemoveTool.HandleInput_RemoveAtCursor");
		
		UConstructionSystemRemoveTool_HandleInput_RemoveAtCursor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConstructionSystemRemoveTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConstructionSystemRemoveTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ConstructionSystemRuntime.ConstructionSystemRemoveTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConstructionSystemSaveGame.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConstructionSystemSaveGame::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ConstructionSystemRuntime.ConstructionSystemSaveGame");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0083E640
	 * 		Name   -> Function ConstructionSystemRuntime.ConstructionSystemSaveSystem.SaveConstructionSystemLevel
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SaveSlotName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            UserIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSavePlayerState                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UConstructionSystemSaveSystem::STATIC_SaveConstructionSystemLevel(class UObject* WorldContextObject, const class FString& SaveSlotName, int32_t UserIndex, bool bSavePlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConstructionSystemRuntime.ConstructionSystemSaveSystem.SaveConstructionSystemLevel");
		
		UConstructionSystemSaveSystem_SaveConstructionSystemLevel_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.SaveSlotName = SaveSlotName;
		params.UserIndex = UserIndex;
		params.bSavePlayerState = bSavePlayerState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0083E4A0
	 * 		Name   -> Function ConstructionSystemRuntime.ConstructionSystemSaveSystem.LoadConstructionSystemLevel
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        LevelName                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAbsolute                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SaveSlotName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            UserIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UConstructionSystemSaveSystem::STATIC_LoadConstructionSystemLevel(class UObject* WorldContextObject, const class FName& LevelName, bool bAbsolute, const class FString& SaveSlotName, int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConstructionSystemRuntime.ConstructionSystemSaveSystem.LoadConstructionSystemLevel");
		
		UConstructionSystemSaveSystem_LoadConstructionSystemLevel_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LevelName = LevelName;
		params.bAbsolute = bAbsolute;
		params.SaveSlotName = SaveSlotName;
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0083E310
	 * 		Name   -> Function ConstructionSystemRuntime.ConstructionSystemSaveSystem.HandleConstructionSystemLevelLoad
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UConstructionSystemSaveSystem::STATIC_HandleConstructionSystemLevelLoad(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConstructionSystemRuntime.ConstructionSystemSaveSystem.HandleConstructionSystemLevelLoad");
		
		UConstructionSystemSaveSystem_HandleConstructionSystemLevelLoad_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConstructionSystemSaveSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConstructionSystemSaveSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ConstructionSystemRuntime.ConstructionSystemSaveSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrefabricatorConstructionSnapComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrefabricatorConstructionSnapComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ConstructionSystemRuntime.PrefabricatorConstructionSnapComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APrefabricatorConstructionSnap.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APrefabricatorConstructionSnap::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ConstructionSystemRuntime.PrefabricatorConstructionSnap");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ConstructionSystemRuntime.ConstructionSystemBuildUI.SetUIAsset
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UConstructionSystemUIAsset*                  UIAsset                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UConstructionSystemBuildUI::SetUIAsset(class UConstructionSystemUIAsset* UIAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConstructionSystemRuntime.ConstructionSystemBuildUI.SetUIAsset");
		
		UConstructionSystemBuildUI_SetUIAsset_Params params {};
		params.UIAsset = UIAsset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ConstructionSystemRuntime.ConstructionSystemBuildUI.SetConstructionSystem
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UConstructionSystemComponent*                ConstructionSystem                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UConstructionSystemBuildUI::SetConstructionSystem(class UConstructionSystemComponent* ConstructionSystem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConstructionSystemRuntime.ConstructionSystemBuildUI.SetConstructionSystem");
		
		UConstructionSystemBuildUI_SetConstructionSystem_Params params {};
		params.ConstructionSystem = ConstructionSystem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConstructionSystemBuildUI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConstructionSystemBuildUI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ConstructionSystemRuntime.ConstructionSystemBuildUI");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConstructionSystemUIAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConstructionSystemUIAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ConstructionSystemRuntime.ConstructionSystemUIAsset");
		return ptr;
	}

}


