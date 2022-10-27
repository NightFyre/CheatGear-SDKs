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
	 * Function HoveredEventWidget.HoveredEventWidget_C.OnMouseEnter
	 */
	struct UHoveredEventWidget_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function HoveredEventWidget.HoveredEventWidget_C.OnMouseLeave
	 */
	struct UHoveredEventWidget_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function HoveredEventWidget.HoveredEventWidget_C.ExecuteUbergraph_HoveredEventWidget
	 */
	struct UHoveredEventWidget_C_ExecuteUbergraph_HoveredEventWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HoveredEventWidget.HoveredEventWidget_C.MouseLeft__DelegateSignature
	 */
	struct UHoveredEventWidget_C_MouseLeft__DelegateSignature_Params
	{	};

	/**
	 * Function HoveredEventWidget.HoveredEventWidget_C.MouseEntered__DelegateSignature
	 */
	struct UHoveredEventWidget_C_MouseEntered__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
