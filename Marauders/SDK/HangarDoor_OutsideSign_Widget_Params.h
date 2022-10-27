#pragma once

/**
 * Name: Marauders
 * Version: 642675-attempt2
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
	 * Function HangarDoor_OutsideSign_Widget.HangarDoor_OutsideSign_Widget_C.Construct
	 */
	struct UHangarDoor_OutsideSign_Widget_C_Construct_Params
	{	};

	/**
	 * Function HangarDoor_OutsideSign_Widget.HangarDoor_OutsideSign_Widget_C.PreConstruct
	 */
	struct UHangarDoor_OutsideSign_Widget_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HangarDoor_OutsideSign_Widget.HangarDoor_OutsideSign_Widget_C.SetOutsideSignText
	 */
	struct UHangarDoor_OutsideSign_Widget_C_SetOutsideSignText_Params
	{
	public:
		class FString                                              Text_BoldLine;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Text_RegularLine;                                        // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function HangarDoor_OutsideSign_Widget.HangarDoor_OutsideSign_Widget_C.SetTheText
	 */
	struct UHangarDoor_OutsideSign_Widget_C_SetTheText_Params
	{	};

	/**
	 * Function HangarDoor_OutsideSign_Widget.HangarDoor_OutsideSign_Widget_C.ExecuteUbergraph_HangarDoor_OutsideSign_Widget
	 */
	struct UHangarDoor_OutsideSign_Widget_C_ExecuteUbergraph_HangarDoor_OutsideSign_Widget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
