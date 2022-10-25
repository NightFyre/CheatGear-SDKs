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
	 * Function BP_LocalGame_LightingSelection.BP_LocalGame_LightingSelection_C.OnFocusReceived
	 */
	struct UBP_LocalGame_LightingSelection_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_LocalGame_LightingSelection.BP_LocalGame_LightingSelection_C.GetLocalizedLightingName
	 */
	struct UBP_LocalGame_LightingSelection_C_GetLocalizedLightingName_Params
	{
	public:
		class FString                                              String;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0010(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_LocalGame_LightingSelection.BP_LocalGame_LightingSelection_C.ChooseTimeOfDay
	 */
	struct UBP_LocalGame_LightingSelection_C_ChooseTimeOfDay_Params
	{
	public:
		class UBP_LocalGame_LightingButton_C*                      NewLightingButton;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LocalGame_LightingSelection.BP_LocalGame_LightingSelection_C.GetWidgetToFocus
	 */
	struct UBP_LocalGame_LightingSelection_C_GetWidgetToFocus_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LocalGame_LightingSelection.BP_LocalGame_LightingSelection_C.Construct
	 */
	struct UBP_LocalGame_LightingSelection_C_Construct_Params
	{	};

	/**
	 * Function BP_LocalGame_LightingSelection.BP_LocalGame_LightingSelection_C.TimeOfDayChosen
	 */
	struct UBP_LocalGame_LightingSelection_C_TimeOfDayChosen_Params
	{
	public:
		class UBP_LocalGame_LightingButton_C*                      LightingButton;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LocalGame_LightingSelection.BP_LocalGame_LightingSelection_C.ExecuteUbergraph_BP_LocalGame_LightingSelection
	 */
	struct UBP_LocalGame_LightingSelection_C_ExecuteUbergraph_BP_LocalGame_LightingSelection_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LocalGame_LightingSelection.BP_LocalGame_LightingSelection_C.OnLightingChosen__DelegateSignature
	 */
	struct UBP_LocalGame_LightingSelection_C_OnLightingChosen__DelegateSignature_Params
	{
	public:
		class FString                                              LightingNameString;                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FText                                                LightingNameText;                                        // 0x0010(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
