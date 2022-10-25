#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * Function IBPChar_Ixora_Gunner.IBPChar_Ixora_Gunner_C.SetGunnerHologramTemplate
	 */
	struct UIBPChar_Ixora_Gunner_C_SetGunnerHologramTemplate_Params
	{
	public:
		class UParticleSystem*                                     Template;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IBPChar_Ixora_Gunner.IBPChar_Ixora_Gunner_C.SetGunnerHologramVisible
	 */
	struct UIBPChar_Ixora_Gunner_C_SetGunnerHologramVisible_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IBPChar_Ixora_Gunner.IBPChar_Ixora_Gunner_C.SetGunnerDeviceVisible
	 */
	struct UIBPChar_Ixora_Gunner_C_SetGunnerDeviceVisible_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
