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
	 * Function BP_HDAIControllerBase.BP_HDAIControllerBase_C.SetupVocalProfile
	 */
	struct ABP_HDAIControllerBase_C_SetupVocalProfile_Params
	{	};

	/**
	 * Function BP_HDAIControllerBase.BP_HDAIControllerBase_C.ResetWeaponBase
	 */
	struct ABP_HDAIControllerBase_C_ResetWeaponBase_Params
	{
	public:
		class ABP_HDWeaponBase_C*                                  Weapon;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDAIControllerBase.BP_HDAIControllerBase_C.SetupWeaponBase
	 */
	struct ABP_HDAIControllerBase_C_SetupWeaponBase_Params
	{
	public:
		class ABP_HDWeaponBase_C*                                  Weapon;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDAIControllerBase.BP_HDAIControllerBase_C.ClearWeaponSavedValues
	 */
	struct ABP_HDAIControllerBase_C_ClearWeaponSavedValues_Params
	{	};

	/**
	 * Function BP_HDAIControllerBase.BP_HDAIControllerBase_C.ResetRecoilHandler
	 */
	struct ABP_HDAIControllerBase_C_ResetRecoilHandler_Params
	{
	public:
		class ABP_HDWeaponBase_C*                                  Weapon;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDAIControllerBase.BP_HDAIControllerBase_C.SetupRecoilHandler
	 */
	struct ABP_HDAIControllerBase_C_SetupRecoilHandler_Params
	{
	public:
		class ABP_HDWeaponBase_C*                                  Weapon;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDAIControllerBase.BP_HDAIControllerBase_C.CharacterCleanup
	 */
	struct ABP_HDAIControllerBase_C_CharacterCleanup_Params
	{
	public:
		class ABP_HDPlayerCharacterBase_C*                         Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDAIControllerBase.BP_HDAIControllerBase_C.UnbindEventsFromCharacter
	 */
	struct ABP_HDAIControllerBase_C_UnbindEventsFromCharacter_Params
	{
	public:
		class ABP_HDPlayerCharacterBase_C*                         Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDAIControllerBase.BP_HDAIControllerBase_C.BindEventsToCharacter
	 */
	struct ABP_HDAIControllerBase_C_BindEventsToCharacter_Params
	{
	public:
		class ABP_HDPlayerCharacterBase_C*                         Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDAIControllerBase.BP_HDAIControllerBase_C.WarnOfNoRecoilHandler
	 */
	struct ABP_HDAIControllerBase_C_WarnOfNoRecoilHandler_Params
	{
	public:
		class ABP_HDWeaponBase_C*                                  EquippedWeapon;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDAIControllerBase.BP_HDAIControllerBase_C.GetFactionSpecifiedSquadMemberKit
	 */
	struct ABP_HDAIControllerBase_C_GetFactionSpecifiedSquadMemberKit_Params
	{
	public:
		class UHDKit*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDAIControllerBase.BP_HDAIControllerBase_C.GetFactionSpecifiedSquadLeaderKit
	 */
	struct ABP_HDAIControllerBase_C_GetFactionSpecifiedSquadLeaderKit_Params
	{
	public:
		class UHDKit*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDAIControllerBase.BP_HDAIControllerBase_C.OnOwnerPawnDeath
	 */
	struct ABP_HDAIControllerBase_C_OnOwnerPawnDeath_Params
	{
	public:
		class APawn*                                               VictimPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AController*                                         VictimController;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      KillingDamage;                                           // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_B3W8[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0018(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class APawn*                                               InstigatingPawn;                                         // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDAIControllerBase.BP_HDAIControllerBase_C.OnOwnerPawnEquippedItemChange
	 */
	struct ABP_HDAIControllerBase_C_OnOwnerPawnEquippedItemChange_Params
	{
	public:
		class ADFBaseCharacter*                                    Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ADFBaseItem*                                         NewEquippedItem;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ADFBaseItem*                                         PrevEquippedItem;                                        // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDAIControllerBase.BP_HDAIControllerBase_C.ReceivePossess
	 */
	struct ABP_HDAIControllerBase_C_ReceivePossess_Params
	{
	public:
		class APawn*                                               PossessedPawn;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDAIControllerBase.BP_HDAIControllerBase_C.SuppressionEvent
	 */
	struct ABP_HDAIControllerBase_C_SuppressionEvent_Params
	{
	public:
		class ADFBaseProjectile*                                   OtherProjectile;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ADFBasePickup*                                       Pickup;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDAIControllerBase.BP_HDAIControllerBase_C.HitDamageEvent
	 */
	struct ABP_HDAIControllerBase_C_HitDamageEvent_Params
	{
	public:
		class ADFBaseProjectile*                                   OtherProjectile;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ADFBasePickup*                                       Pickup;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDAIControllerBase.BP_HDAIControllerBase_C.ReceiveUnPossess
	 */
	struct ABP_HDAIControllerBase_C_ReceiveUnPossess_Params
	{
	public:
		class APawn*                                               UnpossessedPawn;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDAIControllerBase.BP_HDAIControllerBase_C.ExecuteUbergraph_BP_HDAIControllerBase
	 */
	struct ABP_HDAIControllerBase_C_ExecuteUbergraph_BP_HDAIControllerBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_N64L[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
