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
	 * Function IBPChar_Beastmaster.IBPChar_Beastmaster_C.TryForceSpawnPetAtLocation
	 */
	struct UIBPChar_Beastmaster_C_TryForceSpawnPetAtLocation_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bRes;                                                    // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IBPChar_Beastmaster.IBPChar_Beastmaster_C.SetNewPetThreatScale
	 */
	struct UIBPChar_Beastmaster_C_SetNewPetThreatScale_Params
	{
	public:
		float                                                      NewScale;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IBPChar_Beastmaster.IBPChar_Beastmaster_C.PlayPetAudioCallAndResponse
	 */
	struct UIBPChar_Beastmaster_C_PlayPetAudioCallAndResponse_Params
	{
	public:
		Enum_BeastmasterDialogAction                               DialogType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IBPChar_Beastmaster.IBPChar_Beastmaster_C.GetCurrentPet
	 */
	struct UIBPChar_Beastmaster_C_GetCurrentPet_Params
	{
	public:
		class AOakCharacter*                                       res;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
