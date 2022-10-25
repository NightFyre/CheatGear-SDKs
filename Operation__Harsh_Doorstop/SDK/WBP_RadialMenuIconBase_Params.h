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
	 * Function WBP_RadialMenuIconBase.WBP_RadialMenuIconBase_C.Get_Icon_ColorAndOpacity_1
	 */
	struct UWBP_RadialMenuIconBase_C_Get_Icon_ColorAndOpacity_1_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_RadialMenuIconBase.WBP_RadialMenuIconBase_C.PreConstruct
	 */
	struct UWBP_RadialMenuIconBase_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_RadialMenuIconBase.WBP_RadialMenuIconBase_C.OnHighlight
	 */
	struct UWBP_RadialMenuIconBase_C_OnHighlight_Params
	{	};

	/**
	 * Function WBP_RadialMenuIconBase.WBP_RadialMenuIconBase_C.OnUnhighlight
	 */
	struct UWBP_RadialMenuIconBase_C_OnUnhighlight_Params
	{	};

	/**
	 * Function WBP_RadialMenuIconBase.WBP_RadialMenuIconBase_C.Tick
	 */
	struct UWBP_RadialMenuIconBase_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_RadialMenuIconBase.WBP_RadialMenuIconBase_C.ExecuteUbergraph_WBP_RadialMenuIconBase
	 */
	struct UWBP_RadialMenuIconBase_C_ExecuteUbergraph_WBP_RadialMenuIconBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P359[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
