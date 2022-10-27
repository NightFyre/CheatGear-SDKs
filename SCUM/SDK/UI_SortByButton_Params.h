#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * Function UI_SortByButton.UI_SortByButton_C.Construct
	 */
	struct UUI_SortByButton_C_Construct_Params
	{	};

	/**
	 * Function UI_SortByButton.UI_SortByButton_C.OnSynchronizeProperties
	 */
	struct UUI_SortByButton_C_OnSynchronizeProperties_Params
	{	};

	/**
	 * Function UI_SortByButton.UI_SortByButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_SortByButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_SortByButton.UI_SortByButton_C.SetType
	 */
	struct UUI_SortByButton_C_SetType_Params
	{
	public:
		ESortByTypes                                               Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SortByButton.UI_SortByButton_C.ExecuteUbergraph_UI_SortByButton
	 */
	struct UUI_SortByButton_C_ExecuteUbergraph_UI_SortByButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SortByButton.UI_SortByButton_C.OnClicked__DelegateSignature
	 */
	struct UUI_SortByButton_C_OnClicked__DelegateSignature_Params
	{
	public:
		class UUI_SortByButton_C*                                  Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESortByTypes                                               Type;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
