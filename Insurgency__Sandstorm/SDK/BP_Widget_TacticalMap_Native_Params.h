#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * Function BP_Widget_TacticalMap_Native.BP_Widget_TacticalMap_Native_C.OnAnalogValueChanged
	 */
	struct UBP_Widget_TacticalMap_Native_C_OnAnalogValueChanged_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FAnalogInputEvent                                   InAnalogInputEvent;                                      // 0x0038(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_Widget_TacticalMap_Native.BP_Widget_TacticalMap_Native_C.UpdateGridZoomAndOffset
	 */
	struct UBP_Widget_TacticalMap_Native_C_UpdateGridZoomAndOffset_Params
	{	};

	/**
	 * Function BP_Widget_TacticalMap_Native.BP_Widget_TacticalMap_Native_C.UpdateActiveHoverForPawn
	 */
	struct UBP_Widget_TacticalMap_Native_C_UpdateActiveHoverForPawn_Params
	{
	public:
		class AINSPlayerState*                                     Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bShouldHover;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_W0KD[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Widget_TacticalMap_Native.BP_Widget_TacticalMap_Native_C.PreConstruct
	 */
	struct UBP_Widget_TacticalMap_Native_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Widget_TacticalMap_Native.BP_Widget_TacticalMap_Native_C.Construct
	 */
	struct UBP_Widget_TacticalMap_Native_C_Construct_Params
	{	};

	/**
	 * Function BP_Widget_TacticalMap_Native.BP_Widget_TacticalMap_Native_C.OnObjectiveWidgetCreated
	 */
	struct UBP_Widget_TacticalMap_Native_C_OnObjectiveWidgetCreated_Params
	{
	public:
		class AObjectiveBase*                                      Objective;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UUserWidget*                                         Widget;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_TacticalMap_Native.BP_Widget_TacticalMap_Native_C.OnScoreboardShown
	 */
	struct UBP_Widget_TacticalMap_Native_C_OnScoreboardShown_Params
	{
	public:
		bool                                                       bShown;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Widget_TacticalMap_Native.BP_Widget_TacticalMap_Native_C.OnHoverStatusChanged
	 */
	struct UBP_Widget_TacticalMap_Native_C_OnHoverStatusChanged_Params
	{
	public:
		class AINSPlayerState*                                     Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Hovered;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Widget_TacticalMap_Native.BP_Widget_TacticalMap_Native_C.Tick
	 */
	struct UBP_Widget_TacticalMap_Native_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_TacticalMap_Native.BP_Widget_TacticalMap_Native_C.ExecuteUbergraph_BP_Widget_TacticalMap_Native
	 */
	struct UBP_Widget_TacticalMap_Native_C_ExecuteUbergraph_BP_Widget_TacticalMap_Native_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_TacticalMap_Native.BP_Widget_TacticalMap_Native_C.OnTacticalMapPawnHoverStatusChanged__DelegateSignature
	 */
	struct UBP_Widget_TacticalMap_Native_C_OnTacticalMapPawnHoverStatusChanged__DelegateSignature_Params
	{
	public:
		class AINSPlayerState*                                     Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Status;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
