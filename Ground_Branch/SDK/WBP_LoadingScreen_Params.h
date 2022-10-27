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
	 * Function WBP_LoadingScreen.WBP_LoadingScreen_C.GetFancyGameModeName
	 */
	struct UWBP_LoadingScreen_C_GetFancyGameModeName_Params
	{
	public:
		class FString                                              ScriptFileName;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FText                                                FancyDanGameModeName;                                    // 0x0010(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function WBP_LoadingScreen.WBP_LoadingScreen_C.Construct
	 */
	struct UWBP_LoadingScreen_C_Construct_Params
	{	};

	/**
	 * Function WBP_LoadingScreen.WBP_LoadingScreen_C.Setup
	 */
	struct UWBP_LoadingScreen_C_Setup_Params
	{	};

	/**
	 * Function WBP_LoadingScreen.WBP_LoadingScreen_C.Tick
	 */
	struct UWBP_LoadingScreen_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_LoadingScreen.WBP_LoadingScreen_C.InternalRemove
	 */
	struct UWBP_LoadingScreen_C_InternalRemove_Params
	{	};

	/**
	 * Function WBP_LoadingScreen.WBP_LoadingScreen_C.BindOnLoadingScreenEvent
	 */
	struct UWBP_LoadingScreen_C_BindOnLoadingScreenEvent_Params
	{	};

	/**
	 * Function WBP_LoadingScreen.WBP_LoadingScreen_C.OnLoadingScreenEvent_Event
	 */
	struct UWBP_LoadingScreen_C_OnLoadingScreenEvent_Event_Params
	{
	public:
		class FName                                                Event;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_LoadingScreen.WBP_LoadingScreen_C.StartFadeIn
	 */
	struct UWBP_LoadingScreen_C_StartFadeIn_Params
	{	};

	/**
	 * Function WBP_LoadingScreen.WBP_LoadingScreen_C.ExecuteUbergraph_WBP_LoadingScreen
	 */
	struct UWBP_LoadingScreen_C_ExecuteUbergraph_WBP_LoadingScreen_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
