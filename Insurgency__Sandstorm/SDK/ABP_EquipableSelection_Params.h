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
	 * Function ABP_EquipableSelection.ABP_EquipableSelection_C.AnimGraph
	 */
	struct UABP_EquipableSelection_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_EquipableSelection.ABP_EquipableSelection_C.CheckAmmoDelta
	 */
	struct UABP_EquipableSelection_C_CheckAmmoDelta_Params
	{
	public:
		class AItemEquipable*                                      Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UAnimSequence*                                       Sequence;                                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       LMG;                                                     // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NGGO[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      MagazineTransparency;                                    // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_EquipableSelection.ABP_EquipableSelection_C.BlueprintUpdateAnimation
	 */
	struct UABP_EquipableSelection_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_EquipableSelection.ABP_EquipableSelection_C.ExecuteUbergraph_ABP_EquipableSelection
	 */
	struct UABP_EquipableSelection_C_ExecuteUbergraph_ABP_EquipableSelection_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PSXH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
