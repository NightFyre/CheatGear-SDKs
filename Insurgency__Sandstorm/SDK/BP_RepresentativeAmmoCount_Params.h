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
	 * Function BP_RepresentativeAmmoCount.BP_RepresentativeAmmoCount_C.SetColorText
	 */
	struct UBP_RepresentativeAmmoCount_C_SetColorText_Params
	{
	public:
		struct FSlateColor                                         NewColor;                                                // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_RepresentativeAmmoCount.BP_RepresentativeAmmoCount_C.UpdateText
	 */
	struct UBP_RepresentativeAmmoCount_C_UpdateText_Params
	{	};

	/**
	 * Function BP_RepresentativeAmmoCount.BP_RepresentativeAmmoCount_C.UpdateCount
	 */
	struct UBP_RepresentativeAmmoCount_C_UpdateCount_Params
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bNewCurrent;                                             // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_RepresentativeAmmoCount.BP_RepresentativeAmmoCount_C.SetColor
	 */
	struct UBP_RepresentativeAmmoCount_C_SetColor_Params
	{
	public:
		bool                                                       bSinglyLoaded;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BU0N[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<int32_t>                                            Counters;                                                // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RepresentativeAmmoCount.BP_RepresentativeAmmoCount_C.PreConstruct
	 */
	struct UBP_RepresentativeAmmoCount_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_RepresentativeAmmoCount.BP_RepresentativeAmmoCount_C.ExecuteUbergraph_BP_RepresentativeAmmoCount
	 */
	struct UBP_RepresentativeAmmoCount_C_ExecuteUbergraph_BP_RepresentativeAmmoCount_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
