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
	 * Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.UpdatePlayerPOIs
	 */
	struct UWBP_DeployMenu_SpawnMinimap_C_UpdatePlayerPOIs_Params
	{	};

	/**
	 * Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.SetCurrentMapTexture
	 */
	struct UWBP_DeployMenu_SpawnMinimap_C_SetCurrentMapTexture_Params
	{
	public:
		class UTexture2D*                                          NewMapTexture;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.HasPreloadInProgress
	 */
	struct UWBP_DeployMenu_SpawnMinimap_C_HasPreloadInProgress_Params
	{
	public:
		bool                                                       bPreloading;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.ApplyPreloadedContent
	 */
	struct UWBP_DeployMenu_SpawnMinimap_C_ApplyPreloadedContent_Params
	{	};

	/**
	 * Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.PreloadContent
	 */
	struct UWBP_DeployMenu_SpawnMinimap_C_PreloadContent_Params
	{	};

	/**
	 * Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.ZoomOut
	 */
	struct UWBP_DeployMenu_SpawnMinimap_C_ZoomOut_Params
	{
	public:
		float                                                      ZoomDecrement;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.ZoomIn
	 */
	struct UWBP_DeployMenu_SpawnMinimap_C_ZoomIn_Params
	{
	public:
		float                                                      ZoomIncrement;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.OnMouseWheel
	 */
	struct UWBP_DeployMenu_SpawnMinimap_C_OnMouseWheel_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.OnMouseButtonUp
	 */
	struct UWBP_DeployMenu_SpawnMinimap_C_OnMouseButtonUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.UpdateMapMatParams
	 */
	struct UWBP_DeployMenu_SpawnMinimap_C_UpdateMapMatParams_Params
	{	};

	/**
	 * Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.GetLocalCursorDelta
	 */
	struct UWBP_DeployMenu_SpawnMinimap_C_GetLocalCursorDelta_Params
	{
	public:
		struct FGeometry                                           Geometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FVector2D                                           LocalDelta;                                              // 0x00A8(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.OnMouseMove
	 */
	struct UWBP_DeployMenu_SpawnMinimap_C_OnMouseMove_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.OnMouseButtonDown
	 */
	struct UWBP_DeployMenu_SpawnMinimap_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.InitMapBg
	 */
	struct UWBP_DeployMenu_SpawnMinimap_C_InitMapBg_Params
	{
	public:
		class UTexture2D*                                          MapTexture;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.OnLoaded_BACDC4954F814289E55DD7AAEBE3E34E
	 */
	struct UWBP_DeployMenu_SpawnMinimap_C_OnLoaded_BACDC4954F814289E55DD7AAEBE3E34E_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.OnLoaded_BB8D079144A98AFE7BD3849D43A40947
	 */
	struct UWBP_DeployMenu_SpawnMinimap_C_OnLoaded_BB8D079144A98AFE7BD3849D43A40947_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.Construct
	 */
	struct UWBP_DeployMenu_SpawnMinimap_C_Construct_Params
	{	};

	/**
	 * Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.PreConstruct
	 */
	struct UWBP_DeployMenu_SpawnMinimap_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.OnMouseEnter
	 */
	struct UWBP_DeployMenu_SpawnMinimap_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.Tick
	 */
	struct UWBP_DeployMenu_SpawnMinimap_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.OnContentPreloadStarted
	 */
	struct UWBP_DeployMenu_SpawnMinimap_C_OnContentPreloadStarted_Params
	{
	public:
		unsigned char                                              UnknownData_R71A[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.OnContentPreloadFinished
	 */
	struct UWBP_DeployMenu_SpawnMinimap_C_OnContentPreloadFinished_Params
	{	};

	/**
	 * Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.OnAsyncLoadCompleted
	 */
	struct UWBP_DeployMenu_SpawnMinimap_C_OnAsyncLoadCompleted_Params
	{	};

	/**
	 * Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.ReceiveOnPOISelectionStateChanged
	 */
	struct UWBP_DeployMenu_SpawnMinimap_C_ReceiveOnPOISelectionStateChanged_Params
	{
	public:
		class UDFPOIWidget*                                        POI;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSelected;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.ExecuteUbergraph_WBP_DeployMenu_SpawnMinimap
	 */
	struct UWBP_DeployMenu_SpawnMinimap_C_ExecuteUbergraph_WBP_DeployMenu_SpawnMinimap_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_86IQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.OnSpawnPointDeselected__DelegateSignature
	 */
	struct UWBP_DeployMenu_SpawnMinimap_C_OnSpawnPointDeselected__DelegateSignature_Params
	{
	public:
		class AActor*                                              POISpawnPointActor;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.OnSpawnPointSelected__DelegateSignature
	 */
	struct UWBP_DeployMenu_SpawnMinimap_C_OnSpawnPointSelected__DelegateSignature_Params
	{
	public:
		class AActor*                                              POISpawnPointActor;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.OnPreloadFinished__DelegateSignature
	 */
	struct UWBP_DeployMenu_SpawnMinimap_C_OnPreloadFinished__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
