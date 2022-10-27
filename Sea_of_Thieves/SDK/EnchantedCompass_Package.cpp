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
	 * 		Name   -> PredefinedFunction UEnchantedCompassProximityAnnouncementComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnchantedCompassProximityAnnouncementComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnchantedCompass.EnchantedCompassProximityAnnouncementComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMultiTargetEnchantedCompass.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMultiTargetEnchantedCompass::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnchantedCompass.MultiTargetEnchantedCompass");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x040DE1E0
	 * 		Name   -> Function EnchantedCompass.PrototypeMultiTargetEnchantedCompass.GetFloatMax
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	float APrototypeMultiTargetEnchantedCompass::GetFloatMax()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnchantedCompass.PrototypeMultiTargetEnchantedCompass.GetFloatMax");
		
		APrototypeMultiTargetEnchantedCompass_GetFloatMax_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function EnchantedCompass.PrototypeMultiTargetEnchantedCompass.CalculateDesiredYaw
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintEvent, Const)
	 * Parameters:
	 * 		struct FRotator                                    CompassRotation                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	float APrototypeMultiTargetEnchantedCompass::CalculateDesiredYaw(const struct FRotator& CompassRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnchantedCompass.PrototypeMultiTargetEnchantedCompass.CalculateDesiredYaw");
		
		APrototypeMultiTargetEnchantedCompass_CalculateDesiredYaw_Params params {};
		params.CompassRotation = CompassRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x040DE130
	 * 		Name   -> Function EnchantedCompass.PrototypeMultiTargetEnchantedCompass.BP_GetTargetLocations
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	TArray<struct FVector> APrototypeMultiTargetEnchantedCompass::BP_GetTargetLocations()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnchantedCompass.PrototypeMultiTargetEnchantedCompass.BP_GetTargetLocations");
		
		APrototypeMultiTargetEnchantedCompass_BP_GetTargetLocations_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APrototypeMultiTargetEnchantedCompass.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APrototypeMultiTargetEnchantedCompass::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnchantedCompass.PrototypeMultiTargetEnchantedCompass");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestMultiTargetCompassAddTrackedLocationStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestMultiTargetCompassAddTrackedLocationStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnchantedCompass.TaleQuestMultiTargetCompassAddTrackedLocationStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestMultiTargetCompassAddTrackedLocationStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestMultiTargetCompassAddTrackedLocationStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnchantedCompass.TaleQuestMultiTargetCompassAddTrackedLocationStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestMultiTargetCompassRemoveTrackedLocationStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestMultiTargetCompassRemoveTrackedLocationStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnchantedCompass.TaleQuestMultiTargetCompassRemoveTrackedLocationStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestMultiTargetCompassRemoveTrackedLocationStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestMultiTargetCompassRemoveTrackedLocationStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnchantedCompass.TaleQuestMultiTargetCompassRemoveTrackedLocationStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestMultiTargetCompassService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestMultiTargetCompassService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnchantedCompass.TaleQuestMultiTargetCompassService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestMultiTargetCompassServiceDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestMultiTargetCompassServiceDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnchantedCompass.TaleQuestMultiTargetCompassServiceDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestSetCompassTargetToTargetStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestSetCompassTargetToTargetStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnchantedCompass.TaleQuestSetCompassTargetToTargetStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestSetCompassTargetBaseStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestSetCompassTargetBaseStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnchantedCompass.TaleQuestSetCompassTargetBaseStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestSetCompassTargetToActorStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestSetCompassTargetToActorStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnchantedCompass.TaleQuestSetCompassTargetToActorStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestSetCompassTargetToPointStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestSetCompassTargetToPointStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnchantedCompass.TaleQuestSetCompassTargetToPointStepDesc");
		return ptr;
	}

}


