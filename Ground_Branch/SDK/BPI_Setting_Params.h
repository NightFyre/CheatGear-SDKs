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
	 * Function BPI_Setting.BPI_Setting_C.SetDefaultValue
	 */
	struct UBPI_Setting_C_SetDefaultValue_Params
	{	};

	/**
	 * Function BPI_Setting.BPI_Setting_C.Refresh
	 */
	struct UBPI_Setting_C_Refresh_Params
	{	};

	/**
	 * Function BPI_Setting.BPI_Setting_C.SetKeyValue
	 */
	struct UBPI_Setting_C_SetKeyValue_Params
	{
	public:
		class FString                                              KeyValueAsString;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_Setting.BPI_Setting_C.GetKey
	 */
	struct UBPI_Setting_C_GetKey_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_Setting.BPI_Setting_C.RevertToInitialValue
	 */
	struct UBPI_Setting_C_RevertToInitialValue_Params
	{	};

	/**
	 * Function BPI_Setting.BPI_Setting_C.SetConfigValue
	 */
	struct UBPI_Setting_C_SetConfigValue_Params
	{	};

	/**
	 * Function BPI_Setting.BPI_Setting_C.IsDirty
	 */
	struct UBPI_Setting_C_IsDirty_Params
	{
	public:
		bool                                                       IsDirty;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
