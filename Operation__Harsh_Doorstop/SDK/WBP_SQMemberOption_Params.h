#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * Function WBP_SQMemberOption.WBP_SQMemberOption_C.GetParentMemberInfo
	 */
	struct UWBP_SQMemberOption_C_GetParentMemberInfo_Params
	{
	public:
		class USquadMemberInfo*                                    MemberInfo;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_SQMemberOption.WBP_SQMemberOption_C.SetupOption
	 */
	struct UWBP_SQMemberOption_C_SetupOption_Params
	{
	public:
		class USquadMemberInfo*                                    InMemberInfo;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
