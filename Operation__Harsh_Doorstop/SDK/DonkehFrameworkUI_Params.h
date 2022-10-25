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
	 * Function DonkehFrameworkUI.DFBaseMenu.RemoveFromMenuStack
	 */
	struct UDFBaseMenu_RemoveFromMenuStack_Params
	{	};

	/**
	 * Function DonkehFrameworkUI.DFBaseMenu.ReceiveOnMenuUncovered
	 */
	struct UDFBaseMenu_ReceiveOnMenuUncovered_Params
	{	};

	/**
	 * Function DonkehFrameworkUI.DFBaseMenu.ReceiveOnMenuPush
	 */
	struct UDFBaseMenu_ReceiveOnMenuPush_Params
	{	};

	/**
	 * Function DonkehFrameworkUI.DFBaseMenu.ReceiveOnMenuPop
	 */
	struct UDFBaseMenu_ReceiveOnMenuPop_Params
	{	};

	/**
	 * Function DonkehFrameworkUI.DFBaseMenu.ReceiveOnMenuCovered
	 */
	struct UDFBaseMenu_ReceiveOnMenuCovered_Params
	{	};

	/**
	 * Function DonkehFrameworkUI.DFBaseMenu.IsTopOfMenuStack
	 */
	struct UDFBaseMenu_IsTopOfMenuStack_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkUI.DFContextualWidgetBase.TestPrerequisites
	 */
	struct UDFContextualWidgetBase_TestPrerequisites_Params
	{
	public:
		bool                                                       bInvokeEvents;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkUI.DFContextualWidgetBase.PrerequisitesMet
	 */
	struct UDFContextualWidgetBase_PrerequisitesMet_Params
	{	};

	/**
	 * Function DonkehFrameworkUI.DFContextualWidgetBase.PrerequisiteNotMet
	 */
	struct UDFContextualWidgetBase_PrerequisiteNotMet_Params
	{
	public:
		class UDFContextualWidgetPrerequisiteBase*                 FailedPrereq;                                            // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkUI.DFContextualWidgetPrerequisiteBase.TestPrerequisite
	 */
	struct UDFContextualWidgetPrerequisiteBase_TestPrerequisite_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkUI.DFContextualWidgetPrerequisiteBase.SatisfiesPrerequisite
	 */
	struct UDFContextualWidgetPrerequisiteBase_SatisfiesPrerequisite_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkUI.DFContextualWidgetPrerequisiteBase.GetWidgetOuter
	 */
	struct UDFContextualWidgetPrerequisiteBase_GetWidgetOuter_Params
	{
	public:
		class UDFContextualWidgetBase*                             ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkUI.DFMenuManager.Top
	 */
	struct UDFMenuManager_Top_Params
	{
	public:
		class UDFBaseMenu*                                         ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkUI.DFMenuManager.RemoveMenu
	 */
	struct UDFMenuManager_RemoveMenu_Params
	{
	public:
		class UDFBaseMenu*                                         MenuToRemove;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkUI.DFMenuManager.PopMenu
	 */
	struct UDFMenuManager_PopMenu_Params
	{	};

	/**
	 * Function DonkehFrameworkUI.DFMenuManager.ClearMenuStack
	 */
	struct UDFMenuManager_ClearMenuStack_Params
	{	};

	/**
	 * Function DonkehFrameworkUI.DFMenuManager.ActivateMenu
	 */
	struct UDFMenuManager_ActivateMenu_Params
	{
	public:
		class UDFBaseMenu*                                         MenuToAdd;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMenuActivationMode                                        ActivationMode;                                          // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bShowMouseCursor;                                        // 0x0009(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUIOnlyInput;                                            // 0x000A(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkUI.DFMenuManagerBlueprintFunctions.GetMenuManager
	 */
	struct UDFMenuManagerBlueprintFunctions_GetMenuManager_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDFMenuManager*                                      ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkUI.DFMenuManagerBlueprintFunctions.CreateAndActivate
	 */
	struct UDFMenuManagerBlueprintFunctions_CreateAndActivate_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              MenuWidgetType;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerController*                                   OwningPlayer;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMenuActivationMode                                        ActivationMode;                                          // 0x0018(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bShowMouseCursor;                                        // 0x0019(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUIOnlyInput;                                            // 0x001A(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2D0K[0x5];                                   // 0x001B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDFBaseMenu*                                         ReturnValue;                                             // 0x0020(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkUI.DFMinimap.UpdateZoomValue
	 */
	struct UDFMinimap_UpdateZoomValue_Params
	{
	public:
		float                                                      NewZoomValue;                                            // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkUI.DFMinimap.UpdateMapPos
	 */
	struct UDFMinimap_UpdateMapPos_Params
	{
	public:
		struct FVector2D                                           NewMapPos;                                               // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkUI.DFMinimap.SetMapDirty
	 */
	struct UDFMinimap_SetMapDirty_Params
	{	};

	/**
	 * Function DonkehFrameworkUI.DFMinimap.RemovePOIByActorClass
	 */
	struct UDFMinimap_RemovePOIByActorClass_Params
	{
	public:
		class UClass*                                              POIActorClass;                                           // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkUI.DFMinimap.RemovePOIByActor
	 */
	struct UDFMinimap_RemovePOIByActor_Params
	{
	public:
		class AActor*                                              POIActorToRemove;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkUI.DFMinimap.RemovePOIAt
	 */
	struct UDFMinimap_RemovePOIAt_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkUI.DFMinimap.RemovePOI
	 */
	struct UDFMinimap_RemovePOI_Params
	{
	public:
		class UDFPOIWidget*                                        POIToRemove;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkUI.DFMinimap.ReceiveOnPOISelectionStateChanged
	 */
	struct UDFMinimap_ReceiveOnPOISelectionStateChanged_Params
	{
	public:
		class UDFPOIWidget*                                        POI;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSelected;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkUI.DFMinimap.ProjectWorldLocationToMap
	 */
	struct UDFMinimap_ProjectWorldLocationToMap_Params
	{
	public:
		struct FVector                                             WorldLocation;                                           // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           MapLocation;                                             // 0x000C(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkUI.DFMinimap.OnPOISelectionStateChanged
	 */
	struct UDFMinimap_OnPOISelectionStateChanged_Params
	{
	public:
		class UDFPOIWidget*                                        POI;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSelected;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkUI.DFMinimap.HasPOI
	 */
	struct UDFMinimap_HasPOI_Params
	{
	public:
		class UDFPOIWidget*                                        POI;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkUI.DFMinimap.HasAnyPOIs
	 */
	struct UDFMinimap_HasAnyPOIs_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkUI.DFMinimap.GetPOIIndex
	 */
	struct UDFMinimap_GetPOIIndex_Params
	{
	public:
		class UDFPOIWidget*                                        POI;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkUI.DFMinimap.GetPOICount
	 */
	struct UDFMinimap_GetPOICount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkUI.DFMinimap.GetPOIAt
	 */
	struct UDFMinimap_GetPOIAt_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_56F5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDFPOIWidget*                                        ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkUI.DFMinimap.GetMapSizeLocal
	 */
	struct UDFMinimap_GetMapSizeLocal_Params
	{
	public:
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkUI.DFMinimap.GetMapSizeAbsolute
	 */
	struct UDFMinimap_GetMapSizeAbsolute_Params
	{
	public:
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkUI.DFMinimap.FindPOIByActor
	 */
	struct UDFMinimap_FindPOIByActor_Params
	{
	public:
		class AActor*                                              POIActor;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDFPOIWidget*                                        OutFoundPOI;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkUI.DFMinimap.DeprojectMapLocationToWorld
	 */
	struct UDFMinimap_DeprojectMapLocationToWorld_Params
	{
	public:
		struct FVector2D                                           MapLocation;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             WorldLocation;                                           // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkUI.DFMinimap.ConvertMapLocationToLocalWidgetLocation
	 */
	struct UDFMinimap_ConvertMapLocationToLocalWidgetLocation_Params
	{
	public:
		struct FVector2D                                           MapLocation;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           WidgetLocation;                                          // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkUI.DFMinimap.ClearPOIs
	 */
	struct UDFMinimap_ClearPOIs_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkUI.DFMinimap.AddNewPOI
	 */
	struct UDFMinimap_AddNewPOI_Params
	{
	public:
		class AActor*                                              POIActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDFPOIWidget*                                        ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkUI.DFPOIComponent.UnregisterPOI
	 */
	struct UDFPOIComponent_UnregisterPOI_Params
	{	};

	/**
	 * Function DonkehFrameworkUI.DFPOIComponent.RegisterPOI
	 */
	struct UDFPOIComponent_RegisterPOI_Params
	{
	public:
		class UDFMinimap*                                          MinimapWidget;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkUI.DFPOIComponent.OnMinimapLateInit
	 */
	struct UDFPOIComponent_OnMinimapLateInit_Params
	{
	public:
		class UDFMinimap*                                          NewMinimap;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkUI.DFPOIComponent.IsPOIRegistered
	 */
	struct UDFPOIComponent_IsPOIRegistered_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkUI.DFPOIComponent.GetPOIWidget
	 */
	struct UDFPOIComponent_GetPOIWidget_Params
	{
	public:
		class UDFPOIWidget*                                        ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkUI.DFPOIComponent.GetMinimap
	 */
	struct UDFPOIComponent_GetMinimap_Params
	{
	public:
		class UDFMinimap*                                          ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkUI.DFPOIWidget.UpdateRotation
	 */
	struct UDFPOIWidget_UpdateRotation_Params
	{	};

	/**
	 * Function DonkehFrameworkUI.DFPOIWidget.UpdatePosition
	 */
	struct UDFPOIWidget_UpdatePosition_Params
	{	};

	/**
	 * Function DonkehFrameworkUI.DFPOIWidget.SetPOISelectionState
	 */
	struct UDFPOIWidget_SetPOISelectionState_Params
	{
	public:
		bool                                                       bNewSelected;                                            // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkUI.DFPOIWidget.SelectPOI
	 */
	struct UDFPOIWidget_SelectPOI_Params
	{	};

	/**
	 * Function DonkehFrameworkUI.DFPOIWidget.ReceivePOISelected
	 */
	struct UDFPOIWidget_ReceivePOISelected_Params
	{	};

	/**
	 * Function DonkehFrameworkUI.DFPOIWidget.ReceivePOIInitialized
	 */
	struct UDFPOIWidget_ReceivePOIInitialized_Params
	{	};

	/**
	 * Function DonkehFrameworkUI.DFPOIWidget.ReceivePOIDeselected
	 */
	struct UDFPOIWidget_ReceivePOIDeselected_Params
	{	};

	/**
	 * Function DonkehFrameworkUI.DFPOIWidget.ReceiveOnPOIActorEndPlay
	 */
	struct UDFPOIWidget_ReceiveOnPOIActorEndPlay_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EEndPlayReason                                             EndPlayReason;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkUI.DFPOIWidget.ReceiveCanSelect
	 */
	struct UDFPOIWidget_ReceiveCanSelect_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkUI.DFPOIWidget.OnPOIActorEndPlay
	 */
	struct UDFPOIWidget_OnPOIActorEndPlay_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EEndPlayReason                                             EndPlayReason;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkUI.DFPOIWidget.OnOwningMapDirty
	 */
	struct UDFPOIWidget_OnOwningMapDirty_Params
	{	};

	/**
	 * Function DonkehFrameworkUI.DFPOIWidget.IsSelectable
	 */
	struct UDFPOIWidget_IsSelectable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkUI.DFPOIWidget.IsPOIActorValid
	 */
	struct UDFPOIWidget_IsPOIActorValid_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkUI.DFPOIWidget.IsInitialized
	 */
	struct UDFPOIWidget_IsInitialized_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkUI.DFPOIWidget.IsDynamic
	 */
	struct UDFPOIWidget_IsDynamic_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkUI.DFPOIWidget.InitPOI
	 */
	struct UDFPOIWidget_InitPOI_Params
	{
	public:
		class UDFMinimap*                                          OwningMapWidget;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              ActorToTrack;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FMinimapPOITableRow                                 ActorPOIData;                                            // 0x0010(0x0130)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkUI.DFPOIWidget.HasFixedRotation
	 */
	struct UDFPOIWidget_HasFixedRotation_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkUI.DFPOIWidget.GetDefaultIconBrush
	 */
	struct UDFPOIWidget_GetDefaultIconBrush_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkUI.DFPOIWidget.DeselectPOI
	 */
	struct UDFPOIWidget_DeselectPOI_Params
	{	};

	/**
	 * Function DonkehFrameworkUI.DFPOIWidget.CanSelect
	 */
	struct UDFPOIWidget_CanSelect_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkUI.POIWidgetSlotInterface.SetIconBrush
	 */
	struct UPOIWidgetSlotInterface_SetIconBrush_Params
	{
	public:
		struct FSlateBrush                                         NewIconBrush;                                            // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkUI.POIWidgetSlotInterface.GetIconSlot
	 */
	struct UPOIWidgetSlotInterface_GetIconSlot_Params
	{
	public:
		class UNamedSlot*                                          ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkUI.POIWidgetSlotInterface.GetIconBrush
	 */
	struct UPOIWidgetSlotInterface_GetIconBrush_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
