#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class DonkehFramework.DFAssetManager
	 * Size -> 0x0008 (FullSize[0x0440] - InheritedSize[0x0438])
	 */
	class UDFAssetManager : public UAssetManager
	{
	public:
		unsigned char                                              UnknownData_T4ES[0x8];                                   // 0x0438(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFBaseAIController
	 * Size -> 0x0008 (FullSize[0x0330] - InheritedSize[0x0328])
	 */
	class ADFBaseAIController : public AAIController
	{
	public:
		unsigned char                                              UnknownData_HZE0[0x8];                                   // 0x0328(0x0008) MISSED OFFSET (PADDING)

	public:
		bool CanRestartPlayer();
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFBaseItem
	 * Size -> 0x0188 (FullSize[0x03A8] - InheritedSize[0x0220])
	 */
	class ADFBaseItem : public AActor
	{
	public:
		class ADFBaseCharacter*                                    PawnOwner;                                               // 0x0220(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, EditConst, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UStaticMeshComponent*                                ItemMesh;                                                // 0x0228(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UStaticMeshComponent*                                ItemMesh1P;                                              // 0x0230(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USkeletalMesh*                                       PawnMesh1P;                                              // 0x0238(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              PawnMesh1PAnimClass;                                     // 0x0240(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             PawnMesh1PLocationOffset;                                // 0x0248(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FRotator                                            PawnMesh1PRotationOffset;                                // 0x0254(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		EItemType                                                  ItemType;                                                // 0x0260(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bCanEquip : 1;                                           // 0x0261(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bCanAimWhileEquipped : 1;                                // 0x0261(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bDisableFireInput : 1;                                   // 0x0261(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bEquipped : 1;                                           // 0x0261(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bPendingEquip : 1;                                       // 0x0261(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bPendingUnEquip : 1;                                     // 0x0261(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bWantsToFire : 1;                                        // 0x0261(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KHJO[0x16];                                  // 0x0262(0x0016) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bDebug : 1;                                              // 0x0278(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnTemplate, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T1WW[0x7];                                   // 0x0279(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCharacterAnimCollection                            CharacterAnimCollection;                                 // 0x0280(0x0128) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected

	public:
		void StopFire();
		void StartFire();
		void SetOwningPawn(class ADFBaseCharacter* NewOwner);
		void SetMeshVisibility(bool bFirstPerson);
		void ServerStopFire();
		void ServerStartFire();
		bool RemoveLegacyLocomotionAnims(bool bFPP);
		void ReceiveVisibilityChanged(bool bFirstPerson);
		void ReceiveStopFire();
		void ReceiveStartFire();
		void ReceiveOnUnEquipFinished(bool bLeavingPawnInventory);
		void ReceiveOnUnEquip(bool bPlayAnimAndWait, bool bLeavingPawnInventory);
		void ReceiveOnTurnOff();
		void ReceiveOnLeaveInventory(class ADFBaseCharacter* LastOwner);
		void ReceiveOnEquipFinished();
		void ReceiveOnEquip(class ADFBaseItem* LastItem);
		void ReceiveOnEnterInventory(class ADFBaseCharacter* NewOwner, class ADFBaseCharacter* LastOwner);
		bool OwnerIsSprinting();
		bool OwnerIsAiming();
		void OnUnEquip(bool bPlayAnimAndWait, bool bLeavingPawnInventory);
		void OnTurnOff();
		void OnRep_PawnOwner(class ADFBaseCharacter* LastOwner);
		void OnLeaveInventory(class ADFBaseCharacter* LastOwner);
		void OnEquip(class ADFBaseItem* LastItem);
		void OnEnterInventory(class ADFBaseCharacter* NewOwner, class ADFBaseCharacter* LastOwner);
		bool IsUnEquipping();
		bool IsEquipping();
		bool IsEquipped();
		bool IsClientSimulated();
		class ADFBaseCharacter* GetPawnOwner();
		class UDFInventoryComponent* GetPawnInventory();
		struct FRotator GetOwnerViewRotation();
		bool GetOwnerViewPoint(struct FVector* OutViewLoc, struct FRotator* OutViewRot);
		struct FVector GetOwnerViewLocation();
		TMap<class FName, class UAnimSequenceBase*> GetLegacyLocomotionAnims(bool bFPP);
		EItemType GetItemType();
		class UStaticMeshComponent* GetItemMeshToUse(bool bIgnoreLocalControlOnServer);
		class UStaticMeshComponent* GetItemMesh1P();
		class UStaticMeshComponent* GetItemMesh();
		struct FVector GetAdjustedAimDirection();
		bool CanSprintWhileEquipped();
		bool CanFire();
		bool CanEquip();
		bool CanAimWhileEquipped();
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFBaseAmmoClip
	 * Size -> 0x0018 (FullSize[0x03C0] - InheritedSize[0x03A8])
	 */
	class ADFBaseAmmoClip : public ADFBaseItem
	{
	public:
		class ADFBaseGun*                                          GunOwner;                                                // 0x03A8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    CurrentClipAmmo;                                         // 0x03B0(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    StartingClipAmmo;                                        // 0x03B4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MaxClipAmmo;                                             // 0x03B8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SVMC[0x4];                                   // 0x03BC(0x0004) MISSED OFFSET (PADDING)

	public:
		int32_t STATIC_StoreAmmoInInventory(class UDFInventoryComponent* AmmoStore, int32_t AmmoAmt, class UClass* AmmoType);
		void StoreAmmo(int32_t AmmoToStore);
		void SetOwningGun(class ADFBaseGun* NewOwner);
		bool IsLoaded();
		int32_t GetStartingClipAmmo();
		int32_t GetMaxClipAmmo();
		class ADFBaseGun* GetGunOwner();
		int32_t GetCurrentClipAmmo();
		void ConsumeAmmo(int32_t AmmoToConsume);
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFBaseCharacter
	 * Size -> 0x03FC (FullSize[0x08BC] - InheritedSize[0x04C0])
	 */
	class ADFBaseCharacter : public ACharacter
	{
	public:
		unsigned char                                              RemoteViewYaw;                                           // 0x04C0(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BJCO[0x7];                                   // 0x04C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bClientResimulateSprintStamina : 1;                      // 0x04C8(0x0001) BIT_FIELD Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HNU6[0x7];                                   // 0x04C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCharacterAnimCollection                            DefaultPawnAnimCollection;                               // 0x04D0(0x0128) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              bPlayFootstepFXWithPerspMeshOnly : 1;                    // 0x05F8(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bTickAllAnimationOnDedicatedServer : 1;                  // 0x05F8(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOnlyTickAnimMontagesOnDedicatedServer : 1;              // 0x05F8(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_79SD[0x7];                                   // 0x05F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCharacterSoundCollection                           DefaultPawnSoundCollection;                              // 0x0600(0x0010) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		class ADFBaseItem*                                         EquippedItem;                                            // 0x0610(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, EditConst, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ADFBaseItem*                                         LastEquippedItem;                                        // 0x0618(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnEquippedItemChanged;                                   // 0x0620(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FName                                                ItemAttachPoint;                                         // 0x0630(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDFInventoryComponent*                               Inventory;                                               // 0x0638(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDFLoadout*                                          DefaultLoadout;                                          // 0x0640(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EDFItemEnabledMode                                         ItemEnabledMode;                                         // 0x0648(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bDying : 1;                                              // 0x0649(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W9SX[0x6];                                   // 0x064A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnHealthChanged;                                         // 0x0650(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		float                                                      Health;                                                  // 0x0660(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YUU7[0x14];                                  // 0x0664(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RagdollLifeSpan;                                         // 0x0678(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_PNKG[0x4];                                   // 0x067C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCharacterDeath;                                        // 0x0680(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		float                                                      MaxHealth;                                               // 0x0690(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RFTR[0x4];                                   // 0x0694(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTakeHitInfo                                        LastTakeHitInfo;                                         // 0x0698(0x0120) Edit, Net, Transient, EditConst, RepNotify, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DPND[0x8];                                   // 0x07B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, float>                                   BoneDamageMultipliers;                                   // 0x07C0(0x0050) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		unsigned char                                              bApplyDamageMomentumOnHit : 1;                           // 0x0810(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LY2R[0x7];                                   // 0x0811(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSprintTransition;                                      // 0x0818(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAimTransition;                                         // 0x0828(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLeanTransition;                                        // 0x0838(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		ECharacterStance                                           ReplicatedStance;                                        // 0x0848(0x0001) Edit, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECharacterStance                                           PreviousStance;                                          // 0x0849(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSprinting : 1;                                          // 0x084A(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, EditConst, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAiming : 1;                                             // 0x084A(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, EditConst, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsProne : 1;                                            // 0x084A(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SV8B[0x1];                                   // 0x084B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ReplicatedLeanAmount;                                    // 0x084C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDFCharacterLeanHandler*                             LeanHandler;                                             // 0x0850(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDFCharacterMovementComponent*                       DFCharacterMovement;                                     // 0x0858(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetEyeHeight;                                         // 0x0860(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KLP2 : 1;                                    // 0x0864(0x0001) BIT_FIELD (PADDING)
		unsigned char                                              bInterpCrouchedEyeHeight : 1;                            // 0x0864(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I1SK[0x3];                                   // 0x0865(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CrouchedTransitionInterpSpeed;                           // 0x0868(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bInterpProneEyeHeight : 1;                               // 0x086C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XQYW[0x3];                                   // 0x086D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ProneTransitionInterpSpeed;                              // 0x0870(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ProneEyeHeight;                                          // 0x0874(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              TeamNum;                                                 // 0x0878(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZXVZ[0x7];                                   // 0x0879(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADFTeamState*                                        TeamState;                                               // 0x0880(0x0008) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ADFTeamState*                                        PrevTeamState;                                           // 0x0888(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bAllowTeamIdOverride : 1;                                // 0x0890(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NLUI[0x7];                                   // 0x0891(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPawnTeamNumUpdated;                                    // 0x0898(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPawnTeamStateUpdated;                                  // 0x08A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_69GJ[0x4];                                   // 0x08B8(0x0004) Fix size for supers

	public:
		void UnSprint(bool bClientSimulation);
		void UnLean(ELeanDirection UnDesiredLeanDir, bool bClientSimulation);
		void UnAim(bool bClientSimulation);
		void Suicide();
		void StopFire();
		void StopCharacterPerspectiveAnimation(const struct FPerspectiveAnim& CharAnim);
		void StopCharacterMontage(class UAnimMontage* CharMontage);
		void StopAllAnimMontages(bool bPerspectiveMeshOnly);
		void StartFire();
		void SprintToggle();
		void Sprint(bool bClientSimulation);
		void SetRagdollPhysics();
		void SetItemEnabledMode(EDFItemEnabledMode ItemMode);
		void SetHealth(float InHealth);
		void ServerSuicide();
		void ServerEquipItem(class ADFBaseItem* ItemToEquip);
		void Reload();
		void ReceiveRestart();
		void ReceivePlayHit(float DamageTaken, const struct FDamageEvent& DamageEvent, class APawn* PawnInstigator, class AActor* DamageCauser);
		void ReceivePawnTeamStateUpdated(class ADFTeamState* TeamStateBeforeUpdate, class ADFTeamState* NewTeamState, bool bNewTeamStateInit);
		void ReceivePawnTeamNumUpdated(unsigned char LastTeamNum, unsigned char NewTeamNum);
		void ReceiveOnStartSprint();
		void ReceiveOnStartProne(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
		void ReceiveOnStartLean();
		void ReceiveOnStartAim();
		void ReceiveOnRepPlayerState();
		void ReceiveOnEndSprint();
		void ReceiveOnEndProne(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
		void ReceiveOnEndLean();
		void ReceiveOnEndAim();
		void ReceiveHealthChanged(float NewHealthTotal, float PrevHealthTotal);
		void ReceiveEquippedItemChanged(class ADFBaseItem* NewEquippedItem, class ADFBaseItem* PrevEquippedItem);
		void ProneToggle();
		float PlayCharacterUnEquipMontage(class UAnimMontage* UnEquipMontageToPlay);
		float PlayCharacterThrowUnderhandMontage(class UAnimMontage* ThrowUnderhandMontageToPlay);
		float PlayCharacterThrowOverhandMontage(class UAnimMontage* ThrowOverhandMontageToPlay);
		float PlayCharacterStartReloadMontage(class UAnimMontage* StartReloadMontageToPlay, bool bDryReload);
		class UAudioComponent* PlayCharacterSound(const struct FPerspectiveSound& Sound);
		float PlayCharacterReloadMontage(bool bDryReload);
		float PlayCharacterPerspectiveAnimation(const struct FPerspectiveAnim& CharAnim, bool bForceDisableAutoBlendOut);
		float PlayCharacterMontage(class UAnimMontage* CharMontage, bool bForceDisableAutoBlendOut);
		float PlayCharacterFireMontage(class UAnimMontage* FireMontageToPlay, bool bFireLast, bool bFireADS);
		float PlayCharacterEquipMontage(bool bDontPlayAndReturnDominantPlayLengthOnly);
		float PlayCharacterEndReloadMontage(class UAnimMontage* EndReloadMontageToPlay, bool bDryReload);
		float PlayCharacterDeathMontage(bool bDontPlayAndReturnDominantPlayLengthOnly);
		float PlayCharacterCockMontage(class UAnimMontage* CockMontageToPlay);
		float PlayCharacterActionMontage(class UAnimMontage* ActionMontageToPlay);
		void OnRep_TeamState(class ADFTeamState* TeamStateBeforeUpdate);
		void OnRep_TeamNum(unsigned char LastTeamNum);
		void OnRep_ReplicatedStance();
		void OnRep_ReplicatedLeanAmount(float LastReplicatedLeanAmount);
		void OnRep_LastTakeHitInfo();
		void OnRep_ItemEnabledMode(EDFItemEnabledMode PreviousItemEnabledMode);
		void OnRep_IsProne();
		void OnRep_Health(float PreviousValue);
		void OnRep_EquippedItem(class ADFBaseItem* LastItem);
		void OnRep_bSprinting();
		void OnRep_bAiming();
		void OnDeath(float KillingDamage, const struct FDamageEvent& DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser);
		void LeaveProne(bool bClientSimulation);
		void Lean(ELeanDirection DesiredLeanDir, bool bClientSimulation);
		void ItemEnabledModeChanged(EDFItemEnabledMode PreviousItemEnabledMode);
		bool IsPrefiring();
		bool IsPlayer();
		bool IsPerspectiveMesh(class USkeletalMeshComponent* MeshCompToCheck);
		bool IsLeaning();
		bool IsFiring();
		bool IsEquipped();
		bool IsAlive();
		void GoProne(bool bClientSimulation);
		void GiveLoadout(class UDFLoadout* Loadout, bool bEquipFirstItem);
		class ADFBaseItem* GetRelevantEquippedItem();
		class UAnimMontage* GetMontageToUseFromPerspectiveAnimPair(const struct FPerspectiveAnim& AnimationPair);
		EDFItemEnabledMode GetItemEnabledMode();
		class FName GetItemAttachPoint();
		class UDFInventoryComponent* GetInventory();
		class ADFBaseItem* GetEquippedItem();
		bool GetDamageMultiplierByBoneName(const class FName& BoneName, float* DamageMultiplier);
		class USkeletalMeshComponent* GetCharacterMeshToUse(bool bIgnoreLocalControlOnServer);
		bool GetCharacterDeathMontageToUse(class UAnimMontage** OutCharDeathMontage);
		EVisibilityBasedAnimTickOption GetCharacterAnimTickOptionToUse(bool bVisibleMesh);
		class UAnimSequenceBase* GetAnimToUseFromPerspectiveAnimPair(const struct FPerspectiveAnim& AnimationPair);
		struct FRotator GetAimOffsets();
		void EquipPreviousItem();
		void EquipNextItemByType(EItemType ItemType);
		void EquipNextItem();
		void EquipItem(class ADFBaseItem* ItemToEquip);
		bool Die(float KillingDamage, const struct FDamageEvent& DamageEvent, class AController* Killer, class AActor* DamageCauser);
		void CrouchToggle();
		void ClientVeryShortAdjustPosition_CustomStamina(float Timestamp, const struct FVector& NewLoc, class UPrimitiveComponent* NewBase, const class FName& NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode, float ServerSprintStamina);
		void ClientAdjustRootMotionSourcePosition_CustomStamina(float Timestamp, const struct FRootMotionSourceGroup& ServerRootMotion, bool bHasAnimRootMotion, float ServerMontageTrackPosition, const struct FVector& ServerLoc, const struct FVector_NetQuantizeNormal& ServerRotation, float ServerVelZ, class UPrimitiveComponent* ServerBase, const class FName& ServerBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode, float ServerSprintStamina);
		void ClientAdjustRootMotionPosition_CustomStamina(float Timestamp, float ServerMontageTrackPosition, const struct FVector& ServerLoc, const struct FVector_NetQuantizeNormal& ServerRotation, float ServerVelZ, class UPrimitiveComponent* ServerBase, const class FName& ServerBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode, float ServerSprintStamina);
		void ClientAdjustPosition_CustomStamina(float Timestamp, const struct FVector& NewLoc, const struct FVector& NewVel, class UPrimitiveComponent* NewBase, const class FName& NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode, float ServerSprintStamina);
		void ClearCharacterAnimInstances(bool bPerspectiveMeshOnly);
		bool CanSprint();
		bool CanLean(ELeanDirection DesiredLeanDir);
		bool CanGoProne();
		bool CanDie(float KillingDamage, const struct FDamageEvent& DamageEvent, class AController* Killer, class AActor* DamageCauser);
		bool CanAim();
		void AimToggle();
		void Aim(bool bClientSimulation);
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFBaseGameMode
	 * Size -> 0x00F0 (FullSize[0x03F8] - InheritedSize[0x0308])
	 */
	class ADFBaseGameMode : public AGameMode
	{
	public:
		class ADFGameSession*                                      DFGameSession;                                           // 0x0308(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_PWLB[0x8];                                   // 0x0310(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              TeamStateClass;                                          // 0x0318(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              AIControllerClass;                                       // 0x0320(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<unsigned char>                                      WinningTeams;                                            // 0x0328(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FTimerHandle                                        TimerHandle_DefaultTimer;                                // 0x0338(0x0008) BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    WarmupTime;                                              // 0x0340(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    RoundTimeLimit;                                          // 0x0344(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    RoundScoreLimit;                                         // 0x0348(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    TimeBetweenMatches;                                      // 0x034C(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bBalanceTeams : 1;                                       // 0x0350(0x0001) BIT_FIELD Edit, Config, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZIPN[0x3];                                   // 0x0351(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BalanceTimerInterval;                                    // 0x0354(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bBotAutofill : 1;                                        // 0x0358(0x0001) BIT_FIELD Edit, BlueprintVisible, Config, GlobalConfig, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5K9C[0x7];                                   // 0x0359(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                GameDisplayName;                                         // 0x0360(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		int32_t                                                    NumTeams;                                                // 0x0378(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAllowUnassignedTeams : 1;                               // 0x037C(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAllowPlayerNameChanges : 1;                             // 0x037C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAllowPlayerNameChangesUnderNullOSS : 1;                 // 0x037C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAllowPlayerNameChangesUnderSteamOSS : 1;                // 0x037C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAlwaysDestroyPlayerDuringSeamlessTravel : 1;            // 0x037C(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bForceRespawn : 1;                                       // 0x037C(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bRandomSpawns : 1;                                       // 0x037C(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bRestartPlayerAtTransformOnly : 1;                       // 0x037C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bFriendlyFire : 1;                                       // 0x037D(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUpdatePlayerGameplayMuteStates : 1;                     // 0x037D(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bTeamOnlyVoice : 1;                                      // 0x037D(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESpawnActorCollisionHandlingMethod                         DefaultPawnSpawnCollisionHandlingMethodOverride;         // 0x037E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAllowBots : 1;                                          // 0x037F(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTimerHandle                                        TimerHandle_BalanceTimer;                                // 0x0380(0x0008) BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              GameRulesetClasses[0x50];                                // 0x0388(0x0050) UNKNOWN PROPERTY: SetProperty
		TArray<class AActor*>                                      SignificantActors;                                       // 0x03D8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UDFGameRulesetBase*>                          GameRulesets;                                            // 0x03E8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void UpdatePlayerGameplayMuteStates(class ADFBasePlayerController* ForPlayerController);
		void UnregisterSignificantActor(class AActor* ActorToRemove);
		void SwitchToNextMap();
		void SignificantActorEndPlay(class AActor* RemovedActor, EEndPlayReason EndPlayReason);
		bool ShouldHibernate();
		bool ShouldGameplayMuteRemotePlayer(class ADFBasePlayerController* ForPlayer, class ADFBasePlayerController* PlayerToCheck);
		bool ShouldBotAutofill();
		void RemovePlayerByAge(bool bNewest, bool bExcludeBots, bool bExcludeHumans);
		void RemoveOldestPlayer();
		void RemoveOldestBot();
		void RemoveNewestPlayer();
		void RemoveNewestBot();
		bool RemoveBotByName(const class FString& PlayerName);
		bool RemoveBot(class APlayerState* BotPS);
		void RemoveAllBots();
		void RegisterSignificantActor(class AActor* ActorToRegister);
		void ReceiveOnSwapAIControllers(class AAIController* OldAIC, class AAIController* NewAIC);
		void ReceiveOnMatchIsWaitingToStart();
		void ReceiveOnMatchHasStarted();
		void ReceiveOnMatchHasEnded();
		void ReceiveOnMatchAborted();
		void ReceiveOnLeavingMap();
		bool PlayerCanRestartGeneric(class AController* Player);
		bool PlayerBotCanRestart(class AAIController* Player);
		void NextMap();
		float ModifyDamage(float Damage, class AActor* DamagedActor, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser);
		bool KickPlayerByName(const class FString& KickedPlayerName, const class FText& KickReason);
		bool KickPlayerById(int32_t KickedPlayerId, const class FText& KickReason);
		bool IsValidTeamId(unsigned char TeamId);
		bool IsMatchWinner(class ADFBasePlayerState* PlayerStateToCheck);
		bool IsHibernating();
		bool IsFriendlyFireEnabled();
		int32_t GetTotalNumPlayers(bool bIncludeTravellingPlayers);
		class FString GetNextMapName();
		class FString GetNextGameName();
		bool ForceTeamId(int32_t SwitchedPlayerId, unsigned char TeamIdToAssign);
		bool ForceTeam(const class FString& SwitchedPlayerName, unsigned char TeamIdToAssign);
		bool FindPlayerStartTransform(class AController* Player, struct FTransform* OutFoundSpawnTransform, const class FString& IncomingName);
		void DumpActiveRulesets();
		void DetermineMatchWinner();
		class ADFTeamState* CreateTeam(class UDFTeamDefinition* NewTeamDef, unsigned char NewTeamIdToUse);
		unsigned char ChooseTeam(class ADFBasePlayerState* ForPlayerState);
		bool ChooseSpawnPointFromPlayerStart(class AController* Player, class AActor* StartSpot, struct FSpawnPointDef* OutChosenSpawnPoint, ESpawnActorCollisionHandlingMethod* OutCollisionHandlingMethod);
		bool CheckWinConditions();
		bool CheckRulesetWinConditions();
		bool CanRegisterSignificantActor(class AActor* ActorToRegister, class FString* ActorDenialReason);
		bool CanDealDamage(class ADFBasePlayerState* DamageInstigator, class ADFBasePlayerState* DamagedPlayer);
		bool CanAddRuleset(class UClass** RulesetClassToAdd, class FString* RulesetDenialReason);
		bool BanPlayerByName(const class FString& BannedPlayerName, const class FText& BanReason, float BanDuration);
		bool BanPlayerById(int32_t BannedPlayerId, const class FText& BanReason, float BanDuration);
		void AutofillWithBots();
		void AssignTeam(class AController* ForController, unsigned char AssignedTeam);
		void AddTeamBots(unsigned char TeamId, int32_t Num);
		void AddNamedBot(const class FString& BotName);
		void AddBots(int32_t Num);
		class APlayerState* AddBot(unsigned char PlayerTeamID, const class FString& PlayerName);
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFBaseGame_DeathMatch
	 * Size -> 0x0008 (FullSize[0x0400] - InheritedSize[0x03F8])
	 */
	class ADFBaseGame_DeathMatch : public ADFBaseGameMode
	{
	public:
		class ADFBasePlayerState*                                  WinningPlayerState;                                      // 0x03F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFBaseGame_TeamDeathMatch
	 * Size -> 0x0000 (FullSize[0x03F8] - InheritedSize[0x03F8])
	 */
	class ADFBaseGame_TeamDeathMatch : public ADFBaseGameMode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFBaseGameInstance
	 * Size -> 0x00F0 (FullSize[0x0288] - InheritedSize[0x0198])
	 */
	class UDFBaseGameInstance : public UGameInstance
	{
	public:
		unsigned char                                              UnknownData_HVRS[0xB0];                                  // 0x0198(0x00B0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPlayerStateTalkingStateChanged;                        // 0x0248(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4CAB[0x30];                                  // 0x0258(0x0030) MISSED OFFSET (PADDING)

	public:
		void ProjectVersion();
		void OnTravelFailure(class UWorld* World, ETravelFailure FailureType, const class FString& ErrorString);
		void OnNetworkLagStateChanged(class UWorld* World, class UNetDriver* NetDriver, ENetworkLagState LagType);
		void OnNetworkFailure(class UWorld* World, class UNetDriver* NetDriver, ENetworkFailure FailureType, const class FString& ErrorString);
		void JoinGameByIP(const class FString& IPAddress);
		void JoinGame(int32_t SearchResultIndex);
		bool IsHibernating();
		void HostGame(const class FString& TravelURL, bool bLANGame, int32_t MaxPlayers, const class FString& HostName, const class FString& Password);
		void ForceUpdateSession();
		void FindGames(ESessionSearchPresenceType SearchPresenceType);
		void DumpOnlineSessionState();
		void CleanupGame();
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFBaseGameState
	 * Size -> 0x0070 (FullSize[0x0300] - InheritedSize[0x0290])
	 */
	class ADFBaseGameState : public AGameState
	{
	public:
		unsigned char                                              NumTeams;                                                // 0x0290(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bTimerPaused;                                            // 0x0291(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3PGX[0x2];                                   // 0x0292(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RemainingTime;                                           // 0x0294(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    ReplicatedRemainingTime;                                 // 0x0298(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DX2R[0x4];                                   // 0x029C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              TeamScores;                                              // 0x02A0(0x0010) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class ADFTeamState*>                                TeamArray;                                               // 0x02B0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTeamStateAdded;                                        // 0x02C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTeamStateRemoved;                                      // 0x02D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlayerStateAdded;                                      // 0x02E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlayerStateRemoved;                                    // 0x02F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void SetTimerPauseState(bool bNewPauseState);
		void SetRemainingTime(int32_t NewRemainingTime);
		void OnRep_ReplicatedRemainingTime();
		void OnRep_NumTeams();
		bool IsValidTeamId(unsigned char TeamId);
		class ADFTeamState* GetTeamStateById(unsigned char TeamIdNum);
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFBaseWeapon
	 * Size -> 0x02A0 (FullSize[0x0648] - InheritedSize[0x03A8])
	 */
	class ADFBaseWeapon : public ADFBaseItem
	{
	public:
		class FScriptMulticastDelegate                             OnFire;                                                  // 0x03A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              bFiring : 1;                                             // 0x03B8(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QPVV : 3;                                    // 0x03B8(0x0001) BIT_FIELD (PADDING)
		unsigned char                                              bReadyToFirePendingRelease : 1;                          // 0x03B8(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bFireOnRelease : 1;                                      // 0x03B8(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CE6M[0x3];                                   // 0x03B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PrefireDelayMin;                                         // 0x03BC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bPrefiring : 1;                                          // 0x03C0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, Net, Transient, EditConst, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_E4RL[0x3F];                                  // 0x03C1(0x003F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bADSFireOnly : 1;                                        // 0x0400(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bLastShotFired : 1;                                      // 0x0400(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bRepCounterPending : 1;                                  // 0x0400(0x0001) BIT_FIELD Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MQJP[0x1];                                   // 0x0401(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRepShotInfo                                        FireCounter;                                             // 0x0402(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, RepNotify, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected
		struct FRepShotInfo                                        PreviousRepFireCounter;                                  // 0x0406(0x0004) Transient, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FRepShotInfo                                        PostStoppedFireCounter;                                  // 0x040A(0x0004) BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_P899[0x2];                                   // 0x040E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LastFireTime;                                            // 0x0410(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bUseServerSideFiringLogic : 1;                           // 0x0414(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bSimulateWeaponFireOnDedicatedServer : 1;                // 0x0414(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0T81[0x3];                                   // 0x0415(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWeaponAnimCollection                               WeaponAnimCollection;                                    // 0x0418(0x00F0) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              bSimulate1PWeaponFireOnPawnOwner1PMesh : 1;              // 0x0508(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QAC2[0x7];                                   // 0x0509(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWeaponSoundCollection                              WeaponSoundCollection;                                   // 0x0510(0x0080) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              bSingleAction : 1;                                       // 0x0590(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bSingleLoad : 1;                                         // 0x0590(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ECDD[0x7];                                   // 0x0591(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMeshComponent*                              WeaponMesh;                                              // 0x0598(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USkeletalMeshComponent*                              WeaponMesh1P;                                            // 0x05A0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              ImpactFXClass;                                           // 0x05A8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bCanSprintWhilePrefiring : 1;                            // 0x05B0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HAC4[0x7];                                   // 0x05B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  DamageFalloffCurve;                                      // 0x05B8(0x0088) Edit, Protected, NativeAccessSpecifierProtected
		class UClass*                                              DamageTypeClass;                                         // 0x0640(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void StopWeaponPerspectiveAnimation(const struct FPerspectiveAnim& WeapAnim);
		void StopWeaponMontage(class UAnimMontage* WeapMontage);
		void StopSimulatingWeaponFire();
		void SpawnImpactFX(const struct FHitResult& Impact);
		void SimulateWeaponFire();
		bool ShouldSimulateWeaponFire();
		void ReceiveStopSimulatingWeaponFire();
		void ReceiveSimulateWeaponFire();
		void ReceiveOnStopFiring();
		void ReceiveOnStartFiring();
		void ReceiveFire();
		void PrefireDelayElapsed(bool bClientSimulation);
		float PlayWeaponUnEquipMontage(class UAnimMontage* UnEquipMontageToPlay);
		float PlayWeaponThrowUnderhandMontage(class UAnimMontage* ThrowUnderhandMontageToPlay);
		float PlayWeaponThrowOverhandMontage(class UAnimMontage* ThrowOverhandMontageToPlay);
		class UAudioComponent* PlayWeaponSound(const struct FPerspectiveSound& Sound);
		float PlayWeaponPerspectiveAnimation(const struct FPerspectiveAnim& WeapAnim);
		float PlayWeaponMontage(class UAnimMontage* WeapMontage, bool bForceDisableAutoBlendOut);
		float PlayWeaponFireMontage(class UAnimMontage* FireMontageToPlay, bool bFireLast, bool bFireADS);
		float PlayWeaponEquipMontage(class UAnimMontage* EquipMontageToPlay);
		float PlayWeaponCockMontage(class UAnimMontage* CockMontageToPlay);
		float PlayWeaponActionMontage(class UAnimMontage* ActionMontageToPlay);
		float PlayThrowAnimations(bool bOverhandThrow, bool bDontPlayAndReturnDominantPlayLengthOnly);
		float PlayCockAnimations(bool bDontPlayAndReturnDominantPlayLengthOnly);
		void PlayActionAnimations(bool bDontPlayAndReturnDominantPlayLengthOnly);
		void OnStopFiring();
		void OnStartFiring();
		void OnRep_FireCounter(const struct FRepShotInfo& PreviousValue);
		void OnRep_bPrefiring();
		bool IsFiring();
		void HandleFire();
		class USkeletalMeshComponent* GetWeaponMeshToUse(bool bIgnoreLocalControlOnServer);
		class USkeletalMeshComponent* GetWeaponMesh1P();
		class USkeletalMeshComponent* GetWeaponMesh();
		class UAnimMontage* GetMontageToUseFromPerspectiveAnimPair(const struct FPerspectiveAnim& AnimationPair);
		float GetMontagePlayLengthToUseFromPerspectiveAnimPair(const struct FPerspectiveAnim& AnimationPair);
		class UAnimSequenceBase* GetAnimToUseFromPerspectiveAnimPair(const struct FPerspectiveAnim& AnimationPair);
		float GetAnimPlayLengthToUseFromPerspectiveAnimPair(const struct FPerspectiveAnim& AnimationPair);
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFBaseGun
	 * Size -> 0x01D8 (FullSize[0x0820] - InheritedSize[0x0648])
	 */
	class ADFBaseGun : public ADFBaseWeapon
	{
	public:
		class FScriptMulticastDelegate                             OnFireModeChanged;                                       // 0x0648(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N5PR[0x8];                                   // 0x0658(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimerIntervalAdjustment;                                 // 0x0660(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAllowAutomaticWeaponCatchup;                            // 0x0664(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RFYP[0x3];                                   // 0x0665(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FireRate;                                                // 0x0668(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    ShotsPerBurst;                                           // 0x066C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              SupportedFireModes;                                      // 0x0670(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EFireMode                                                  SelectedFireMode;                                        // 0x0671(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BJP8[0x6];                                   // 0x0672(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDFGunRecoilHandler*                                 RecoilHandler;                                           // 0x0678(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnReloadStarted;                                         // 0x0680(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnReloadFinished;                                        // 0x0690(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		EGunReloadState                                            PendingReloadState;                                      // 0x06A0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EGunReloadState                                            PreviousReloadState;                                     // 0x06A1(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ON7S : 2;                                    // 0x06A2(0x0001) BIT_FIELD (PADDING)
		unsigned char                                              bUsesAmmo : 1;                                           // 0x06A2(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bExhaustible : 1;                                        // 0x06A2(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bCanSprintWhileReloading : 1;                            // 0x06A2(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_R8Z5[0x4D];                                  // 0x06A3(0x004D) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bReloadOnEquip : 1;                                      // 0x06F0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bInstantReloadOnEquip : 1;                               // 0x06F0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bInstantReloadOnInitialEquip : 1;                        // 0x06F0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bInstantReloadOnInitialEnterInventory : 1;               // 0x06F0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bReloadOnDryFire : 1;                                    // 0x06F0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bReloadOnStopFire : 1;                                   // 0x06F0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bSimulateGunReloadOnDedicatedServer : 1;                 // 0x06F0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EAmmoClipReloadBehavior                                    AmmoClipReloadBehavior;                                  // 0x06F1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BQG9[0x6];                                   // 0x06F2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              SupportedAmmoClips[0x50];                                // 0x06F8(0x0050) UNKNOWN PROPERTY: SetProperty
		int32_t                                                    StartingAmmoClips;                                       // 0x0748(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bDispensedStartingAmmoClips : 1;                         // 0x074C(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_95GY[0x3];                                   // 0x074D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADFBaseAmmoClip*                                     CurrentAmmoClip;                                         // 0x0750(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    CurrentAmmoClipInvIndex;                                 // 0x0758(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MXHS[0x4];                                   // 0x075C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADFBaseAmmoClip*                                     PreviousAmmoClip;                                        // 0x0760(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    CurrentAmmoInClipBeforeReload;                           // 0x0768(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    ReloadCycleIterations;                                   // 0x076C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bInfiniteClipAmmo : 1;                                   // 0x0770(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bInfiniteAmmo : 1;                                       // 0x0770(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bNoRecoil : 1;                                           // 0x0770(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KTO9[0x7];                                   // 0x0771(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FComponentReference                                 CustomMuzzleAttachComponentToUse;                        // 0x0778(0x0028) Edit, DisableEditOnTemplate, EditConst, AdvancedDisplay, NativeAccessSpecifierPrivate
		class FName                                                MuzzleAttachComponentName;                               // 0x07A0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                MuzzleAttachPoint;                                       // 0x07A8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UParticleSystem*                                     MuzzleFX;                                                // 0x07B0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             MuzzleLocationOffset;                                    // 0x07B8(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FRotator                                            MuzzleRotationOffset;                                    // 0x07C4(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              bLoopedMuzzleFX : 1;                                     // 0x07D0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Z70D[0x7];                                   // 0x07D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            MuzzlePSC;                                               // 0x07D8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                ShellEjectAttachPoint;                                   // 0x07E0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UParticleSystem*                                     ShellEjectFX;                                            // 0x07E8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             ShellEjectLocationOffset;                                // 0x07F0(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FRotator                                            ShellEjectRotationOffset;                                // 0x07FC(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              bLoopedShellEjectFX : 1;                                 // 0x0808(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bPlayShellEjectFXOnFireLast : 1;                         // 0x0808(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CDN4[0x3];                                   // 0x0809(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ShellEjectDelay;                                         // 0x080C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UParticleSystemComponent*                            ShellEjectPSC;                                           // 0x0810(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_L1NK[0x8];                                   // 0x0818(0x0008) MISSED OFFSET (PADDING)

	public:
		void UnloadCurrentAmmoClip();
		void StopSimulatingGunReload();
		void StartReload(bool bClientSimulation);
		void SimulateGunReload();
		bool ShouldUseRecoil();
		bool ShouldSimulateGunReload();
		void SetReloadState(EGunReloadState NewReloadState);
		void SetFireModeBP(EFireMode NewFireMode);
		bool SetFireMode(EFireMode NewFireMode, bool bFromPlayerInput, bool bForce);
		void ServerStartReload();
		void ServerSetFireMode(EFireMode NewFireMode);
		void ReceiveFireModeChanged(EFireMode NewFireMode, EFireMode PrevFireMode, bool bFromPlayerInput);
		void ReceiveAmmoExhausted();
		float PlayWeaponStartReloadMontage(class UAnimMontage* StartReloadMontageToPlay, bool bDryReload);
		float PlayWeaponReloadMontage(bool bDryReload);
		float PlayWeaponEndReloadMontage(class UAnimMontage* EndReloadMontageToPlay, bool bDryReload);
		float PlayReloadTransitionAnimations(bool bStartReload, bool bDontPlayAndReturnDominantPlayLengthOnly);
		float PlayReloadAnimations(bool bDryReload, bool bDontPlayAndReturnDominantPlayLengthOnly);
		void OnRep_SelectedFireMode(EFireMode PrevSelectedFireMode);
		void OnRep_PendingReloadState(EGunReloadState PrevReloadState);
		void OnRep_CurrentAmmoClip(class ADFBaseAmmoClip* PrevAmmoClip);
		void OnReload(bool bClientSimulation);
		void LoadPreviousAmmoClip();
		void LoadNextAmmoClip();
		void LoadAmmoClip(class ADFBaseAmmoClip* ClipToLoad);
		bool IsReloading();
		bool IsDryReloading();
		bool HasExhaustedAllAmmo();
		bool HasAmmoClip();
		int32_t GetTotalAmmo(bool bIncludeLoadedMags);
		unsigned char GetSupportedFireModes();
		class FName GetShellEjectAttachPoint();
		EFireMode GetSelectedFireMode();
		EGunReloadState GetReloadState();
		EGunReloadState GetPreviousReloadState();
		int32_t GetNumFreeAmmoClips(bool bIncludeEmptyMags, bool bIncludeCurrentMag);
		struct FVector GetMuzzleLocation(bool bIgnoreLocalControlOnServer);
		struct FVector GetMuzzleDirection(bool bIgnoreLocalControlOnServer);
		class FName GetMuzzleAttachPoint();
		class USceneComponent* GetMuzzleAttachComponent(bool bIgnoreLocalControlOnServer);
		int32_t GetClipAmmo();
		bool CanReload();
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFBaseGun_Projectile
	 * Size -> 0x0028 (FullSize[0x0848] - InheritedSize[0x0820])
	 */
	class ADFBaseGun_Projectile : public ADFBaseGun
	{
	public:
		class UClass*                                              ProjectileClass;                                         // 0x0820(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ProjectileSpawnDistance;                                 // 0x0828(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      TargetTraceDistance;                                     // 0x082C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bUseMuzzleAsTrace;                                       // 0x0830(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JK15[0x3];                                   // 0x0831(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             MuzzleSightOffset;                                       // 0x0834(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FMulticastSparseDelegate                             OnProcessValidProjCSHit;                                 // 0x0840(0x0001) InstancedReference, BlueprintAssignable, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G1DM[0x7];                                   // 0x0841(0x0007) MISSED OFFSET (PADDING)

	public:
		void ServerNotifyCSHitPredicted(const struct FCSHitInfo& HitInfo);
		void ServerNotifyCSHit(class ADFBaseProjectile* HitProj, const struct FCSHitInfo& HitInfo);
		void ServerFireProjectile(const struct FVector& Origin, const struct FVector_NetQuantizeNormal& ShootDir);
		void ClientProjDebugInfo(class ADFBaseProjectile* Proj, const struct FVector& NewProjLoc, const struct FVector& LastProjLoc, const struct FRotator& NewProjRot, const struct FVector& NewProjVel);
		void ClientProjDebugImpactInfo(class ADFBaseProjectile* Proj, const struct FVector& ImpactLoc, const struct FVector_NetQuantizeNormal& ImpactNorm);
		void ClientDrawDebugFireCone(const struct FVector& ConeOrig, const struct FVector_NetQuantizeNormal& ConeDir);
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFBaseImpactEffect
	 * Size -> 0x02C8 (FullSize[0x04E8] - InheritedSize[0x0220])
	 */
	class ADFBaseImpactEffect : public AActor
	{
	public:
		TArray<struct FDecalData>                                  ConcreteDecals;                                          // 0x0220(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FDecalData>                                  MetalSolidDecals;                                        // 0x0230(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FDecalData>                                  WoodDecals;                                              // 0x0240(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FDecalData>                                  GlassBPDecals;                                           // 0x0250(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FDecalData>                                  GlassDecals;                                             // 0x0260(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FDecalData>                                  GlassWHDecals;                                           // 0x0270(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FDecalData>                                  MetalThinDecals;                                         // 0x0280(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FDecalData>                                  SandbagDecals;                                           // 0x0290(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FDecalData>                                  BrickWallDecals;                                         // 0x02A0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FDecalData>                                  RubberDecals;                                            // 0x02B0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FDecalData>                                  DrywallDecals;                                           // 0x02C0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FDecalData>                                  ElectricDevicesDecals;                                   // 0x02D0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FDecalData>                                  OilBarrelDecals;                                         // 0x02E0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UParticleSystem*                                     SnowFX;                                                  // 0x02F0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UParticleSystem*                                     WaterFX;                                                 // 0x02F8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UParticleSystem*                                     ConcreteFX;                                              // 0x0300(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UParticleSystem*                                     DirtFX;                                                  // 0x0308(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UParticleSystem*                                     MetalSolidFX;                                            // 0x0310(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UParticleSystem*                                     WoodFX;                                                  // 0x0318(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UParticleSystem*                                     GlassBPFX;                                               // 0x0320(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UParticleSystem*                                     GlassFX;                                                 // 0x0328(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UParticleSystem*                                     GlassWHFX;                                               // 0x0330(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UParticleSystem*                                     GrassFX;                                                 // 0x0338(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UParticleSystem*                                     MetalThinFX;                                             // 0x0340(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UParticleSystem*                                     SandbagFX;                                               // 0x0348(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UParticleSystem*                                     BrickWallFX;                                             // 0x0350(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UParticleSystem*                                     RubberFX;                                                // 0x0358(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UParticleSystem*                                     DrywallFX;                                               // 0x0360(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UParticleSystem*                                     ElectricDevicesFX;                                       // 0x0368(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UParticleSystem*                                     OilBarrelFX;                                             // 0x0370(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UParticleSystem*                                     SandFX;                                                  // 0x0378(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UParticleSystem*                                     SoftFX;                                                  // 0x0380(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UParticleSystem*                                     GroundFX;                                                // 0x0388(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UParticleSystem*                                     RockFX;                                                  // 0x0390(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UParticleSystem*                                     FleshFX;                                                 // 0x0398(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundCue*                                           ConcreteSound;                                           // 0x03A0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundCue*                                           DirtSound;                                               // 0x03A8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundCue*                                           SnowSound;                                               // 0x03B0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundCue*                                           SandbagSound;                                            // 0x03B8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundCue*                                           BrickWallSound;                                          // 0x03C0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundCue*                                           WaterSound;                                              // 0x03C8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundCue*                                           MetalSolidSound;                                         // 0x03D0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundCue*                                           MetalThinSound;                                          // 0x03D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundCue*                                           WoodSound;                                               // 0x03E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundCue*                                           GlassSound;                                              // 0x03E8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundCue*                                           GlassBPSound;                                            // 0x03F0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundCue*                                           GlassWHSound;                                            // 0x03F8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundCue*                                           GrassSound;                                              // 0x0400(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundCue*                                           RubberSound;                                             // 0x0408(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundCue*                                           DrywallSound;                                            // 0x0410(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundCue*                                           GroundSound;                                             // 0x0418(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundCue*                                           ElectricDevicesSound;                                    // 0x0420(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundCue*                                           OilBarrelSound;                                          // 0x0428(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundCue*                                           RockSound;                                               // 0x0430(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundCue*                                           FleshSound;                                              // 0x0438(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDecalData                                          DefaultDecal;                                            // 0x0440(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate
		class UParticleSystem*                                     DefaultFX;                                               // 0x0450(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundCue*                                           DefaultSound;                                            // 0x0458(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FHitResult                                          SurfaceHit;                                              // 0x0460(0x0088) BlueprintVisible, Transient, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		class USoundCue* GetImpactSound(EPhysicalSurface SurfaceType);
		class UParticleSystem* GetImpactFX(EPhysicalSurface SurfaceType);
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFBasePickup
	 * Size -> 0x0038 (FullSize[0x0258] - InheritedSize[0x0220])
	 */
	class ADFBasePickup : public AActor
	{
	public:
		unsigned char                                              UnknownData_52N2[0x8];                                   // 0x0220(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMeshComponent*                                Mesh;                                                    // 0x0228(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bActive : 1;                                             // 0x0230(0x0001) BIT_FIELD Edit, BlueprintVisible, Net, Transient, EditConst, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MH9H[0x7];                                   // 0x0231(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADFBaseCharacter*                                    InvokingPawn;                                            // 0x0238(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_D1WX[0x8];                                   // 0x0240(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bUseable : 1;                                            // 0x0248(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bOverlap : 1;                                            // 0x0248(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_T1GG[0x3];                                   // 0x0249(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RespawnDelay;                                            // 0x024C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USoundCue*                                           PickupSound;                                             // 0x0250(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void UpdatePickupState(bool bNewActive);
		void RespawnPickup();
		void OnRespawn();
		void OnRep_Active();
		void OnPickup();
		void InitializePickup();
		void GivePickupTo(class ADFBaseCharacter* PickupOwner);
		bool CanBePickedUp(class ADFBaseCharacter* Invoker);
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFBasePickup_Health
	 * Size -> 0x0008 (FullSize[0x0260] - InheritedSize[0x0258])
	 */
	class ADFBasePickup_Health : public ADFBasePickup
	{
	public:
		float                                                      Health;                                                  // 0x0258(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VIHV[0x4];                                   // 0x025C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFBasePickup_Item
	 * Size -> 0x0008 (FullSize[0x0260] - InheritedSize[0x0258])
	 */
	class ADFBasePickup_Item : public ADFBasePickup
	{
	public:
		class UDFInventoryComponent*                               Inventory;                                               // 0x0258(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFBasePlayerCharacter
	 * Size -> 0x0054 (FullSize[0x0910] - InheritedSize[0x08BC])
	 */
	class ADFBasePlayerCharacter : public ADFBaseCharacter
	{
	public:
		float                                                      BaseLookUpRate;                                          // 0x08BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      InteractionDistance;                                     // 0x08C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bFirstPerson : 1;                                        // 0x08C4(0x0001) BIT_FIELD Edit, BlueprintVisible, Transient, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3RRP[0x3];                                   // 0x08C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCameraComponent*                                    Camera;                                                  // 0x08C8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USpringArmComponent*                                 CameraBoom;                                              // 0x08D0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCameraComponent*                                    Camera1P;                                                // 0x08D8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bStartInFirstPerson : 1;                                 // 0x08E0(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bTrueFirstPerson : 1;                                    // 0x08E0(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bDisableOrientationOfRotationToMovementInFirstPerson : 1; // 0x08E0(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bDisableUsageOfControllerRotationYawInThirdPerson : 1;   // 0x08E0(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZDTU[0x7];                                   // 0x08E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMeshComponent*                              Mesh1P;                                                  // 0x08E8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bUseFirstPersonMesh : 1;                                 // 0x08F0(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5ONV[0x3];                                   // 0x08F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ItemAttachPoint1P;                                       // 0x08F4(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DU26[0x4];                                   // 0x08FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPlayerToggleFirstPerson;                               // 0x0900(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic

	public:
		void Use();
		void TurnAtRate(float Rate);
		void SwitchFireMode();
		void SetMeshVisibility(bool bFirstPersonVisibility);
		void ServerUse();
		void ServerOnToggleFirstPerson(bool bNewFirstPerson);
		class USkeletalMesh* ReceiveGetDefaultPawnMesh1P();
		void OnToggleFirstPerson(bool bNewFirstPerson);
		void OnFireReleased();
		void OnFirePressed();
		void MoveUp(float Value);
		void MoveRight(float Value);
		void MoveForward(float Value);
		void LookUpAtRate(float Rate);
		bool IsUsingFirstPersonMesh();
		bool IsTrueFirstPerson();
		bool IsLocalFirstPerson();
		bool IsFirstPerson();
		class USkeletalMeshComponent* GetMesh1P();
		class FName GetItemAttachPoint1P();
		class USkeletalMesh* GetDefaultPawnMesh1P();
		class USpringArmComponent* GetCameraBoom();
		class UCameraComponent* GetCamera1P();
		class UCameraComponent* GetCamera();
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFBasePlayerController
	 * Size -> 0x0088 (FullSize[0x05F8] - InheritedSize[0x0570])
	 */
	class ADFBasePlayerController : public APlayerController
	{
	public:
		unsigned char                                              UnknownData_UMWJ[0x8];                                   // 0x0570(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPossessPawn;                                           // 0x0578(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUnpossessPawn;                                         // 0x0588(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JOI4[0x8];                                   // 0x0598(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADFBaseCharacter*                                    DFCharacter;                                             // 0x05A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1C0W[0x18];                                  // 0x05A8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bSetGameOnlyInputOnBeginPlay : 1;                        // 0x05C0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5HA7[0x7];                                   // 0x05C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPlayerTeamNumUpdated;                                  // 0x05C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlayerTeamStateUpdated;                                // 0x05D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class ADFTeamState*                                        TeamState;                                               // 0x05E8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    MaxChatMsgLen;                                           // 0x05F0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AL4C[0x4];                                   // 0x05F4(0x0004) MISSED OFFSET (PADDING)

	public:
		void TeamSay(const class FString& Msg);
		void ServerTeamSay(const class FString& Msg);
		void ServerSay(const class FString& Msg);
		void ServerNotifyProjCSHit(class ADFBaseProjectile* HitProj, class APawn* HitProjDamageInstigator, const struct FCSHitInfo& HitInfo);
		void ServerEnableCheats();
		void Say(const class FString& Msg);
		void ReceiveUnpossessPawn(class APawn* UnpossessedPawn);
		void ReceivePreClientTravel(const class FString& PendingURL, bool bIsSeamlessTravelWithRelativeTravelType);
		void ReceivePossessPawn(class APawn* NewPawn);
		void ReceivePlayerTeamStateUpdated(class ADFTeamState* LastTeamState, class ADFTeamState* NewTeamState, bool bNewTeamStateInit);
		void ReceivePlayerTeamNumUpdated(unsigned char LastTeamNum, unsigned char NewTeamNum);
		void ReceiveOnRepPlayerState();
		void ReceiveNewChatMsg(const struct FPlayerChatMsg& ChatMsg);
		void ReceiveGameHasEnded(class AActor* EndGameFocus, bool bIsWinner);
		void OnFireReleased();
		void OnFirePressed();
		bool IsGameInputAllowed();
		struct FTimerHandle GetUnFreezeTimerHandle();
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFBasePlayerState
	 * Size -> 0x0058 (FullSize[0x0378] - InheritedSize[0x0320])
	 */
	class ADFBasePlayerState : public APlayerState
	{
	public:
		unsigned char                                              UnknownData_P6KP[0x8];                                   // 0x0320(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRepPlayerName;                                         // 0x0328(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlayerTeamNumUpdated;                                  // 0x0338(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              TeamNum;                                                 // 0x0348(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              PrevTeamNum;                                             // 0x0349(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6EBA[0x6];                                   // 0x034A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADFTeamState*                                        TeamState;                                               // 0x0350(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ADFTeamState*                                        PrevTeamState;                                           // 0x0358(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bAdmin : 1;                                              // 0x0360(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, EditConst, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AEKF[0x3];                                   // 0x0361(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumKills;                                                // 0x0364(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    NumAssists;                                              // 0x0368(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    NumDeaths;                                               // 0x036C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    TeamStartTime;                                           // 0x0370(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IGWM[0x4];                                   // 0x0374(0x0004) MISSED OFFSET (PADDING)

	public:
		void SetTeam(unsigned char NewTeamNum, bool bCopyToInactivePlayerState);
		void SetAdminStatus(bool bNewAdminStatus);
		void ScorePoints(float Points, bool bForceNetUpdate);
		void ScoreKillPlayer(class ADFBasePlayerState* Victim, float Points);
		void ScoreDeath(class ADFBasePlayerState* KilledBy, float Points);
		void ScoreAssistPlayer(class ADFBasePlayerState* Killer, class ADFBasePlayerState* Victim, float Points);
		void ReceiveOnRepPlayerName();
		void OnTeamStateUpdated(class ADFTeamState* TeamStateBeforeUpdate);
		void OnTeamNumUpdated(unsigned char TeamNumBeforeUpdate);
		void OnRep_TeamState(class ADFTeamState* TeamStateBeforeUpdate);
		void OnRep_TeamNum(unsigned char TeamNumBeforeUpdate);
		void OnRep_NumKills(int32_t PrevNumKills);
		void OnRep_NumDeaths(int32_t PrevNumDeaths);
		void OnRep_NumAssists(int32_t PrevNumAssists);
		void OnRep_bAdmin(bool bAdminStatusBeforeUpdate);
		unsigned char GetTeam();
		unsigned char GetPreviousTeam();
		int32_t GetKills();
		int32_t GetDeaths();
		int32_t GetAssists();
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFBaseProjectile
	 * Size -> 0x0150 (FullSize[0x0370] - InheritedSize[0x0220])
	 */
	class ADFBaseProjectile : public AActor
	{
	public:
		class UProjectileMovementComponent*                        ProjectileMovement;                                      // 0x0220(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              ProjectileImpactFXClass;                                 // 0x0228(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FTransform                                          SpawnTransform;                                          // 0x0230(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FVector                                             LastLoc;                                                 // 0x0260(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bAlwaysShootable : 1;                                    // 0x026C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIgnoreInstigator : 1;                                   // 0x026C(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_12J7[0x3];                                   // 0x026D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AController*                                         InstigatingController;                                   // 0x0270(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bDebug : 1;                                              // 0x0278(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnTemplate, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FMulticastSparseDelegate                             OnProcessValidHit;                                       // 0x0279(0x0001) InstancedReference, BlueprintAssignable, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              bIgnoreInstigatorHitEventsOnly : 1;                      // 0x027A(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bProcessedAHit : 1;                                      // 0x027A(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bClientSideHitDetectionEnabled : 1;                      // 0x027A(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bClientSideHitDamageEnabled : 1;                         // 0x027A(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bNotifyOfPredictedProjectileHits : 1;                    // 0x027A(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bOnlyNotifyOfPredictedProjectileHits : 1;                // 0x027A(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IU6E[0x1];                                   // 0x027B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCSHitInfo                                          PendingHitInfo;                                          // 0x027C(0x0070) Transient, IsPlainOldData, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              bApplyDamageOnImpact : 1;                                // 0x02EC(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bApplyDamageOnBounceImpact : 1;                          // 0x02EC(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bApplyDamageToInstigator : 1;                            // 0x02EC(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_60I1[0x3];                                   // 0x02ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDFDamageParams                                     BaseDamageParams;                                        // 0x02F0(0x0014) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JQJX[0x4];                                   // 0x0304(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              WeaponDamageTypeClass;                                   // 0x0308(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             RadialDamageOriginOffset;                                // 0x0310(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ECollisionChannel                                          RadialDamagePreventionChannel;                           // 0x031C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bWantsToUseClientSidePrediction : 1;                     // 0x031D(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bReconcilePredictedProjWithServerProj : 1;               // 0x031D(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bPredictedClientProjectile : 1;                          // 0x031D(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9LD3[0x2];                                   // 0x031E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADFBaseProjectile*                                   MyPredictedClientProjectile;                             // 0x0320(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ADFBaseProjectile*                                   ServerAuthoritativeProjectile;                           // 0x0328(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_88AM[0x31];                                  // 0x0330(0x0031) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FMulticastSparseDelegate                             OnTriggerPayload;                                        // 0x0361(0x0001) InstancedReference, BlueprintAssignable, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              bPayloadTriggered : 1;                                   // 0x0362(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bTriggerPayloadWhenStopped : 1;                          // 0x0362(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bTearOffOnPayloadActivation : 1;                         // 0x0362(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bDisableOnPayloadActivation : 1;                         // 0x0362(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6EIL[0xD];                                   // 0x0363(0x000D) MISSED OFFSET (PADDING)

	public:
		void TriggerPayload(const struct FHitResult& ImpactHitResult, bool bFromTearOff);
		void SpawnImpactFX(const struct FHitResult& Impact);
		void SetProjectileUpdatedComponent(class USceneComponent* NewProjectileUpdatedComponent);
		void ReceivePayloadActivated(const struct FHitResult& ImpactHitResult);
		void ProjectileStop(const struct FHitResult& ImpactResult);
		void ProjectileBounce(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
		bool K2_ShouldIgnoreHit(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FHitResult& HitResult);
		void K2_PostProcessValidHit(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FHitResult& HitResult, bool bFromCSHitNotify);
		bool HasValidPredictedClientProjectile();
		class UPrimitiveComponent* GetProjectileUpdatedPrimitive();
		class USceneComponent* GetProjectileUpdatedComponent();
		class ADFBaseWeapon* GetOwningWeapon();
		class UClass* GetImpactFXClass();
		struct FDFDamageParams GetAdjustedDamageParams(class AActor* OtherActor, const struct FVector& HitLocation);
		void DisableAndDeferDestroy();
		float ApplyDamageToImpactedActor(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FHitResult& HitResult);
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFBaseProjectileLegacy
	 * Size -> 0x0120 (FullSize[0x0340] - InheritedSize[0x0220])
	 */
	class ADFBaseProjectileLegacy : public AActor
	{
	public:
		class UPrimitiveComponent*                                 ProjectileCollision;                                     // 0x0220(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UProjectileMovementComponent*                        ProjectileMovement;                                      // 0x0228(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              ProjectileImpactFXClass;                                 // 0x0230(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_14XV[0x8];                                   // 0x0238(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          SpawnTransform;                                          // 0x0240(0x0030) Edit, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FVector                                             LastLoc;                                                 // 0x0270(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bListenForImpactEvents : 1;                              // 0x027C(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bIgnoreInstigator : 1;                                   // 0x027C(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XJIJ[0x3];                                   // 0x027D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AController*                                         InstigatingController;                                   // 0x0280(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ActiveLifeSpan;                                          // 0x0288(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FKRC[0xC];                                   // 0x028C(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              WeaponDamageTypeClass;                                   // 0x0298(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bDebug : 1;                                              // 0x02A0(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnTemplate, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bApplyDamageFromPayload : 1;                             // 0x02A0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_H7J5[0x3];                                   // 0x02A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HitDamage;                                               // 0x02A4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bApplyRadialDamage : 1;                                  // 0x02A8(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CSOR[0x3];                                   // 0x02A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             RadialDamageLocOffset;                                   // 0x02AC(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ECollisionChannel                                          RadialDamagePreventionChannel;                           // 0x02B8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AR2L[0x3];                                   // 0x02B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DamageRadius;                                            // 0x02BC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bPayloadTriggered : 1;                                   // 0x02C0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, EditConst, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bTriggerPayloadWhenStopped : 1;                          // 0x02C0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bTriggerPayloadOnDelay : 1;                              // 0x02C0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ALWP[0x3];                                   // 0x02C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PayloadTriggerDelay;                                     // 0x02C4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UParticleSystem*                                     PayloadTriggerFX;                                        // 0x02C8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bAttachTriggerFXToRoot : 1;                              // 0x02D0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LDEX[0x7];                                   // 0x02D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            TriggerFXPSC;                                            // 0x02D8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USoundBase*                                          PayloadTriggerSnd;                                       // 0x02E0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bAttachTriggerSndToRoot : 1;                             // 0x02E8(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_NGWU[0x7];                                   // 0x02E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAudioComponent*                                     TriggerSnd;                                              // 0x02F0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KLBO[0x48];                                  // 0x02F8(0x0048) MISSED OFFSET (PADDING)

	public:
		void TriggerPayload(const struct FHitResult& ImpactHitResult);
		void StopSimulatingPayloadActivation();
		void SpawnImpactFX(const struct FHitResult& Impact);
		void SimulatePayloadActivation();
		void ReceiveStopSimulatingPayloadActivation();
		void ReceiveSimulatePayloadActivation();
		void ReceivePayloadActivated(const struct FHitResult& ImpactHitResult);
		void ProjectileStop(const struct FHitResult& ImpactResult);
		void ProjectileBounce(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
		void PayloadDelayElapsed();
		void OnRep_bPayloadTriggered();
		class ADFBaseWeapon* GetOwningWeapon();
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFBlueprintFunctions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDFBlueprintFunctions : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_WasShotFired(const struct FRepShotInfo& Counter, const struct FRepShotInfo& OtherCounter);
		bool STATIC_TextIsEmptyOrWhitespace(const class FText& InText);
		void STATIC_SetTeamNum(class AActor* Target, unsigned char NewTeamNum);
		void STATIC_SetStartSpot(class AController* Controller, class AActor* NewStartSpot);
		void STATIC_SetNetAddressable(class UActorComponent* ActorComp);
		void STATIC_ResetPlayerVoiceTalker(class APlayerState* InPlayerState);
		void STATIC_ResetAllPlayerVoiceTalkers();
		void STATIC_PrintTextToLog(class UObject* WorldContextObject, const class FText& InText, ELogVerbosityBP InLogVerbosity, bool bPrintStackTrace);
		void STATIC_PrintStringToLog(class UObject* WorldContextObject, const class FString& inString, ELogVerbosityBP InLogVerbosity, bool bPrintStackTrace);
		bool STATIC_IsVOIPTalkerStillAlive(class UVOIPTalker* InTalker);
		bool STATIC_IsValidActor(class AActor* Actor);
		bool STATIC_IsPlayInEditor(class UObject* WorldContextObject);
		bool STATIC_IsPlayerTalking(class APlayerState* PlayerPS);
		bool STATIC_IsPlayerMuted(class APlayerController* PC, class APlayerState* PSToCheck);
		bool STATIC_IsPendingKillPending(class AActor* Actor);
		bool STATIC_IsLocallyPlayerControlled(class APawn* Pawn);
		bool STATIC_IsEmptyOrWhitespace(const class FString& inString);
		bool STATIC_HasFiringStopped(const struct FRepShotInfo& Counter);
		class AWorldSettings* STATIC_GetWorldSettings(class UObject* WorldContextObject);
		class UVOIPTalker* STATIC_GetVOIPTalkerForPlayer(class APlayerState* InPlayerState);
		ESlateVisibility STATIC_GetVisibilityDefault(class UWidget* Widget);
		class ADFTeamState* STATIC_GetTeamStateFromTeamId(class UObject* WorldContextObject, unsigned char TeamIdNum);
		unsigned char STATIC_GetTeamNum(class AActor* Target);
		struct FVector STATIC_GetTargetLocation(class AActor* Actor, class AActor* RequestedBy);
		class FName STATIC_GetSurfaceName(EPhysicalSurface SurfaceType);
		class AActor* STATIC_GetStartSpot(class AController* Controller);
		int32_t STATIC_GetShotCounterBPCompat(const struct FRepShotInfo& Counter);
		class FString STATIC_GetPluginFriendlyName(const class FString& PluginName);
		int32_t STATIC_GetNumShotsFiredBPCompat(const struct FRepShotInfo& Counter, const struct FRepShotInfo& PreviousCounter);
		class FText STATIC_GetMapNameForDisplay(class UObject* WorldContextObject);
		class FString STATIC_GetMapName(class UObject* WorldContextObject);
		bool STATIC_GetMapAssetVisibleInMapSelectUI(const struct FPrimaryAssetId& WorldAssetId, bool* bOutVisibleInMapSelectUI);
		bool STATIC_GetMapAssetSupportedGameModes(const struct FPrimaryAssetId& WorldAssetId);
		bool STATIC_GetMapAssetPreviewImg(const struct FPrimaryAssetId& WorldAssetId);
		bool STATIC_GetMapAssetPreviewBannerImg(const struct FPrimaryAssetId& WorldAssetId);
		class FText STATIC_GetMapAssetNameForDisplay(const struct FPrimaryAssetId& WorldAssetId);
		bool STATIC_GetMapAssetGameRulesetClasses(const struct FPrimaryAssetId& WorldAssetId);
		bool STATIC_GetMapAssetDescription(const struct FPrimaryAssetId& WorldAssetId, class FString* OutMapDescription);
		bool STATIC_GetMapAssetDefaultGameMode(const struct FPrimaryAssetId& WorldAssetId);
		bool STATIC_GetMapAssetDataSupportedGameModes(const struct FAssetData& WorldAsset);
		bool STATIC_GetMapAssetDataPreviewImg(const struct FAssetData& WorldAsset);
		bool STATIC_GetMapAssetDataPreviewBannerImg(const struct FAssetData& WorldAsset);
		class FText STATIC_GetMapAssetDataNameForDisplay(const struct FAssetData& WorldAsset);
		bool STATIC_GetMapAssetDataGameRulesetClasses(const struct FAssetData& WorldAsset);
		bool STATIC_GetMapAssetDataDisplayName(const struct FAssetData& WorldAsset, class FText* OutMapDisplayName);
		bool STATIC_GetMapAssetDataDescription(const struct FAssetData& WorldAsset, class FString* OutMapDescription);
		bool STATIC_GetMapAssetDataDefaultGameMode(const struct FAssetData& WorldAsset);
		class FString STATIC_GetGlobalDefaultGameMode();
		class FString STATIC_GetGameVersion();
		class FText STATIC_GetGameNameForDisplay(class UObject* WorldContextObject);
		class FString STATIC_GetGameModeForName(const class FString& GameModeName);
		class FString STATIC_GetGameModeForMapName(const class FString& MapName);
		class FString STATIC_GetGameDefaultMap();
		struct FVector STATIC_GetFocalPoint(class AActor* Actor);
		void STATIC_GetDefaultBoundingCylinder(class AActor* Actor, float* CylinderRadius, float* CylinderHalfHeight);
		class FString STATIC_GetCopyrightNotice();
		TArray<class FString> STATIC_GetAllMapNames();
		void STATIC_GameHasEnded(class AController* Controller, class AActor* EndGameFocus, bool bIsWinner);
		void STATIC_FlushPressedKeys(class APlayerController* PC);
		bool STATIC_EqualEqual_WeaponSoundCollection(const struct FWeaponSoundCollection& A, const struct FWeaponSoundCollection& B);
		bool STATIC_EqualEqual_WeaponAnimSequence(const struct FWeaponAnimSequence& A, const struct FWeaponAnimSequence& B);
		bool STATIC_EqualEqual_WeaponAnimMontage(const struct FWeaponAnimMontage& A, const struct FWeaponAnimMontage& B);
		bool STATIC_EqualEqual_WeaponAnimCollection(const struct FWeaponAnimCollection& A, const struct FWeaponAnimCollection& B);
		bool STATIC_EqualEqual_WeaponAnim(const struct FWeaponAnim& A, const struct FWeaponAnim& B);
		bool STATIC_EqualEqual_PerspectiveSound(const struct FPerspectiveSound& A, const struct FPerspectiveSound& B);
		bool STATIC_EqualEqual_PerspectiveAnimSequence(const struct FPerspectiveAnimSequence& A, const struct FPerspectiveAnimSequence& B);
		bool STATIC_EqualEqual_PerspectiveAnim(const struct FPerspectiveAnim& A, const struct FPerspectiveAnim& B);
		bool STATIC_EqualEqual_CharacterSoundCollection(const struct FCharacterSoundCollection& A, const struct FCharacterSoundCollection& B);
		bool STATIC_EqualEqual_CharacterAnimCollection(const struct FCharacterAnimCollection& A, const struct FCharacterAnimCollection& B);
		bool STATIC_DoesMapIDSupportGMDefinition(const struct FPrimaryAssetId& MapID, class UDFGameModeDefinition* GMDef);
		bool STATIC_CharacterVariationIsValid(const struct FDFCharacterVariationDataHandle& VariationData);
		struct FDFCharacterVariationData STATIC_CharacterVariationGetData(const struct FDFCharacterVariationDataHandle& VariationData);
		struct FDFCharacterVariationDataHandle STATIC_CharacterVariationDataFromTableRow(class UObject* WorldContextObject, const struct FDataTableRowHandle& RowHandle);
		void STATIC_Array_UInt8Sort(TArray<unsigned char>* ArrayToSort, bool bDescending);
		void STATIC_Array_TextSort(TArray<class FText>* ArrayToSort, bool bDescending);
		void STATIC_Array_StringSort(TArray<class FString>* ArrayToSort, bool bDescending);
		void STATIC_Array_Reverse(TArray<int32_t> TargetArray);
		void STATIC_Array_NameSort(TArray<class FName>* ArrayToSort, bool bDescending);
		void STATIC_Array_Int64Sort(TArray<int64_t>* ArrayToSort, bool bDescending);
		void STATIC_Array_Int32Sort(TArray<int32_t>* ArrayToSort, bool bDescending);
		void STATIC_Array_FloatSort(TArray<float>* ArrayToSort, bool bDescending);
		void STATIC_Array_AssetDescriptorSort(TArray<struct FAssetDescriptor>* ArrayToSort, bool bDescending, bool bCompareDisplayText);
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFCharacterLeanHandler
	 * Size -> 0x0258 (FullSize[0x0280] - InheritedSize[0x0028])
	 */
	class UDFCharacterLeanHandler : public UObject
	{
	public:
		struct FRuntimeFloatCurve                                  StationaryStandLeanCurve;                                // 0x0028(0x0088) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		struct FRuntimeFloatCurve                                  MobileStandLeanCurve;                                    // 0x00B0(0x0088) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		struct FRuntimeFloatCurve                                  StationaryCrouchLeanCurve;                               // 0x0138(0x0088) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		struct FRuntimeFloatCurve                                  MobileCrouchLeanCurve;                                   // 0x01C0(0x0088) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		float                                                      LeanTransitionSpeed;                                     // 0x0248(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      StandLeanInYOffset;                                      // 0x024C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      CrouchLeanInYOffset;                                     // 0x0250(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LeanRollAmount;                                          // 0x0254(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ELeanDirection                                             LeanDirection;                                           // 0x0258(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8UY7[0x3];                                   // 0x0259(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LeanTarget;                                              // 0x025C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bAtFullLeanTarget : 1;                                   // 0x0260(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YTC9[0x3];                                   // 0x0261(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LeanAmount;                                              // 0x0264(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FB5L[0x18];                                  // 0x0268(0x0018) MISSED OFFSET (PADDING)

	public:
		void UpdateLeanDirection(ELeanDirection NewLeanDir);
		void ReceiveTick(float DeltaTime);
		void ReceiveReset();
		bool IsMoving();
		bool IsLeaning();
		ECharacterStance GetStance();
		ECharacterStance GetPreviousStance();
		class UDFCharacterMovementComponent* GetOwningCharacterMovement();
		class ADFBaseCharacter* GetOwningCharacter();
		float GetMaxLeanXOffset(ELeanDirection NewLeanDir, ECharacterStance LeanStance, bool bMoving);
		float GetLeanYOffset(float DesiredLeanAmt);
		float GetLeanXOffset(float DesiredLeanAmt);
		float GetLeanRollRot(float DesiredLeanAmt);
		float DetermineLeanTargetAmount(ELeanDirection DesiredLeanDir, bool bMoving);
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFCharacterMovementComponent
	 * Size -> 0x00B0 (FullSize[0x06C0] - InheritedSize[0x0610])
	 */
	class UDFCharacterMovementComponent : public UCharacterMovementComponent
	{
	public:
		class ADFBaseCharacter*                                    DFCharacterOwner;                                        // 0x0610(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EMovementMode                                              LastMovementMode;                                        // 0x0618(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              LastCustomMovementMode;                                  // 0x0619(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_F3A3[0x2];                                   // 0x061A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFloatRange                                         StandWalkSpeedMultiplierRange;                           // 0x061C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatRange                                         CrouchedWalkSpeedMultiplierRange;                        // 0x062C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatRange                                         ProneWalkSpeedMultiplierRange;                           // 0x063C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LeanSpeedMultiplier;                                     // 0x064C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseLeanSpeedMultiplierWhileAiming : 1;                  // 0x0650(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCanCrouchWhileFalling : 1;                              // 0x0650(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YAFP[0x3];                                   // 0x0651(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bUseJumpStamina : 1;                                     // 0x0654(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_32KK[0x3];                                   // 0x0655(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      JumpMaxStamina;                                          // 0x0658(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      JumpStaminaCost;                                         // 0x065C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      JumpStaminaRecoveryRate;                                 // 0x0660(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      JumpStaminaThreshold;                                    // 0x0664(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bWantsToSprint : 1;                                      // 0x0668(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4U2D[0x3];                                   // 0x0669(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SprintSpeedMultiplier;                                   // 0x066C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SprintAccelerationMultiplier;                            // 0x0670(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SprintStrafingThreshold;                                 // 0x0674(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseSprintStamina : 1;                                   // 0x0678(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PU3I[0x3];                                   // 0x0679(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SprintMaxStamina;                                        // 0x067C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SprintStaminaDelta;                                      // 0x0680(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SprintStaminaThreshold;                                  // 0x0684(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bWantsToAim : 1;                                         // 0x0688(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZC12[0x3];                                   // 0x0689(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AimSpeedMultiplier;                                      // 0x068C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bWantsToLeanLeft : 1;                                    // 0x0690(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bWantsToLeanRight : 1;                                   // 0x0690(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LLTD[0x3];                                   // 0x0691(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ProneHalfHeight;                                         // 0x0694(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCanWalkOffLedgesWhenProne : 1;                          // 0x0698(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bProneMaintainsBaseLocation : 1;                         // 0x0698(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnTemplate, EditConst, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8DVP[0x3];                                   // 0x0699(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxWalkSpeedProne;                                       // 0x069C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bWantsToBeProne : 1;                                     // 0x06A0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCanSwimUnderwater : 1;                                  // 0x06A0(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_470U[0x3];                                   // 0x06A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      JumpStamina;                                             // 0x06A4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bCanSprint : 1;                                          // 0x06A8(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CD8A[0x3];                                   // 0x06A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SprintStamina;                                           // 0x06AC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bCanAim : 1;                                             // 0x06B0(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCanLean : 1;                                            // 0x06B0(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCanBeProne : 1;                                         // 0x06B0(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QHCK[0x3];                                   // 0x06B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bJustLeftWater : 1;                                      // 0x06B4(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DTHY[0xB];                                   // 0x06B5(0x000B) MISSED OFFSET (PADDING)

	public:
		bool IsStrafing(float Threshold);
		bool IsStanding();
		bool IsSprinting();
		bool IsReloading();
		bool IsProne();
		bool IsMovingForward();
		bool IsMoving(bool bIgnoreZVel);
		bool IsLeaning();
		bool IsCrawling();
		bool IsAlive();
		bool IsAiming();
		ECharacterStance GetStance();
		ECharacterStance GetPreviousStance();
		ELeanDirection GetLeanDirection();
		float GetLeanAmount();
		class ADFBaseCharacter* GetDFCharacterOwner();
		float ClampSpeedMultiplier(float MultValue);
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFCheatManager
	 * Size -> 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
	 */
	class UDFCheatManager : public UCheatManager
	{
	public:
		void ToggleItemDebug();
		void ToggleGunRecoil();
		void ToggleGunInfiniteClipAmmo();
		void ToggleGunInfiniteAmmo();
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFDamageType
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class UDFDamageType : public UDamageType
	{
	public:
		class UClass*                                              ImpactFXClass;                                           // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFPrimaryDataAsset
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UDFPrimaryDataAsset : public UPrimaryDataAsset
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFFactionInfo
	 * Size -> 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
	 */
	class UDFFactionInfo : public UDFPrimaryDataAsset
	{
	public:
		struct FPrimaryAssetType                                   FactionType;                                             // 0x0030(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                FactionName;                                             // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bVisibleInFactionSelectUI : 1;                           // 0x0040(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5K7E[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                DisplayName;                                             // 0x0048(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		class FText                                                DisplayNameShort;                                        // 0x0060(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		class FText                                                DisplayNameAcronym;                                      // 0x0078(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDFFunctionLibrary : public UObject
	{
	public:
		void STATIC_SetEnableAutoBlendOutForActiveMontage(class UAnimMontage* AnimMontage, class USkeletalMeshComponent* AnimSourceMesh, bool bNewEnableAutoBlendOut);
		void STATIC_ClearMeshAnimInstance(class USkeletalMeshComponent* MeshToClear);
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFGameModeDefinition
	 * Size -> 0x00B8 (FullSize[0x00E8] - InheritedSize[0x0030])
	 */
	class UDFGameModeDefinition : public UPrimaryDataAsset
	{
	public:
		bool                                                       bSupportsAllMaps;                                        // 0x0030(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_881I[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              SpecificMapsToSupport[0x50];                             // 0x0038(0x0050) UNKNOWN PROPERTY: SetProperty
		bool                                                       bShowInFrontEnd;                                         // 0x0088(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FU8M[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Title;                                                   // 0x0090(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, AssetRegistrySearchable, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x00A8(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, AssetRegistrySearchable, NativeAccessSpecifierPublic
		unsigned char                                              PreviewBannerImg[0x28];                                  // 0x00C0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFGameRulesetBase
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UDFGameRulesetBase : public UObject
	{
	public:
		unsigned char                                              UnknownData_78NB[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bTickable : 1;                                           // 0x0030(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NCPG[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                DisplayName;                                             // 0x0038(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		int32_t                                                    Priority;                                                // 0x0050(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RKI8[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)

	public:
		void UnregisterActor(class AActor* UnregisteredActor);
		void RegisterActor(class AActor* RegisteredActor);
		void ReceiveTick(float DeltaTime);
		void PlayerWounded(class AController* Victim, float DamageAmount, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
		void PlayerSuicide(class AController* Victim);
		void PlayerSpawn(class AController* Player, class APawn* NewPlayerPawn);
		void PlayerPostLogout(class AController* ExitingPlayer);
		void PlayerPostLogin(class APlayerController* NewPlayer);
		void PlayerKilled(class AController* Killer, class AController* Victim);
		void PlayerJoinedTeam(class AController* JoiningPlayer, unsigned char TeamNum);
		void PlayerJoined(class APlayerController* NewPlayer);
		void PlayerDied(class AController* Victim);
		void MatchHasEnded();
		void Init();
		class ADFBaseGameState* GetGameState();
		class ADFBaseGameMode* GetGameMode();
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFGameSession
	 * Size -> 0x00C0 (FullSize[0x02F8] - InheritedSize[0x0238])
	 */
	class ADFGameSession : public AGameSession
	{
	public:
		unsigned char                                              UnknownData_D00A[0x10];                                  // 0x0238(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ServerName;                                              // 0x0248(0x0010) ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    MinPlayers;                                              // 0x0258(0x0004) ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XEA3[0x4];                                   // 0x025C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Password;                                                // 0x0260(0x0010) ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KQA8[0x88];                                  // 0x0270(0x0088) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFGunRecoilHandler
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDFGunRecoilHandler : public UObject
	{
	public:
		void OnWeaponStopFire();
		void OnWeaponStartFire();
		void OnWeaponFire();
		void OnTick(float DeltaTime);
		bool IsFiring();
		class APawn* GetOwningPawn();
		class ADFBaseGun* GetOwningGun();
		struct FVector GetConeOfFireOffset();
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFHandlerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDFHandlerInterface : public UInterface
	{
	public:
		void EventUpdate(float DeltaTime, bool bMakeDecision);
		bool EventShouldUpdateThisFrame(float DeltaTime, bool bActiveAndSpawnedInWorld);
		void EventReset();
		void EventInit();
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFInfo
	 * Size -> 0x0000 (FullSize[0x0220] - InheritedSize[0x0220])
	 */
	class ADFInfo : public AInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFIntrinsicCharAnimInstInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDFIntrinsicCharAnimInstInterface : public UInterface
	{
	public:
		float PlayDeathMontage(class UAnimMontage* MontageToPlay);
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFIntrinsicWeapAnimInstInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDFIntrinsicWeapAnimInstInterface : public UInterface
	{
	public:
		float PlayUnEquipMontage(class UAnimMontage* MontageToPlay);
		float PlayReloadMontage(class UAnimMontage* MontageToPlay, bool bFullReload);
		float PlayFireMontage(class UAnimMontage* MontageToPlay, bool bFireLast, bool bAiming);
		float PlayEquipMontage(class UAnimMontage* MontageToPlay);
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFInventoryComponent
	 * Size -> 0x0040 (FullSize[0x00F0] - InheritedSize[0x00B0])
	 */
	class UDFInventoryComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnItemAdded;                                             // 0x00B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintAuthorityOnly, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnItemRemoved;                                           // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintAuthorityOnly, NativeAccessSpecifierPublic
		TArray<class ADFBaseItem*>                                 Items;                                                   // 0x00D0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, EditConst, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UClass*>                                      DefaultItemClasses;                                      // 0x00E0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		int32_t Size();
		bool RemoveItemAt(int32_t Index, class ADFBaseItem** OutRemovedItem, bool bDestroyItem);
		bool Remove(class ADFBaseItem* Item, bool bDestroyItem);
		bool IsValidIndex(int32_t Index);
		bool GetItem(int32_t Index, class ADFBaseItem** OutItem);
		bool FindItemByClass(class UClass* ItemClass, class ADFBaseItem** OutItem);
		bool Find(class ADFBaseItem* ItemToCompare, int32_t* OutIndex);
		void Clear(bool bDestroyItems);
		void AddDefaultInventoryItems();
		bool Add(class ADFBaseItem* Item);
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFLevelScriptActor
	 * Size -> 0x0000 (FullSize[0x0228] - InheritedSize[0x0228])
	 */
	class ADFLevelScriptActor : public ALevelScriptActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFLoadout
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UDFLoadout : public UDataAsset
	{
	public:
		TArray<class UClass*>                                      ItemClasses;                                             // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFPhysicalMaterial
	 * Size -> 0x0010 (FullSize[0x0090] - InheritedSize[0x0080])
	 */
	class UDFPhysicalMaterial : public UPhysicalMaterial
	{
	public:
		class UParticleSystem*                                     CollisionFX;                                             // 0x0080(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundCue*                                           CollisionSound;                                          // 0x0088(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFPhysicsCollisionHandler
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UDFPhysicsCollisionHandler : public UPhysicsCollisionHandler
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFPlayerCameraManager
	 * Size -> 0x0004 (FullSize[0x2740] - InheritedSize[0x273C])
	 */
	class ADFPlayerCameraManager : public APlayerCameraManager
	{
	public:
		float                                                      AimInterpSpeed;                                          // 0x273C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFPlayerComponent
	 * Size -> 0x0018 (FullSize[0x00C8] - InheritedSize[0x00B0])
	 */
	class UDFPlayerComponent : public UActorComponent
	{
	public:
		class AController*                                         ControllerOwner;                                         // 0x00B0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bWantsToRestart : 1;                                     // 0x00B8(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnTemplate, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_E523[0xF];                                   // 0x00B9(0x000F) MISSED OFFSET (PADDING)

	public:
		void RestartPlayer();
		void ReceiveSeamlessTravelToCommon(class AController* NewC, class UDFPlayerComponent* NewCPlayerComp);
		void ReceiveSeamlessTravelFromCommon(class AController* OldC, class UDFPlayerComponent* OldCPlayerComp);
		void ReceivePawnLeavingGame();
		void ReceiveGameHasEnded(class AActor* EndGameFocus, bool bIsWinner);
		bool IsPendingRestart();
		class ADFTeamState* GetTeamState();
		class APlayerState* GetPlayerState();
		class APawn* GetPawnOwner();
		float GetMinRestartDelay();
		bool CanRestartPlayer();
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFProjectileGISubsystem
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UDFProjectileGISubsystem : public UGameInstanceSubsystem
	{
	public:
		TArray<class ADFBaseProjectile*>                           PredictedProjectiles;                                    // 0x0030(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFReplInfo
	 * Size -> 0x0000 (FullSize[0x0220] - InheritedSize[0x0220])
	 */
	class ADFReplInfo : public ADFInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFSingleActionWeapAnimInstInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDFSingleActionWeapAnimInstInterface : public UInterface
	{
	public:
		float PlayActionMontage(class UAnimMontage* MontageToPlay);
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFSingleLoadWeapAnimInstInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDFSingleLoadWeapAnimInstInterface : public UInterface
	{
	public:
		float PlayStartReloadMontage(class UAnimMontage* MontageToPlay, bool bFullReload);
		float PlayEndReloadMontage(class UAnimMontage* MontageToPlay, bool bFullReload);
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFTeamAgentInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDFTeamAgentInterface : public UGenericTeamAgentInterface
	{
	public:
		void EventSetTeamNum(unsigned char NewTeamNum);
		unsigned char EventGetTeamNum();
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFTeamDefinition
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UDFTeamDefinition : public UObject
	{
	public:
		class FName                                                TeamName;                                                // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              FactionInfoClass[0x28];                                  // 0x0030(0x0028) UNKNOWN PROPERTY: SoftClassProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFTeamState
	 * Size -> 0x0030 (FullSize[0x0250] - InheritedSize[0x0220])
	 */
	class ADFTeamState : public AInfo
	{
	public:
		unsigned char                                              UnknownData_H0DZ[0x8];                                   // 0x0220(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bInitialized : 1;                                        // 0x0228(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MTBH[0x7];                                   // 0x0229(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              FactionInfoClass;                                        // 0x0230(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              TeamNum;                                                 // 0x0238(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EMRH[0x7];                                   // 0x0239(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPostInitTeam;                                          // 0x0240(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void ReceivePostInitTeam();
		void ReceiveInitTeam(class UDFTeamDefinition* InTeamDef);
		bool IsReadyToInitialize();
		bool IsPendingSetupBP();
		class UDFFactionInfo* GetFactionInfo();
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFThrowableWeapAnimInstInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDFThrowableWeapAnimInstInterface : public UInterface
	{
	public:
		float PlayThrowUnderhandMontage(class UAnimMontage* MontageToPlay);
		float PlayThrowOverhandMontage(class UAnimMontage* MontageToPlay);
		float PlayCockMontage(class UAnimMontage* MontageToPlay);
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.DFWorldSettings
	 * Size -> 0x0128 (FullSize[0x04C8] - InheritedSize[0x03A0])
	 */
	class ADFWorldSettings : public AWorldSettings
	{
	public:
		unsigned char                                              bVisibleInMapSelectUI : 1;                               // 0x03A0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AssetRegistrySearchable, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_01KL[0x7];                                   // 0x03A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                MapDisplayName;                                          // 0x03A8(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, AssetRegistrySearchable, Protected, NativeAccessSpecifierProtected
		class FText                                                MapDescription;                                          // 0x03C0(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, AssetRegistrySearchable, Protected, NativeAccessSpecifierProtected
		unsigned char                                              MapPreviewImg[0x28];                                     // 0x03D8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              MapPreviewBannerImg[0x28];                               // 0x0400(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              SupportedGameModes[0x50];                                // 0x0428(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              GameRulesetClasses[0x50];                                // 0x0478(0x0050) UNKNOWN PROPERTY: SetProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.GameSessionBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGameSessionBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		int32_t STATIC_GetMinPlayers(class UObject* WorldContextObj);
		int32_t STATIC_GetMaxSpectators(class UObject* WorldContextObj);
		int32_t STATIC_GetMaxPlayers(class UObject* WorldContextObj);
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.SpawnPointProviderInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USpawnPointProviderInterface : public UInterface
	{
	public:
		bool GetSpawnPointCollisionHandlingOverrideBP(const struct FSpawnPointDef& SpawnPoint, ESpawnActorCollisionHandlingMethod* OutSpawnCollisionMethod);
		int32_t GetAllSpawnPointsBP(TArray<struct FSpawnPointDef>* SpawnPoints);
		bool FindSpawnPointBP(int32_t SpawnPointID, struct FSpawnPointDef* FoundSpawnPoint);
		bool CanSpawnActorFromSpawnPointBP(const struct FSpawnPointDef& SpawnPoint, class UClass* SpawnActorClass);
		bool CanRestartPlayerFromSpawnPointBP(const struct FSpawnPointDef& SpawnPoint, class AController* Player, class UClass* PlayerPawnClass);
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.SpawnPointStatics
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USpawnPointStatics : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_SpawnPointExists(class UObject* Target, int32_t SpawnPointID);
		bool STATIC_GetSpawnPointCollisionHandlingOverride(class UObject* Target, const struct FSpawnPointDef& SpawnPoint, ESpawnActorCollisionHandlingMethod* OutSpawnCollisionMethod);
		int32_t STATIC_GetAllSpawnPointTransforms(class UObject* Target, TArray<struct FTransform>* SpawnPointTransforms);
		int32_t STATIC_GetAllSpawnPoints(class UObject* Target, TArray<struct FSpawnPointDef>* SpawnPoints);
		bool STATIC_FindSpawnPoint(class UObject* Target, int32_t SpawnPointID, struct FSpawnPointDef* FoundSpawnPoint);
		bool STATIC_CanSpawnActorFromSpawnPoint(class UObject* Target, const struct FSpawnPointDef& SpawnPoint, class UClass* SpawnActorClass);
		bool STATIC_CanSpawnActorFromAnySpawnPoint(class UObject* Target, class UClass* SpawnActorClass);
		bool STATIC_CanRestartPlayerFromSpawnPoint(class UObject* Target, const struct FSpawnPointDef& SpawnPoint, class AController* Player, class UClass* PlayerPawnClass);
		bool STATIC_CanRestartPlayerFromAnySpawnPoint(class UObject* Target, class AController* Player, class UClass* PlayerPawnClass);
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.UseableInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUseableInterface : public UInterface
	{
	public:
		void Used(class AActor* Invoker);
		static UClass* StaticClass();
	};

	/**
	 * Class DonkehFramework.VisibilityInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVisibilityInterface : public UInterface
	{
	public:
		struct FVector EventGetFocalPoint();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
