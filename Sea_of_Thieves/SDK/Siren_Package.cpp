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
	 * 		Name   -> PredefinedFunction USirenTeleportAIAbilityType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USirenTeleportAIAbilityType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Siren.SirenTeleportAIAbilityType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDistantIdleAIAbility.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDistantIdleAIAbility::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Siren.DistantIdleAIAbility");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDistantIdleAIAbilityParams.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDistantIdleAIAbilityParams::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Siren.DistantIdleAIAbilityParams");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDistantIdleAIAbilityType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDistantIdleAIAbilityType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Siren.DistantIdleAIAbilityType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScratchAIAbility.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScratchAIAbility::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Siren.ScratchAIAbility");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScratchAIAbilityParams.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScratchAIAbilityParams::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Siren.ScratchAIAbilityParams");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScratchAIAbilityType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScratchAIAbilityType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Siren.ScratchAIAbilityType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USirenCalmHealStrategyId.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USirenCalmHealStrategyId::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Siren.SirenCalmHealStrategyId");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASirenController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASirenController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Siren.SirenController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USirenEmeraldHealStatus.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USirenEmeraldHealStatus::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Siren.SirenEmeraldHealStatus");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USirenPartsDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USirenPartsDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Siren.SirenPartsDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USirenRubyHealStatus.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USirenRubyHealStatus::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Siren.SirenRubyHealStatus");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USirenSapphireHealStatus.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USirenSapphireHealStatus::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Siren.SirenSapphireHealStatus");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USirenScratchRespiteStrategyId.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USirenScratchRespiteStrategyId::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Siren.SirenScratchRespiteStrategyId");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USirenScratchStrategyId.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USirenScratchStrategyId::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Siren.SirenScratchStrategyId");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USirenSongAIAbility.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USirenSongAIAbility::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Siren.SirenSongAIAbility");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USirenSongAIAbilityParams.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USirenSongAIAbilityParams::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Siren.SirenSongAIAbilityParams");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USirenSongAIAbilityType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USirenSongAIAbilityType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Siren.SirenSongAIAbilityType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USirenTeleportAIAbility.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USirenTeleportAIAbility::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Siren.SirenTeleportAIAbility");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USirenTeleportAIAbilityParams.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USirenTeleportAIAbilityParams::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Siren.SirenTeleportAIAbilityParams");
		return ptr;
	}

}


