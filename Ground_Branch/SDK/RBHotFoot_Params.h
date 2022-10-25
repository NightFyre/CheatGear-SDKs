#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * Function RBHotFoot.HFActorInterface.PreEditProperty
	 */
	struct UHFActorInterface_PreEditProperty_Params
	{
	public:
		class FString                                              PropertyName;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              PropertyValue;                                           // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RBHotFoot.HFActorInterface.PostEditProperty
	 */
	struct UHFActorInterface_PostEditProperty_Params
	{
	public:
		class FString                                              PropertyName;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              PropertyValue;                                           // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RBHotFoot.HFActorInterface.OnSelected
	 */
	struct UHFActorInterface_OnSelected_Params
	{	};

	/**
	 * Function RBHotFoot.HFActorInterface.OnSaved
	 */
	struct UHFActorInterface_OnSaved_Params
	{	};

	/**
	 * Function RBHotFoot.HFActorInterface.OnLoaded
	 */
	struct UHFActorInterface_OnLoaded_Params
	{	};

	/**
	 * Function RBHotFoot.HFActorInterface.OnEndEdit
	 */
	struct UHFActorInterface_OnEndEdit_Params
	{	};

	/**
	 * Function RBHotFoot.HFActorInterface.OnDeselected
	 */
	struct UHFActorInterface_OnDeselected_Params
	{	};

	/**
	 * Function RBHotFoot.HFActorInterface.OnBeginEdit
	 */
	struct UHFActorInterface_OnBeginEdit_Params
	{	};

	/**
	 * Function RBHotFoot.HFActorInterface.GetPlacementTranslate
	 */
	struct UHFActorInterface_GetPlacementTranslate_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RBHotFoot.HFActorInterface.GetCustomPropertyWidget
	 */
	struct UHFActorInterface_GetCustomPropertyWidget_Params
	{
	public:
		class FString                                              PropertyName;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RBHotFoot.HFActorInterface.GetCustomDetailWidgets
	 */
	struct UHFActorInterface_GetCustomDetailWidgets_Params
	{	};

	/**
	 * Function RBHotFoot.HFDragDropOperation.GetViewportPosition
	 */
	struct UHFDragDropOperation_GetViewportPosition_Params
	{
	public:
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RBHotFoot.HFFunctionLibrary.SpawnActorsFromFile
	 */
	struct UHFFunctionLibrary_SpawnActorsFromFile_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UHFSave*                                             SaveFile;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ActorTag;                                                // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class AActor*>                                      ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RBHotFoot.HFFunctionLibrary.SortActorArray
	 */
	struct UHFFunctionLibrary_SortActorArray_Params
	{
	public:
		TArray<class AActor*>                                      ActorArray;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bAscendingOrder;                                         // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bByClass;                                                // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RUYY[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AActor*>                                      ActorArrayRef;                                           // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RBHotFoot.HFFunctionLibrary.SetShapeDrawOnlyIfSelected
	 */
	struct UHFFunctionLibrary_SetShapeDrawOnlyIfSelected_Params
	{
	public:
		class UShapeComponent*                                     Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bNewDrawOnlyIfSelected;                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RBHotFoot.HFFunctionLibrary.SetShapeColour
	 */
	struct UHFFunctionLibrary_SetShapeColour_Params
	{
	public:
		class UShapeComponent*                                     Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FColor                                              NewColour;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RBHotFoot.HFFunctionLibrary.MakeUniqueActorName
	 */
	struct UHFFunctionLibrary_MakeUniqueActorName_Params
	{
	public:
		class FString                                              BaseActorName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      ExistingActorNames;                                      // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FName                                                ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RBHotFoot.HFFunctionLibrary.LoadFile
	 */
	struct UHFFunctionLibrary_LoadFile_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UHFSave*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RBHotFoot.HFFunctionLibrary.DrawSolidBox
	 */
	struct UHFFunctionLibrary_DrawSolidBox_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Center;                                                  // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Extent;                                                  // 0x0014(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            Rotation;                                                // 0x0020(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FColor                                              Color;                                                   // 0x002C(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RBHotFoot.HFFunctionLibrary.DrawLines
	 */
	struct UHFFunctionLibrary_DrawLines_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FVector>                                     Starts;                                                  // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FVector>                                     Ends;                                                    // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLinearColor                                        Color;                                                   // 0x0028(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Thickness;                                               // 0x0038(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RBHotFoot.HFFunctionLibrary.DrawLine
	 */
	struct UHFFunctionLibrary_DrawLine_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Start;                                                   // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             End;                                                     // 0x0014(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                                        Color;                                                   // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Thickness;                                               // 0x0030(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RBHotFoot.HFFunctionLibrary.DrawArrow
	 */
	struct UHFFunctionLibrary_DrawArrow_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Start;                                                   // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             End;                                                     // 0x0014(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                                        Color;                                                   // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ArrowSize;                                               // 0x0030(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Thickness;                                               // 0x0034(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RBHotFoot.HFFunctionLibrary.DirectSave
	 */
	struct UHFFunctionLibrary_DirectSave_Params
	{
	public:
		class UHFSave*                                             SaveObject;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Filename;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RBHotFoot.HFFunctionLibrary.DebugGameViewportClient
	 */
	struct UHFFunctionLibrary_DebugGameViewportClient_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RBHotFoot.HFFunctionLibrary.ClearActors
	 */
	struct UHFFunctionLibrary_ClearActors_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ActorTag;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RBHotFoot.HFFunctionLibrary.AsyncSave
	 */
	struct UHFFunctionLibrary_AsyncSave_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UHFSave*                                             SaveObject;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Filename;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ActorTag;                                                // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      SavedDelegate;                                           // 0x0028(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RBHotFoot.HFManager.UpdateGizmos
	 */
	struct AHFManager_UpdateGizmos_Params
	{	};

	/**
	 * Function RBHotFoot.HFManager.SpawnPlaceableActorAt
	 */
	struct AHFManager_SpawnPlaceableActorAt_Params
	{
	public:
		class UClass*                                              ActorClass;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           ScreenPosition;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ActorTag;                                                // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RBHotFoot.HFManager.SnapSelectedToFloor
	 */
	struct AHFManager_SnapSelectedToFloor_Params
	{	};

	/**
	 * Function RBHotFoot.HFManager.SetSnapToWorldGrid
	 */
	struct AHFManager_SetSnapToWorldGrid_Params
	{
	public:
		bool                                                       bNewSnapToWorldGrid;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RBHotFoot.HFManager.SetShowBlockalls
	 */
	struct AHFManager_SetShowBlockalls_Params
	{
	public:
		bool                                                       bShow;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RBHotFoot.HFManager.SetSelectedActorsSharedPropertyValue
	 */
	struct AHFManager_SetSelectedActorsSharedPropertyValue_Params
	{
	public:
		class FString                                              PropertyName;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              PropertyValue;                                           // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RBHotFoot.HFManager.SetSelectedActor
	 */
	struct AHFManager_SetSelectedActor_Params
	{
	public:
		class AActor*                                              NewSelectedActor;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RBHotFoot.HFManager.SetSelectActorEnabled
	 */
	struct AHFManager_SetSelectActorEnabled_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RBHotFoot.HFManager.SetLocalCoordinateSystem
	 */
	struct AHFManager_SetLocalCoordinateSystem_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RBHotFoot.HFManager.SetGridSize
	 */
	struct AHFManager_SetGridSize_Params
	{
	public:
		float                                                      NewGridSize;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RBHotFoot.HFManager.SetGizmoMethod
	 */
	struct AHFManager_SetGizmoMethod_Params
	{
	public:
		EHGGizmoMethod                                             Method;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RBHotFoot.HFManager.SetFlyingSpeed
	 */
	struct AHFManager_SetFlyingSpeed_Params
	{
	public:
		float                                                      NewSpeed;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RBHotFoot.HFManager.SetAxisScreenPos
	 */
	struct AHFManager_SetAxisScreenPos_Params
	{
	public:
		struct FVector2D                                           Pos;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RBHotFoot.HFManager.SetActorClassToSpawn
	 */
	struct AHFManager_SetActorClassToSpawn_Params
	{
	public:
		class UClass*                                              ActorClass;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RBHotFoot.HFManager.RenameSelected
	 */
	struct AHFManager_RenameSelected_Params
	{
	public:
		class FString                                              NewName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              OutError;                                                // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RBHotFoot.HFManager.RemoveSelectedActor
	 */
	struct AHFManager_RemoveSelectedActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RBHotFoot.HFManager.RefreshLoadedActors
	 */
	struct AHFManager_RefreshLoadedActors_Params
	{
	public:
		class FName                                                ActorTag;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RBHotFoot.HFManager.OnMouseButtonInput
	 */
	struct AHFManager_OnMouseButtonInput_Params
	{
	public:
		struct FPointerEvent                                       PointerEvent;                                            // 0x0000(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		EInputEvent                                                Event;                                                   // 0x0070(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0071(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RBHotFoot.HFManager.OnInputKey
	 */
	struct AHFManager_OnInputKey_Params
	{
	public:
		struct FKeyEvent                                           KeyEvent;                                                // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		EInputEvent                                                Event;                                                   // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0039(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RBHotFoot.HFManager.OnInputAxis
	 */
	struct AHFManager_OnInputAxis_Params
	{
	public:
		struct FPointerEvent                                       PointerEvent;                                            // 0x0000(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RBHotFoot.HFManager.InternalUpdateGizmos
	 */
	struct AHFManager_InternalUpdateGizmos_Params
	{	};

	/**
	 * Function RBHotFoot.HFManager.InputSnapSelectedToFloor
	 */
	struct AHFManager_InputSnapSelectedToFloor_Params
	{	};

	/**
	 * Function RBHotFoot.HFManager.InputRenameSelected
	 */
	struct AHFManager_InputRenameSelected_Params
	{	};

	/**
	 * Function RBHotFoot.HFManager.InputPasteSelectedActors
	 */
	struct AHFManager_InputPasteSelectedActors_Params
	{
	public:
		bool                                                       bAtLocation;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RBHotFoot.HFManager.InputFocusOnSelected
	 */
	struct AHFManager_InputFocusOnSelected_Params
	{	};

	/**
	 * Function RBHotFoot.HFManager.InputDeleteSelectedActors
	 */
	struct AHFManager_InputDeleteSelectedActors_Params
	{	};

	/**
	 * Function RBHotFoot.HFManager.InputCutSelectedActors
	 */
	struct AHFManager_InputCutSelectedActors_Params
	{	};

	/**
	 * Function RBHotFoot.HFManager.InputCopySelectedActors
	 */
	struct AHFManager_InputCopySelectedActors_Params
	{	};

	/**
	 * Function RBHotFoot.HFManager.GetSnapToWorldGrid
	 */
	struct AHFManager_GetSnapToWorldGrid_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RBHotFoot.HFManager.GetSharedProperties
	 */
	struct AHFManager_GetSharedProperties_Params
	{
	public:
		TArray<struct FHFSharedProperty>                           ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RBHotFoot.HFManager.GetSharedCustomDetailWidgets
	 */
	struct AHFManager_GetSharedCustomDetailWidgets_Params
	{	};

	/**
	 * Function RBHotFoot.HFManager.GetSelectedActors
	 */
	struct AHFManager_GetSelectedActors_Params
	{
	public:
		TArray<class AActor*>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RBHotFoot.HFManager.GetGridSize
	 */
	struct AHFManager_GetGridSize_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RBHotFoot.HFManager.FocusOnSelected
	 */
	struct AHFManager_FocusOnSelected_Params
	{	};

	/**
	 * Function RBHotFoot.HFManager.Exit
	 */
	struct AHFManager_Exit_Params
	{	};

	/**
	 * Function RBHotFoot.HFManager.EnablePlayerInput
	 */
	struct AHFManager_EnablePlayerInput_Params
	{
	public:
		bool                                                       bNewValue;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bForce;                                                  // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RBHotFoot.HFManager.ClearSelectedActors
	 */
	struct AHFManager_ClearSelectedActors_Params
	{	};

	/**
	 * Function RBHotFoot.HFManager.AddSelectedActor
	 */
	struct AHFManager_AddSelectedActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
