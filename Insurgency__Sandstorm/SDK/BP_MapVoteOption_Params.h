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
	 * Function BP_MapVoteOption.BP_MapVoteOption_C.OnFocusReceived
	 */
	struct UBP_MapVoteOption_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MapVoteOption.BP_MapVoteOption_C.SetMapImageFromData
	 */
	struct UBP_MapVoteOption_C_SetMapImageFromData_Params
	{	};

	/**
	 * Function BP_MapVoteOption.BP_MapVoteOption_C.InternalSetVoteCount
	 */
	struct UBP_MapVoteOption_C_InternalSetVoteCount_Params
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MapVoteOption.BP_MapVoteOption_C.LoadSettingsFromData
	 */
	struct UBP_MapVoteOption_C_LoadSettingsFromData_Params
	{	};

	/**
	 * Function BP_MapVoteOption.BP_MapVoteOption_C.SetSelectedStyle
	 */
	struct UBP_MapVoteOption_C_SetSelectedStyle_Params
	{
	public:
		bool                                                       bInSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MapVoteOption.BP_MapVoteOption_C.SetHoverStyle
	 */
	struct UBP_MapVoteOption_C_SetHoverStyle_Params
	{
	public:
		bool                                                       bHovered;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MapVoteOption.BP_MapVoteOption_C.OnLoaded_3B597585448036DC333A7F90BDE02D9A
	 */
	struct UBP_MapVoteOption_C_OnLoaded_3B597585448036DC333A7F90BDE02D9A_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MapVoteOption.BP_MapVoteOption_C.PreConstruct
	 */
	struct UBP_MapVoteOption_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MapVoteOption.BP_MapVoteOption_C.Construct
	 */
	struct UBP_MapVoteOption_C_Construct_Params
	{	};

	/**
	 * Function BP_MapVoteOption.BP_MapVoteOption_C.OnMouseEnter
	 */
	struct UBP_MapVoteOption_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_MapVoteOption.BP_MapVoteOption_C.OnMouseLeave
	 */
	struct UBP_MapVoteOption_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_MapVoteOption.BP_MapVoteOption_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 */
	struct UBP_MapVoteOption_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MapVoteOption.BP_MapVoteOption_C.SetVoteCount
	 */
	struct UBP_MapVoteOption_C_SetVoteCount_Params
	{
	public:
		int32_t                                                    NewVoteCount;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MapVoteOption.BP_MapVoteOption_C.SetLocalVoteState
	 */
	struct UBP_MapVoteOption_C_SetLocalVoteState_Params
	{
	public:
		bool                                                       bSelected;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MapVoteOption.BP_MapVoteOption_C.PlayWinningVoteAnimation
	 */
	struct UBP_MapVoteOption_C_PlayWinningVoteAnimation_Params
	{	};

	/**
	 * Function BP_MapVoteOption.BP_MapVoteOption_C.PlayLosingVoteAnimation
	 */
	struct UBP_MapVoteOption_C_PlayLosingVoteAnimation_Params
	{	};

	/**
	 * Function BP_MapVoteOption.BP_MapVoteOption_C.OnGamemodeImageAssetSet
	 */
	struct UBP_MapVoteOption_C_OnGamemodeImageAssetSet_Params
	{	};

	/**
	 * Function BP_MapVoteOption.BP_MapVoteOption_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonFocusEvent__DelegateSignature
	 */
	struct UBP_MapVoteOption_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonFocusEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MapVoteOption.BP_MapVoteOption_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonFocusEvent__DelegateSignature
	 */
	struct UBP_MapVoteOption_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonFocusEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MapVoteOption.BP_MapVoteOption_C.ExecuteUbergraph_BP_MapVoteOption
	 */
	struct UBP_MapVoteOption_C_ExecuteUbergraph_BP_MapVoteOption_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7AKZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MapVoteOption.BP_MapVoteOption_C.OnOptionSelected__DelegateSignature
	 */
	struct UBP_MapVoteOption_C_OnOptionSelected__DelegateSignature_Params
	{
	public:
		EMapVoteSelection                                          Selection;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
