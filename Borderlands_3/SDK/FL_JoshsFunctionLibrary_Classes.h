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
	 * BlueprintGeneratedClass FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFL_JoshsFunctionLibrary_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_ValidateSpawnPoint(class USpawnPointComponent* PointToValidate, float MaxDropDistance, class UObject* __WorldContext);
		void STATIC_AIScriptedLookAtPlayers(class AActor* Target, class UObject* __WorldContext);
		void STATIC_SetBlackboardInt(const class FName& BlackboardKey, class AActor* ControlledActor, int32_t Value, class UObject* __WorldContext);
		void STATIC_GetBlackboardInt(class AActor* ControlledActor, const class FName& BlackboardKey, class UObject* __WorldContext, int32_t* Value);
		void STATIC_TestHitReaction(class AActor* Actor, Enum_TestHitReactionType Hit_Reaction_Type, Enum_TestHitReactionDirection Hit_Reaction_Direction, const struct FForceSelection& Force, class UObject* __WorldContext, class FText* Display_Text);
		void STATIC_ThrowLightProjectile(class AActor* WhoIsThrowing, class UClass* LightProjectileData, const class FName& SourceSocket, class AActor* TargetOverride, const class FName& TargetSocket, float MaxPrediction, float Speed, float AnglePercent, const struct FRotator& DirectionOffset, const struct FVector& LocalTargetOffset, int32_t DataFlags, class UObject* __WorldContext);
		void STATIC_TransformSplat(const struct FHitResult& HitResult, class UObject* __WorldContext, struct FTransform* SplatTransform);
		void STATIC_GrantSecondWind(class AActor* ActorToGrantSecondWindTo, class UObject* __WorldContext);
		void STATIC_SimpleScreenParticle(class AActor* Target, class UParticleSystem* ScreenParticle, bool AllowMultipleInstances, bool OnlyDrawIfShieldsAreDepleted, class UObject* __WorldContext);
		void STATIC_GetElementalTypeFromWeapon(class AActor* ActorWithWeapon, class UObject* __WorldContext, EOakElementalType* WeaponElement);
		void STATIC_GetBlackboardObject(class AActor* ControlledActor, const class FName& BlackboardKey, class UObject* __WorldContext, class UObject** Value);
		void STATIC_SetBlackboardObject(class AActor* ControlledActor, const class FName& BlackboardKey, class UObject* Value, class UObject* __WorldContext);
		void STATIC_Setup_for_Throw_Actor_At(class APawn* Who_is_Throwing, class AActor* TargetOverride, const class FName& TargetSocket, class UObject* __WorldContext, struct FVector* TargetLocation, struct FVector* TargetVelocity);
		void STATIC_GetCurrentTarget(class APawn* Who_s_Target, class UObject* __WorldContext, class AActor** Target);
		void STATIC_GetBlackboardFloat(class AActor* ControlledActor, const class FName& BlackboardKey, class UObject* __WorldContext, float* Value);
		void STATIC_GetBlackboardBool(class AActor* ControlledActor, const class FName& BlackboardKey, class UObject* __WorldContext, bool* Value);
		void STATIC_SetBlackboardFloat(class AActor* ControlledActor, const class FName& BlackboardKey, float Value, class UObject* __WorldContext);
		void STATIC_SetBlackboardBool(class AActor* ControlledActor, const class FName& BlackboardKey, bool Value, class UObject* __WorldContext);
		void STATIC_SetStance(class AActor* Target, class UOakStanceData* New_Stance, class UObject* __WorldContext);
		void STATIC_ForciblyResetSpawner(class ASpawner* Spawner, bool Kill_Existing_Actors, class UObject* __WorldContext);
		void STATIC_ResourceLock(class AActor* Actor, Enum_ResourceLockType Lock_Type, const class FName& Reason, bool LockState, class UObject* __WorldContext);
		void STATIC_GBXActionVariableSetup(class AActor* Actor, class UObject* __WorldContext, class AActor** MySelf, class AActor** MyTarget, class UDamageCauserComponent** MyDamageCausingComponent, class ACharacter** MyCharacter, class UTeam** MyTeam);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
