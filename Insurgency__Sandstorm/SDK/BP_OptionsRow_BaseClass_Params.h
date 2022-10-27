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
	 * Function BP_OptionsRow_BaseClass.BP_OptionsRow_BaseClass_C.CallModifiedEvent
	 */
	struct UBP_OptionsRow_BaseClass_C_CallModifiedEvent_Params
	{	};

	/**
	 * Function BP_OptionsRow_BaseClass.BP_OptionsRow_BaseClass_C.OnMouseEnter
	 */
	struct UBP_OptionsRow_BaseClass_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_OptionsRow_BaseClass.BP_OptionsRow_BaseClass_C.OnAddedToFocusPath
	 */
	struct UBP_OptionsRow_BaseClass_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_OptionsRow_BaseClass.BP_OptionsRow_BaseClass_C.OnMouseLeave
	 */
	struct UBP_OptionsRow_BaseClass_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_OptionsRow_BaseClass.BP_OptionsRow_BaseClass_C.OnRemovedFromFocusPath
	 */
	struct UBP_OptionsRow_BaseClass_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_OptionsRow_BaseClass.BP_OptionsRow_BaseClass_C.ExecuteUbergraph_BP_OptionsRow_BaseClass
	 */
	struct UBP_OptionsRow_BaseClass_C_ExecuteUbergraph_BP_OptionsRow_BaseClass_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OptionsRow_BaseClass.BP_OptionsRow_BaseClass_C.OnOptionModified__DelegateSignature
	 */
	struct UBP_OptionsRow_BaseClass_C_OnOptionModified__DelegateSignature_Params
	{
	public:
		class UBP_OptionsRow_BaseClass_C*                          OptionWidget;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OptionsRow_BaseClass.BP_OptionsRow_BaseClass_C.OnOptionUnhovered__DelegateSignature
	 */
	struct UBP_OptionsRow_BaseClass_C_OnOptionUnhovered__DelegateSignature_Params
	{
	public:
		class UBP_OptionsRow_BaseClass_C*                          OptionWidget;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OptionsRow_BaseClass.BP_OptionsRow_BaseClass_C.OnOptionHovered__DelegateSignature
	 */
	struct UBP_OptionsRow_BaseClass_C_OnOptionHovered__DelegateSignature_Params
	{
	public:
		class FText                                                Title;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Description;                                             // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UBP_OptionsRow_BaseClass_C*                          OptionWidget;                                            // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
