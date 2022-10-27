#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * Function WBP_BoundKey.WBP_BoundKey_C.Construct
	 */
	struct UWBP_BoundKey_C_Construct_Params
	{	};

	/**
	 * Function WBP_BoundKey.WBP_BoundKey_C.Update
	 */
	struct UWBP_BoundKey_C_Update_Params
	{	};

	/**
	 * Function WBP_BoundKey.WBP_BoundKey_C.PreConstruct
	 */
	struct UWBP_BoundKey_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_BoundKey.WBP_BoundKey_C.UpdateSize
	 */
	struct UWBP_BoundKey_C_UpdateSize_Params
	{
	public:
		int32_t                                                    Size;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_BoundKey.WBP_BoundKey_C.ExecuteUbergraph_WBP_BoundKey
	 */
	struct UWBP_BoundKey_C_ExecuteUbergraph_WBP_BoundKey_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
