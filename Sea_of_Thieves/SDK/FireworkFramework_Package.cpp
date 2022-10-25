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
	 * 		Name   -> PredefinedFunction UFireworkAmbientLightComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFireworkAmbientLightComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FireworkFramework.FireworkAmbientLightComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFireworkDamagerType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFireworkDamagerType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FireworkFramework.FireworkDamagerType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFireworkFeedbackDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFireworkFeedbackDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FireworkFramework.FireworkFeedbackDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFireworkDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFireworkDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FireworkFramework.FireworkDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFireworkExplosion.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFireworkExplosion::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FireworkFramework.FireworkExplosion");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFireworkItemInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFireworkItemInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FireworkFramework.FireworkItemInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFireworkServiceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFireworkServiceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FireworkFramework.FireworkServiceInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFireworkProjectile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFireworkProjectile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FireworkFramework.FireworkProjectile");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFireworkService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFireworkService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FireworkFramework.FireworkService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFireworksSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFireworksSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FireworkFramework.FireworksSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFireworksSettingsDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFireworksSettingsDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FireworkFramework.FireworksSettingsDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFireworkStatsComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFireworkStatsComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FireworkFramework.FireworkStatsComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UImpactProjectileIdFirework.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UImpactProjectileIdFirework::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FireworkFramework.ImpactProjectileIdFirework");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULoadableFireworkComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoadableFireworkComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FireworkFramework.LoadableFireworkComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProjectileAnimationComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProjectileAnimationComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FireworkFramework.ProjectileAnimationComponent");
		return ptr;
	}

}


