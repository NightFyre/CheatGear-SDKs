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
	 * Function WBP_SwitchScreen_Tab.WBP_SwitchScreen_Tab_C.Get Color and Opacity 1
	 */
	struct UWBP_SwitchScreen_Tab_C_Get_Color_and_Opacity_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_SwitchScreen_Tab.WBP_SwitchScreen_Tab_C.GetColorAndOpacity_1
	 */
	struct UWBP_SwitchScreen_Tab_C_GetColorAndOpacity_1_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_SwitchScreen_Tab.WBP_SwitchScreen_Tab_C.OnLoaded_A47AE17D484D464500C86CA4B88BCE06
	 */
	struct UWBP_SwitchScreen_Tab_C_OnLoaded_A47AE17D484D464500C86CA4B88BCE06_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_SwitchScreen_Tab.WBP_SwitchScreen_Tab_C.OnLoaded_3B85CAF4457E7152C609BAA5141C88D6
	 */
	struct UWBP_SwitchScreen_Tab_C_OnLoaded_3B85CAF4457E7152C609BAA5141C88D6_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_SwitchScreen_Tab.WBP_SwitchScreen_Tab_C.BndEvt__CheckBox_Tab_K2Node_ComponentBoundEvent_1034_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWBP_SwitchScreen_Tab_C_BndEvt__CheckBox_Tab_K2Node_ComponentBoundEvent_1034_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_SwitchScreen_Tab.WBP_SwitchScreen_Tab_C.InternalSetSelected
	 */
	struct UWBP_SwitchScreen_Tab_C_InternalSetSelected_Params
	{
	public:
		bool                                                       IsSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_SwitchScreen_Tab.WBP_SwitchScreen_Tab_C.InternalOnSelected
	 */
	struct UWBP_SwitchScreen_Tab_C_InternalOnSelected_Params
	{	};

	/**
	 * Function WBP_SwitchScreen_Tab.WBP_SwitchScreen_Tab_C.Construct
	 */
	struct UWBP_SwitchScreen_Tab_C_Construct_Params
	{	};

	/**
	 * Function WBP_SwitchScreen_Tab.WBP_SwitchScreen_Tab_C.PreConstruct
	 */
	struct UWBP_SwitchScreen_Tab_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_SwitchScreen_Tab.WBP_SwitchScreen_Tab_C.ExecuteUbergraph_WBP_SwitchScreen_Tab
	 */
	struct UWBP_SwitchScreen_Tab_C_ExecuteUbergraph_WBP_SwitchScreen_Tab_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_62PW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_SwitchScreen_Tab.WBP_SwitchScreen_Tab_C.OnSelected__DelegateSignature
	 */
	struct UWBP_SwitchScreen_Tab_C_OnSelected__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
