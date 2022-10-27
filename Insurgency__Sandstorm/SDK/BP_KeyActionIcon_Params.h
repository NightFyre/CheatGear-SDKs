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
	 * Function BP_KeyActionIcon.BP_KeyActionIcon_C.SetIsUsingController
	 */
	struct UBP_KeyActionIcon_C_SetIsUsingController_Params
	{
	public:
		bool                                                       bUsingController;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EeInputIconType                                            IconType;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_KeyActionIcon.BP_KeyActionIcon_C.BindControllerDelegates
	 */
	struct UBP_KeyActionIcon_C_BindControllerDelegates_Params
	{	};

	/**
	 * Function BP_KeyActionIcon.BP_KeyActionIcon_C.SetBindings
	 */
	struct UBP_KeyActionIcon_C_SetBindings_Params
	{
	public:
		TArray<struct FLessonInputBinding>                         NewBindings;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_KeyActionIcon.BP_KeyActionIcon_C.HasIcon
	 */
	struct UBP_KeyActionIcon_C_HasIcon_Params
	{
	public:
		bool                                                       bHasIcon;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_KeyActionIcon.BP_KeyActionIcon_C.SetKey
	 */
	struct UBP_KeyActionIcon_C_SetKey_Params
	{
	public:
		struct FKey                                                NewFallbackKey;                                          // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_KeyActionIcon.BP_KeyActionIcon_C.SetupInputData
	 */
	struct UBP_KeyActionIcon_C_SetupInputData_Params
	{	};

	/**
	 * Function BP_KeyActionIcon.BP_KeyActionIcon_C.RebuildIcon
	 */
	struct UBP_KeyActionIcon_C_RebuildIcon_Params
	{	};

	/**
	 * Function BP_KeyActionIcon.BP_KeyActionIcon_C.SetActions
	 */
	struct UBP_KeyActionIcon_C_SetActions_Params
	{
	public:
		TArray<class FName>                                        Actions;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_KeyActionIcon.BP_KeyActionIcon_C.SetAction
	 */
	struct UBP_KeyActionIcon_C_SetAction_Params
	{
	public:
		class FName                                                ActionName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                ToggleActionName;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_KeyActionIcon.BP_KeyActionIcon_C.PreConstruct
	 */
	struct UBP_KeyActionIcon_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_KeyActionIcon.BP_KeyActionIcon_C.Construct
	 */
	struct UBP_KeyActionIcon_C_Construct_Params
	{	};

	/**
	 * Function BP_KeyActionIcon.BP_KeyActionIcon_C.ExecuteUbergraph_BP_KeyActionIcon
	 */
	struct UBP_KeyActionIcon_C_ExecuteUbergraph_BP_KeyActionIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_KeyActionIcon.BP_KeyActionIcon_C.OnIconRebuit__DelegateSignature
	 */
	struct UBP_KeyActionIcon_C_OnIconRebuit__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
