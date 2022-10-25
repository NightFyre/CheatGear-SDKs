#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * Function WBP_Controls_KeyBind_Entry.WBP_Controls_KeyBind_Entry_C.Get_KeyImage_ToolTipText_1
	 */
	struct UWBP_Controls_KeyBind_Entry_C_Get_KeyImage_ToolTipText_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_Controls_KeyBind_Entry.WBP_Controls_KeyBind_Entry_C.IsDirty
	 */
	struct UWBP_Controls_KeyBind_Entry_C_IsDirty_Params
	{
	public:
		bool                                                       IsDirty;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Controls_KeyBind_Entry.WBP_Controls_KeyBind_Entry_C.Apply
	 */
	struct UWBP_Controls_KeyBind_Entry_C_Apply_Params
	{	};

	/**
	 * Function WBP_Controls_KeyBind_Entry.WBP_Controls_KeyBind_Entry_C.Discard
	 */
	struct UWBP_Controls_KeyBind_Entry_C_Discard_Params
	{	};

	/**
	 * Function WBP_Controls_KeyBind_Entry.WBP_Controls_KeyBind_Entry_C.PreConstruct
	 */
	struct UWBP_Controls_KeyBind_Entry_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Controls_KeyBind_Entry.WBP_Controls_KeyBind_Entry_C.Update
	 */
	struct UWBP_Controls_KeyBind_Entry_C_Update_Params
	{	};

	/**
	 * Function WBP_Controls_KeyBind_Entry.WBP_Controls_KeyBind_Entry_C.Construct
	 */
	struct UWBP_Controls_KeyBind_Entry_C_Construct_Params
	{	};

	/**
	 * Function WBP_Controls_KeyBind_Entry.WBP_Controls_KeyBind_Entry_C.SetToDefault
	 */
	struct UWBP_Controls_KeyBind_Entry_C_SetToDefault_Params
	{	};

	/**
	 * Function WBP_Controls_KeyBind_Entry.WBP_Controls_KeyBind_Entry_C.BndEvt__Button_Key_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_Controls_KeyBind_Entry_C_BndEvt__Button_Key_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Controls_KeyBind_Entry.WBP_Controls_KeyBind_Entry_C.OnOk_Event
	 */
	struct UWBP_Controls_KeyBind_Entry_C_OnOk_Event_Params
	{
	public:
		struct FInputBoundKey                                      BoundKey;                                                // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Controls_KeyBind_Entry.WBP_Controls_KeyBind_Entry_C.SetNewBind
	 */
	struct UWBP_Controls_KeyBind_Entry_C_SetNewBind_Params
	{
	public:
		struct FInputBoundKey                                      NewBind;                                                 // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Controls_KeyBind_Entry.WBP_Controls_KeyBind_Entry_C.ExecuteUbergraph_WBP_Controls_KeyBind_Entry
	 */
	struct UWBP_Controls_KeyBind_Entry_C_ExecuteUbergraph_WBP_Controls_KeyBind_Entry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Controls_KeyBind_Entry.WBP_Controls_KeyBind_Entry_C.OnNewKeyBind__DelegateSignature
	 */
	struct UWBP_Controls_KeyBind_Entry_C_OnNewKeyBind__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
