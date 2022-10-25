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
	 * Function BP_ReplaceKeyPrompt.BP_ReplaceKeyPrompt_C.Construct
	 */
	struct UBP_ReplaceKeyPrompt_C_Construct_Params
	{	};

	/**
	 * Function BP_ReplaceKeyPrompt.BP_ReplaceKeyPrompt_C.BndEvt__BP_GenericDialog_K2Node_ComponentBoundEvent_10_OnConfirmed__DelegateSignature
	 */
	struct UBP_ReplaceKeyPrompt_C_BndEvt__BP_GenericDialog_K2Node_ComponentBoundEvent_10_OnConfirmed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ReplaceKeyPrompt.BP_ReplaceKeyPrompt_C.ExecuteUbergraph_BP_ReplaceKeyPrompt
	 */
	struct UBP_ReplaceKeyPrompt_C_ExecuteUbergraph_BP_ReplaceKeyPrompt_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KGSL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ReplaceKeyPrompt.BP_ReplaceKeyPrompt_C.OnReplaceBinding__DelegateSignature
	 */
	struct UBP_ReplaceKeyPrompt_C_OnReplaceBinding__DelegateSignature_Params
	{
	public:
		struct FKeyBindingOption                                   KeyBindingOption;                                        // 0x0000(0x0130)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FKey                                                ConflictKey;                                             // 0x0130(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class FName                                                ConflictAction;                                          // 0x0148(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
