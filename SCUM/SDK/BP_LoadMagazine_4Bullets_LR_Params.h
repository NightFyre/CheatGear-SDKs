#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * Function BP_LoadMagazine_4Bullets_LR.BP_LoadMagazine_4Bullets_LR_C.GetEndSectionName
	 */
	struct UBP_LoadMagazine_4Bullets_LR_C_GetEndSectionName_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LoadMagazine_4Bullets_LR.BP_LoadMagazine_4Bullets_LR_C.Begin
	 */
	struct UBP_LoadMagazine_4Bullets_LR_C_Begin_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_E8AB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_LoadMagazine_4Bullets_LR.BP_LoadMagazine_4Bullets_LR_C.CanBeSelected
	 */
	struct UBP_LoadMagazine_4Bullets_LR_C_CanBeSelected_Params
	{
	public:
		class UItemActionDescription*                              Description;                                             // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
