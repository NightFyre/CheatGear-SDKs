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
	 * Function UI_SpawnChoiceWidget.UI_SpawnChoiceWidget_C.OnSynchronizeProperties
	 */
	struct UUI_SpawnChoiceWidget_C_OnSynchronizeProperties_Params
	{	};

	/**
	 * Function UI_SpawnChoiceWidget.UI_SpawnChoiceWidget_C.ExecuteUbergraph_UI_SpawnChoiceWidget
	 */
	struct UUI_SpawnChoiceWidget_C_ExecuteUbergraph_UI_SpawnChoiceWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SpawnChoiceWidget.UI_SpawnChoiceWidget_C.OnClicked__DelegateSignature
	 */
	struct UUI_SpawnChoiceWidget_C_OnClicked__DelegateSignature_Params
	{
	public:
		class UUI_SpawnChoiceWidget_C*                             _this_;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
