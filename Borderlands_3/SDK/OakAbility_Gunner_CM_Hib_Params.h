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
	 * Function OakAbility_Gunner_CM_Hib.OakAbility_Gunner_CM_Hib_C.OnActivated
	 */
	struct UOakAbility_Gunner_CM_Hib_C_OnActivated_Params
	{	};

	/**
	 * Function OakAbility_Gunner_CM_Hib.OakAbility_Gunner_CM_Hib_C.OnClicked
	 */
	struct UOakAbility_Gunner_CM_Hib_C_OnClicked_Params
	{
	public:
		unsigned char                                              InputChannel;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OakAbility_Gunner_CM_Hib.OakAbility_Gunner_CM_Hib_C.OnPutDown
	 */
	struct UOakAbility_Gunner_CM_Hib_C_OnPutDown_Params
	{
	public:
		class AWeapon*                                             EventWeapon;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OakAbility_Gunner_CM_Hib.OakAbility_Gunner_CM_Hib_C.OnReloadStarted
	 */
	struct UOakAbility_Gunner_CM_Hib_C_OnReloadStarted_Params
	{
	public:
		class AWeapon*                                             EventWeapon;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bAutoReload;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OakAbility_Gunner_CM_Hib.OakAbility_Gunner_CM_Hib_C.OnSwitchMode
	 */
	struct UOakAbility_Gunner_CM_Hib_C_OnSwitchMode_Params
	{	};

	/**
	 * Function OakAbility_Gunner_CM_Hib.OakAbility_Gunner_CM_Hib_C.StartClassModBonus
	 */
	struct UOakAbility_Gunner_CM_Hib_C_StartClassModBonus_Params
	{	};

	/**
	 * Function OakAbility_Gunner_CM_Hib.OakAbility_Gunner_CM_Hib_C.StopClassModBonus
	 */
	struct UOakAbility_Gunner_CM_Hib_C_StopClassModBonus_Params
	{	};

	/**
	 * Function OakAbility_Gunner_CM_Hib.OakAbility_Gunner_CM_Hib_C.UpdateScalar
	 */
	struct UOakAbility_Gunner_CM_Hib_C_UpdateScalar_Params
	{	};

	/**
	 * Function OakAbility_Gunner_CM_Hib.OakAbility_Gunner_CM_Hib_C.OnDeactivated
	 */
	struct UOakAbility_Gunner_CM_Hib_C_OnDeactivated_Params
	{	};

	/**
	 * Function OakAbility_Gunner_CM_Hib.OakAbility_Gunner_CM_Hib_C.BindWeaponEvents
	 */
	struct UOakAbility_Gunner_CM_Hib_C_BindWeaponEvents_Params
	{
	public:
		class AWeapon*                                             NewWeapon;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OakAbility_Gunner_CM_Hib.OakAbility_Gunner_CM_Hib_C.UnbindWeaponEvents
	 */
	struct UOakAbility_Gunner_CM_Hib_C_UnbindWeaponEvents_Params
	{
	public:
		class AWeapon*                                             OldWeapon;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OakAbility_Gunner_CM_Hib.OakAbility_Gunner_CM_Hib_C.OnWeaponChanged
	 */
	struct UOakAbility_Gunner_CM_Hib_C_OnWeaponChanged_Params
	{
	public:
		class AWeapon*                                             NewWeapon;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AWeapon*                                             LastWeapon;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OakAbility_Gunner_CM_Hib.OakAbility_Gunner_CM_Hib_C.ExecuteUbergraph_OakAbility_Gunner_CM_Hib
	 */
	struct UOakAbility_Gunner_CM_Hib_C_ExecuteUbergraph_OakAbility_Gunner_CM_Hib_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
