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
	 * 		Name   -> PredefinedFunction UHeightTriggerableAudioComponentParams.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHeightTriggerableAudioComponentParams::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SpireFramework.HeightTriggerableAudioComponentParams");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03E76BD0
	 * 		Name   -> Function SpireFramework.HeightTriggerableEffectsComponent.SetMovementDirection
	 * 		Flags  -> (Final, RequiredAPI, BlueprintCosmetic, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EDirectionOfMovement                               InMovement                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHeightTriggerableEffectsComponent::SetMovementDirection(EDirectionOfMovement InMovement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpireFramework.HeightTriggerableEffectsComponent.SetMovementDirection");
		
		UHeightTriggerableEffectsComponent_SetMovementDirection_Params params {};
		params.InMovement = InMovement;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHeightTriggerableEffectsComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHeightTriggerableEffectsComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SpireFramework.HeightTriggerableEffectsComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASpireResource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASpireResource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SpireFramework.SpireResource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpireServiceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpireServiceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SpireFramework.SpireServiceInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpireServiceParams.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpireServiceParams::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SpireFramework.SpireServiceParams");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03E76AA0
	 * 		Name   -> Function SpireFramework.SpireService.OnRep_SpireLevels
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		TArray<struct FSpireInfo>                          InPreviousSpireLevels                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void ASpireService::OnRep_SpireLevels(TArray<struct FSpireInfo> InPreviousSpireLevels)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpireFramework.SpireService.OnRep_SpireLevels");
		
		ASpireService_OnRep_SpireLevels_Params params {};
		params.InPreviousSpireLevels = InPreviousSpireLevels;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASpireService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASpireService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SpireFramework.SpireService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpireStreamedLevelDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpireStreamedLevelDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SpireFramework.SpireStreamedLevelDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpireSettingsInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpireSettingsInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SpireFramework.SpireSettingsInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASpireShippingDrawDebugActorSphereCollection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASpireShippingDrawDebugActorSphereCollection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SpireFramework.SpireShippingDrawDebugActorSphereCollection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleLoadSpireStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleLoadSpireStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SpireFramework.TaleLoadSpireStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03E76B50
	 * 		Name   -> Function SpireFramework.TaleSpireService.RegisterResetMechanismInterface
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      InMechanismResetInterface                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTaleSpireService::RegisterResetMechanismInterface(class AActor* InMechanismResetInterface)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpireFramework.TaleSpireService.RegisterResetMechanismInterface");
		
		UTaleSpireService_RegisterResetMechanismInterface_Params params {};
		params.InMechanismResetInterface = InMechanismResetInterface;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03E76A70
	 * 		Name   -> Function SpireFramework.TaleSpireService.IsSpireVisible
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTaleSpireService::IsSpireVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpireFramework.TaleSpireService.IsSpireVisible");
		
		UTaleSpireService_IsSpireVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleSpireService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleSpireService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SpireFramework.TaleSpireService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleSpireServiceDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleSpireServiceDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SpireFramework.TaleSpireServiceDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleLoadSpireStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleLoadSpireStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SpireFramework.TaleLoadSpireStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleMakeSpireVisibleStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleMakeSpireVisibleStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SpireFramework.TaleMakeSpireVisibleStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleMakeSpireVisibleStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleMakeSpireVisibleStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SpireFramework.TaleMakeSpireVisibleStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleRegisterSpireStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleRegisterSpireStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SpireFramework.TaleRegisterSpireStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleRegisterSpireStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleRegisterSpireStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SpireFramework.TaleRegisterSpireStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleReleaseSpireStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleReleaseSpireStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SpireFramework.TaleReleaseSpireStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleReleaseSpireStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleReleaseSpireStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SpireFramework.TaleReleaseSpireStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleUnloadSpireStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleUnloadSpireStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SpireFramework.TaleUnloadSpireStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleUnloadSpireStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleUnloadSpireStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SpireFramework.TaleUnloadSpireStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleWaitForSpireToLoadStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleWaitForSpireToLoadStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SpireFramework.TaleWaitForSpireToLoadStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleWaitForSpireToLoadStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleWaitForSpireToLoadStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SpireFramework.TaleWaitForSpireToLoadStepDesc");
		return ptr;
	}

}


