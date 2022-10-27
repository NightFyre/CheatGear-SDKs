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
	 * Function DonkehFramework.DFBaseAIController.CanRestartPlayer
	 */
	struct ADFBaseAIController_CanRestartPlayer_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseItem.StopFire
	 */
	struct ADFBaseItem_StopFire_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseItem.StartFire
	 */
	struct ADFBaseItem_StartFire_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseItem.SetOwningPawn
	 */
	struct ADFBaseItem_SetOwningPawn_Params
	{
	public:
		class ADFBaseCharacter*                                    NewOwner;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseItem.SetMeshVisibility
	 */
	struct ADFBaseItem_SetMeshVisibility_Params
	{
	public:
		bool                                                       bFirstPerson;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseItem.ServerStopFire
	 */
	struct ADFBaseItem_ServerStopFire_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseItem.ServerStartFire
	 */
	struct ADFBaseItem_ServerStartFire_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseItem.RemoveLegacyLocomotionAnims
	 */
	struct ADFBaseItem_RemoveLegacyLocomotionAnims_Params
	{
	public:
		bool                                                       bFPP;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseItem.ReceiveVisibilityChanged
	 */
	struct ADFBaseItem_ReceiveVisibilityChanged_Params
	{
	public:
		bool                                                       bFirstPerson;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseItem.ReceiveStopFire
	 */
	struct ADFBaseItem_ReceiveStopFire_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseItem.ReceiveStartFire
	 */
	struct ADFBaseItem_ReceiveStartFire_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseItem.ReceiveOnUnEquipFinished
	 */
	struct ADFBaseItem_ReceiveOnUnEquipFinished_Params
	{
	public:
		bool                                                       bLeavingPawnInventory;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseItem.ReceiveOnUnEquip
	 */
	struct ADFBaseItem_ReceiveOnUnEquip_Params
	{
	public:
		bool                                                       bPlayAnimAndWait;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bLeavingPawnInventory;                                   // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseItem.ReceiveOnTurnOff
	 */
	struct ADFBaseItem_ReceiveOnTurnOff_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseItem.ReceiveOnLeaveInventory
	 */
	struct ADFBaseItem_ReceiveOnLeaveInventory_Params
	{
	public:
		class ADFBaseCharacter*                                    LastOwner;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseItem.ReceiveOnEquipFinished
	 */
	struct ADFBaseItem_ReceiveOnEquipFinished_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseItem.ReceiveOnEquip
	 */
	struct ADFBaseItem_ReceiveOnEquip_Params
	{
	public:
		class ADFBaseItem*                                         LastItem;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseItem.ReceiveOnEnterInventory
	 */
	struct ADFBaseItem_ReceiveOnEnterInventory_Params
	{
	public:
		class ADFBaseCharacter*                                    NewOwner;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ADFBaseCharacter*                                    LastOwner;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseItem.OwnerIsSprinting
	 */
	struct ADFBaseItem_OwnerIsSprinting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseItem.OwnerIsAiming
	 */
	struct ADFBaseItem_OwnerIsAiming_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseItem.OnUnEquip
	 */
	struct ADFBaseItem_OnUnEquip_Params
	{
	public:
		bool                                                       bPlayAnimAndWait;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bLeavingPawnInventory;                                   // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseItem.OnTurnOff
	 */
	struct ADFBaseItem_OnTurnOff_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseItem.OnRep_PawnOwner
	 */
	struct ADFBaseItem_OnRep_PawnOwner_Params
	{
	public:
		class ADFBaseCharacter*                                    LastOwner;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseItem.OnLeaveInventory
	 */
	struct ADFBaseItem_OnLeaveInventory_Params
	{
	public:
		class ADFBaseCharacter*                                    LastOwner;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseItem.OnEquip
	 */
	struct ADFBaseItem_OnEquip_Params
	{
	public:
		class ADFBaseItem*                                         LastItem;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseItem.OnEnterInventory
	 */
	struct ADFBaseItem_OnEnterInventory_Params
	{
	public:
		class ADFBaseCharacter*                                    NewOwner;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ADFBaseCharacter*                                    LastOwner;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseItem.IsUnEquipping
	 */
	struct ADFBaseItem_IsUnEquipping_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseItem.IsEquipping
	 */
	struct ADFBaseItem_IsEquipping_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseItem.IsEquipped
	 */
	struct ADFBaseItem_IsEquipped_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseItem.IsClientSimulated
	 */
	struct ADFBaseItem_IsClientSimulated_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseItem.GetPawnOwner
	 */
	struct ADFBaseItem_GetPawnOwner_Params
	{
	public:
		class ADFBaseCharacter*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseItem.GetPawnInventory
	 */
	struct ADFBaseItem_GetPawnInventory_Params
	{
	public:
		class UDFInventoryComponent*                               ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseItem.GetOwnerViewRotation
	 */
	struct ADFBaseItem_GetOwnerViewRotation_Params
	{
	public:
		struct FRotator                                            ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseItem.GetOwnerViewPoint
	 */
	struct ADFBaseItem_GetOwnerViewPoint_Params
	{
	public:
		struct FVector                                             OutViewLoc;                                              // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            OutViewRot;                                              // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseItem.GetOwnerViewLocation
	 */
	struct ADFBaseItem_GetOwnerViewLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseItem.GetLegacyLocomotionAnims
	 */
	struct ADFBaseItem_GetLegacyLocomotionAnims_Params
	{
	public:
		bool                                                       bFPP;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_5W56[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TMap<class FName, class UAnimSequenceBase*>                ReturnValue;                                             // 0x0008(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseItem.GetItemType
	 */
	struct ADFBaseItem_GetItemType_Params
	{
	public:
		EItemType                                                  ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseItem.GetItemMeshToUse
	 */
	struct ADFBaseItem_GetItemMeshToUse_Params
	{
	public:
		bool                                                       bIgnoreLocalControlOnServer;                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_62Q7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UStaticMeshComponent*                                ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseItem.GetItemMesh1P
	 */
	struct ADFBaseItem_GetItemMesh1P_Params
	{
	public:
		class UStaticMeshComponent*                                ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseItem.GetItemMesh
	 */
	struct ADFBaseItem_GetItemMesh_Params
	{
	public:
		class UStaticMeshComponent*                                ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseItem.GetAdjustedAimDirection
	 */
	struct ADFBaseItem_GetAdjustedAimDirection_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseItem.CanSprintWhileEquipped
	 */
	struct ADFBaseItem_CanSprintWhileEquipped_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseItem.CanFire
	 */
	struct ADFBaseItem_CanFire_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseItem.CanEquip
	 */
	struct ADFBaseItem_CanEquip_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseItem.CanAimWhileEquipped
	 */
	struct ADFBaseItem_CanAimWhileEquipped_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseAmmoClip.StoreAmmoInInventory
	 */
	struct ADFBaseAmmoClip_StoreAmmoInInventory_Params
	{
	public:
		class UDFInventoryComponent*                               AmmoStore;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    AmmoAmt;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_5KXK[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              AmmoType;                                                // 0x0010(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseAmmoClip.StoreAmmo
	 */
	struct ADFBaseAmmoClip_StoreAmmo_Params
	{
	public:
		int32_t                                                    AmmoToStore;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseAmmoClip.SetOwningGun
	 */
	struct ADFBaseAmmoClip_SetOwningGun_Params
	{
	public:
		class ADFBaseGun*                                          NewOwner;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseAmmoClip.IsLoaded
	 */
	struct ADFBaseAmmoClip_IsLoaded_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseAmmoClip.GetStartingClipAmmo
	 */
	struct ADFBaseAmmoClip_GetStartingClipAmmo_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseAmmoClip.GetMaxClipAmmo
	 */
	struct ADFBaseAmmoClip_GetMaxClipAmmo_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseAmmoClip.GetGunOwner
	 */
	struct ADFBaseAmmoClip_GetGunOwner_Params
	{
	public:
		class ADFBaseGun*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseAmmoClip.GetCurrentClipAmmo
	 */
	struct ADFBaseAmmoClip_GetCurrentClipAmmo_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseAmmoClip.ConsumeAmmo
	 */
	struct ADFBaseAmmoClip_ConsumeAmmo_Params
	{
	public:
		int32_t                                                    AmmoToConsume;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.UnSprint
	 */
	struct ADFBaseCharacter_UnSprint_Params
	{
	public:
		bool                                                       bClientSimulation;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.UnLean
	 */
	struct ADFBaseCharacter_UnLean_Params
	{
	public:
		ELeanDirection                                             UnDesiredLeanDir;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bClientSimulation;                                       // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.UnAim
	 */
	struct ADFBaseCharacter_UnAim_Params
	{
	public:
		bool                                                       bClientSimulation;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.Suicide
	 */
	struct ADFBaseCharacter_Suicide_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.StopFire
	 */
	struct ADFBaseCharacter_StopFire_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.StopCharacterPerspectiveAnimation
	 */
	struct ADFBaseCharacter_StopCharacterPerspectiveAnimation_Params
	{
	public:
		struct FPerspectiveAnim                                    CharAnim;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.StopCharacterMontage
	 */
	struct ADFBaseCharacter_StopCharacterMontage_Params
	{
	public:
		class UAnimMontage*                                        CharMontage;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.StopAllAnimMontages
	 */
	struct ADFBaseCharacter_StopAllAnimMontages_Params
	{
	public:
		bool                                                       bPerspectiveMeshOnly;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.StartFire
	 */
	struct ADFBaseCharacter_StartFire_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.SprintToggle
	 */
	struct ADFBaseCharacter_SprintToggle_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.Sprint
	 */
	struct ADFBaseCharacter_Sprint_Params
	{
	public:
		bool                                                       bClientSimulation;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.SetRagdollPhysics
	 */
	struct ADFBaseCharacter_SetRagdollPhysics_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.SetItemEnabledMode
	 */
	struct ADFBaseCharacter_SetItemEnabledMode_Params
	{
	public:
		EDFItemEnabledMode                                         ItemMode;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.SetHealth
	 */
	struct ADFBaseCharacter_SetHealth_Params
	{
	public:
		float                                                      InHealth;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.ServerSuicide
	 */
	struct ADFBaseCharacter_ServerSuicide_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.ServerEquipItem
	 */
	struct ADFBaseCharacter_ServerEquipItem_Params
	{
	public:
		class ADFBaseItem*                                         ItemToEquip;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.Reload
	 */
	struct ADFBaseCharacter_Reload_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.ReceiveRestart
	 */
	struct ADFBaseCharacter_ReceiveRestart_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.ReceivePlayHit
	 */
	struct ADFBaseCharacter_ReceivePlayHit_Params
	{
	public:
		float                                                      DamageTaken;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7UC2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class APawn*                                               PawnInstigator;                                          // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              DamageCauser;                                            // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.ReceivePawnTeamStateUpdated
	 */
	struct ADFBaseCharacter_ReceivePawnTeamStateUpdated_Params
	{
	public:
		class ADFTeamState*                                        TeamStateBeforeUpdate;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ADFTeamState*                                        NewTeamState;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bNewTeamStateInit;                                       // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.ReceivePawnTeamNumUpdated
	 */
	struct ADFBaseCharacter_ReceivePawnTeamNumUpdated_Params
	{
	public:
		unsigned char                                              LastTeamNum;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              NewTeamNum;                                              // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.ReceiveOnStartSprint
	 */
	struct ADFBaseCharacter_ReceiveOnStartSprint_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.ReceiveOnStartProne
	 */
	struct ADFBaseCharacter_ReceiveOnStartProne_Params
	{
	public:
		float                                                      HalfHeightAdjust;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ScaledHalfHeightAdjust;                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.ReceiveOnStartLean
	 */
	struct ADFBaseCharacter_ReceiveOnStartLean_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.ReceiveOnStartAim
	 */
	struct ADFBaseCharacter_ReceiveOnStartAim_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.ReceiveOnRepPlayerState
	 */
	struct ADFBaseCharacter_ReceiveOnRepPlayerState_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.ReceiveOnEndSprint
	 */
	struct ADFBaseCharacter_ReceiveOnEndSprint_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.ReceiveOnEndProne
	 */
	struct ADFBaseCharacter_ReceiveOnEndProne_Params
	{
	public:
		float                                                      HalfHeightAdjust;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ScaledHalfHeightAdjust;                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.ReceiveOnEndLean
	 */
	struct ADFBaseCharacter_ReceiveOnEndLean_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.ReceiveOnEndAim
	 */
	struct ADFBaseCharacter_ReceiveOnEndAim_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.ReceiveHealthChanged
	 */
	struct ADFBaseCharacter_ReceiveHealthChanged_Params
	{
	public:
		float                                                      NewHealthTotal;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      PrevHealthTotal;                                         // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.ReceiveEquippedItemChanged
	 */
	struct ADFBaseCharacter_ReceiveEquippedItemChanged_Params
	{
	public:
		class ADFBaseItem*                                         NewEquippedItem;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ADFBaseItem*                                         PrevEquippedItem;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.ProneToggle
	 */
	struct ADFBaseCharacter_ProneToggle_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.PlayCharacterUnEquipMontage
	 */
	struct ADFBaseCharacter_PlayCharacterUnEquipMontage_Params
	{
	public:
		class UAnimMontage*                                        UnEquipMontageToPlay;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.PlayCharacterThrowUnderhandMontage
	 */
	struct ADFBaseCharacter_PlayCharacterThrowUnderhandMontage_Params
	{
	public:
		class UAnimMontage*                                        ThrowUnderhandMontageToPlay;                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.PlayCharacterThrowOverhandMontage
	 */
	struct ADFBaseCharacter_PlayCharacterThrowOverhandMontage_Params
	{
	public:
		class UAnimMontage*                                        ThrowOverhandMontageToPlay;                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.PlayCharacterStartReloadMontage
	 */
	struct ADFBaseCharacter_PlayCharacterStartReloadMontage_Params
	{
	public:
		class UAnimMontage*                                        StartReloadMontageToPlay;                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bDryReload;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MROG[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.PlayCharacterSound
	 */
	struct ADFBaseCharacter_PlayCharacterSound_Params
	{
	public:
		struct FPerspectiveSound                                   Sound;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAudioComponent*                                     ReturnValue;                                             // 0x0010(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.PlayCharacterReloadMontage
	 */
	struct ADFBaseCharacter_PlayCharacterReloadMontage_Params
	{
	public:
		bool                                                       bDryReload;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Z6DQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.PlayCharacterPerspectiveAnimation
	 */
	struct ADFBaseCharacter_PlayCharacterPerspectiveAnimation_Params
	{
	public:
		struct FPerspectiveAnim                                    CharAnim;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bForceDisableAutoBlendOut;                               // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MND3[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.PlayCharacterMontage
	 */
	struct ADFBaseCharacter_PlayCharacterMontage_Params
	{
	public:
		class UAnimMontage*                                        CharMontage;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bForceDisableAutoBlendOut;                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_UY2Y[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.PlayCharacterFireMontage
	 */
	struct ADFBaseCharacter_PlayCharacterFireMontage_Params
	{
	public:
		class UAnimMontage*                                        FireMontageToPlay;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFireLast;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFireADS;                                                // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9Y3J[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.PlayCharacterEquipMontage
	 */
	struct ADFBaseCharacter_PlayCharacterEquipMontage_Params
	{
	public:
		bool                                                       bDontPlayAndReturnDominantPlayLengthOnly;                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_K2Y9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.PlayCharacterEndReloadMontage
	 */
	struct ADFBaseCharacter_PlayCharacterEndReloadMontage_Params
	{
	public:
		class UAnimMontage*                                        EndReloadMontageToPlay;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bDryReload;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SUHC[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.PlayCharacterDeathMontage
	 */
	struct ADFBaseCharacter_PlayCharacterDeathMontage_Params
	{
	public:
		bool                                                       bDontPlayAndReturnDominantPlayLengthOnly;                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WH1W[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.PlayCharacterCockMontage
	 */
	struct ADFBaseCharacter_PlayCharacterCockMontage_Params
	{
	public:
		class UAnimMontage*                                        CockMontageToPlay;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.PlayCharacterActionMontage
	 */
	struct ADFBaseCharacter_PlayCharacterActionMontage_Params
	{
	public:
		class UAnimMontage*                                        ActionMontageToPlay;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.OnRep_TeamState
	 */
	struct ADFBaseCharacter_OnRep_TeamState_Params
	{
	public:
		class ADFTeamState*                                        TeamStateBeforeUpdate;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.OnRep_TeamNum
	 */
	struct ADFBaseCharacter_OnRep_TeamNum_Params
	{
	public:
		unsigned char                                              LastTeamNum;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.OnRep_ReplicatedStance
	 */
	struct ADFBaseCharacter_OnRep_ReplicatedStance_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.OnRep_ReplicatedLeanAmount
	 */
	struct ADFBaseCharacter_OnRep_ReplicatedLeanAmount_Params
	{
	public:
		float                                                      LastReplicatedLeanAmount;                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.OnRep_LastTakeHitInfo
	 */
	struct ADFBaseCharacter_OnRep_LastTakeHitInfo_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.OnRep_ItemEnabledMode
	 */
	struct ADFBaseCharacter_OnRep_ItemEnabledMode_Params
	{
	public:
		EDFItemEnabledMode                                         PreviousItemEnabledMode;                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.OnRep_IsProne
	 */
	struct ADFBaseCharacter_OnRep_IsProne_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.OnRep_Health
	 */
	struct ADFBaseCharacter_OnRep_Health_Params
	{
	public:
		float                                                      PreviousValue;                                           // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.OnRep_EquippedItem
	 */
	struct ADFBaseCharacter_OnRep_EquippedItem_Params
	{
	public:
		class ADFBaseItem*                                         LastItem;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.OnRep_bSprinting
	 */
	struct ADFBaseCharacter_OnRep_bSprinting_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.OnRep_bAiming
	 */
	struct ADFBaseCharacter_OnRep_bAiming_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.OnDeath
	 */
	struct ADFBaseCharacter_OnDeath_Params
	{
	public:
		float                                                      KillingDamage;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BK6L[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class APawn*                                               InstigatingPawn;                                         // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              DamageCauser;                                            // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.LeaveProne
	 */
	struct ADFBaseCharacter_LeaveProne_Params
	{
	public:
		bool                                                       bClientSimulation;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.Lean
	 */
	struct ADFBaseCharacter_Lean_Params
	{
	public:
		ELeanDirection                                             DesiredLeanDir;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bClientSimulation;                                       // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.ItemEnabledModeChanged
	 */
	struct ADFBaseCharacter_ItemEnabledModeChanged_Params
	{
	public:
		EDFItemEnabledMode                                         PreviousItemEnabledMode;                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.IsPrefiring
	 */
	struct ADFBaseCharacter_IsPrefiring_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.IsPlayer
	 */
	struct ADFBaseCharacter_IsPlayer_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.IsPerspectiveMesh
	 */
	struct ADFBaseCharacter_IsPerspectiveMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              MeshCompToCheck;                                         // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.IsLeaning
	 */
	struct ADFBaseCharacter_IsLeaning_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.IsFiring
	 */
	struct ADFBaseCharacter_IsFiring_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.IsEquipped
	 */
	struct ADFBaseCharacter_IsEquipped_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.IsAlive
	 */
	struct ADFBaseCharacter_IsAlive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.GoProne
	 */
	struct ADFBaseCharacter_GoProne_Params
	{
	public:
		bool                                                       bClientSimulation;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.GiveLoadout
	 */
	struct ADFBaseCharacter_GiveLoadout_Params
	{
	public:
		class UDFLoadout*                                          Loadout;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bEquipFirstItem;                                         // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.GetRelevantEquippedItem
	 */
	struct ADFBaseCharacter_GetRelevantEquippedItem_Params
	{
	public:
		class ADFBaseItem*                                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.GetMontageToUseFromPerspectiveAnimPair
	 */
	struct ADFBaseCharacter_GetMontageToUseFromPerspectiveAnimPair_Params
	{
	public:
		struct FPerspectiveAnim                                    AnimationPair;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimMontage*                                        ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.GetItemEnabledMode
	 */
	struct ADFBaseCharacter_GetItemEnabledMode_Params
	{
	public:
		EDFItemEnabledMode                                         ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.GetItemAttachPoint
	 */
	struct ADFBaseCharacter_GetItemAttachPoint_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.GetInventory
	 */
	struct ADFBaseCharacter_GetInventory_Params
	{
	public:
		class UDFInventoryComponent*                               ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.GetEquippedItem
	 */
	struct ADFBaseCharacter_GetEquippedItem_Params
	{
	public:
		class ADFBaseItem*                                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.GetDamageMultiplierByBoneName
	 */
	struct ADFBaseCharacter_GetDamageMultiplierByBoneName_Params
	{
	public:
		class FName                                                BoneName;                                                // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DamageMultiplier;                                        // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.GetCharacterMeshToUse
	 */
	struct ADFBaseCharacter_GetCharacterMeshToUse_Params
	{
	public:
		bool                                                       bIgnoreLocalControlOnServer;                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RQOZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USkeletalMeshComponent*                              ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.GetCharacterDeathMontageToUse
	 */
	struct ADFBaseCharacter_GetCharacterDeathMontageToUse_Params
	{
	public:
		class UAnimMontage*                                        OutCharDeathMontage;                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.GetCharacterAnimTickOptionToUse
	 */
	struct ADFBaseCharacter_GetCharacterAnimTickOptionToUse_Params
	{
	public:
		bool                                                       bVisibleMesh;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EVisibilityBasedAnimTickOption                             ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.GetAnimToUseFromPerspectiveAnimPair
	 */
	struct ADFBaseCharacter_GetAnimToUseFromPerspectiveAnimPair_Params
	{
	public:
		struct FPerspectiveAnim                                    AnimationPair;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimSequenceBase*                                   ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.GetAimOffsets
	 */
	struct ADFBaseCharacter_GetAimOffsets_Params
	{
	public:
		struct FRotator                                            ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.EquipPreviousItem
	 */
	struct ADFBaseCharacter_EquipPreviousItem_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.EquipNextItemByType
	 */
	struct ADFBaseCharacter_EquipNextItemByType_Params
	{
	public:
		EItemType                                                  ItemType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.EquipNextItem
	 */
	struct ADFBaseCharacter_EquipNextItem_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.EquipItem
	 */
	struct ADFBaseCharacter_EquipItem_Params
	{
	public:
		class ADFBaseItem*                                         ItemToEquip;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.Die
	 */
	struct ADFBaseCharacter_Die_Params
	{
	public:
		float                                                      KillingDamage;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7ZIW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class AController*                                         Killer;                                                  // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              DamageCauser;                                            // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.CrouchToggle
	 */
	struct ADFBaseCharacter_CrouchToggle_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.ClientVeryShortAdjustPosition_CustomStamina
	 */
	struct ADFBaseCharacter_ClientVeryShortAdjustPosition_CustomStamina_Params
	{
	public:
		float                                                      Timestamp;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             NewLoc;                                                  // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 NewBase;                                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                NewBaseBoneName;                                         // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bHasBase;                                                // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bBaseRelativePosition;                                   // 0x0021(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              ServerMovementMode;                                      // 0x0022(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NC4D[0x1];                                   // 0x0023(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ServerSprintStamina;                                     // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.ClientAdjustRootMotionSourcePosition_CustomStamina
	 */
	struct ADFBaseCharacter_ClientAdjustRootMotionSourcePosition_CustomStamina_Params
	{
	public:
		float                                                      Timestamp;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ES05[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRootMotionSourceGroup                              ServerRootMotion;                                        // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       bHasAnimRootMotion;                                      // 0x0040(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9971[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ServerMontageTrackPosition;                              // 0x0044(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ServerLoc;                                               // 0x0048(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector_NetQuantizeNormal                           ServerRotation;                                          // 0x0054(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ServerVelZ;                                              // 0x0060(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4FAW[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimitiveComponent*                                 ServerBase;                                              // 0x0068(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ServerBoneName;                                          // 0x0070(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bHasBase;                                                // 0x0078(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bBaseRelativePosition;                                   // 0x0079(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              ServerMovementMode;                                      // 0x007A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YIFC[0x1];                                   // 0x007B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ServerSprintStamina;                                     // 0x007C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.ClientAdjustRootMotionPosition_CustomStamina
	 */
	struct ADFBaseCharacter_ClientAdjustRootMotionPosition_CustomStamina_Params
	{
	public:
		float                                                      Timestamp;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ServerMontageTrackPosition;                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ServerLoc;                                               // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector_NetQuantizeNormal                           ServerRotation;                                          // 0x0014(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ServerVelZ;                                              // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4MQB[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimitiveComponent*                                 ServerBase;                                              // 0x0028(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ServerBoneName;                                          // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bHasBase;                                                // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bBaseRelativePosition;                                   // 0x0039(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              ServerMovementMode;                                      // 0x003A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IY8N[0x1];                                   // 0x003B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ServerSprintStamina;                                     // 0x003C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.ClientAdjustPosition_CustomStamina
	 */
	struct ADFBaseCharacter_ClientAdjustPosition_CustomStamina_Params
	{
	public:
		float                                                      Timestamp;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             NewLoc;                                                  // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             NewVel;                                                  // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1AQK[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimitiveComponent*                                 NewBase;                                                 // 0x0020(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                NewBaseBoneName;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bHasBase;                                                // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bBaseRelativePosition;                                   // 0x0031(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              ServerMovementMode;                                      // 0x0032(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_UG1Z[0x1];                                   // 0x0033(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ServerSprintStamina;                                     // 0x0034(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.ClearCharacterAnimInstances
	 */
	struct ADFBaseCharacter_ClearCharacterAnimInstances_Params
	{
	public:
		bool                                                       bPerspectiveMeshOnly;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.CanSprint
	 */
	struct ADFBaseCharacter_CanSprint_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.CanLean
	 */
	struct ADFBaseCharacter_CanLean_Params
	{
	public:
		ELeanDirection                                             DesiredLeanDir;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.CanGoProne
	 */
	struct ADFBaseCharacter_CanGoProne_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.CanDie
	 */
	struct ADFBaseCharacter_CanDie_Params
	{
	public:
		float                                                      KillingDamage;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PJZN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class AController*                                         Killer;                                                  // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              DamageCauser;                                            // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.CanAim
	 */
	struct ADFBaseCharacter_CanAim_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.AimToggle
	 */
	struct ADFBaseCharacter_AimToggle_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseCharacter.Aim
	 */
	struct ADFBaseCharacter_Aim_Params
	{
	public:
		bool                                                       bClientSimulation;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGameMode.UpdatePlayerGameplayMuteStates
	 */
	struct ADFBaseGameMode_UpdatePlayerGameplayMuteStates_Params
	{
	public:
		class ADFBasePlayerController*                             ForPlayerController;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGameMode.UnregisterSignificantActor
	 */
	struct ADFBaseGameMode_UnregisterSignificantActor_Params
	{
	public:
		class AActor*                                              ActorToRemove;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGameMode.SwitchToNextMap
	 */
	struct ADFBaseGameMode_SwitchToNextMap_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseGameMode.SignificantActorEndPlay
	 */
	struct ADFBaseGameMode_SignificantActorEndPlay_Params
	{
	public:
		class AActor*                                              RemovedActor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EEndPlayReason                                             EndPlayReason;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGameMode.ShouldHibernate
	 */
	struct ADFBaseGameMode_ShouldHibernate_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGameMode.ShouldGameplayMuteRemotePlayer
	 */
	struct ADFBaseGameMode_ShouldGameplayMuteRemotePlayer_Params
	{
	public:
		class ADFBasePlayerController*                             ForPlayer;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ADFBasePlayerController*                             PlayerToCheck;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGameMode.ShouldBotAutofill
	 */
	struct ADFBaseGameMode_ShouldBotAutofill_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGameMode.RemovePlayerByAge
	 */
	struct ADFBaseGameMode_RemovePlayerByAge_Params
	{
	public:
		bool                                                       bNewest;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bExcludeBots;                                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bExcludeHumans;                                          // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGameMode.RemoveOldestPlayer
	 */
	struct ADFBaseGameMode_RemoveOldestPlayer_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseGameMode.RemoveOldestBot
	 */
	struct ADFBaseGameMode_RemoveOldestBot_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseGameMode.RemoveNewestPlayer
	 */
	struct ADFBaseGameMode_RemoveNewestPlayer_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseGameMode.RemoveNewestBot
	 */
	struct ADFBaseGameMode_RemoveNewestBot_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseGameMode.RemoveBotByName
	 */
	struct ADFBaseGameMode_RemoveBotByName_Params
	{
	public:
		class FString                                              PlayerName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGameMode.RemoveBot
	 */
	struct ADFBaseGameMode_RemoveBot_Params
	{
	public:
		class APlayerState*                                        BotPS;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGameMode.RemoveAllBots
	 */
	struct ADFBaseGameMode_RemoveAllBots_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseGameMode.RegisterSignificantActor
	 */
	struct ADFBaseGameMode_RegisterSignificantActor_Params
	{
	public:
		class AActor*                                              ActorToRegister;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGameMode.ReceiveOnSwapAIControllers
	 */
	struct ADFBaseGameMode_ReceiveOnSwapAIControllers_Params
	{
	public:
		class AAIController*                                       OldAIC;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AAIController*                                       NewAIC;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGameMode.ReceiveOnMatchIsWaitingToStart
	 */
	struct ADFBaseGameMode_ReceiveOnMatchIsWaitingToStart_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseGameMode.ReceiveOnMatchHasStarted
	 */
	struct ADFBaseGameMode_ReceiveOnMatchHasStarted_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseGameMode.ReceiveOnMatchHasEnded
	 */
	struct ADFBaseGameMode_ReceiveOnMatchHasEnded_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseGameMode.ReceiveOnMatchAborted
	 */
	struct ADFBaseGameMode_ReceiveOnMatchAborted_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseGameMode.ReceiveOnLeavingMap
	 */
	struct ADFBaseGameMode_ReceiveOnLeavingMap_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseGameMode.PlayerCanRestartGeneric
	 */
	struct ADFBaseGameMode_PlayerCanRestartGeneric_Params
	{
	public:
		class AController*                                         Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGameMode.PlayerBotCanRestart
	 */
	struct ADFBaseGameMode_PlayerBotCanRestart_Params
	{
	public:
		class AAIController*                                       Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGameMode.NextMap
	 */
	struct ADFBaseGameMode_NextMap_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseGameMode.ModifyDamage
	 */
	struct ADFBaseGameMode_ModifyDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZSS4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              DamagedActor;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDamageEvent                                        DamageEvent;                                             // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class AController*                                         EventInstigator;                                         // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              DamageCauser;                                            // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0030(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGameMode.KickPlayerByName
	 */
	struct ADFBaseGameMode_KickPlayerByName_Params
	{
	public:
		class FString                                              KickedPlayerName;                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                KickReason;                                              // 0x0010(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGameMode.KickPlayerById
	 */
	struct ADFBaseGameMode_KickPlayerById_Params
	{
	public:
		int32_t                                                    KickedPlayerId;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7NW0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                KickReason;                                              // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGameMode.IsValidTeamId
	 */
	struct ADFBaseGameMode_IsValidTeamId_Params
	{
	public:
		unsigned char                                              TeamId;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGameMode.IsMatchWinner
	 */
	struct ADFBaseGameMode_IsMatchWinner_Params
	{
	public:
		class ADFBasePlayerState*                                  PlayerStateToCheck;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGameMode.IsHibernating
	 */
	struct ADFBaseGameMode_IsHibernating_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGameMode.IsFriendlyFireEnabled
	 */
	struct ADFBaseGameMode_IsFriendlyFireEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGameMode.GetTotalNumPlayers
	 */
	struct ADFBaseGameMode_GetTotalNumPlayers_Params
	{
	public:
		bool                                                       bIncludeTravellingPlayers;                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GBN8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGameMode.GetNextMapName
	 */
	struct ADFBaseGameMode_GetNextMapName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGameMode.GetNextGameName
	 */
	struct ADFBaseGameMode_GetNextGameName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGameMode.ForceTeamId
	 */
	struct ADFBaseGameMode_ForceTeamId_Params
	{
	public:
		int32_t                                                    SwitchedPlayerId;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              TeamIdToAssign;                                          // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0005(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGameMode.ForceTeam
	 */
	struct ADFBaseGameMode_ForceTeam_Params
	{
	public:
		class FString                                              SwitchedPlayerName;                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              TeamIdToAssign;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGameMode.FindPlayerStartTransform
	 */
	struct ADFBaseGameMode_FindPlayerStartTransform_Params
	{
	public:
		class AController*                                         Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9183[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          OutFoundSpawnTransform;                                  // 0x0010(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		class FString                                              IncomingName;                                            // 0x0040(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGameMode.DumpActiveRulesets
	 */
	struct ADFBaseGameMode_DumpActiveRulesets_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseGameMode.DetermineMatchWinner
	 */
	struct ADFBaseGameMode_DetermineMatchWinner_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseGameMode.CreateTeam
	 */
	struct ADFBaseGameMode_CreateTeam_Params
	{
	public:
		class UDFTeamDefinition*                                   NewTeamDef;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              NewTeamIdToUse;                                          // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Y4WH[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ADFTeamState*                                        ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGameMode.ChooseTeam
	 */
	struct ADFBaseGameMode_ChooseTeam_Params
	{
	public:
		class ADFBasePlayerState*                                  ForPlayerState;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGameMode.ChooseSpawnPointFromPlayerStart
	 */
	struct ADFBaseGameMode_ChooseSpawnPointFromPlayerStart_Params
	{
	public:
		class AController*                                         Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              StartSpot;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSpawnPointDef                                      OutChosenSpawnPoint;                                     // 0x0010(0x0050)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		ESpawnActorCollisionHandlingMethod                         OutCollisionHandlingMethod;                              // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0061(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGameMode.CheckWinConditions
	 */
	struct ADFBaseGameMode_CheckWinConditions_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGameMode.CheckRulesetWinConditions
	 */
	struct ADFBaseGameMode_CheckRulesetWinConditions_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGameMode.CanRegisterSignificantActor
	 */
	struct ADFBaseGameMode_CanRegisterSignificantActor_Params
	{
	public:
		class AActor*                                              ActorToRegister;                                         // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ActorDenialReason;                                       // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGameMode.CanDealDamage
	 */
	struct ADFBaseGameMode_CanDealDamage_Params
	{
	public:
		class ADFBasePlayerState*                                  DamageInstigator;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ADFBasePlayerState*                                  DamagedPlayer;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGameMode.CanAddRuleset
	 */
	struct ADFBaseGameMode_CanAddRuleset_Params
	{
	public:
		class UClass*                                              RulesetClassToAdd;                                       // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              RulesetDenialReason;                                     // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGameMode.BanPlayerByName
	 */
	struct ADFBaseGameMode_BanPlayerByName_Params
	{
	public:
		class FString                                              BannedPlayerName;                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                BanReason;                                               // 0x0010(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      BanDuration;                                             // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x002C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGameMode.BanPlayerById
	 */
	struct ADFBaseGameMode_BanPlayerById_Params
	{
	public:
		int32_t                                                    BannedPlayerId;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PN69[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                BanReason;                                               // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      BanDuration;                                             // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGameMode.AutofillWithBots
	 */
	struct ADFBaseGameMode_AutofillWithBots_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseGameMode.AssignTeam
	 */
	struct ADFBaseGameMode_AssignTeam_Params
	{
	public:
		class AController*                                         ForController;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              AssignedTeam;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGameMode.AddTeamBots
	 */
	struct ADFBaseGameMode_AddTeamBots_Params
	{
	public:
		unsigned char                                              TeamId;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_E67S[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Num;                                                     // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGameMode.AddNamedBot
	 */
	struct ADFBaseGameMode_AddNamedBot_Params
	{
	public:
		class FString                                              BotName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGameMode.AddBots
	 */
	struct ADFBaseGameMode_AddBots_Params
	{
	public:
		int32_t                                                    Num;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGameMode.AddBot
	 */
	struct ADFBaseGameMode_AddBot_Params
	{
	public:
		unsigned char                                              PlayerTeamID;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FGRZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              PlayerName;                                              // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerState*                                        ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGameInstance.ProjectVersion
	 */
	struct UDFBaseGameInstance_ProjectVersion_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseGameInstance.OnTravelFailure
	 */
	struct UDFBaseGameInstance_OnTravelFailure_Params
	{
	public:
		class UWorld*                                              World;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ETravelFailure                                             FailureType;                                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1ZSS[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorString;                                             // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGameInstance.OnNetworkLagStateChanged
	 */
	struct UDFBaseGameInstance_OnNetworkLagStateChanged_Params
	{
	public:
		class UWorld*                                              World;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UNetDriver*                                          NetDriver;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ENetworkLagState                                           LagType;                                                 // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGameInstance.OnNetworkFailure
	 */
	struct UDFBaseGameInstance_OnNetworkFailure_Params
	{
	public:
		class UWorld*                                              World;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UNetDriver*                                          NetDriver;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ENetworkFailure                                            FailureType;                                             // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IHWF[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorString;                                             // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGameInstance.JoinGameByIP
	 */
	struct UDFBaseGameInstance_JoinGameByIP_Params
	{
	public:
		class FString                                              IPAddress;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGameInstance.JoinGame
	 */
	struct UDFBaseGameInstance_JoinGame_Params
	{
	public:
		int32_t                                                    SearchResultIndex;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGameInstance.IsHibernating
	 */
	struct UDFBaseGameInstance_IsHibernating_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGameInstance.HostGame
	 */
	struct UDFBaseGameInstance_HostGame_Params
	{
	public:
		class FString                                              TravelURL;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bLANGame;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3I5C[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    MaxPlayers;                                              // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              HostName;                                                // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Password;                                                // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGameInstance.ForceUpdateSession
	 */
	struct UDFBaseGameInstance_ForceUpdateSession_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseGameInstance.FindGames
	 */
	struct UDFBaseGameInstance_FindGames_Params
	{
	public:
		ESessionSearchPresenceType                                 SearchPresenceType;                                      // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGameInstance.DumpOnlineSessionState
	 */
	struct UDFBaseGameInstance_DumpOnlineSessionState_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseGameInstance.CleanupGame
	 */
	struct UDFBaseGameInstance_CleanupGame_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseGameState.SetTimerPauseState
	 */
	struct ADFBaseGameState_SetTimerPauseState_Params
	{
	public:
		bool                                                       bNewPauseState;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGameState.SetRemainingTime
	 */
	struct ADFBaseGameState_SetRemainingTime_Params
	{
	public:
		int32_t                                                    NewRemainingTime;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGameState.OnRep_ReplicatedRemainingTime
	 */
	struct ADFBaseGameState_OnRep_ReplicatedRemainingTime_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseGameState.OnRep_NumTeams
	 */
	struct ADFBaseGameState_OnRep_NumTeams_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseGameState.IsValidTeamId
	 */
	struct ADFBaseGameState_IsValidTeamId_Params
	{
	public:
		unsigned char                                              TeamId;                                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGameState.GetTeamStateById
	 */
	struct ADFBaseGameState_GetTeamStateById_Params
	{
	public:
		unsigned char                                              TeamIdNum;                                               // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_04ZH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ADFTeamState*                                        ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseWeapon.StopWeaponPerspectiveAnimation
	 */
	struct ADFBaseWeapon_StopWeaponPerspectiveAnimation_Params
	{
	public:
		struct FPerspectiveAnim                                    WeapAnim;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseWeapon.StopWeaponMontage
	 */
	struct ADFBaseWeapon_StopWeaponMontage_Params
	{
	public:
		class UAnimMontage*                                        WeapMontage;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseWeapon.StopSimulatingWeaponFire
	 */
	struct ADFBaseWeapon_StopSimulatingWeaponFire_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseWeapon.SpawnImpactFX
	 */
	struct ADFBaseWeapon_SpawnImpactFX_Params
	{
	public:
		struct FHitResult                                          Impact;                                                  // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseWeapon.SimulateWeaponFire
	 */
	struct ADFBaseWeapon_SimulateWeaponFire_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseWeapon.ShouldSimulateWeaponFire
	 */
	struct ADFBaseWeapon_ShouldSimulateWeaponFire_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseWeapon.ReceiveStopSimulatingWeaponFire
	 */
	struct ADFBaseWeapon_ReceiveStopSimulatingWeaponFire_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseWeapon.ReceiveSimulateWeaponFire
	 */
	struct ADFBaseWeapon_ReceiveSimulateWeaponFire_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseWeapon.ReceiveOnStopFiring
	 */
	struct ADFBaseWeapon_ReceiveOnStopFiring_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseWeapon.ReceiveOnStartFiring
	 */
	struct ADFBaseWeapon_ReceiveOnStartFiring_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseWeapon.ReceiveFire
	 */
	struct ADFBaseWeapon_ReceiveFire_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseWeapon.PrefireDelayElapsed
	 */
	struct ADFBaseWeapon_PrefireDelayElapsed_Params
	{
	public:
		bool                                                       bClientSimulation;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseWeapon.PlayWeaponUnEquipMontage
	 */
	struct ADFBaseWeapon_PlayWeaponUnEquipMontage_Params
	{
	public:
		class UAnimMontage*                                        UnEquipMontageToPlay;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseWeapon.PlayWeaponThrowUnderhandMontage
	 */
	struct ADFBaseWeapon_PlayWeaponThrowUnderhandMontage_Params
	{
	public:
		class UAnimMontage*                                        ThrowUnderhandMontageToPlay;                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseWeapon.PlayWeaponThrowOverhandMontage
	 */
	struct ADFBaseWeapon_PlayWeaponThrowOverhandMontage_Params
	{
	public:
		class UAnimMontage*                                        ThrowOverhandMontageToPlay;                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseWeapon.PlayWeaponSound
	 */
	struct ADFBaseWeapon_PlayWeaponSound_Params
	{
	public:
		struct FPerspectiveSound                                   Sound;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAudioComponent*                                     ReturnValue;                                             // 0x0010(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseWeapon.PlayWeaponPerspectiveAnimation
	 */
	struct ADFBaseWeapon_PlayWeaponPerspectiveAnimation_Params
	{
	public:
		struct FPerspectiveAnim                                    WeapAnim;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseWeapon.PlayWeaponMontage
	 */
	struct ADFBaseWeapon_PlayWeaponMontage_Params
	{
	public:
		class UAnimMontage*                                        WeapMontage;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bForceDisableAutoBlendOut;                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SIAI[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseWeapon.PlayWeaponFireMontage
	 */
	struct ADFBaseWeapon_PlayWeaponFireMontage_Params
	{
	public:
		class UAnimMontage*                                        FireMontageToPlay;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFireLast;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFireADS;                                                // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SABB[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseWeapon.PlayWeaponEquipMontage
	 */
	struct ADFBaseWeapon_PlayWeaponEquipMontage_Params
	{
	public:
		class UAnimMontage*                                        EquipMontageToPlay;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseWeapon.PlayWeaponCockMontage
	 */
	struct ADFBaseWeapon_PlayWeaponCockMontage_Params
	{
	public:
		class UAnimMontage*                                        CockMontageToPlay;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseWeapon.PlayWeaponActionMontage
	 */
	struct ADFBaseWeapon_PlayWeaponActionMontage_Params
	{
	public:
		class UAnimMontage*                                        ActionMontageToPlay;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseWeapon.PlayThrowAnimations
	 */
	struct ADFBaseWeapon_PlayThrowAnimations_Params
	{
	public:
		bool                                                       bOverhandThrow;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bDontPlayAndReturnDominantPlayLengthOnly;                // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_39XF[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseWeapon.PlayCockAnimations
	 */
	struct ADFBaseWeapon_PlayCockAnimations_Params
	{
	public:
		bool                                                       bDontPlayAndReturnDominantPlayLengthOnly;                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Q2DV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseWeapon.PlayActionAnimations
	 */
	struct ADFBaseWeapon_PlayActionAnimations_Params
	{
	public:
		bool                                                       bDontPlayAndReturnDominantPlayLengthOnly;                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseWeapon.OnStopFiring
	 */
	struct ADFBaseWeapon_OnStopFiring_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseWeapon.OnStartFiring
	 */
	struct ADFBaseWeapon_OnStartFiring_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseWeapon.OnRep_FireCounter
	 */
	struct ADFBaseWeapon_OnRep_FireCounter_Params
	{
	public:
		struct FRepShotInfo                                        PreviousValue;                                           // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseWeapon.OnRep_bPrefiring
	 */
	struct ADFBaseWeapon_OnRep_bPrefiring_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseWeapon.IsFiring
	 */
	struct ADFBaseWeapon_IsFiring_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseWeapon.HandleFire
	 */
	struct ADFBaseWeapon_HandleFire_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseWeapon.GetWeaponMeshToUse
	 */
	struct ADFBaseWeapon_GetWeaponMeshToUse_Params
	{
	public:
		bool                                                       bIgnoreLocalControlOnServer;                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_POTL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USkeletalMeshComponent*                              ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseWeapon.GetWeaponMesh1P
	 */
	struct ADFBaseWeapon_GetWeaponMesh1P_Params
	{
	public:
		class USkeletalMeshComponent*                              ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseWeapon.GetWeaponMesh
	 */
	struct ADFBaseWeapon_GetWeaponMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseWeapon.GetMontageToUseFromPerspectiveAnimPair
	 */
	struct ADFBaseWeapon_GetMontageToUseFromPerspectiveAnimPair_Params
	{
	public:
		struct FPerspectiveAnim                                    AnimationPair;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimMontage*                                        ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseWeapon.GetMontagePlayLengthToUseFromPerspectiveAnimPair
	 */
	struct ADFBaseWeapon_GetMontagePlayLengthToUseFromPerspectiveAnimPair_Params
	{
	public:
		struct FPerspectiveAnim                                    AnimationPair;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseWeapon.GetAnimToUseFromPerspectiveAnimPair
	 */
	struct ADFBaseWeapon_GetAnimToUseFromPerspectiveAnimPair_Params
	{
	public:
		struct FPerspectiveAnim                                    AnimationPair;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimSequenceBase*                                   ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseWeapon.GetAnimPlayLengthToUseFromPerspectiveAnimPair
	 */
	struct ADFBaseWeapon_GetAnimPlayLengthToUseFromPerspectiveAnimPair_Params
	{
	public:
		struct FPerspectiveAnim                                    AnimationPair;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGun.UnloadCurrentAmmoClip
	 */
	struct ADFBaseGun_UnloadCurrentAmmoClip_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseGun.StopSimulatingGunReload
	 */
	struct ADFBaseGun_StopSimulatingGunReload_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseGun.StartReload
	 */
	struct ADFBaseGun_StartReload_Params
	{
	public:
		bool                                                       bClientSimulation;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGun.SimulateGunReload
	 */
	struct ADFBaseGun_SimulateGunReload_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseGun.ShouldUseRecoil
	 */
	struct ADFBaseGun_ShouldUseRecoil_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGun.ShouldSimulateGunReload
	 */
	struct ADFBaseGun_ShouldSimulateGunReload_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGun.SetReloadState
	 */
	struct ADFBaseGun_SetReloadState_Params
	{
	public:
		EGunReloadState                                            NewReloadState;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGun.SetFireModeBP
	 */
	struct ADFBaseGun_SetFireModeBP_Params
	{
	public:
		EFireMode                                                  NewFireMode;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGun.SetFireMode
	 */
	struct ADFBaseGun_SetFireMode_Params
	{
	public:
		EFireMode                                                  NewFireMode;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromPlayerInput;                                        // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bForce;                                                  // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0003(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGun.ServerStartReload
	 */
	struct ADFBaseGun_ServerStartReload_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseGun.ServerSetFireMode
	 */
	struct ADFBaseGun_ServerSetFireMode_Params
	{
	public:
		EFireMode                                                  NewFireMode;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGun.ReceiveFireModeChanged
	 */
	struct ADFBaseGun_ReceiveFireModeChanged_Params
	{
	public:
		EFireMode                                                  NewFireMode;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EFireMode                                                  PrevFireMode;                                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromPlayerInput;                                        // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGun.ReceiveAmmoExhausted
	 */
	struct ADFBaseGun_ReceiveAmmoExhausted_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseGun.PlayWeaponStartReloadMontage
	 */
	struct ADFBaseGun_PlayWeaponStartReloadMontage_Params
	{
	public:
		class UAnimMontage*                                        StartReloadMontageToPlay;                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bDryReload;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QXJ2[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGun.PlayWeaponReloadMontage
	 */
	struct ADFBaseGun_PlayWeaponReloadMontage_Params
	{
	public:
		bool                                                       bDryReload;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4ICF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGun.PlayWeaponEndReloadMontage
	 */
	struct ADFBaseGun_PlayWeaponEndReloadMontage_Params
	{
	public:
		class UAnimMontage*                                        EndReloadMontageToPlay;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bDryReload;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_M77X[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGun.PlayReloadTransitionAnimations
	 */
	struct ADFBaseGun_PlayReloadTransitionAnimations_Params
	{
	public:
		bool                                                       bStartReload;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bDontPlayAndReturnDominantPlayLengthOnly;                // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MZ6S[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGun.PlayReloadAnimations
	 */
	struct ADFBaseGun_PlayReloadAnimations_Params
	{
	public:
		bool                                                       bDryReload;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bDontPlayAndReturnDominantPlayLengthOnly;                // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_AZAH[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGun.OnRep_SelectedFireMode
	 */
	struct ADFBaseGun_OnRep_SelectedFireMode_Params
	{
	public:
		EFireMode                                                  PrevSelectedFireMode;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGun.OnRep_PendingReloadState
	 */
	struct ADFBaseGun_OnRep_PendingReloadState_Params
	{
	public:
		EGunReloadState                                            PrevReloadState;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGun.OnRep_CurrentAmmoClip
	 */
	struct ADFBaseGun_OnRep_CurrentAmmoClip_Params
	{
	public:
		class ADFBaseAmmoClip*                                     PrevAmmoClip;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGun.OnReload
	 */
	struct ADFBaseGun_OnReload_Params
	{
	public:
		bool                                                       bClientSimulation;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGun.LoadPreviousAmmoClip
	 */
	struct ADFBaseGun_LoadPreviousAmmoClip_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseGun.LoadNextAmmoClip
	 */
	struct ADFBaseGun_LoadNextAmmoClip_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseGun.LoadAmmoClip
	 */
	struct ADFBaseGun_LoadAmmoClip_Params
	{
	public:
		class ADFBaseAmmoClip*                                     ClipToLoad;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGun.IsReloading
	 */
	struct ADFBaseGun_IsReloading_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGun.IsDryReloading
	 */
	struct ADFBaseGun_IsDryReloading_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGun.HasExhaustedAllAmmo
	 */
	struct ADFBaseGun_HasExhaustedAllAmmo_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGun.HasAmmoClip
	 */
	struct ADFBaseGun_HasAmmoClip_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGun.GetTotalAmmo
	 */
	struct ADFBaseGun_GetTotalAmmo_Params
	{
	public:
		bool                                                       bIncludeLoadedMags;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZCEF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGun.GetSupportedFireModes
	 */
	struct ADFBaseGun_GetSupportedFireModes_Params
	{
	public:
		unsigned char                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGun.GetShellEjectAttachPoint
	 */
	struct ADFBaseGun_GetShellEjectAttachPoint_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGun.GetSelectedFireMode
	 */
	struct ADFBaseGun_GetSelectedFireMode_Params
	{
	public:
		EFireMode                                                  ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGun.GetReloadState
	 */
	struct ADFBaseGun_GetReloadState_Params
	{
	public:
		EGunReloadState                                            ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGun.GetPreviousReloadState
	 */
	struct ADFBaseGun_GetPreviousReloadState_Params
	{
	public:
		EGunReloadState                                            ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGun.GetNumFreeAmmoClips
	 */
	struct ADFBaseGun_GetNumFreeAmmoClips_Params
	{
	public:
		bool                                                       bIncludeEmptyMags;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIncludeCurrentMag;                                      // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WNI1[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGun.GetMuzzleLocation
	 */
	struct ADFBaseGun_GetMuzzleLocation_Params
	{
	public:
		bool                                                       bIgnoreLocalControlOnServer;                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JWM3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             ReturnValue;                                             // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGun.GetMuzzleDirection
	 */
	struct ADFBaseGun_GetMuzzleDirection_Params
	{
	public:
		bool                                                       bIgnoreLocalControlOnServer;                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FSNP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             ReturnValue;                                             // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGun.GetMuzzleAttachPoint
	 */
	struct ADFBaseGun_GetMuzzleAttachPoint_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGun.GetMuzzleAttachComponent
	 */
	struct ADFBaseGun_GetMuzzleAttachComponent_Params
	{
	public:
		bool                                                       bIgnoreLocalControlOnServer;                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WNUV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USceneComponent*                                     ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGun.GetClipAmmo
	 */
	struct ADFBaseGun_GetClipAmmo_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGun.CanReload
	 */
	struct ADFBaseGun_CanReload_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGun_Projectile.ServerNotifyCSHitPredicted
	 */
	struct ADFBaseGun_Projectile_ServerNotifyCSHitPredicted_Params
	{
	public:
		struct FCSHitInfo                                          HitInfo;                                                 // 0x0000(0x0070)  (ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGun_Projectile.ServerNotifyCSHit
	 */
	struct ADFBaseGun_Projectile_ServerNotifyCSHit_Params
	{
	public:
		class ADFBaseProjectile*                                   HitProj;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FCSHitInfo                                          HitInfo;                                                 // 0x0008(0x0070)  (ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGun_Projectile.ServerFireProjectile
	 */
	struct ADFBaseGun_Projectile_ServerFireProjectile_Params
	{
	public:
		struct FVector                                             Origin;                                                  // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector_NetQuantizeNormal                           ShootDir;                                                // 0x000C(0x000C)  (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGun_Projectile.ClientProjDebugInfo
	 */
	struct ADFBaseGun_Projectile_ClientProjDebugInfo_Params
	{
	public:
		class ADFBaseProjectile*                                   Proj;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             NewProjLoc;                                              // 0x0008(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             LastProjLoc;                                             // 0x0014(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            NewProjRot;                                              // 0x0020(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             NewProjVel;                                              // 0x002C(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGun_Projectile.ClientProjDebugImpactInfo
	 */
	struct ADFBaseGun_Projectile_ClientProjDebugImpactInfo_Params
	{
	public:
		class ADFBaseProjectile*                                   Proj;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ImpactLoc;                                               // 0x0008(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector_NetQuantizeNormal                           ImpactNorm;                                              // 0x0014(0x000C)  (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseGun_Projectile.ClientDrawDebugFireCone
	 */
	struct ADFBaseGun_Projectile_ClientDrawDebugFireCone_Params
	{
	public:
		struct FVector                                             ConeOrig;                                                // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector_NetQuantizeNormal                           ConeDir;                                                 // 0x000C(0x000C)  (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseImpactEffect.GetImpactSound
	 */
	struct ADFBaseImpactEffect_GetImpactSound_Params
	{
	public:
		EPhysicalSurface                                           SurfaceType;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_F9L4[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USoundCue*                                           ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseImpactEffect.GetImpactFX
	 */
	struct ADFBaseImpactEffect_GetImpactFX_Params
	{
	public:
		EPhysicalSurface                                           SurfaceType;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_451N[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UParticleSystem*                                     ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBasePickup.UpdatePickupState
	 */
	struct ADFBasePickup_UpdatePickupState_Params
	{
	public:
		bool                                                       bNewActive;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBasePickup.RespawnPickup
	 */
	struct ADFBasePickup_RespawnPickup_Params
	{	};

	/**
	 * Function DonkehFramework.DFBasePickup.OnRespawn
	 */
	struct ADFBasePickup_OnRespawn_Params
	{	};

	/**
	 * Function DonkehFramework.DFBasePickup.OnRep_Active
	 */
	struct ADFBasePickup_OnRep_Active_Params
	{	};

	/**
	 * Function DonkehFramework.DFBasePickup.OnPickup
	 */
	struct ADFBasePickup_OnPickup_Params
	{	};

	/**
	 * Function DonkehFramework.DFBasePickup.InitializePickup
	 */
	struct ADFBasePickup_InitializePickup_Params
	{	};

	/**
	 * Function DonkehFramework.DFBasePickup.GivePickupTo
	 */
	struct ADFBasePickup_GivePickupTo_Params
	{
	public:
		class ADFBaseCharacter*                                    PickupOwner;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBasePickup.CanBePickedUp
	 */
	struct ADFBasePickup_CanBePickedUp_Params
	{
	public:
		class ADFBaseCharacter*                                    Invoker;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBasePlayerCharacter.Use
	 */
	struct ADFBasePlayerCharacter_Use_Params
	{	};

	/**
	 * Function DonkehFramework.DFBasePlayerCharacter.TurnAtRate
	 */
	struct ADFBasePlayerCharacter_TurnAtRate_Params
	{
	public:
		float                                                      Rate;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBasePlayerCharacter.SwitchFireMode
	 */
	struct ADFBasePlayerCharacter_SwitchFireMode_Params
	{	};

	/**
	 * Function DonkehFramework.DFBasePlayerCharacter.SetMeshVisibility
	 */
	struct ADFBasePlayerCharacter_SetMeshVisibility_Params
	{
	public:
		bool                                                       bFirstPersonVisibility;                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBasePlayerCharacter.ServerUse
	 */
	struct ADFBasePlayerCharacter_ServerUse_Params
	{	};

	/**
	 * Function DonkehFramework.DFBasePlayerCharacter.ServerOnToggleFirstPerson
	 */
	struct ADFBasePlayerCharacter_ServerOnToggleFirstPerson_Params
	{
	public:
		bool                                                       bNewFirstPerson;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBasePlayerCharacter.ReceiveGetDefaultPawnMesh1P
	 */
	struct ADFBasePlayerCharacter_ReceiveGetDefaultPawnMesh1P_Params
	{
	public:
		class USkeletalMesh*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBasePlayerCharacter.OnToggleFirstPerson
	 */
	struct ADFBasePlayerCharacter_OnToggleFirstPerson_Params
	{
	public:
		bool                                                       bNewFirstPerson;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBasePlayerCharacter.OnFireReleased
	 */
	struct ADFBasePlayerCharacter_OnFireReleased_Params
	{	};

	/**
	 * Function DonkehFramework.DFBasePlayerCharacter.OnFirePressed
	 */
	struct ADFBasePlayerCharacter_OnFirePressed_Params
	{	};

	/**
	 * Function DonkehFramework.DFBasePlayerCharacter.MoveUp
	 */
	struct ADFBasePlayerCharacter_MoveUp_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBasePlayerCharacter.MoveRight
	 */
	struct ADFBasePlayerCharacter_MoveRight_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBasePlayerCharacter.MoveForward
	 */
	struct ADFBasePlayerCharacter_MoveForward_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBasePlayerCharacter.LookUpAtRate
	 */
	struct ADFBasePlayerCharacter_LookUpAtRate_Params
	{
	public:
		float                                                      Rate;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBasePlayerCharacter.IsUsingFirstPersonMesh
	 */
	struct ADFBasePlayerCharacter_IsUsingFirstPersonMesh_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBasePlayerCharacter.IsTrueFirstPerson
	 */
	struct ADFBasePlayerCharacter_IsTrueFirstPerson_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBasePlayerCharacter.IsLocalFirstPerson
	 */
	struct ADFBasePlayerCharacter_IsLocalFirstPerson_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBasePlayerCharacter.IsFirstPerson
	 */
	struct ADFBasePlayerCharacter_IsFirstPerson_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBasePlayerCharacter.GetMesh1P
	 */
	struct ADFBasePlayerCharacter_GetMesh1P_Params
	{
	public:
		class USkeletalMeshComponent*                              ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBasePlayerCharacter.GetItemAttachPoint1P
	 */
	struct ADFBasePlayerCharacter_GetItemAttachPoint1P_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBasePlayerCharacter.GetDefaultPawnMesh1P
	 */
	struct ADFBasePlayerCharacter_GetDefaultPawnMesh1P_Params
	{
	public:
		class USkeletalMesh*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBasePlayerCharacter.GetCameraBoom
	 */
	struct ADFBasePlayerCharacter_GetCameraBoom_Params
	{
	public:
		class USpringArmComponent*                                 ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBasePlayerCharacter.GetCamera1P
	 */
	struct ADFBasePlayerCharacter_GetCamera1P_Params
	{
	public:
		class UCameraComponent*                                    ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBasePlayerCharacter.GetCamera
	 */
	struct ADFBasePlayerCharacter_GetCamera_Params
	{
	public:
		class UCameraComponent*                                    ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBasePlayerController.TeamSay
	 */
	struct ADFBasePlayerController_TeamSay_Params
	{
	public:
		class FString                                              Msg;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBasePlayerController.ServerTeamSay
	 */
	struct ADFBasePlayerController_ServerTeamSay_Params
	{
	public:
		class FString                                              Msg;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBasePlayerController.ServerSay
	 */
	struct ADFBasePlayerController_ServerSay_Params
	{
	public:
		class FString                                              Msg;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBasePlayerController.ServerNotifyProjCSHit
	 */
	struct ADFBasePlayerController_ServerNotifyProjCSHit_Params
	{
	public:
		class ADFBaseProjectile*                                   HitProj;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APawn*                                               HitProjDamageInstigator;                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FCSHitInfo                                          HitInfo;                                                 // 0x0010(0x0070)  (ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBasePlayerController.ServerEnableCheats
	 */
	struct ADFBasePlayerController_ServerEnableCheats_Params
	{	};

	/**
	 * Function DonkehFramework.DFBasePlayerController.Say
	 */
	struct ADFBasePlayerController_Say_Params
	{
	public:
		class FString                                              Msg;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBasePlayerController.ReceiveUnpossessPawn
	 */
	struct ADFBasePlayerController_ReceiveUnpossessPawn_Params
	{
	public:
		class APawn*                                               UnpossessedPawn;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBasePlayerController.ReceivePreClientTravel
	 */
	struct ADFBasePlayerController_ReceivePreClientTravel_Params
	{
	public:
		class FString                                              PendingURL;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsSeamlessTravelWithRelativeTravelType;                 // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBasePlayerController.ReceivePossessPawn
	 */
	struct ADFBasePlayerController_ReceivePossessPawn_Params
	{
	public:
		class APawn*                                               NewPawn;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBasePlayerController.ReceivePlayerTeamStateUpdated
	 */
	struct ADFBasePlayerController_ReceivePlayerTeamStateUpdated_Params
	{
	public:
		class ADFTeamState*                                        LastTeamState;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ADFTeamState*                                        NewTeamState;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bNewTeamStateInit;                                       // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBasePlayerController.ReceivePlayerTeamNumUpdated
	 */
	struct ADFBasePlayerController_ReceivePlayerTeamNumUpdated_Params
	{
	public:
		unsigned char                                              LastTeamNum;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              NewTeamNum;                                              // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBasePlayerController.ReceiveOnRepPlayerState
	 */
	struct ADFBasePlayerController_ReceiveOnRepPlayerState_Params
	{	};

	/**
	 * Function DonkehFramework.DFBasePlayerController.ReceiveNewChatMsg
	 */
	struct ADFBasePlayerController_ReceiveNewChatMsg_Params
	{
	public:
		struct FPlayerChatMsg                                      ChatMsg;                                                 // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBasePlayerController.ReceiveGameHasEnded
	 */
	struct ADFBasePlayerController_ReceiveGameHasEnded_Params
	{
	public:
		class AActor*                                              EndGameFocus;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsWinner;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBasePlayerController.OnFireReleased
	 */
	struct ADFBasePlayerController_OnFireReleased_Params
	{	};

	/**
	 * Function DonkehFramework.DFBasePlayerController.OnFirePressed
	 */
	struct ADFBasePlayerController_OnFirePressed_Params
	{	};

	/**
	 * Function DonkehFramework.DFBasePlayerController.IsGameInputAllowed
	 */
	struct ADFBasePlayerController_IsGameInputAllowed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBasePlayerController.GetUnFreezeTimerHandle
	 */
	struct ADFBasePlayerController_GetUnFreezeTimerHandle_Params
	{
	public:
		struct FTimerHandle                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBasePlayerState.SetTeam
	 */
	struct ADFBasePlayerState_SetTeam_Params
	{
	public:
		unsigned char                                              NewTeamNum;                                              // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bCopyToInactivePlayerState;                              // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBasePlayerState.SetAdminStatus
	 */
	struct ADFBasePlayerState_SetAdminStatus_Params
	{
	public:
		bool                                                       bNewAdminStatus;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBasePlayerState.ScorePoints
	 */
	struct ADFBasePlayerState_ScorePoints_Params
	{
	public:
		float                                                      Points;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bForceNetUpdate;                                         // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBasePlayerState.ScoreKillPlayer
	 */
	struct ADFBasePlayerState_ScoreKillPlayer_Params
	{
	public:
		class ADFBasePlayerState*                                  Victim;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Points;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBasePlayerState.ScoreDeath
	 */
	struct ADFBasePlayerState_ScoreDeath_Params
	{
	public:
		class ADFBasePlayerState*                                  KilledBy;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Points;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBasePlayerState.ScoreAssistPlayer
	 */
	struct ADFBasePlayerState_ScoreAssistPlayer_Params
	{
	public:
		class ADFBasePlayerState*                                  Killer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ADFBasePlayerState*                                  Victim;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Points;                                                  // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBasePlayerState.ReceiveOnRepPlayerName
	 */
	struct ADFBasePlayerState_ReceiveOnRepPlayerName_Params
	{	};

	/**
	 * Function DonkehFramework.DFBasePlayerState.OnTeamStateUpdated
	 */
	struct ADFBasePlayerState_OnTeamStateUpdated_Params
	{
	public:
		class ADFTeamState*                                        TeamStateBeforeUpdate;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBasePlayerState.OnTeamNumUpdated
	 */
	struct ADFBasePlayerState_OnTeamNumUpdated_Params
	{
	public:
		unsigned char                                              TeamNumBeforeUpdate;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBasePlayerState.OnRep_TeamState
	 */
	struct ADFBasePlayerState_OnRep_TeamState_Params
	{
	public:
		class ADFTeamState*                                        TeamStateBeforeUpdate;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBasePlayerState.OnRep_TeamNum
	 */
	struct ADFBasePlayerState_OnRep_TeamNum_Params
	{
	public:
		unsigned char                                              TeamNumBeforeUpdate;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBasePlayerState.OnRep_NumKills
	 */
	struct ADFBasePlayerState_OnRep_NumKills_Params
	{
	public:
		int32_t                                                    PrevNumKills;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBasePlayerState.OnRep_NumDeaths
	 */
	struct ADFBasePlayerState_OnRep_NumDeaths_Params
	{
	public:
		int32_t                                                    PrevNumDeaths;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBasePlayerState.OnRep_NumAssists
	 */
	struct ADFBasePlayerState_OnRep_NumAssists_Params
	{
	public:
		int32_t                                                    PrevNumAssists;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBasePlayerState.OnRep_bAdmin
	 */
	struct ADFBasePlayerState_OnRep_bAdmin_Params
	{
	public:
		bool                                                       bAdminStatusBeforeUpdate;                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBasePlayerState.GetTeam
	 */
	struct ADFBasePlayerState_GetTeam_Params
	{
	public:
		unsigned char                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBasePlayerState.GetPreviousTeam
	 */
	struct ADFBasePlayerState_GetPreviousTeam_Params
	{
	public:
		unsigned char                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBasePlayerState.GetKills
	 */
	struct ADFBasePlayerState_GetKills_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBasePlayerState.GetDeaths
	 */
	struct ADFBasePlayerState_GetDeaths_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBasePlayerState.GetAssists
	 */
	struct ADFBasePlayerState_GetAssists_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseProjectile.TriggerPayload
	 */
	struct ADFBaseProjectile_TriggerPayload_Params
	{
	public:
		struct FHitResult                                          ImpactHitResult;                                         // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       bFromTearOff;                                            // 0x0088(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseProjectile.SpawnImpactFX
	 */
	struct ADFBaseProjectile_SpawnImpactFX_Params
	{
	public:
		struct FHitResult                                          Impact;                                                  // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseProjectile.SetProjectileUpdatedComponent
	 */
	struct ADFBaseProjectile_SetProjectileUpdatedComponent_Params
	{
	public:
		class USceneComponent*                                     NewProjectileUpdatedComponent;                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseProjectile.ReceivePayloadActivated
	 */
	struct ADFBaseProjectile_ReceivePayloadActivated_Params
	{
	public:
		struct FHitResult                                          ImpactHitResult;                                         // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseProjectile.ProjectileStop
	 */
	struct ADFBaseProjectile_ProjectileStop_Params
	{
	public:
		struct FHitResult                                          ImpactResult;                                            // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseProjectile.ProjectileBounce
	 */
	struct ADFBaseProjectile_ProjectileBounce_Params
	{
	public:
		struct FHitResult                                          ImpactResult;                                            // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FVector                                             ImpactVelocity;                                          // 0x0088(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseProjectile.K2_ShouldIgnoreHit
	 */
	struct ADFBaseProjectile_K2_ShouldIgnoreHit_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          HitResult;                                               // 0x0010(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0098(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseProjectile.K2_PostProcessValidHit
	 */
	struct ADFBaseProjectile_K2_PostProcessValidHit_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             HitLocation;                                             // 0x0010(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             HitNormal;                                               // 0x001C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          HitResult;                                               // 0x0028(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       bFromCSHitNotify;                                        // 0x00B0(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseProjectile.HasValidPredictedClientProjectile
	 */
	struct ADFBaseProjectile_HasValidPredictedClientProjectile_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseProjectile.GetProjectileUpdatedPrimitive
	 */
	struct ADFBaseProjectile_GetProjectileUpdatedPrimitive_Params
	{
	public:
		class UPrimitiveComponent*                                 ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseProjectile.GetProjectileUpdatedComponent
	 */
	struct ADFBaseProjectile_GetProjectileUpdatedComponent_Params
	{
	public:
		class USceneComponent*                                     ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseProjectile.GetOwningWeapon
	 */
	struct ADFBaseProjectile_GetOwningWeapon_Params
	{
	public:
		class ADFBaseWeapon*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseProjectile.GetImpactFXClass
	 */
	struct ADFBaseProjectile_GetImpactFXClass_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseProjectile.GetAdjustedDamageParams
	 */
	struct ADFBaseProjectile_GetAdjustedDamageParams_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             HitLocation;                                             // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDFDamageParams                                     ReturnValue;                                             // 0x0014(0x0014)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseProjectile.DisableAndDeferDestroy
	 */
	struct ADFBaseProjectile_DisableAndDeferDestroy_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseProjectile.ApplyDamageToImpactedActor
	 */
	struct ADFBaseProjectile_ApplyDamageToImpactedActor_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             HitLocation;                                             // 0x0010(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             HitNormal;                                               // 0x001C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          HitResult;                                               // 0x0028(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x00B0(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseProjectileLegacy.TriggerPayload
	 */
	struct ADFBaseProjectileLegacy_TriggerPayload_Params
	{
	public:
		struct FHitResult                                          ImpactHitResult;                                         // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseProjectileLegacy.StopSimulatingPayloadActivation
	 */
	struct ADFBaseProjectileLegacy_StopSimulatingPayloadActivation_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseProjectileLegacy.SpawnImpactFX
	 */
	struct ADFBaseProjectileLegacy_SpawnImpactFX_Params
	{
	public:
		struct FHitResult                                          Impact;                                                  // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseProjectileLegacy.SimulatePayloadActivation
	 */
	struct ADFBaseProjectileLegacy_SimulatePayloadActivation_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseProjectileLegacy.ReceiveStopSimulatingPayloadActivation
	 */
	struct ADFBaseProjectileLegacy_ReceiveStopSimulatingPayloadActivation_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseProjectileLegacy.ReceiveSimulatePayloadActivation
	 */
	struct ADFBaseProjectileLegacy_ReceiveSimulatePayloadActivation_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseProjectileLegacy.ReceivePayloadActivated
	 */
	struct ADFBaseProjectileLegacy_ReceivePayloadActivated_Params
	{
	public:
		struct FHitResult                                          ImpactHitResult;                                         // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseProjectileLegacy.ProjectileStop
	 */
	struct ADFBaseProjectileLegacy_ProjectileStop_Params
	{
	public:
		struct FHitResult                                          ImpactResult;                                            // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseProjectileLegacy.ProjectileBounce
	 */
	struct ADFBaseProjectileLegacy_ProjectileBounce_Params
	{
	public:
		struct FHitResult                                          ImpactResult;                                            // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FVector                                             ImpactVelocity;                                          // 0x0088(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBaseProjectileLegacy.PayloadDelayElapsed
	 */
	struct ADFBaseProjectileLegacy_PayloadDelayElapsed_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseProjectileLegacy.OnRep_bPayloadTriggered
	 */
	struct ADFBaseProjectileLegacy_OnRep_bPayloadTriggered_Params
	{	};

	/**
	 * Function DonkehFramework.DFBaseProjectileLegacy.GetOwningWeapon
	 */
	struct ADFBaseProjectileLegacy_GetOwningWeapon_Params
	{
	public:
		class ADFBaseWeapon*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.WasShotFired
	 */
	struct UDFBlueprintFunctions_WasShotFired_Params
	{
	public:
		struct FRepShotInfo                                        Counter;                                                 // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FRepShotInfo                                        OtherCounter;                                            // 0x0004(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.TextIsEmptyOrWhitespace
	 */
	struct UDFBlueprintFunctions_TextIsEmptyOrWhitespace_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.SetTeamNum
	 */
	struct UDFBlueprintFunctions_SetTeamNum_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              NewTeamNum;                                              // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.SetStartSpot
	 */
	struct UDFBlueprintFunctions_SetStartSpot_Params
	{
	public:
		class AController*                                         Controller;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              NewStartSpot;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.SetNetAddressable
	 */
	struct UDFBlueprintFunctions_SetNetAddressable_Params
	{
	public:
		class UActorComponent*                                     ActorComp;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.ResetPlayerVoiceTalker
	 */
	struct UDFBlueprintFunctions_ResetPlayerVoiceTalker_Params
	{
	public:
		class APlayerState*                                        InPlayerState;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.ResetAllPlayerVoiceTalkers
	 */
	struct UDFBlueprintFunctions_ResetAllPlayerVoiceTalkers_Params
	{	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.PrintTextToLog
	 */
	struct UDFBlueprintFunctions_PrintTextToLog_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                InText;                                                  // 0x0008(0x0018)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		ELogVerbosityBP                                            InLogVerbosity;                                          // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPrintStackTrace;                                        // 0x0021(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.PrintStringToLog
	 */
	struct UDFBlueprintFunctions_PrintStringToLog_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              inString;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELogVerbosityBP                                            InLogVerbosity;                                          // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPrintStackTrace;                                        // 0x0019(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.IsVOIPTalkerStillAlive
	 */
	struct UDFBlueprintFunctions_IsVOIPTalkerStillAlive_Params
	{
	public:
		class UVOIPTalker*                                         InTalker;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.IsValidActor
	 */
	struct UDFBlueprintFunctions_IsValidActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.IsPlayInEditor
	 */
	struct UDFBlueprintFunctions_IsPlayInEditor_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.IsPlayerTalking
	 */
	struct UDFBlueprintFunctions_IsPlayerTalking_Params
	{
	public:
		class APlayerState*                                        PlayerPS;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.IsPlayerMuted
	 */
	struct UDFBlueprintFunctions_IsPlayerMuted_Params
	{
	public:
		class APlayerController*                                   PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerState*                                        PSToCheck;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.IsPendingKillPending
	 */
	struct UDFBlueprintFunctions_IsPendingKillPending_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.IsLocallyPlayerControlled
	 */
	struct UDFBlueprintFunctions_IsLocallyPlayerControlled_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.IsEmptyOrWhitespace
	 */
	struct UDFBlueprintFunctions_IsEmptyOrWhitespace_Params
	{
	public:
		class FString                                              inString;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.HasFiringStopped
	 */
	struct UDFBlueprintFunctions_HasFiringStopped_Params
	{
	public:
		struct FRepShotInfo                                        Counter;                                                 // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.GetWorldSettings
	 */
	struct UDFBlueprintFunctions_GetWorldSettings_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AWorldSettings*                                      ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.GetVOIPTalkerForPlayer
	 */
	struct UDFBlueprintFunctions_GetVOIPTalkerForPlayer_Params
	{
	public:
		class APlayerState*                                        InPlayerState;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UVOIPTalker*                                         ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.GetVisibilityDefault
	 */
	struct UDFBlueprintFunctions_GetVisibilityDefault_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESlateVisibility                                           ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.GetTeamStateFromTeamId
	 */
	struct UDFBlueprintFunctions_GetTeamStateFromTeamId_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              TeamIdNum;                                               // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0ILM[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ADFTeamState*                                        ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.GetTeamNum
	 */
	struct UDFBlueprintFunctions_GetTeamNum_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.GetTargetLocation
	 */
	struct UDFBlueprintFunctions_GetTargetLocation_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              RequestedBy;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.GetSurfaceName
	 */
	struct UDFBlueprintFunctions_GetSurfaceName_Params
	{
	public:
		EPhysicalSurface                                           SurfaceType;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MRDB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                ReturnValue;                                             // 0x0004(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.GetStartSpot
	 */
	struct UDFBlueprintFunctions_GetStartSpot_Params
	{
	public:
		class AController*                                         Controller;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.GetShotCounterBPCompat
	 */
	struct UDFBlueprintFunctions_GetShotCounterBPCompat_Params
	{
	public:
		struct FRepShotInfo                                        Counter;                                                 // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.GetPluginFriendlyName
	 */
	struct UDFBlueprintFunctions_GetPluginFriendlyName_Params
	{
	public:
		class FString                                              PluginName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.GetNumShotsFiredBPCompat
	 */
	struct UDFBlueprintFunctions_GetNumShotsFiredBPCompat_Params
	{
	public:
		struct FRepShotInfo                                        Counter;                                                 // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FRepShotInfo                                        PreviousCounter;                                         // 0x0004(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.GetMapNameForDisplay
	 */
	struct UDFBlueprintFunctions_GetMapNameForDisplay_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.GetMapName
	 */
	struct UDFBlueprintFunctions_GetMapName_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.GetMapAssetVisibleInMapSelectUI
	 */
	struct UDFBlueprintFunctions_GetMapAssetVisibleInMapSelectUI_Params
	{
	public:
		struct FPrimaryAssetId                                     WorldAssetId;                                            // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bOutVisibleInMapSelectUI;                                // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.GetMapAssetSupportedGameModes
	 */
	struct UDFBlueprintFunctions_GetMapAssetSupportedGameModes_Params
	{
	public:
		struct FPrimaryAssetId                                     WorldAssetId;                                            // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3VVV[0x50];                                  // 0x0010(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		bool                                                       ReturnValue;                                             // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.GetMapAssetPreviewImg
	 */
	struct UDFBlueprintFunctions_GetMapAssetPreviewImg_Params
	{
	public:
		struct FPrimaryAssetId                                     WorldAssetId;                                            // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FYCZ[0x28];                                  // 0x0010(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		bool                                                       ReturnValue;                                             // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.GetMapAssetPreviewBannerImg
	 */
	struct UDFBlueprintFunctions_GetMapAssetPreviewBannerImg_Params
	{
	public:
		struct FPrimaryAssetId                                     WorldAssetId;                                            // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OTTX[0x28];                                  // 0x0010(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		bool                                                       ReturnValue;                                             // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.GetMapAssetNameForDisplay
	 */
	struct UDFBlueprintFunctions_GetMapAssetNameForDisplay_Params
	{
	public:
		struct FPrimaryAssetId                                     WorldAssetId;                                            // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0010(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.GetMapAssetGameRulesetClasses
	 */
	struct UDFBlueprintFunctions_GetMapAssetGameRulesetClasses_Params
	{
	public:
		struct FPrimaryAssetId                                     WorldAssetId;                                            // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PJ1N[0x50];                                  // 0x0010(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		bool                                                       ReturnValue;                                             // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.GetMapAssetDescription
	 */
	struct UDFBlueprintFunctions_GetMapAssetDescription_Params
	{
	public:
		struct FPrimaryAssetId                                     WorldAssetId;                                            // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              OutMapDescription;                                       // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.GetMapAssetDefaultGameMode
	 */
	struct UDFBlueprintFunctions_GetMapAssetDefaultGameMode_Params
	{
	public:
		struct FPrimaryAssetId                                     WorldAssetId;                                            // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NUEG[0x28];                                  // 0x0010(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		bool                                                       ReturnValue;                                             // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.GetMapAssetDataSupportedGameModes
	 */
	struct UDFBlueprintFunctions_GetMapAssetDataSupportedGameModes_Params
	{
	public:
		struct FAssetData                                          WorldAsset;                                              // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0DMS[0x50];                                  // 0x0050(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		bool                                                       ReturnValue;                                             // 0x00A0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.GetMapAssetDataPreviewImg
	 */
	struct UDFBlueprintFunctions_GetMapAssetDataPreviewImg_Params
	{
	public:
		struct FAssetData                                          WorldAsset;                                              // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CH0N[0x28];                                  // 0x0050(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		bool                                                       ReturnValue;                                             // 0x0078(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.GetMapAssetDataPreviewBannerImg
	 */
	struct UDFBlueprintFunctions_GetMapAssetDataPreviewBannerImg_Params
	{
	public:
		struct FAssetData                                          WorldAsset;                                              // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1BTY[0x28];                                  // 0x0050(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		bool                                                       ReturnValue;                                             // 0x0078(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.GetMapAssetDataNameForDisplay
	 */
	struct UDFBlueprintFunctions_GetMapAssetDataNameForDisplay_Params
	{
	public:
		struct FAssetData                                          WorldAsset;                                              // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0050(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.GetMapAssetDataGameRulesetClasses
	 */
	struct UDFBlueprintFunctions_GetMapAssetDataGameRulesetClasses_Params
	{
	public:
		struct FAssetData                                          WorldAsset;                                              // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7MPA[0x50];                                  // 0x0050(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		bool                                                       ReturnValue;                                             // 0x00A0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.GetMapAssetDataDisplayName
	 */
	struct UDFBlueprintFunctions_GetMapAssetDataDisplayName_Params
	{
	public:
		struct FAssetData                                          WorldAsset;                                              // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                OutMapDisplayName;                                       // 0x0050(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.GetMapAssetDataDescription
	 */
	struct UDFBlueprintFunctions_GetMapAssetDataDescription_Params
	{
	public:
		struct FAssetData                                          WorldAsset;                                              // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              OutMapDescription;                                       // 0x0050(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.GetMapAssetDataDefaultGameMode
	 */
	struct UDFBlueprintFunctions_GetMapAssetDataDefaultGameMode_Params
	{
	public:
		struct FAssetData                                          WorldAsset;                                              // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CCUT[0x28];                                  // 0x0050(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		bool                                                       ReturnValue;                                             // 0x0078(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.GetGlobalDefaultGameMode
	 */
	struct UDFBlueprintFunctions_GetGlobalDefaultGameMode_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.GetGameVersion
	 */
	struct UDFBlueprintFunctions_GetGameVersion_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.GetGameNameForDisplay
	 */
	struct UDFBlueprintFunctions_GetGameNameForDisplay_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.GetGameModeForName
	 */
	struct UDFBlueprintFunctions_GetGameModeForName_Params
	{
	public:
		class FString                                              GameModeName;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.GetGameModeForMapName
	 */
	struct UDFBlueprintFunctions_GetGameModeForMapName_Params
	{
	public:
		class FString                                              MapName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.GetGameDefaultMap
	 */
	struct UDFBlueprintFunctions_GetGameDefaultMap_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.GetFocalPoint
	 */
	struct UDFBlueprintFunctions_GetFocalPoint_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.GetDefaultBoundingCylinder
	 */
	struct UDFBlueprintFunctions_GetDefaultBoundingCylinder_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      CylinderRadius;                                          // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      CylinderHalfHeight;                                      // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.GetCopyrightNotice
	 */
	struct UDFBlueprintFunctions_GetCopyrightNotice_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.GetAllMapNames
	 */
	struct UDFBlueprintFunctions_GetAllMapNames_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.GameHasEnded
	 */
	struct UDFBlueprintFunctions_GameHasEnded_Params
	{
	public:
		class AController*                                         Controller;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              EndGameFocus;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsWinner;                                               // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.FlushPressedKeys
	 */
	struct UDFBlueprintFunctions_FlushPressedKeys_Params
	{
	public:
		class APlayerController*                                   PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.EqualEqual_WeaponSoundCollection
	 */
	struct UDFBlueprintFunctions_EqualEqual_WeaponSoundCollection_Params
	{
	public:
		struct FWeaponSoundCollection                              A;                                                       // 0x0000(0x0080)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FWeaponSoundCollection                              B;                                                       // 0x0080(0x0080)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0100(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.EqualEqual_WeaponAnimSequence
	 */
	struct UDFBlueprintFunctions_EqualEqual_WeaponAnimSequence_Params
	{
	public:
		struct FWeaponAnimSequence                                 A;                                                       // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FWeaponAnimSequence                                 B;                                                       // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.EqualEqual_WeaponAnimMontage
	 */
	struct UDFBlueprintFunctions_EqualEqual_WeaponAnimMontage_Params
	{
	public:
		struct FWeaponAnimMontage                                  A;                                                       // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FWeaponAnimMontage                                  B;                                                       // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.EqualEqual_WeaponAnimCollection
	 */
	struct UDFBlueprintFunctions_EqualEqual_WeaponAnimCollection_Params
	{
	public:
		struct FWeaponAnimCollection                               A;                                                       // 0x0000(0x00F0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FWeaponAnimCollection                               B;                                                       // 0x00F0(0x00F0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x01E0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.EqualEqual_WeaponAnim
	 */
	struct UDFBlueprintFunctions_EqualEqual_WeaponAnim_Params
	{
	public:
		struct FWeaponAnim                                         A;                                                       // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FWeaponAnim                                         B;                                                       // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.EqualEqual_PerspectiveSound
	 */
	struct UDFBlueprintFunctions_EqualEqual_PerspectiveSound_Params
	{
	public:
		struct FPerspectiveSound                                   A;                                                       // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPerspectiveSound                                   B;                                                       // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.EqualEqual_PerspectiveAnimSequence
	 */
	struct UDFBlueprintFunctions_EqualEqual_PerspectiveAnimSequence_Params
	{
	public:
		struct FPerspectiveAnimSequence                            A;                                                       // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPerspectiveAnimSequence                            B;                                                       // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.EqualEqual_PerspectiveAnim
	 */
	struct UDFBlueprintFunctions_EqualEqual_PerspectiveAnim_Params
	{
	public:
		struct FPerspectiveAnim                                    A;                                                       // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPerspectiveAnim                                    B;                                                       // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.EqualEqual_CharacterSoundCollection
	 */
	struct UDFBlueprintFunctions_EqualEqual_CharacterSoundCollection_Params
	{
	public:
		struct FCharacterSoundCollection                           A;                                                       // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FCharacterSoundCollection                           B;                                                       // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.EqualEqual_CharacterAnimCollection
	 */
	struct UDFBlueprintFunctions_EqualEqual_CharacterAnimCollection_Params
	{
	public:
		struct FCharacterAnimCollection                            A;                                                       // 0x0000(0x0128)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FCharacterAnimCollection                            B;                                                       // 0x0128(0x0128)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0250(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.DoesMapIDSupportGMDefinition
	 */
	struct UDFBlueprintFunctions_DoesMapIDSupportGMDefinition_Params
	{
	public:
		struct FPrimaryAssetId                                     MapID;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDFGameModeDefinition*                               GMDef;                                                   // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.CharacterVariationIsValid
	 */
	struct UDFBlueprintFunctions_CharacterVariationIsValid_Params
	{
	public:
		struct FDFCharacterVariationDataHandle                     VariationData;                                           // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.CharacterVariationGetData
	 */
	struct UDFBlueprintFunctions_CharacterVariationGetData_Params
	{
	public:
		struct FDFCharacterVariationDataHandle                     VariationData;                                           // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		struct FDFCharacterVariationData                           ReturnValue;                                             // 0x0018(0x0068)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.CharacterVariationDataFromTableRow
	 */
	struct UDFBlueprintFunctions_CharacterVariationDataFromTableRow_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDataTableRowHandle                                 RowHandle;                                               // 0x0008(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FDFCharacterVariationDataHandle                     ReturnValue;                                             // 0x0018(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.Array_UInt8Sort
	 */
	struct UDFBlueprintFunctions_Array_UInt8Sort_Params
	{
	public:
		TArray<unsigned char>                                      ArrayToSort;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bDescending;                                             // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.Array_TextSort
	 */
	struct UDFBlueprintFunctions_Array_TextSort_Params
	{
	public:
		TArray<class FText>                                        ArrayToSort;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bDescending;                                             // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.Array_StringSort
	 */
	struct UDFBlueprintFunctions_Array_StringSort_Params
	{
	public:
		TArray<class FString>                                      ArrayToSort;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bDescending;                                             // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.Array_Reverse
	 */
	struct UDFBlueprintFunctions_Array_Reverse_Params
	{
	public:
		TArray<int32_t>                                            TargetArray;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.Array_NameSort
	 */
	struct UDFBlueprintFunctions_Array_NameSort_Params
	{
	public:
		TArray<class FName>                                        ArrayToSort;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bDescending;                                             // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.Array_Int64Sort
	 */
	struct UDFBlueprintFunctions_Array_Int64Sort_Params
	{
	public:
		TArray<int64_t>                                            ArrayToSort;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bDescending;                                             // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.Array_Int32Sort
	 */
	struct UDFBlueprintFunctions_Array_Int32Sort_Params
	{
	public:
		TArray<int32_t>                                            ArrayToSort;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bDescending;                                             // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.Array_FloatSort
	 */
	struct UDFBlueprintFunctions_Array_FloatSort_Params
	{
	public:
		TArray<float>                                              ArrayToSort;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bDescending;                                             // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFBlueprintFunctions.Array_AssetDescriptorSort
	 */
	struct UDFBlueprintFunctions_Array_AssetDescriptorSort_Params
	{
	public:
		TArray<struct FAssetDescriptor>                            ArrayToSort;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bDescending;                                             // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bCompareDisplayText;                                     // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFCharacterLeanHandler.UpdateLeanDirection
	 */
	struct UDFCharacterLeanHandler_UpdateLeanDirection_Params
	{
	public:
		ELeanDirection                                             NewLeanDir;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFCharacterLeanHandler.ReceiveTick
	 */
	struct UDFCharacterLeanHandler_ReceiveTick_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFCharacterLeanHandler.ReceiveReset
	 */
	struct UDFCharacterLeanHandler_ReceiveReset_Params
	{	};

	/**
	 * Function DonkehFramework.DFCharacterLeanHandler.IsMoving
	 */
	struct UDFCharacterLeanHandler_IsMoving_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFCharacterLeanHandler.IsLeaning
	 */
	struct UDFCharacterLeanHandler_IsLeaning_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFCharacterLeanHandler.GetStance
	 */
	struct UDFCharacterLeanHandler_GetStance_Params
	{
	public:
		ECharacterStance                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFCharacterLeanHandler.GetPreviousStance
	 */
	struct UDFCharacterLeanHandler_GetPreviousStance_Params
	{
	public:
		ECharacterStance                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFCharacterLeanHandler.GetOwningCharacterMovement
	 */
	struct UDFCharacterLeanHandler_GetOwningCharacterMovement_Params
	{
	public:
		class UDFCharacterMovementComponent*                       ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFCharacterLeanHandler.GetOwningCharacter
	 */
	struct UDFCharacterLeanHandler_GetOwningCharacter_Params
	{
	public:
		class ADFBaseCharacter*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFCharacterLeanHandler.GetMaxLeanXOffset
	 */
	struct UDFCharacterLeanHandler_GetMaxLeanXOffset_Params
	{
	public:
		ELeanDirection                                             NewLeanDir;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECharacterStance                                           LeanStance;                                              // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bMoving;                                                 // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FWMP[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFCharacterLeanHandler.GetLeanYOffset
	 */
	struct UDFCharacterLeanHandler_GetLeanYOffset_Params
	{
	public:
		float                                                      DesiredLeanAmt;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFCharacterLeanHandler.GetLeanXOffset
	 */
	struct UDFCharacterLeanHandler_GetLeanXOffset_Params
	{
	public:
		float                                                      DesiredLeanAmt;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFCharacterLeanHandler.GetLeanRollRot
	 */
	struct UDFCharacterLeanHandler_GetLeanRollRot_Params
	{
	public:
		float                                                      DesiredLeanAmt;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFCharacterLeanHandler.DetermineLeanTargetAmount
	 */
	struct UDFCharacterLeanHandler_DetermineLeanTargetAmount_Params
	{
	public:
		ELeanDirection                                             DesiredLeanDir;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bMoving;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_T966[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFCharacterMovementComponent.IsStrafing
	 */
	struct UDFCharacterMovementComponent_IsStrafing_Params
	{
	public:
		float                                                      Threshold;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFCharacterMovementComponent.IsStanding
	 */
	struct UDFCharacterMovementComponent_IsStanding_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFCharacterMovementComponent.IsSprinting
	 */
	struct UDFCharacterMovementComponent_IsSprinting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFCharacterMovementComponent.IsReloading
	 */
	struct UDFCharacterMovementComponent_IsReloading_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFCharacterMovementComponent.IsProne
	 */
	struct UDFCharacterMovementComponent_IsProne_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFCharacterMovementComponent.IsMovingForward
	 */
	struct UDFCharacterMovementComponent_IsMovingForward_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFCharacterMovementComponent.IsMoving
	 */
	struct UDFCharacterMovementComponent_IsMoving_Params
	{
	public:
		bool                                                       bIgnoreZVel;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFCharacterMovementComponent.IsLeaning
	 */
	struct UDFCharacterMovementComponent_IsLeaning_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFCharacterMovementComponent.IsCrawling
	 */
	struct UDFCharacterMovementComponent_IsCrawling_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFCharacterMovementComponent.IsAlive
	 */
	struct UDFCharacterMovementComponent_IsAlive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFCharacterMovementComponent.IsAiming
	 */
	struct UDFCharacterMovementComponent_IsAiming_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFCharacterMovementComponent.GetStance
	 */
	struct UDFCharacterMovementComponent_GetStance_Params
	{
	public:
		ECharacterStance                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFCharacterMovementComponent.GetPreviousStance
	 */
	struct UDFCharacterMovementComponent_GetPreviousStance_Params
	{
	public:
		ECharacterStance                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFCharacterMovementComponent.GetLeanDirection
	 */
	struct UDFCharacterMovementComponent_GetLeanDirection_Params
	{
	public:
		ELeanDirection                                             ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFCharacterMovementComponent.GetLeanAmount
	 */
	struct UDFCharacterMovementComponent_GetLeanAmount_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFCharacterMovementComponent.GetDFCharacterOwner
	 */
	struct UDFCharacterMovementComponent_GetDFCharacterOwner_Params
	{
	public:
		class ADFBaseCharacter*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFCharacterMovementComponent.ClampSpeedMultiplier
	 */
	struct UDFCharacterMovementComponent_ClampSpeedMultiplier_Params
	{
	public:
		float                                                      MultValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFCheatManager.ToggleItemDebug
	 */
	struct UDFCheatManager_ToggleItemDebug_Params
	{	};

	/**
	 * Function DonkehFramework.DFCheatManager.ToggleGunRecoil
	 */
	struct UDFCheatManager_ToggleGunRecoil_Params
	{	};

	/**
	 * Function DonkehFramework.DFCheatManager.ToggleGunInfiniteClipAmmo
	 */
	struct UDFCheatManager_ToggleGunInfiniteClipAmmo_Params
	{	};

	/**
	 * Function DonkehFramework.DFCheatManager.ToggleGunInfiniteAmmo
	 */
	struct UDFCheatManager_ToggleGunInfiniteAmmo_Params
	{	};

	/**
	 * Function DonkehFramework.DFFunctionLibrary.SetEnableAutoBlendOutForActiveMontage
	 */
	struct UDFFunctionLibrary_SetEnableAutoBlendOutForActiveMontage_Params
	{
	public:
		class UAnimMontage*                                        AnimMontage;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USkeletalMeshComponent*                              AnimSourceMesh;                                          // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bNewEnableAutoBlendOut;                                  // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFFunctionLibrary.ClearMeshAnimInstance
	 */
	struct UDFFunctionLibrary_ClearMeshAnimInstance_Params
	{
	public:
		class USkeletalMeshComponent*                              MeshToClear;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFGameRulesetBase.UnregisterActor
	 */
	struct UDFGameRulesetBase_UnregisterActor_Params
	{
	public:
		class AActor*                                              UnregisteredActor;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFGameRulesetBase.RegisterActor
	 */
	struct UDFGameRulesetBase_RegisterActor_Params
	{
	public:
		class AActor*                                              RegisteredActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFGameRulesetBase.ReceiveTick
	 */
	struct UDFGameRulesetBase_ReceiveTick_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFGameRulesetBase.PlayerWounded
	 */
	struct UDFGameRulesetBase_PlayerWounded_Params
	{
	public:
		class AController*                                         Victim;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DamageAmount;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QD01[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AController*                                         InstigatedBy;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              DamageCauser;                                            // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFGameRulesetBase.PlayerSuicide
	 */
	struct UDFGameRulesetBase_PlayerSuicide_Params
	{
	public:
		class AController*                                         Victim;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFGameRulesetBase.PlayerSpawn
	 */
	struct UDFGameRulesetBase_PlayerSpawn_Params
	{
	public:
		class AController*                                         Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APawn*                                               NewPlayerPawn;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFGameRulesetBase.PlayerPostLogout
	 */
	struct UDFGameRulesetBase_PlayerPostLogout_Params
	{
	public:
		class AController*                                         ExitingPlayer;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFGameRulesetBase.PlayerPostLogin
	 */
	struct UDFGameRulesetBase_PlayerPostLogin_Params
	{
	public:
		class APlayerController*                                   NewPlayer;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFGameRulesetBase.PlayerKilled
	 */
	struct UDFGameRulesetBase_PlayerKilled_Params
	{
	public:
		class AController*                                         Killer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AController*                                         Victim;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFGameRulesetBase.PlayerJoinedTeam
	 */
	struct UDFGameRulesetBase_PlayerJoinedTeam_Params
	{
	public:
		class AController*                                         JoiningPlayer;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              TeamNum;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFGameRulesetBase.PlayerJoined
	 */
	struct UDFGameRulesetBase_PlayerJoined_Params
	{
	public:
		class APlayerController*                                   NewPlayer;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFGameRulesetBase.PlayerDied
	 */
	struct UDFGameRulesetBase_PlayerDied_Params
	{
	public:
		class AController*                                         Victim;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFGameRulesetBase.MatchHasEnded
	 */
	struct UDFGameRulesetBase_MatchHasEnded_Params
	{	};

	/**
	 * Function DonkehFramework.DFGameRulesetBase.Init
	 */
	struct UDFGameRulesetBase_Init_Params
	{	};

	/**
	 * Function DonkehFramework.DFGameRulesetBase.GetGameState
	 */
	struct UDFGameRulesetBase_GetGameState_Params
	{
	public:
		class ADFBaseGameState*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFGameRulesetBase.GetGameMode
	 */
	struct UDFGameRulesetBase_GetGameMode_Params
	{
	public:
		class ADFBaseGameMode*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFGunRecoilHandler.OnWeaponStopFire
	 */
	struct UDFGunRecoilHandler_OnWeaponStopFire_Params
	{	};

	/**
	 * Function DonkehFramework.DFGunRecoilHandler.OnWeaponStartFire
	 */
	struct UDFGunRecoilHandler_OnWeaponStartFire_Params
	{	};

	/**
	 * Function DonkehFramework.DFGunRecoilHandler.OnWeaponFire
	 */
	struct UDFGunRecoilHandler_OnWeaponFire_Params
	{	};

	/**
	 * Function DonkehFramework.DFGunRecoilHandler.OnTick
	 */
	struct UDFGunRecoilHandler_OnTick_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFGunRecoilHandler.IsFiring
	 */
	struct UDFGunRecoilHandler_IsFiring_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFGunRecoilHandler.GetOwningPawn
	 */
	struct UDFGunRecoilHandler_GetOwningPawn_Params
	{
	public:
		class APawn*                                               ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFGunRecoilHandler.GetOwningGun
	 */
	struct UDFGunRecoilHandler_GetOwningGun_Params
	{
	public:
		class ADFBaseGun*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFGunRecoilHandler.GetConeOfFireOffset
	 */
	struct UDFGunRecoilHandler_GetConeOfFireOffset_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFHandlerInterface.EventUpdate
	 */
	struct UDFHandlerInterface_EventUpdate_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bMakeDecision;                                           // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFHandlerInterface.EventShouldUpdateThisFrame
	 */
	struct UDFHandlerInterface_EventShouldUpdateThisFrame_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bActiveAndSpawnedInWorld;                                // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0005(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFHandlerInterface.EventReset
	 */
	struct UDFHandlerInterface_EventReset_Params
	{	};

	/**
	 * Function DonkehFramework.DFHandlerInterface.EventInit
	 */
	struct UDFHandlerInterface_EventInit_Params
	{	};

	/**
	 * Function DonkehFramework.DFIntrinsicCharAnimInstInterface.PlayDeathMontage
	 */
	struct UDFIntrinsicCharAnimInstInterface_PlayDeathMontage_Params
	{
	public:
		class UAnimMontage*                                        MontageToPlay;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFIntrinsicWeapAnimInstInterface.PlayUnEquipMontage
	 */
	struct UDFIntrinsicWeapAnimInstInterface_PlayUnEquipMontage_Params
	{
	public:
		class UAnimMontage*                                        MontageToPlay;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFIntrinsicWeapAnimInstInterface.PlayReloadMontage
	 */
	struct UDFIntrinsicWeapAnimInstInterface_PlayReloadMontage_Params
	{
	public:
		class UAnimMontage*                                        MontageToPlay;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFullReload;                                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_EMA2[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFIntrinsicWeapAnimInstInterface.PlayFireMontage
	 */
	struct UDFIntrinsicWeapAnimInstInterface_PlayFireMontage_Params
	{
	public:
		class UAnimMontage*                                        MontageToPlay;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFireLast;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAiming;                                                 // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FE22[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFIntrinsicWeapAnimInstInterface.PlayEquipMontage
	 */
	struct UDFIntrinsicWeapAnimInstInterface_PlayEquipMontage_Params
	{
	public:
		class UAnimMontage*                                        MontageToPlay;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFInventoryComponent.Size
	 */
	struct UDFInventoryComponent_Size_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFInventoryComponent.RemoveItemAt
	 */
	struct UDFInventoryComponent_RemoveItemAt_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LFKW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ADFBaseItem*                                         OutRemovedItem;                                          // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bDestroyItem;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFInventoryComponent.Remove
	 */
	struct UDFInventoryComponent_Remove_Params
	{
	public:
		class ADFBaseItem*                                         Item;                                                    // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bDestroyItem;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFInventoryComponent.IsValidIndex
	 */
	struct UDFInventoryComponent_IsValidIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFInventoryComponent.GetItem
	 */
	struct UDFInventoryComponent_GetItem_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_M5LM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ADFBaseItem*                                         OutItem;                                                 // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFInventoryComponent.FindItemByClass
	 */
	struct UDFInventoryComponent_FindItemByClass_Params
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ADFBaseItem*                                         OutItem;                                                 // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFInventoryComponent.Find
	 */
	struct UDFInventoryComponent_Find_Params
	{
	public:
		class ADFBaseItem*                                         ItemToCompare;                                           // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OutIndex;                                                // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFInventoryComponent.Clear
	 */
	struct UDFInventoryComponent_Clear_Params
	{
	public:
		bool                                                       bDestroyItems;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFInventoryComponent.AddDefaultInventoryItems
	 */
	struct UDFInventoryComponent_AddDefaultInventoryItems_Params
	{	};

	/**
	 * Function DonkehFramework.DFInventoryComponent.Add
	 */
	struct UDFInventoryComponent_Add_Params
	{
	public:
		class ADFBaseItem*                                         Item;                                                    // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFPlayerComponent.RestartPlayer
	 */
	struct UDFPlayerComponent_RestartPlayer_Params
	{	};

	/**
	 * Function DonkehFramework.DFPlayerComponent.ReceiveSeamlessTravelToCommon
	 */
	struct UDFPlayerComponent_ReceiveSeamlessTravelToCommon_Params
	{
	public:
		class AController*                                         NewC;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDFPlayerComponent*                                  NewCPlayerComp;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFPlayerComponent.ReceiveSeamlessTravelFromCommon
	 */
	struct UDFPlayerComponent_ReceiveSeamlessTravelFromCommon_Params
	{
	public:
		class AController*                                         OldC;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDFPlayerComponent*                                  OldCPlayerComp;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFPlayerComponent.ReceivePawnLeavingGame
	 */
	struct UDFPlayerComponent_ReceivePawnLeavingGame_Params
	{	};

	/**
	 * Function DonkehFramework.DFPlayerComponent.ReceiveGameHasEnded
	 */
	struct UDFPlayerComponent_ReceiveGameHasEnded_Params
	{
	public:
		class AActor*                                              EndGameFocus;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsWinner;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFPlayerComponent.IsPendingRestart
	 */
	struct UDFPlayerComponent_IsPendingRestart_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFPlayerComponent.GetTeamState
	 */
	struct UDFPlayerComponent_GetTeamState_Params
	{
	public:
		class ADFTeamState*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFPlayerComponent.GetPlayerState
	 */
	struct UDFPlayerComponent_GetPlayerState_Params
	{
	public:
		class APlayerState*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFPlayerComponent.GetPawnOwner
	 */
	struct UDFPlayerComponent_GetPawnOwner_Params
	{
	public:
		class APawn*                                               ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFPlayerComponent.GetMinRestartDelay
	 */
	struct UDFPlayerComponent_GetMinRestartDelay_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFPlayerComponent.CanRestartPlayer
	 */
	struct UDFPlayerComponent_CanRestartPlayer_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFSingleActionWeapAnimInstInterface.PlayActionMontage
	 */
	struct UDFSingleActionWeapAnimInstInterface_PlayActionMontage_Params
	{
	public:
		class UAnimMontage*                                        MontageToPlay;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFSingleLoadWeapAnimInstInterface.PlayStartReloadMontage
	 */
	struct UDFSingleLoadWeapAnimInstInterface_PlayStartReloadMontage_Params
	{
	public:
		class UAnimMontage*                                        MontageToPlay;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFullReload;                                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MMTO[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFSingleLoadWeapAnimInstInterface.PlayEndReloadMontage
	 */
	struct UDFSingleLoadWeapAnimInstInterface_PlayEndReloadMontage_Params
	{
	public:
		class UAnimMontage*                                        MontageToPlay;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFullReload;                                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1H5T[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFTeamAgentInterface.EventSetTeamNum
	 */
	struct UDFTeamAgentInterface_EventSetTeamNum_Params
	{
	public:
		unsigned char                                              NewTeamNum;                                              // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFTeamAgentInterface.EventGetTeamNum
	 */
	struct UDFTeamAgentInterface_EventGetTeamNum_Params
	{
	public:
		unsigned char                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFTeamState.ReceivePostInitTeam
	 */
	struct ADFTeamState_ReceivePostInitTeam_Params
	{	};

	/**
	 * Function DonkehFramework.DFTeamState.ReceiveInitTeam
	 */
	struct ADFTeamState_ReceiveInitTeam_Params
	{
	public:
		class UDFTeamDefinition*                                   InTeamDef;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFTeamState.IsReadyToInitialize
	 */
	struct ADFTeamState_IsReadyToInitialize_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFTeamState.IsPendingSetupBP
	 */
	struct ADFTeamState_IsPendingSetupBP_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFTeamState.GetFactionInfo
	 */
	struct ADFTeamState_GetFactionInfo_Params
	{
	public:
		class UDFFactionInfo*                                      ReturnValue;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFThrowableWeapAnimInstInterface.PlayThrowUnderhandMontage
	 */
	struct UDFThrowableWeapAnimInstInterface_PlayThrowUnderhandMontage_Params
	{
	public:
		class UAnimMontage*                                        MontageToPlay;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFThrowableWeapAnimInstInterface.PlayThrowOverhandMontage
	 */
	struct UDFThrowableWeapAnimInstInterface_PlayThrowOverhandMontage_Params
	{
	public:
		class UAnimMontage*                                        MontageToPlay;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.DFThrowableWeapAnimInstInterface.PlayCockMontage
	 */
	struct UDFThrowableWeapAnimInstInterface_PlayCockMontage_Params
	{
	public:
		class UAnimMontage*                                        MontageToPlay;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.GameSessionBlueprintLibrary.GetMinPlayers
	 */
	struct UGameSessionBlueprintLibrary_GetMinPlayers_Params
	{
	public:
		class UObject*                                             WorldContextObj;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.GameSessionBlueprintLibrary.GetMaxSpectators
	 */
	struct UGameSessionBlueprintLibrary_GetMaxSpectators_Params
	{
	public:
		class UObject*                                             WorldContextObj;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.GameSessionBlueprintLibrary.GetMaxPlayers
	 */
	struct UGameSessionBlueprintLibrary_GetMaxPlayers_Params
	{
	public:
		class UObject*                                             WorldContextObj;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.SpawnPointProviderInterface.GetSpawnPointCollisionHandlingOverrideBP
	 */
	struct USpawnPointProviderInterface_GetSpawnPointCollisionHandlingOverrideBP_Params
	{
	public:
		struct FSpawnPointDef                                      SpawnPoint;                                              // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		ESpawnActorCollisionHandlingMethod                         OutSpawnCollisionMethod;                                 // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0051(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.SpawnPointProviderInterface.GetAllSpawnPointsBP
	 */
	struct USpawnPointProviderInterface_GetAllSpawnPointsBP_Params
	{
	public:
		TArray<struct FSpawnPointDef>                              SpawnPoints;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.SpawnPointProviderInterface.FindSpawnPointBP
	 */
	struct USpawnPointProviderInterface_FindSpawnPointBP_Params
	{
	public:
		int32_t                                                    SpawnPointID;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_T5IS[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSpawnPointDef                                      FoundSpawnPoint;                                         // 0x0010(0x0050)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.SpawnPointProviderInterface.CanSpawnActorFromSpawnPointBP
	 */
	struct USpawnPointProviderInterface_CanSpawnActorFromSpawnPointBP_Params
	{
	public:
		struct FSpawnPointDef                                      SpawnPoint;                                              // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class UClass*                                              SpawnActorClass;                                         // 0x0050(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0058(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.SpawnPointProviderInterface.CanRestartPlayerFromSpawnPointBP
	 */
	struct USpawnPointProviderInterface_CanRestartPlayerFromSpawnPointBP_Params
	{
	public:
		struct FSpawnPointDef                                      SpawnPoint;                                              // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class AController*                                         Player;                                                  // 0x0050(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              PlayerPawnClass;                                         // 0x0058(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.SpawnPointStatics.SpawnPointExists
	 */
	struct USpawnPointStatics_SpawnPointExists_Params
	{
	public:
		class UObject*                                             Target;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    SpawnPointID;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.SpawnPointStatics.GetSpawnPointCollisionHandlingOverride
	 */
	struct USpawnPointStatics_GetSpawnPointCollisionHandlingOverride_Params
	{
	public:
		class UObject*                                             Target;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1I28[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSpawnPointDef                                      SpawnPoint;                                              // 0x0010(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		ESpawnActorCollisionHandlingMethod                         OutSpawnCollisionMethod;                                 // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0061(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.SpawnPointStatics.GetAllSpawnPointTransforms
	 */
	struct USpawnPointStatics_GetAllSpawnPointTransforms_Params
	{
	public:
		class UObject*                                             Target;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FTransform>                                  SpawnPointTransforms;                                    // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.SpawnPointStatics.GetAllSpawnPoints
	 */
	struct USpawnPointStatics_GetAllSpawnPoints_Params
	{
	public:
		class UObject*                                             Target;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FSpawnPointDef>                              SpawnPoints;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.SpawnPointStatics.FindSpawnPoint
	 */
	struct USpawnPointStatics_FindSpawnPoint_Params
	{
	public:
		class UObject*                                             Target;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    SpawnPointID;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_B63J[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSpawnPointDef                                      FoundSpawnPoint;                                         // 0x0010(0x0050)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.SpawnPointStatics.CanSpawnActorFromSpawnPoint
	 */
	struct USpawnPointStatics_CanSpawnActorFromSpawnPoint_Params
	{
	public:
		class UObject*                                             Target;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VWTM[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSpawnPointDef                                      SpawnPoint;                                              // 0x0010(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class UClass*                                              SpawnActorClass;                                         // 0x0060(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.SpawnPointStatics.CanSpawnActorFromAnySpawnPoint
	 */
	struct USpawnPointStatics_CanSpawnActorFromAnySpawnPoint_Params
	{
	public:
		class UObject*                                             Target;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              SpawnActorClass;                                         // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.SpawnPointStatics.CanRestartPlayerFromSpawnPoint
	 */
	struct USpawnPointStatics_CanRestartPlayerFromSpawnPoint_Params
	{
	public:
		class UObject*                                             Target;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_EJMA[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSpawnPointDef                                      SpawnPoint;                                              // 0x0010(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class AController*                                         Player;                                                  // 0x0060(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              PlayerPawnClass;                                         // 0x0068(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0070(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.SpawnPointStatics.CanRestartPlayerFromAnySpawnPoint
	 */
	struct USpawnPointStatics_CanRestartPlayerFromAnySpawnPoint_Params
	{
	public:
		class UObject*                                             Target;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AController*                                         Player;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              PlayerPawnClass;                                         // 0x0010(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.UseableInterface.Used
	 */
	struct UUseableInterface_Used_Params
	{
	public:
		class AActor*                                              Invoker;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFramework.VisibilityInterface.EventGetFocalPoint
	 */
	struct UVisibilityInterface_EventGetFocalPoint_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
