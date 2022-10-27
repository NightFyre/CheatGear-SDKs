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
	 * Function BP_ScrollingComponent.BP_ScrollingComponent_C.BeginFadeIn
	 */
	struct UBP_ScrollingComponent_C_BeginFadeIn_Params
	{	};

	/**
	 * Function BP_ScrollingComponent.BP_ScrollingComponent_C.FadeTransition
	 */
	struct UBP_ScrollingComponent_C_FadeTransition_Params
	{
	public:
		bool                                                       In;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ScrollingComponent.BP_ScrollingComponent_C.IsFadingInOrOut
	 */
	struct UBP_ScrollingComponent_C_IsFadingInOrOut_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ScrollingComponent.BP_ScrollingComponent_C.UpdateFading
	 */
	struct UBP_ScrollingComponent_C_UpdateFading_Params
	{	};

	/**
	 * Function BP_ScrollingComponent.BP_ScrollingComponent_C.BeginFadeOut
	 */
	struct UBP_ScrollingComponent_C_BeginFadeOut_Params
	{	};

	/**
	 * Function BP_ScrollingComponent.BP_ScrollingComponent_C.ShouldUpdateScrolling
	 */
	struct UBP_ScrollingComponent_C_ShouldUpdateScrolling_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Update;                                                  // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ScrollingComponent.BP_ScrollingComponent_C.ResetScrolling
	 */
	struct UBP_ScrollingComponent_C_ResetScrolling_Params
	{	};

	/**
	 * Function BP_ScrollingComponent.BP_ScrollingComponent_C.UpdateScrolling
	 */
	struct UBP_ScrollingComponent_C_UpdateScrolling_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScrollingComponent.BP_ScrollingComponent_C.Tick
	 */
	struct UBP_ScrollingComponent_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScrollingComponent.BP_ScrollingComponent_C.InitScrollingComponent
	 */
	struct UBP_ScrollingComponent_C_InitScrollingComponent_Params
	{
	public:
		class UScrollBox*                                          ScrollBox;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FStruct_ScrollingComponentData                      ScrollData;                                              // 0x0008(0x001C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScrollingComponent.BP_ScrollingComponent_C.ExecuteUbergraph_BP_ScrollingComponent
	 */
	struct UBP_ScrollingComponent_C_ExecuteUbergraph_BP_ScrollingComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
