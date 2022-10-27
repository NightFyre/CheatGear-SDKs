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
	 * Function BP_DropdownBox.BP_DropdownBox_C.AddOption
	 */
	struct UBP_DropdownBox_C_AddOption_Params
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_DropdownBox.BP_DropdownBox_C.CreateDefaultOptions
	 */
	struct UBP_DropdownBox_C_CreateDefaultOptions_Params
	{	};

	/**
	 * Function BP_DropdownBox.BP_DropdownBox_C.Construct
	 */
	struct UBP_DropdownBox_C_Construct_Params
	{	};

	/**
	 * Function BP_DropdownBox.BP_DropdownBox_C.ExecuteUbergraph_BP_DropdownBox
	 */
	struct UBP_DropdownBox_C_ExecuteUbergraph_BP_DropdownBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
