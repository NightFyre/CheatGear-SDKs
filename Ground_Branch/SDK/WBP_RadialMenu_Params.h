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
	 * Function WBP_RadialMenu.WBP_RadialMenu_C.OverrideInputAxis
	 */
	struct UWBP_RadialMenu_C_OverrideInputAxis_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		float                                                      Delta;                                                   // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DeltaTime;                                               // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NumSamples;                                              // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bGamepad;                                                // 0x0024(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0025(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_RadialMenu.WBP_RadialMenu_C.OverrideInputKey
	 */
	struct UWBP_RadialMenu_C_OverrideInputKey_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		EBPInputEvent                                              EventType;                                               // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D5SE[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      AmountDepressed;                                         // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bGamepad;                                                // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0021(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_RadialMenu.WBP_RadialMenu_C.GetRadialQuickbinds
	 */
	struct UWBP_RadialMenu_C_GetRadialQuickbinds_Params
	{	};

	/**
	 * Function WBP_RadialMenu.WBP_RadialMenu_C.SetupChildren
	 */
	struct UWBP_RadialMenu_C_SetupChildren_Params
	{	};

	/**
	 * Function WBP_RadialMenu.WBP_RadialMenu_C.UpdateSelectedEntry
	 */
	struct UWBP_RadialMenu_C_UpdateSelectedEntry_Params
	{	};

	/**
	 * Function WBP_RadialMenu.WBP_RadialMenu_C.Close
	 */
	struct UWBP_RadialMenu_C_Close_Params
	{	};

	/**
	 * Function WBP_RadialMenu.WBP_RadialMenu_C.AddEntry
	 */
	struct UWBP_RadialMenu_C_AddEntry_Params
	{
	public:
		class UUserWidget*                                         UserWidget;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_RadialMenu.WBP_RadialMenu_C.Open
	 */
	struct UWBP_RadialMenu_C_Open_Params
	{	};

	/**
	 * Function WBP_RadialMenu.WBP_RadialMenu_C.Clear
	 */
	struct UWBP_RadialMenu_C_Clear_Params
	{	};

	/**
	 * Function WBP_RadialMenu.WBP_RadialMenu_C.UpdateAngle
	 */
	struct UWBP_RadialMenu_C_UpdateAngle_Params
	{	};

	/**
	 * Function WBP_RadialMenu.WBP_RadialMenu_C.Tick
	 */
	struct UWBP_RadialMenu_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_RadialMenu.WBP_RadialMenu_C.PreConstruct
	 */
	struct UWBP_RadialMenu_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_RadialMenu.WBP_RadialMenu_C.Construct
	 */
	struct UWBP_RadialMenu_C_Construct_Params
	{	};

	/**
	 * Function WBP_RadialMenu.WBP_RadialMenu_C.ForceClosed
	 */
	struct UWBP_RadialMenu_C_ForceClosed_Params
	{	};

	/**
	 * Function WBP_RadialMenu.WBP_RadialMenu_C.ExecuteUbergraph_WBP_RadialMenu
	 */
	struct UWBP_RadialMenu_C_ExecuteUbergraph_WBP_RadialMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
