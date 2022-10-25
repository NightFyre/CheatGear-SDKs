#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.UpdateWholeDataModelFromStruct
	 */
	struct UCoherentUIGTBaseComponent_UpdateWholeDataModelFromStruct_Params
	{
	public:
		class UStructProperty*                                     Arg;                                                     // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.UpdateWholeDataModelFromObject
	 */
	struct UCoherentUIGTBaseComponent_UpdateWholeDataModelFromObject_Params
	{
	public:
		class UObject*                                             Model;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.TriggerJSEvent
	 */
	struct UCoherentUIGTBaseComponent_TriggerJSEvent_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		class UCoherentUIGTJSEvent*                                EventData;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.SynchronizeModels
	 */
	struct UCoherentUIGTBaseComponent_SynchronizeModels_Params
	{	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.ShowPaintRects
	 */
	struct UCoherentUIGTBaseComponent_ShowPaintRects_Params
	{
	public:
		bool                                                       show;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.SetClickThroughAlphaThreshold
	 */
	struct UCoherentUIGTBaseComponent_SetClickThroughAlphaThreshold_Params
	{
	public:
		float                                                      Threshold;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Resize
	 */
	struct UCoherentUIGTBaseComponent_Resize_Params
	{
	public:
		int32_t                                                    Width;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Height;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Reload
	 */
	struct UCoherentUIGTBaseComponent_Reload_Params
	{	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Redraw
	 */
	struct UCoherentUIGTBaseComponent_Redraw_Params
	{	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Load
	 */
	struct UCoherentUIGTBaseComponent_Load_Params
	{
	public:
		class FString                                              path;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsTransparent
	 */
	struct UCoherentUIGTBaseComponent_IsTransparent_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsReadyToCreateView
	 */
	struct UCoherentUIGTBaseComponent_IsReadyToCreateView_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsReadyForBindings
	 */
	struct UCoherentUIGTBaseComponent_IsReadyForBindings_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsDocumentReady
	 */
	struct UCoherentUIGTBaseComponent_IsDocumentReady_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.HasRequestedView
	 */
	struct UCoherentUIGTBaseComponent_HasRequestedView_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.GetClickThroughAlphaThreshold
	 */
	struct UCoherentUIGTBaseComponent_GetClickThroughAlphaThreshold_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.EndDebugFrameSave
	 */
	struct UCoherentUIGTBaseComponent_EndDebugFrameSave_Params
	{	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.EnableDelayedUpdate
	 */
	struct UCoherentUIGTBaseComponent_EnableDelayedUpdate_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.DebugSaveNextFrame
	 */
	struct UCoherentUIGTBaseComponent_DebugSaveNextFrame_Params
	{	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.CreateJSEvent
	 */
	struct UCoherentUIGTBaseComponent_CreateJSEvent_Params
	{
	public:
		class UCoherentUIGTJSEvent*                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.CreateDataModelFromStruct
	 */
	struct UCoherentUIGTBaseComponent_CreateDataModelFromStruct_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		class UStructProperty*                                     Arg;                                                     // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.CreateDataModelFromObject
	 */
	struct UCoherentUIGTBaseComponent_CreateDataModelFromObject_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		class UObject*                                             Model;                                                   // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.BeginDebugFrameSave
	 */
	struct UCoherentUIGTBaseComponent_BeginDebugFrameSave_Params
	{	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTLiveView.OnLiveViewSizeRequest
	 */
	struct UCoherentUIGTLiveView_OnLiveViewSizeRequest_Params
	{
	public:
		class UCoherentUIGTBaseComponent*                          BaseComponent;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              Name;                                                    // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    Width;                                                   // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Height;                                                  // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddText
	 */
	struct UCoherentUIGTJSEvent_AddText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddStructArg
	 */
	struct UCoherentUIGTJSEvent_AddStructArg_Params
	{
	public:
		class UStructProperty*                                     Arg;                                                     // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddString
	 */
	struct UCoherentUIGTJSEvent_AddString_Params
	{
	public:
		class FString                                              Str;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddObject
	 */
	struct UCoherentUIGTJSEvent_AddObject_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddName
	 */
	struct UCoherentUIGTJSEvent_AddName_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddInt32
	 */
	struct UCoherentUIGTJSEvent_AddInt32_Params
	{
	public:
		int32_t                                                    integer;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddFloat
	 */
	struct UCoherentUIGTJSEvent_AddFloat_Params
	{
	public:
		float                                                      fl;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddByte
	 */
	struct UCoherentUIGTJSEvent_AddByte_Params
	{
	public:
		unsigned char                                              byte;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddBool
	 */
	struct UCoherentUIGTJSEvent_AddBool_Params
	{
	public:
		bool                                                       B;                                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddArray
	 */
	struct UCoherentUIGTJSEvent_AddArray_Params
	{
	public:
		TArray<int32_t>                                            Array;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTJSPayload.ReadObject
	 */
	struct UCoherentUIGTJSPayload_ReadObject_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0ZC6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             Object;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetString
	 */
	struct UCoherentUIGTJSPayload_GetString_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TDWH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetNumber
	 */
	struct UCoherentUIGTJSPayload_GetNumber_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetInt32
	 */
	struct UCoherentUIGTJSPayload_GetInt32_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetBool
	 */
	struct UCoherentUIGTJSPayload_GetBool_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.TriggerJSEvent
	 */
	struct UCoherentUIGTBlueprintFunctionLibrary_TriggerJSEvent_Params
	{
	public:
		class UCoherentUIGTBaseComponent*                          Component;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              EventName;                                               // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		class UCoherentUIGTJSEvent*                                JSEvent;                                                 // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.SetupLoadingScreen
	 */
	struct UCoherentUIGTBlueprintFunctionLibrary_SetupLoadingScreen_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCoherentUIGTLoadingScreenSettings                  Settings;                                                // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.CreateJSEvent
	 */
	struct UCoherentUIGTBlueprintFunctionLibrary_CreateJSEvent_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UCoherentUIGTJSEvent*                                ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddStructArg
	 */
	struct UCoherentUIGTBlueprintFunctionLibrary_AddStructArg_Params
	{
	public:
		class UCoherentUIGTJSEvent*                                JSEvent;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStructProperty*                                     Arg;                                                     // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddString
	 */
	struct UCoherentUIGTBlueprintFunctionLibrary_AddString_Params
	{
	public:
		class UCoherentUIGTJSEvent*                                JSEvent;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              Arg;                                                     // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddObject
	 */
	struct UCoherentUIGTBlueprintFunctionLibrary_AddObject_Params
	{
	public:
		class UCoherentUIGTJSEvent*                                JSEvent;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Arg;                                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddInt32
	 */
	struct UCoherentUIGTBlueprintFunctionLibrary_AddInt32_Params
	{
	public:
		class UCoherentUIGTJSEvent*                                JSEvent;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Arg;                                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddFloat
	 */
	struct UCoherentUIGTBlueprintFunctionLibrary_AddFloat_Params
	{
	public:
		class UCoherentUIGTJSEvent*                                JSEvent;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Arg;                                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddByte
	 */
	struct UCoherentUIGTBlueprintFunctionLibrary_AddByte_Params
	{
	public:
		class UCoherentUIGTJSEvent*                                JSEvent;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              Arg;                                                     // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddBool
	 */
	struct UCoherentUIGTBlueprintFunctionLibrary_AddBool_Params
	{
	public:
		class UCoherentUIGTJSEvent*                                JSEvent;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Arg;                                                     // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddArrayOfStructs
	 */
	struct UCoherentUIGTBlueprintFunctionLibrary_AddArrayOfStructs_Params
	{
	public:
		class UCoherentUIGTJSEvent*                                JSEvent;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<int32_t>                                            Arg;                                                     // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddArray
	 */
	struct UCoherentUIGTBlueprintFunctionLibrary_AddArray_Params
	{
	public:
		class UCoherentUIGTJSEvent*                                JSEvent;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<int32_t>                                            Arg;                                                     // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
		int32_t                                                    ArrayType;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTGameHUD.SetupUIGTView
	 */
	struct ACoherentUIGTGameHUD_SetupUIGTView_Params
	{
	public:
		class FString                                              PageUrl;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       bIsTransparent;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NI9T[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ClickThroughAlphaThreshold;                              // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AnimationFrameDefer;                                     // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bDelayedUpdate;                                          // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTGameHUD.HasSetupUIGTView
	 */
	struct ACoherentUIGTGameHUD_HasSetupUIGTView_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTInputActor.ToggleCoherentUIGTInputFocus
	 */
	struct ACoherentUIGTInputActor_ToggleCoherentUIGTInputFocus_Params
	{	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetLineTraceMode
	 */
	struct ACoherentUIGTInputActor_SetLineTraceMode_Params
	{
	public:
		EGTInputWidgetLineTraceMode                                Mode;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetInputPropagationBehaviour
	 */
	struct ACoherentUIGTInputActor_SetInputPropagationBehaviour_Params
	{
	public:
		ECoherentUIGTInputPropagationBehaviour                     Propagation;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetCoherentUIGTViewFocus
	 */
	struct ACoherentUIGTInputActor_SetCoherentUIGTViewFocus_Params
	{
	public:
		class UCoherentUIGTBaseComponent*                          NewFocusedView;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetCoherentUIGTInputFocus
	 */
	struct ACoherentUIGTInputActor_SetCoherentUIGTInputFocus_Params
	{
	public:
		bool                                                       FocusUI;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTInputActor.IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED
	 */
	struct ACoherentUIGTInputActor_IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTInputActor.IsCoherentUIGTFocused
	 */
	struct ACoherentUIGTInputActor_IsCoherentUIGTFocused_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTInputActor.Initialize
	 */
	struct ACoherentUIGTInputActor_Initialize_Params
	{
	public:
		ECollisionChannel                                          CollisionChannel;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ETextureAddress                                            AddressMode;                                             // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EGTInputWidgetRaycastQuality                               RaycastQuality;                                          // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4WVV[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    UVChannel;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTInputActor.GetInputPropagationBehaviour
	 */
	struct ACoherentUIGTInputActor_GetInputPropagationBehaviour_Params
	{
	public:
		ECoherentUIGTInputPropagationBehaviour                     ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTInputActor.AlwaysAcceptMouseInput
	 */
	struct ACoherentUIGTInputActor_AlwaysAcceptMouseInput_Params
	{
	public:
		bool                                                       bAccept;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTInputActor.AllowJoystickInputWhileUIGTIsFocused_DEPRECATED
	 */
	struct ACoherentUIGTInputActor_AllowJoystickInputWhileUIGTIsFocused_DEPRECATED_Params
	{
	public:
		bool                                                       bAllow;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTWidget.UpdateWholeDataModelFromStruct
	 */
	struct UCoherentUIGTWidget_UpdateWholeDataModelFromStruct_Params
	{
	public:
		class UStructProperty*                                     Arg;                                                     // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTWidget.UpdateWholeDataModelFromObject
	 */
	struct UCoherentUIGTWidget_UpdateWholeDataModelFromObject_Params
	{
	public:
		class UObject*                                             Model;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTWidget.TriggerJSEvent
	 */
	struct UCoherentUIGTWidget_TriggerJSEvent_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		class UCoherentUIGTJSEvent*                                EventData;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTWidget.SynchronizeModels
	 */
	struct UCoherentUIGTWidget_SynchronizeModels_Params
	{	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTWidget.ShowPaintRects
	 */
	struct UCoherentUIGTWidget_ShowPaintRects_Params
	{
	public:
		bool                                                       show;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTWidget.SetClickThroughAlphaThreshold
	 */
	struct UCoherentUIGTWidget_SetClickThroughAlphaThreshold_Params
	{
	public:
		float                                                      Threshold;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTWidget.Reload
	 */
	struct UCoherentUIGTWidget_Reload_Params
	{	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTWidget.Redraw
	 */
	struct UCoherentUIGTWidget_Redraw_Params
	{	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTWidget.Load
	 */
	struct UCoherentUIGTWidget_Load_Params
	{
	public:
		class FString                                              path;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTWidget.IsTransparent
	 */
	struct UCoherentUIGTWidget_IsTransparent_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTWidget.IsReadyToCreateView
	 */
	struct UCoherentUIGTWidget_IsReadyToCreateView_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTWidget.IsReadyForBindings
	 */
	struct UCoherentUIGTWidget_IsReadyForBindings_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTWidget.IsDocumentReady
	 */
	struct UCoherentUIGTWidget_IsDocumentReady_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTWidget.HasRequestedView
	 */
	struct UCoherentUIGTWidget_HasRequestedView_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTWidget.GetRenderTexture
	 */
	struct UCoherentUIGTWidget_GetRenderTexture_Params
	{
	public:
		class UTextureRenderTarget2D*                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTWidget.GetClickThroughAlphaThreshold
	 */
	struct UCoherentUIGTWidget_GetClickThroughAlphaThreshold_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTWidget.EndDebugFrameSave
	 */
	struct UCoherentUIGTWidget_EndDebugFrameSave_Params
	{	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTWidget.DebugSaveNextFrame
	 */
	struct UCoherentUIGTWidget_DebugSaveNextFrame_Params
	{	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTWidget.CreateJSEvent
	 */
	struct UCoherentUIGTWidget_CreateJSEvent_Params
	{
	public:
		class UCoherentUIGTJSEvent*                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTWidget.CreateDataModelFromStruct
	 */
	struct UCoherentUIGTWidget_CreateDataModelFromStruct_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		class UStructProperty*                                     Arg;                                                     // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTWidget.CreateDataModelFromObject
	 */
	struct UCoherentUIGTWidget_CreateDataModelFromObject_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		class UObject*                                             Model;                                                   // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CoherentUIGTPlugin.CoherentUIGTWidget.BeginDebugFrameSave
	 */
	struct UCoherentUIGTWidget_BeginDebugFrameSave_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
