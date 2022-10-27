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
	 * Function ShipDamage.DamageablePartsInterface.UnregisterDamageablePart
	 */
	struct UDamageablePartsInterface_UnregisterDamageablePart_Params
	{
	public:
		class AActor*                                              DamageableActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShipDamage.DamageablePartsInterface.RegisterDamageablePart
	 */
	struct UDamageablePartsInterface_RegisterDamageablePart_Params
	{
	public:
		class AActor*                                              DamageableActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShipDamage.DamageablePartsInterface.GetDamageableParts
	 */
	struct UDamageablePartsInterface_GetDamageableParts_Params
	{
	public:
		TArray<class AActor*>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
