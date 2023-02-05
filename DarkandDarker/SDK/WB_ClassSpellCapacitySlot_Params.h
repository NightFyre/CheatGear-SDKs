#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * Function WB_ClassSpellCapacitySlot.WB_ClassSpellCapacitySlot_C.OnReset
	 */
	struct UWB_ClassSpellCapacitySlot_C_OnReset_Params
	{	};

	/**
	 * Function WB_ClassSpellCapacitySlot.WB_ClassSpellCapacitySlot_C.OnSetSpellArtData
	 */
	struct UWB_ClassSpellCapacitySlot_C_OnSetSpellArtData_Params
	{
	public:
		class UArtDataSpell*                                       InArtSpellData;                                          // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_ClassSpellCapacitySlot.WB_ClassSpellCapacitySlot_C.OnSpellDataChanged
	 */
	struct UWB_ClassSpellCapacitySlot_C_OnSpellDataChanged_Params
	{
	public:
		struct FSpellData                                          InSpellData;                                             // 0x0000(0x002C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		unsigned char                                              UnknownData_0192[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDesignDataSpell                                    InDesignDataSpell;                                       // 0x0030(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_ClassSpellCapacitySlot.WB_ClassSpellCapacitySlot_C.Construct
	 */
	struct UWB_ClassSpellCapacitySlot_C_Construct_Params
	{	};

	/**
	 * Function WB_ClassSpellCapacitySlot.WB_ClassSpellCapacitySlot_C.ExecuteUbergraph_WB_ClassSpellCapacitySlot
	 */
	struct UWB_ClassSpellCapacitySlot_C_ExecuteUbergraph_WB_ClassSpellCapacitySlot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CP3X[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
