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
	 * Function BP_KitSelect_ItemsBackground.BP_KitSelect_ItemsBackground_C.IsBgVisible
	 */
	struct UBP_KitSelect_ItemsBackground_C_IsBgVisible_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_KitSelect_ItemsBackground.BP_KitSelect_ItemsBackground_C.OnMouseEnter
	 */
	struct UBP_KitSelect_ItemsBackground_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_KitSelect_ItemsBackground.BP_KitSelect_ItemsBackground_C.OnMouseLeave
	 */
	struct UBP_KitSelect_ItemsBackground_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_KitSelect_ItemsBackground.BP_KitSelect_ItemsBackground_C.OnRemovedFromFocusPath
	 */
	struct UBP_KitSelect_ItemsBackground_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_KitSelect_ItemsBackground.BP_KitSelect_ItemsBackground_C.ExecuteUbergraph_BP_KitSelect_ItemsBackground
	 */
	struct UBP_KitSelect_ItemsBackground_C_ExecuteUbergraph_BP_KitSelect_ItemsBackground_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_KitSelect_ItemsBackground.BP_KitSelect_ItemsBackground_C.OnUpgradeListBgUnhover__DelegateSignature
	 */
	struct UBP_KitSelect_ItemsBackground_C_OnUpgradeListBgUnhover__DelegateSignature_Params
	{	};

	/**
	 * Function BP_KitSelect_ItemsBackground.BP_KitSelect_ItemsBackground_C.OnUpgradeListBgHover__DelegateSignature
	 */
	struct UBP_KitSelect_ItemsBackground_C_OnUpgradeListBgHover__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
