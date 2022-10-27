#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * Function CohtmlPlugin.CohtmlBaseComponent.UpdateWholeDataModelFromStruct
	 */
	struct UCohtmlBaseComponent_UpdateWholeDataModelFromStruct_Params
	{
	public:
		class UStructProperty*                                     Struct;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CohtmlPlugin.CohtmlBaseComponent.UpdateWholeDataModelFromObject
	 */
	struct UCohtmlBaseComponent_UpdateWholeDataModelFromObject_Params
	{
	public:
		class UObject*                                             Model;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CohtmlPlugin.CohtmlBaseComponent.TriggerJSEvent
	 */
	struct UCohtmlBaseComponent_TriggerJSEvent_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCohtmlJSEvent*                                      EventData;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CohtmlPlugin.CohtmlBaseComponent.SynchronizeModels
	 */
	struct UCohtmlBaseComponent_SynchronizeModels_Params
	{	};

	/**
	 * Function CohtmlPlugin.CohtmlBaseComponent.ShowPaintRects
	 */
	struct UCohtmlBaseComponent_ShowPaintRects_Params
	{
	public:
		bool                                                       show;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CohtmlPlugin.CohtmlBaseComponent.SetSoundAttenuation
	 */
	struct UCohtmlBaseComponent_SetSoundAttenuation_Params
	{
	public:
		struct FSoundAttenuationSettings                           Settings;                                                // 0x0000(0x02A8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CohtmlPlugin.CohtmlBaseComponent.Resize
	 */
	struct UCohtmlBaseComponent_Resize_Params
	{
	public:
		int32_t                                                    Width;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Height;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CohtmlPlugin.CohtmlBaseComponent.Reload
	 */
	struct UCohtmlBaseComponent_Reload_Params
	{	};

	/**
	 * Function CohtmlPlugin.CohtmlBaseComponent.Load
	 */
	struct UCohtmlBaseComponent_Load_Params
	{
	public:
		class FString                                              Path;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CohtmlPlugin.CohtmlBaseComponent.IsReadyToCreateView
	 */
	struct UCohtmlBaseComponent_IsReadyToCreateView_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CohtmlPlugin.CohtmlBaseComponent.IsReadyForBindings
	 */
	struct UCohtmlBaseComponent_IsReadyForBindings_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CohtmlPlugin.CohtmlBaseComponent.HasRequestedView
	 */
	struct UCohtmlBaseComponent_HasRequestedView_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CohtmlPlugin.CohtmlBaseComponent.EndDebugFrameSave
	 */
	struct UCohtmlBaseComponent_EndDebugFrameSave_Params
	{	};

	/**
	 * Function CohtmlPlugin.CohtmlBaseComponent.EnableRendering
	 */
	struct UCohtmlBaseComponent_EnableRendering_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CohtmlPlugin.CohtmlBaseComponent.EnableDelayedUpdate
	 */
	struct UCohtmlBaseComponent_EnableDelayedUpdate_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CohtmlPlugin.CohtmlBaseComponent.DebugSaveNextFrame
	 */
	struct UCohtmlBaseComponent_DebugSaveNextFrame_Params
	{	};

	/**
	 * Function CohtmlPlugin.CohtmlBaseComponent.CreateJSEvent
	 */
	struct UCohtmlBaseComponent_CreateJSEvent_Params
	{
	public:
		class UCohtmlJSEvent*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CohtmlPlugin.CohtmlBaseComponent.CreateDataModelFromStruct
	 */
	struct UCohtmlBaseComponent_CreateDataModelFromStruct_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UStructProperty*                                     Arg;                                                     // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CohtmlPlugin.CohtmlBaseComponent.CreateDataModelFromObject
	 */
	struct UCohtmlBaseComponent_CreateDataModelFromObject_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             Model;                                                   // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CohtmlPlugin.CohtmlBaseComponent.BeginDebugFrameSave
	 */
	struct UCohtmlBaseComponent_BeginDebugFrameSave_Params
	{	};

	/**
	 * Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.TriggerJSEvent
	 */
	struct UCohtmlBlueprintFunctionLibrary_TriggerJSEvent_Params
	{
	public:
		class UCohtmlBaseComponent*                                Component;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              EventName;                                               // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCohtmlJSEvent*                                      JSEvent;                                                 // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.CreateJSEvent
	 */
	struct UCohtmlBlueprintFunctionLibrary_CreateJSEvent_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCohtmlJSEvent*                                      ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddStructArg
	 */
	struct UCohtmlBlueprintFunctionLibrary_AddStructArg_Params
	{
	public:
		class UCohtmlJSEvent*                                      JSEvent;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UStructProperty*                                     Arg;                                                     // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddString
	 */
	struct UCohtmlBlueprintFunctionLibrary_AddString_Params
	{
	public:
		class UCohtmlJSEvent*                                      JSEvent;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Arg;                                                     // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddObject
	 */
	struct UCohtmlBlueprintFunctionLibrary_AddObject_Params
	{
	public:
		class UCohtmlJSEvent*                                      JSEvent;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             Arg;                                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddInt32
	 */
	struct UCohtmlBlueprintFunctionLibrary_AddInt32_Params
	{
	public:
		class UCohtmlJSEvent*                                      JSEvent;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Arg;                                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddFloat
	 */
	struct UCohtmlBlueprintFunctionLibrary_AddFloat_Params
	{
	public:
		class UCohtmlJSEvent*                                      JSEvent;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Arg;                                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddByte
	 */
	struct UCohtmlBlueprintFunctionLibrary_AddByte_Params
	{
	public:
		class UCohtmlJSEvent*                                      JSEvent;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              Arg;                                                     // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddBool
	 */
	struct UCohtmlBlueprintFunctionLibrary_AddBool_Params
	{
	public:
		class UCohtmlJSEvent*                                      JSEvent;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Arg;                                                     // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddArrayOfStructs
	 */
	struct UCohtmlBlueprintFunctionLibrary_AddArrayOfStructs_Params
	{
	public:
		class UCohtmlJSEvent*                                      JSEvent;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<int32_t>                                            Arg;                                                     // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddArray
	 */
	struct UCohtmlBlueprintFunctionLibrary_AddArray_Params
	{
	public:
		class UCohtmlJSEvent*                                      JSEvent;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<int32_t>                                            Arg;                                                     // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    ArrayType;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CohtmlPlugin.CohtmlGameHUD.SetupView
	 */
	struct ACohtmlGameHUD_SetupView_Params
	{
	public:
		class FString                                              PageUrl;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bEnableComplexCSSSupport;                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bDelayedUpdate;                                          // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CohtmlPlugin.CohtmlInputActor.ToggleCohtmlInputFocus
	 */
	struct ACohtmlInputActor_ToggleCohtmlInputFocus_Params
	{	};

	/**
	 * Function CohtmlPlugin.CohtmlInputActor.SetLineTraceMode
	 */
	struct ACohtmlInputActor_SetLineTraceMode_Params
	{
	public:
		ECohtmlInputWidgetLineTraceMode                            Mode;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CohtmlPlugin.CohtmlInputActor.SetInputPropagationBehaviour
	 */
	struct ACohtmlInputActor_SetInputPropagationBehaviour_Params
	{
	public:
		ECohtmlInputPropagationBehaviour                           Propagation;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CohtmlPlugin.CohtmlInputActor.SetCohtmlViewFocus
	 */
	struct ACohtmlInputActor_SetCohtmlViewFocus_Params
	{
	public:
		class UCohtmlBaseComponent*                                NewFocusedView;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CohtmlPlugin.CohtmlInputActor.SetCohtmlInputFocus
	 */
	struct ACohtmlInputActor_SetCohtmlInputFocus_Params
	{
	public:
		bool                                                       FocusUI;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CohtmlPlugin.CohtmlInputActor.IsCohtmlFocused
	 */
	struct ACohtmlInputActor_IsCohtmlFocused_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CohtmlPlugin.CohtmlInputActor.Initialize
	 */
	struct ACohtmlInputActor_Initialize_Params
	{
	public:
		ECollisionChannel                                          CollisionChannel;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ETextureAddress                                            AddressMode;                                             // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECohtmlInputWidgetRaycastQuality                           RaycastQuality;                                          // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_X7JZ[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    UVChannel;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CohtmlPlugin.CohtmlInputActor.GetInputPropagationBehaviour
	 */
	struct ACohtmlInputActor_GetInputPropagationBehaviour_Params
	{
	public:
		ECohtmlInputPropagationBehaviour                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CohtmlPlugin.CohtmlInputActor.AlwaysAcceptMouseInput
	 */
	struct ACohtmlInputActor_AlwaysAcceptMouseInput_Params
	{
	public:
		bool                                                       bAccept;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CohtmlPlugin.CohtmlJSEvent.AddText
	 */
	struct UCohtmlJSEvent_AddText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CohtmlPlugin.CohtmlJSEvent.AddStructArg
	 */
	struct UCohtmlJSEvent_AddStructArg_Params
	{
	public:
		class UStructProperty*                                     Arg;                                                     // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CohtmlPlugin.CohtmlJSEvent.AddString
	 */
	struct UCohtmlJSEvent_AddString_Params
	{
	public:
		class FString                                              str;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CohtmlPlugin.CohtmlJSEvent.AddObject
	 */
	struct UCohtmlJSEvent_AddObject_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CohtmlPlugin.CohtmlJSEvent.AddName
	 */
	struct UCohtmlJSEvent_AddName_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CohtmlPlugin.CohtmlJSEvent.AddInt32
	 */
	struct UCohtmlJSEvent_AddInt32_Params
	{
	public:
		int32_t                                                    integer;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CohtmlPlugin.CohtmlJSEvent.AddFloat
	 */
	struct UCohtmlJSEvent_AddFloat_Params
	{
	public:
		float                                                      fl;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CohtmlPlugin.CohtmlJSEvent.AddByte
	 */
	struct UCohtmlJSEvent_AddByte_Params
	{
	public:
		unsigned char                                              byte;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CohtmlPlugin.CohtmlJSEvent.AddBool
	 */
	struct UCohtmlJSEvent_AddBool_Params
	{
	public:
		bool                                                       B;                                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CohtmlPlugin.CohtmlJSEvent.AddArray
	 */
	struct UCohtmlJSEvent_AddArray_Params
	{
	public:
		TArray<int32_t>                                            Array;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CohtmlPlugin.CohtmlWidget.UpdateWholeDataModelFromStruct
	 */
	struct UCohtmlWidget_UpdateWholeDataModelFromStruct_Params
	{
	public:
		class UStructProperty*                                     Struct;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CohtmlPlugin.CohtmlWidget.UpdateWholeDataModelFromObject
	 */
	struct UCohtmlWidget_UpdateWholeDataModelFromObject_Params
	{
	public:
		class UObject*                                             Model;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CohtmlPlugin.CohtmlWidget.TriggerJSEvent
	 */
	struct UCohtmlWidget_TriggerJSEvent_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCohtmlJSEvent*                                      EventData;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CohtmlPlugin.CohtmlWidget.SynchronizeModels
	 */
	struct UCohtmlWidget_SynchronizeModels_Params
	{	};

	/**
	 * Function CohtmlPlugin.CohtmlWidget.ShowPaintRects
	 */
	struct UCohtmlWidget_ShowPaintRects_Params
	{
	public:
		bool                                                       show;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CohtmlPlugin.CohtmlWidget.SetSoundAttenuation
	 */
	struct UCohtmlWidget_SetSoundAttenuation_Params
	{
	public:
		struct FSoundAttenuationSettings                           Settings;                                                // 0x0000(0x02A8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CohtmlPlugin.CohtmlWidget.SetInputPropagationBehaviour
	 */
	struct UCohtmlWidget_SetInputPropagationBehaviour_Params
	{
	public:
		ECohtmlInputPropagationBehaviour                           Propagation;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CohtmlPlugin.CohtmlWidget.Reload
	 */
	struct UCohtmlWidget_Reload_Params
	{	};

	/**
	 * Function CohtmlPlugin.CohtmlWidget.Load
	 */
	struct UCohtmlWidget_Load_Params
	{
	public:
		class FString                                              Path;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CohtmlPlugin.CohtmlWidget.IsReadyToCreateView
	 */
	struct UCohtmlWidget_IsReadyToCreateView_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CohtmlPlugin.CohtmlWidget.IsReadyForBindings
	 */
	struct UCohtmlWidget_IsReadyForBindings_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CohtmlPlugin.CohtmlWidget.HasRequestedView
	 */
	struct UCohtmlWidget_HasRequestedView_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CohtmlPlugin.CohtmlWidget.GetRenderTexture
	 */
	struct UCohtmlWidget_GetRenderTexture_Params
	{
	public:
		class UTextureRenderTarget2D*                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CohtmlPlugin.CohtmlWidget.GetInputPropagationBehaviour
	 */
	struct UCohtmlWidget_GetInputPropagationBehaviour_Params
	{
	public:
		ECohtmlInputPropagationBehaviour                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CohtmlPlugin.CohtmlWidget.CreateJSEvent
	 */
	struct UCohtmlWidget_CreateJSEvent_Params
	{
	public:
		class UCohtmlJSEvent*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CohtmlPlugin.CohtmlWidget.CreateDataModelFromStruct
	 */
	struct UCohtmlWidget_CreateDataModelFromStruct_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UStructProperty*                                     Struct;                                                  // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CohtmlPlugin.CohtmlWidget.CreateDataModelFromObject
	 */
	struct UCohtmlWidget_CreateDataModelFromObject_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             Model;                                                   // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
