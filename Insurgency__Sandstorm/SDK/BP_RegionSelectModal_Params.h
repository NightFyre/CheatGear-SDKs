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
	 * Function BP_RegionSelectModal.BP_RegionSelectModal_C.UpdateContinueButtonVisibility
	 */
	struct UBP_RegionSelectModal_C_UpdateContinueButtonVisibility_Params
	{	};

	/**
	 * Function BP_RegionSelectModal.BP_RegionSelectModal_C.OnKeyUp
	 */
	struct UBP_RegionSelectModal_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_RegionSelectModal.BP_RegionSelectModal_C.OnFocusReceived
	 */
	struct UBP_RegionSelectModal_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_RegionSelectModal.BP_RegionSelectModal_C.OnRegionHovered
	 */
	struct UBP_RegionSelectModal_C_OnRegionHovered_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RegionSelectModal.BP_RegionSelectModal_C.OnRegionToggled
	 */
	struct UBP_RegionSelectModal_C_OnRegionToggled_Params
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       State;                                                   // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8AR2[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_RegionSelectModal.BP_RegionSelectModal_C.BuildRegionList
	 */
	struct UBP_RegionSelectModal_C_BuildRegionList_Params
	{	};

	/**
	 * Function BP_RegionSelectModal.BP_RegionSelectModal_C.BndEvt__BP_KeyActionButton_C_0_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature
	 */
	struct UBP_RegionSelectModal_C_BndEvt__BP_KeyActionButton_C_0_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_RegionSelectModal.BP_RegionSelectModal_C.BndEvt__BtnContinue_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
	 */
	struct UBP_RegionSelectModal_C_BndEvt__BtnContinue_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_RegionSelectModal.BP_RegionSelectModal_C.OnRemovedFromFocusPath
	 */
	struct UBP_RegionSelectModal_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_RegionSelectModal.BP_RegionSelectModal_C.Construct
	 */
	struct UBP_RegionSelectModal_C_Construct_Params
	{	};

	/**
	 * Function BP_RegionSelectModal.BP_RegionSelectModal_C.ExecuteUbergraph_BP_RegionSelectModal
	 */
	struct UBP_RegionSelectModal_C_ExecuteUbergraph_BP_RegionSelectModal_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MLA6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_RegionSelectModal.BP_RegionSelectModal_C.OnContinue__DelegateSignature
	 */
	struct UBP_RegionSelectModal_C_OnContinue__DelegateSignature_Params
	{	};

	/**
	 * Function BP_RegionSelectModal.BP_RegionSelectModal_C.OnNavigateBack__DelegateSignature
	 */
	struct UBP_RegionSelectModal_C_OnNavigateBack__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
