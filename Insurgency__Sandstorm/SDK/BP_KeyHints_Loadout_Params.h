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
	 * Function BP_KeyHints_Loadout.BP_KeyHints_Loadout_C.PreConstruct
	 */
	struct UBP_KeyHints_Loadout_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_KeyHints_Loadout.BP_KeyHints_Loadout_C.Construct
	 */
	struct UBP_KeyHints_Loadout_C_Construct_Params
	{	};

	/**
	 * Function BP_KeyHints_Loadout.BP_KeyHints_Loadout_C.SetKeysVisibility
	 */
	struct UBP_KeyHints_Loadout_C_SetKeysVisibility_Params
	{
	public:
		bool                                                       Rename;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Revert;                                                  // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Empty;                                                   // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Remove;                                                  // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_KeyHints_Loadout.BP_KeyHints_Loadout_C.ExecuteUbergraph_BP_KeyHints_Loadout
	 */
	struct UBP_KeyHints_Loadout_C_ExecuteUbergraph_BP_KeyHints_Loadout_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_KeyHints_Loadout.BP_KeyHints_Loadout_C.OnBackButtonPressed__DelegateSignature
	 */
	struct UBP_KeyHints_Loadout_C_OnBackButtonPressed__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
