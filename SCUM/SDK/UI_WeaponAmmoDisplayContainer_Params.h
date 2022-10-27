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
	 * Function UI_WeaponAmmoDisplayContainer.UI_WeaponAmmoDisplayContainer_C.Init
	 */
	struct UUI_WeaponAmmoDisplayContainer_C_Init_Params
	{
	public:
		class AWeapon*                                             Weapon;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      onScreenDuration;                                        // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       displayOnCenter;                                         // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6HNO[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture2D*                                          iconOverride;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_WeaponAmmoDisplayContainer.UI_WeaponAmmoDisplayContainer_C.OnFadedOut
	 */
	struct UUI_WeaponAmmoDisplayContainer_C_OnFadedOut_Params
	{	};

	/**
	 * Function UI_WeaponAmmoDisplayContainer.UI_WeaponAmmoDisplayContainer_C.ExecuteUbergraph_UI_WeaponAmmoDisplayContainer
	 */
	struct UUI_WeaponAmmoDisplayContainer_C_ExecuteUbergraph_UI_WeaponAmmoDisplayContainer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
