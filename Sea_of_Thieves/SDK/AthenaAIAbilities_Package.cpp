/**
 * Name: Sea_of_Thieves
 * Version: 9505844
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAreaOfEffectHealAIAbilityType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAreaOfEffectHealAIAbilityType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAIAbilities.AreaOfEffectHealAIAbilityType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeleeAIAbilityType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeleeAIAbilityType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAIAbilities.MeleeAIAbilityType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAreaOfEffectHealAIAbility.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAreaOfEffectHealAIAbility::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAIAbilities.AreaOfEffectHealAIAbility");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAreaOfEffectHealAIAbilityParams.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAreaOfEffectHealAIAbilityParams::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAIAbilities.AreaOfEffectHealAIAbilityParams");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAshenFireStatus.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAshenFireStatus::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAIAbilities.AshenFireStatus");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBullRushAIAbilityType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBullRushAIAbilityType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAIAbilities.BullRushAIAbilityType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBurrowEruptDamagerType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBurrowEruptDamagerType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAIAbilities.BurrowEruptDamagerType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x040982D0
	 * 		Name   -> Function AthenaAIAbilities.BurrowHealVFXComponent.OnRep_IsVFXActive
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UBurrowHealVFXComponent::OnRep_IsVFXActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAIAbilities.BurrowHealVFXComponent.OnRep_IsVFXActive");
		
		UBurrowHealVFXComponent_OnRep_IsVFXActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBurrowHealVFXComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBurrowHealVFXComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAIAbilities.BurrowHealVFXComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoralShieldStatus.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoralShieldStatus::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAIAbilities.CoralShieldStatus");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEelSlapAIAbilityType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEelSlapAIAbilityType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAIAbilities.EelSlapAIAbilityType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEelSlapStatus.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEelSlapStatus::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAIAbilities.EelSlapStatus");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEelThrowAIAbility.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEelThrowAIAbility::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAIAbilities.EelThrowAIAbility");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEelThrowAIAbilityParams.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEelThrowAIAbilityParams::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAIAbilities.EelThrowAIAbilityParams");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEelThrowAIAbilityType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEelThrowAIAbilityType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAIAbilities.EelThrowAIAbilityType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UElectricShieldBuffInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UElectricShieldBuffInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAIAbilities.ElectricShieldBuffInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x040982B0
	 * 		Name   -> Function AthenaAIAbilities.ElectricShieldBuffComponent.OnRep_IsShieldActive
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UElectricShieldBuffComponent::OnRep_IsShieldActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAIAbilities.ElectricShieldBuffComponent.OnRep_IsShieldActive");
		
		UElectricShieldBuffComponent_OnRep_IsShieldActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04098280
	 * 		Name   -> Function AthenaAIAbilities.ElectricShieldBuffComponent.DeactivateShield
	 * 		Flags  -> (Native, Public)
	 */
	void UElectricShieldBuffComponent::DeactivateShield()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAIAbilities.ElectricShieldBuffComponent.DeactivateShield");
		
		UElectricShieldBuffComponent_DeactivateShield_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UElectricShieldBuffComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UElectricShieldBuffComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAIAbilities.ElectricShieldBuffComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UElectricShieldStatus.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UElectricShieldStatus::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAIAbilities.ElectricShieldStatus");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UImpactMeleeAttackEelSlapId.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UImpactMeleeAttackEelSlapId::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAIAbilities.ImpactMeleeAttackEelSlapId");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeleeAIAbility.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeleeAIAbility::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAIAbilities.MeleeAIAbility");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeleeAttackId.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeleeAttackId::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAIAbilities.MeleeAttackId");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeleeAIAbilityParams.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeleeAIAbilityParams::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAIAbilities.MeleeAIAbilityParams");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEelSlapAIAbilityParams.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEelSlapAIAbilityParams::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAIAbilities.EelSlapAIAbilityParams");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEelSlapAIAbility.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEelSlapAIAbility::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAIAbilities.EelSlapAIAbility");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UComboMeleeAttackId.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UComboMeleeAttackId::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAIAbilities.ComboMeleeAttackId");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHeavyMeleeAttackId.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHeavyMeleeAttackId::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAIAbilities.HeavyMeleeAttackId");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULightMeleeAttackId.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULightMeleeAttackId::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAIAbilities.LightMeleeAttackId");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBullRushAIAbilityParams.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBullRushAIAbilityParams::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAIAbilities.BullRushAIAbilityParams");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBullRushAIAbility.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBullRushAIAbility::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAIAbilities.BullRushAIAbility");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeleeCollisionAwarenessInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeleeCollisionAwarenessInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAIAbilities.MeleeCollisionAwarenessInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USporeCloudStatus.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USporeCloudStatus::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAIAbilities.SporeCloudStatus");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USporeExposureInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USporeExposureInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAIAbilities.SporeExposureInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USporeExposureComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USporeExposureComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAIAbilities.SporeExposureComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USporeExposureStatus.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USporeExposureStatus::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAIAbilities.SporeExposureStatus");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStatusResponseActivateElectricShield.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStatusResponseActivateElectricShield::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAIAbilities.StatusResponseActivateElectricShield");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStatusResponseShowBurrowHealVFX.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStatusResponseShowBurrowHealVFX::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAIAbilities.StatusResponseShowBurrowHealVFX");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStatusResponseShowCoralShieldVFX.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStatusResponseShowCoralShieldVFX::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAIAbilities.StatusResponseShowCoralShieldVFX");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStatusResponseSporeCloud.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStatusResponseSporeCloud::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAIAbilities.StatusResponseSporeCloud");
		return ptr;
	}

}


