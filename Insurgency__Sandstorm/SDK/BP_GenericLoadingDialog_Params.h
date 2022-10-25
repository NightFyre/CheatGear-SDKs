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
	 * Function BP_GenericLoadingDialog.BP_GenericLoadingDialog_C.OnFocusReceived
	 */
	struct UBP_GenericLoadingDialog_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_GenericLoadingDialog.BP_GenericLoadingDialog_C.PreConstruct
	 */
	struct UBP_GenericLoadingDialog_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GenericLoadingDialog.BP_GenericLoadingDialog_C.BndEvt__DialogWidget_K2Node_ComponentBoundEvent_0_OnCanceled__DelegateSignature
	 */
	struct UBP_GenericLoadingDialog_C_BndEvt__DialogWidget_K2Node_ComponentBoundEvent_0_OnCanceled__DelegateSignature_Params
	{	};

	/**
	 * Function BP_GenericLoadingDialog.BP_GenericLoadingDialog_C.ExecuteUbergraph_BP_GenericLoadingDialog
	 */
	struct UBP_GenericLoadingDialog_C_ExecuteUbergraph_BP_GenericLoadingDialog_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GenericLoadingDialog.BP_GenericLoadingDialog_C.OnActionCancelled__DelegateSignature
	 */
	struct UBP_GenericLoadingDialog_C_OnActionCancelled__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
