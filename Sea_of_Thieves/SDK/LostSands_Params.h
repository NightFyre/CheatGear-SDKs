#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * Function LostSands.LostSandsRowboatGunpowderBarrel.IsFuseEnabled
	 */
	struct ALostSandsRowboatGunpowderBarrel_IsFuseEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LostSands.LostSandsRowboatGunpowderBarrel.IsExplosionAtGoldenSandsOutpost
	 */
	struct ALostSandsRowboatGunpowderBarrel_IsExplosionAtGoldenSandsOutpost_Params
	{
	public:
		struct FVector                                             InLocation;                                              // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LostSands.LostSandsRowboatGunpowderBarrel.EnableFuse
	 */
	struct ALostSandsRowboatGunpowderBarrel_EnableFuse_Params
	{	};

	/**
	 * Function LostSands.LostSandsRowboatGunpowderBarrel.DisableFuse
	 */
	struct ALostSandsRowboatGunpowderBarrel_DisableFuse_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
