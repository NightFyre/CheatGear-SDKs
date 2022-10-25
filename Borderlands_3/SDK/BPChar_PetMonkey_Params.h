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
	 * Function BPChar_PetMonkey.BPChar_PetMonkey_C.GetPetJabberIngenuityBarrel
	 */
	struct ABPChar_PetMonkey_C_GetPetJabberIngenuityBarrel_Params
	{
	public:
		class AActor*                                              Barrel;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_PetMonkey.BPChar_PetMonkey_C.ClearBarrelStanceAndBB
	 */
	struct ABPChar_PetMonkey_C_ClearBarrelStanceAndBB_Params
	{	};

	/**
	 * Function BPChar_PetMonkey.BPChar_PetMonkey_C.OnRep_Ape_Barrel_Held
	 */
	struct ABPChar_PetMonkey_C_OnRep_Ape_Barrel_Held_Params
	{	};

	/**
	 * Function BPChar_PetMonkey.BPChar_PetMonkey_C.ReturnJabbermonGunWeapon
	 */
	struct ABPChar_PetMonkey_C_ReturnJabbermonGunWeapon_Params
	{
	public:
		class AWeapon*                                             NewWeapon;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_PetMonkey.BPChar_PetMonkey_C.UserConstructionScript
	 */
	struct ABPChar_PetMonkey_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BPChar_PetMonkey.BPChar_PetMonkey_C.AlignBarrelClient
	 */
	struct ABPChar_PetMonkey_C_AlignBarrelClient_Params
	{	};

	/**
	 * Function BPChar_PetMonkey.BPChar_PetMonkey_C.AttachBarrelClient
	 */
	struct ABPChar_PetMonkey_C_AttachBarrelClient_Params
	{	};

	/**
	 * Function BPChar_PetMonkey.BPChar_PetMonkey_C.ClientBarrelThrow
	 */
	struct ABPChar_PetMonkey_C_ClientBarrelThrow_Params
	{	};

	/**
	 * Function BPChar_PetMonkey.BPChar_PetMonkey_C.PetJabbermon_BarrelAlign
	 */
	struct ABPChar_PetMonkey_C_PetJabbermon_BarrelAlign_Params
	{
	public:
		class AActor*                                              NewBarrel;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_PetMonkey.BPChar_PetMonkey_C.PetJabbermon_BarrelSet
	 */
	struct ABPChar_PetMonkey_C_PetJabbermon_BarrelSet_Params
	{
	public:
		class AActor*                                              NewBarrel;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_PetMonkey.BPChar_PetMonkey_C.PetJabbermon_BarrelThrow
	 */
	struct ABPChar_PetMonkey_C_PetJabbermon_BarrelThrow_Params
	{	};

	/**
	 * Function BPChar_PetMonkey.BPChar_PetMonkey_C.PetJabbermon_BarrelDrop
	 */
	struct ABPChar_PetMonkey_C_PetJabbermon_BarrelDrop_Params
	{	};

	/**
	 * Function BPChar_PetMonkey.BPChar_PetMonkey_C.CleanupBarrel
	 */
	struct ABPChar_PetMonkey_C_CleanupBarrel_Params
	{	};

	/**
	 * Function BPChar_PetMonkey.BPChar_PetMonkey_C.OnTakeDamage_PetJabbermonBarrel
	 */
	struct ABPChar_PetMonkey_C_OnTakeDamage_PetJabbermonBarrel_Params
	{
	public:
		class UDamageComponent*                                    DamageReceiver;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1YNJ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGbxDamageType*                                      DamageType;                                              // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageSource*                                       DamageSource;                                            // 0x0018(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AController*                                         InstigatedBy;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageCauserComponent*                              DamageCauser;                                            // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FReceivedDamageDetails                              Details;                                                 // 0x0030(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	};

	/**
	 * Function BPChar_PetMonkey.BPChar_PetMonkey_C.Pet_DownStateStart
	 */
	struct ABPChar_PetMonkey_C_Pet_DownStateStart_Params
	{	};

	/**
	 * Function BPChar_PetMonkey.BPChar_PetMonkey_C.PetJabb_CancelBarrelPickup
	 */
	struct ABPChar_PetMonkey_C_PetJabb_CancelBarrelPickup_Params
	{	};

	/**
	 * Function BPChar_PetMonkey.BPChar_PetMonkey_C.PetJabbermon_HeldBarrelExplode
	 */
	struct ABPChar_PetMonkey_C_PetJabbermon_HeldBarrelExplode_Params
	{	};

	/**
	 * Function BPChar_PetMonkey.BPChar_PetMonkey_C.OnPetReleased
	 */
	struct ABPChar_PetMonkey_C_OnPetReleased_Params
	{
	public:
		bool                                                       bForced;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EPetReleaseReason                                          Reason;                                                  // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_PetMonkey.BPChar_PetMonkey_C.BndEvt__AIHeldActor_K2Node_ComponentBoundEvent_0_GbxChildActorSpawnedSignature__DelegateSignature_BPChar_PetMonkey
	 */
	struct ABPChar_PetMonkey_C_BndEvt__AIHeldActor_K2Node_ComponentBoundEvent_0_GbxChildActorSpawnedSignature__DelegateSignature_BPChar_PetMonkey_Params
	{
	public:
		class AActor*                                              ChildActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_PetMonkey.BPChar_PetMonkey_C.PetJabbermon_ChangeGunVis
	 */
	struct ABPChar_PetMonkey_C_PetJabbermon_ChangeGunVis_Params
	{
	public:
		bool                                                       NewVisibility;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPChar_PetMonkey.BPChar_PetMonkey_C.OnEnrageBegin
	 */
	struct ABPChar_PetMonkey_C_OnEnrageBegin_Params
	{	};

	/**
	 * Function BPChar_PetMonkey.BPChar_PetMonkey_C.OnEnrageEnd
	 */
	struct ABPChar_PetMonkey_C_OnEnrageEnd_Params
	{	};

	/**
	 * Function BPChar_PetMonkey.BPChar_PetMonkey_C.ExecuteUbergraph_BPChar_PetMonkey
	 */
	struct ABPChar_PetMonkey_C_ExecuteUbergraph_BPChar_PetMonkey_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3HDH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
