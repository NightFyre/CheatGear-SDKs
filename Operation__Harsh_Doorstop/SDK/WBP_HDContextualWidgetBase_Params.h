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
	 * Function WBP_HDContextualWidgetBase.WBP_HDContextualWidgetBase_C.PrerequisitesMet
	 */
	struct UWBP_HDContextualWidgetBase_C_PrerequisitesMet_Params
	{	};

	/**
	 * Function WBP_HDContextualWidgetBase.WBP_HDContextualWidgetBase_C.PrerequisiteNotMet
	 */
	struct UWBP_HDContextualWidgetBase_C_PrerequisiteNotMet_Params
	{
	public:
		class UDFContextualWidgetPrerequisiteBase*                 FailedPrereq;                                            // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HDContextualWidgetBase.WBP_HDContextualWidgetBase_C.ExecuteUbergraph_WBP_HDContextualWidgetBase
	 */
	struct UWBP_HDContextualWidgetBase_C_ExecuteUbergraph_WBP_HDContextualWidgetBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_A9YL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
