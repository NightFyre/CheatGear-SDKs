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
	 * Function WBP_DeployMenu_SpawnMapView.WBP_DeployMenu_SpawnMapView_C.UpdatePlayerPOIs
	 */
	struct UWBP_DeployMenu_SpawnMapView_C_UpdatePlayerPOIs_Params
	{	};

	/**
	 * Function WBP_DeployMenu_SpawnMapView.WBP_DeployMenu_SpawnMapView_C.GetMinimapData
	 */
	struct UWBP_DeployMenu_SpawnMapView_C_GetMinimapData_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_570M[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		unsigned char                                              UnknownData_9UVY[0x2F];                                  // 0x0001(0x002F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FMinimapGenerationSettings                          MinimapSettings;                                         // 0x0030(0x0028)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function WBP_DeployMenu_SpawnMapView.WBP_DeployMenu_SpawnMapView_C.PreloadContent
	 */
	struct UWBP_DeployMenu_SpawnMapView_C_PreloadContent_Params
	{	};

	/**
	 * Function WBP_DeployMenu_SpawnMapView.WBP_DeployMenu_SpawnMapView_C.Construct
	 */
	struct UWBP_DeployMenu_SpawnMapView_C_Construct_Params
	{	};

	/**
	 * Function WBP_DeployMenu_SpawnMapView.WBP_DeployMenu_SpawnMapView_C.BndEvt__Minimap_K2Node_ComponentBoundEvent_1_OnPreloadFinished__DelegateSignature
	 */
	struct UWBP_DeployMenu_SpawnMapView_C_BndEvt__Minimap_K2Node_ComponentBoundEvent_1_OnPreloadFinished__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_DeployMenu_SpawnMapView.WBP_DeployMenu_SpawnMapView_C.OnPreloadFinished (SpawnMapView)
	 */
	struct UWBP_DeployMenu_SpawnMapView_C_OnPreloadFinished_SpawnMapView_Params
	{	};

	/**
	 * Function WBP_DeployMenu_SpawnMapView.WBP_DeployMenu_SpawnMapView_C.BndEvt__Minimap_K2Node_ComponentBoundEvent_0_OnSpawnPointSelected__DelegateSignature
	 */
	struct UWBP_DeployMenu_SpawnMapView_C_BndEvt__Minimap_K2Node_ComponentBoundEvent_0_OnSpawnPointSelected__DelegateSignature_Params
	{
	public:
		class AActor*                                              POISpawnPointActor;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_DeployMenu_SpawnMapView.WBP_DeployMenu_SpawnMapView_C.BndEvt__Minimap_K2Node_ComponentBoundEvent_2_OnSpawnPointDeselected__DelegateSignature
	 */
	struct UWBP_DeployMenu_SpawnMapView_C_BndEvt__Minimap_K2Node_ComponentBoundEvent_2_OnSpawnPointDeselected__DelegateSignature_Params
	{
	public:
		class AActor*                                              POISpawnPointActor;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_DeployMenu_SpawnMapView.WBP_DeployMenu_SpawnMapView_C.ExecuteUbergraph_WBP_DeployMenu_SpawnMapView
	 */
	struct UWBP_DeployMenu_SpawnMapView_C_ExecuteUbergraph_WBP_DeployMenu_SpawnMapView_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_USVO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_DeployMenu_SpawnMapView.WBP_DeployMenu_SpawnMapView_C.OnSpawnPointDeselected__DelegateSignature
	 */
	struct UWBP_DeployMenu_SpawnMapView_C_OnSpawnPointDeselected__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_DeployMenu_SpawnMapView.WBP_DeployMenu_SpawnMapView_C.OnSpawnPointSelected__DelegateSignature
	 */
	struct UWBP_DeployMenu_SpawnMapView_C_OnSpawnPointSelected__DelegateSignature_Params
	{
	public:
		class AActor*                                              POISpawnPointActor;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_DeployMenu_SpawnMapView.WBP_DeployMenu_SpawnMapView_C.OnPreloadFinished__DelegateSignature
	 */
	struct UWBP_DeployMenu_SpawnMapView_C_OnPreloadFinished__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
