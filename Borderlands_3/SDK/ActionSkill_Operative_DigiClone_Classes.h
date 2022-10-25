#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * BlueprintGeneratedClass ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C
	 * Size -> 0x0188 (FullSize[0x0588] - InheritedSize[0x0400])
	 */
	class UActionSkill_Operative_DigiClone_C : public UOakActionAbility_Digiclone
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0400(0x0008) Transient, DuplicateTransient
		bool                                                       PanicButtonTriggered;                                    // 0x0408(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AllowJustAcceptItProjectile;                             // 0x0409(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bSpawnedDigiclone;                                       // 0x040A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LGCU[0x1];                                   // 0x040B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      JustAcceptItStoredDamage;                                // 0x040C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FEnvQueryParams                                     CloneExitLocationDeafultParams;                          // 0x0410(0x00B8) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		struct FEnvQueryParams                                     CloneExitLocationPass1Params;                            // 0x04C8(0x00B8) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		float                                                      NovaRadius;                                              // 0x0580(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NovaCryoMultiplier;                                      // 0x0584(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetDigiCloneReference(class AActor** Digiclone);
		void Is_DigiClone_Active(bool* Return);
		void GetQueryParamsForCloneSwapLocationAttempt(int32_t Attempt, struct FEnvQueryParams* Params, class AActor** QueryContext);
		bool ShouldStopAbilityOnPawnSlotComponentAttach();
		void PlayDigiCloneSpawnFX(class ABPChar_DigiClone_Base_C* NewClone);
		void PayDigiCloneSpawnCost(int32_t GrenadeSpawnCost);
		void GetDigiCloneGrenadeSpawnCost(int32_t* res);
		void GetDigicloneClass(int32_t GrenadeSpawnCost, class UClass** res);
		void DoBurst();
		bool TryJustAcceptRefund(float Damage, const struct FVector& HitLocation, const struct FVector& HitDirection);
		class AOakCharacter* SpawnNewDigiclone(const struct FVector& Location);
		void StartDistractionPrinciple();
		bool ShouldAbortActivation(unsigned char* OutAbortCode);
		float GetCooldownRestartPercent();
		void Add_Swap_Places_Modifier();
		void Corsican(float Damage, class APawn* DamageSource);
		void OnStartActionAbility();
		void SwapPlaces(ECloneSwapReason Reason);
		void ReleaseDigiclone(class AOakCharacter* Digiclone);
		void OnCorsicanDamage(float Damage, class APawn* DamageSource);
		void BeginDetonateClone();
		void CancelDetonateClone();
		void NotifyPanicButtonTriggered();
		void Just_Accept_It_Timer_Done();
		void OnCloneSwapStarted();
		void OnPlayerSwapStarted();
		void OnPlayerSwapSucceeded();
		void StartSeperationAnxietyNova(const struct FVector& Loc);
		void OnCloneSwapSucceeded();
		void OnPlayerSwapFailed();
		void OnCloneSwapFailed();
		void ExecuteUbergraph_ActionSkill_Operative_DigiClone(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
