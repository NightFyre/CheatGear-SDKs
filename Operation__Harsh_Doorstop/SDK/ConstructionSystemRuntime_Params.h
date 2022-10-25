#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function ConstructionSystemRuntime.ConstructionSystemBuildTool.SetActivePrefab
	 */
	struct UConstructionSystemBuildTool_SetActivePrefab_Params
	{
	public:
		class UPrefabricatorAssetInterface*                        InActivePrefabAsset;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ConstructionSystemRuntime.ConstructionSystemBuildTool.HandleInput_RotateCursorStep
	 */
	struct UConstructionSystemBuildTool_HandleInput_RotateCursorStep_Params
	{
	public:
		float                                                      NumSteps;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ConstructionSystemRuntime.ConstructionSystemBuildTool.HandleInput_CursorMovePrev
	 */
	struct UConstructionSystemBuildTool_HandleInput_CursorMovePrev_Params
	{	};

	/**
	 * Function ConstructionSystemRuntime.ConstructionSystemBuildTool.HandleInput_CursorMoveNext
	 */
	struct UConstructionSystemBuildTool_HandleInput_CursorMoveNext_Params
	{	};

	/**
	 * Function ConstructionSystemRuntime.ConstructionSystemBuildTool.HandleInput_ConstructAtCursor
	 */
	struct UConstructionSystemBuildTool_HandleInput_ConstructAtCursor_Params
	{	};

	/**
	 * Function ConstructionSystemRuntime.ConstructionSystemComponent.ToggleConstructionSystem
	 */
	struct UConstructionSystemComponent_ToggleConstructionSystem_Params
	{	};

	/**
	 * Function ConstructionSystemRuntime.ConstructionSystemComponent.ShowBuildMenu
	 */
	struct UConstructionSystemComponent_ShowBuildMenu_Params
	{	};

	/**
	 * Function ConstructionSystemRuntime.ConstructionSystemComponent.SetActiveTool
	 */
	struct UConstructionSystemComponent_SetActiveTool_Params
	{
	public:
		EConstructionSystemToolType                                InToolType;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ConstructionSystemRuntime.ConstructionSystemComponent.HideBuildMenu
	 */
	struct UConstructionSystemComponent_HideBuildMenu_Params
	{	};

	/**
	 * Function ConstructionSystemRuntime.ConstructionSystemComponent.GetTool
	 */
	struct UConstructionSystemComponent_GetTool_Params
	{
	public:
		EConstructionSystemToolType                                InToolType;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_K229[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UConstructionSystemTool*                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ConstructionSystemRuntime.ConstructionSystemComponent.GetActiveToolType
	 */
	struct UConstructionSystemComponent_GetActiveToolType_Params
	{
	public:
		EConstructionSystemToolType                                ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ConstructionSystemRuntime.ConstructionSystemComponent.GetActiveTool
	 */
	struct UConstructionSystemComponent_GetActiveTool_Params
	{
	public:
		class UConstructionSystemTool*                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ConstructionSystemRuntime.ConstructionSystemComponent.EnableConstructionSystem
	 */
	struct UConstructionSystemComponent_EnableConstructionSystem_Params
	{
	public:
		EConstructionSystemToolType                                InToolType;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ConstructionSystemRuntime.ConstructionSystemComponent.DisableConstructionSystem
	 */
	struct UConstructionSystemComponent_DisableConstructionSystem_Params
	{	};

	/**
	 * Function ConstructionSystemRuntime.ConstructionSystemRemoveTool.HandleInput_RemoveAtCursor
	 */
	struct UConstructionSystemRemoveTool_HandleInput_RemoveAtCursor_Params
	{	};

	/**
	 * Function ConstructionSystemRuntime.ConstructionSystemSaveSystem.SaveConstructionSystemLevel
	 */
	struct UConstructionSystemSaveSystem_SaveConstructionSystemLevel_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              SaveSlotName;                                            // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    UserIndex;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSavePlayerState;                                        // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ConstructionSystemRuntime.ConstructionSystemSaveSystem.LoadConstructionSystemLevel
	 */
	struct UConstructionSystemSaveSystem_LoadConstructionSystemLevel_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                LevelName;                                               // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAbsolute;                                               // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IL1J[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              SaveSlotName;                                            // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    UserIndex;                                               // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ConstructionSystemRuntime.ConstructionSystemSaveSystem.HandleConstructionSystemLevelLoad
	 */
	struct UConstructionSystemSaveSystem_HandleConstructionSystemLevelLoad_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ConstructionSystemRuntime.ConstructionSystemBuildUI.SetUIAsset
	 */
	struct UConstructionSystemBuildUI_SetUIAsset_Params
	{
	public:
		class UConstructionSystemUIAsset*                          UIAsset;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ConstructionSystemRuntime.ConstructionSystemBuildUI.SetConstructionSystem
	 */
	struct UConstructionSystemBuildUI_SetConstructionSystem_Params
	{
	public:
		class UConstructionSystemComponent*                        ConstructionSystem;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
