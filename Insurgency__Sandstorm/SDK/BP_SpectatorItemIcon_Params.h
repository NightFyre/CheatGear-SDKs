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
	 * Function BP_SpectatorItemIcon.BP_SpectatorItemIcon_C.SetActiveState
	 */
	struct UBP_SpectatorItemIcon_C_SetActiveState_Params
	{
	public:
		bool                                                       bNewActive;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SpectatorItemIcon.BP_SpectatorItemIcon_C.UpdateActiveColor
	 */
	struct UBP_SpectatorItemIcon_C_UpdateActiveColor_Params
	{	};

	/**
	 * Function BP_SpectatorItemIcon.BP_SpectatorItemIcon_C.UpdateItem
	 */
	struct UBP_SpectatorItemIcon_C_UpdateItem_Params
	{	};

	/**
	 * Function BP_SpectatorItemIcon.BP_SpectatorItemIcon_C.SetItemClass
	 */
	struct UBP_SpectatorItemIcon_C_SetItemClass_Params
	{
	public:
		class UClass*                                              NewItemClass;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SpectatorItemIcon.BP_SpectatorItemIcon_C.Construct
	 */
	struct UBP_SpectatorItemIcon_C_Construct_Params
	{	};

	/**
	 * Function BP_SpectatorItemIcon.BP_SpectatorItemIcon_C.ExecuteUbergraph_BP_SpectatorItemIcon
	 */
	struct UBP_SpectatorItemIcon_C_ExecuteUbergraph_BP_SpectatorItemIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
