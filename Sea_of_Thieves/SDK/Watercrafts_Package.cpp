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
	 * 		Name   -> PredefinedFunction UControllableOarsInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControllableOarsInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Watercrafts.ControllableOarsInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03AEB560
	 * 		Name   -> Function Watercrafts.FakeShip.OnAttachedItemEndPlay
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFakeShip::OnAttachedItemEndPlay(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Watercrafts.FakeShip.OnAttachedItemEndPlay");
		
		AFakeShip_OnAttachedItemEndPlay_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFakeShip.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFakeShip::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Watercrafts.FakeShip");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWatercraftTrackerInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWatercraftTrackerInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Watercrafts.WatercraftTrackerInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03AEB660
	 * 		Name   -> Function Watercrafts.ItemProxyWatercraftTrackerComponent.OnRep_CurrentWatercraft
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AActor*                                      PreviousWatercraft                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UItemProxyWatercraftTrackerComponent::OnRep_CurrentWatercraft(class AActor* PreviousWatercraft)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Watercrafts.ItemProxyWatercraftTrackerComponent.OnRep_CurrentWatercraft");
		
		UItemProxyWatercraftTrackerComponent_OnRep_CurrentWatercraft_Params params {};
		params.PreviousWatercraft = PreviousWatercraft;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03AEB5E0
	 * 		Name   -> Function Watercrafts.ItemProxyWatercraftTrackerComponent.OnCurrentWatercraftDestroyed
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AActor*                                      DestroyedWatercraft                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UItemProxyWatercraftTrackerComponent::OnCurrentWatercraftDestroyed(class AActor* DestroyedWatercraft)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Watercrafts.ItemProxyWatercraftTrackerComponent.OnCurrentWatercraftDestroyed");
		
		UItemProxyWatercraftTrackerComponent_OnCurrentWatercraftDestroyed_Params params {};
		params.DestroyedWatercraft = DestroyedWatercraft;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UItemProxyWatercraftTrackerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItemProxyWatercraftTrackerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Watercrafts.ItemProxyWatercraftTrackerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UItemProxyWatercraftTrackerComponentDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItemProxyWatercraftTrackerComponentDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Watercrafts.ItemProxyWatercraftTrackerComponentDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URowboatAudioComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URowboatAudioComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Watercrafts.RowboatAudioComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URowboatAudioComponentParams.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URowboatAudioComponentParams::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Watercrafts.RowboatAudioComponentParams");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URowboatDescDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URowboatDescDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Watercrafts.RowboatDescDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URowboatOarsLeftForwardNotificationInputId.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URowboatOarsLeftForwardNotificationInputId::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Watercrafts.RowboatOarsLeftForwardNotificationInputId");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URowboatOarsLeftForwardDeactivatedNotificationInputId.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URowboatOarsLeftForwardDeactivatedNotificationInputId::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Watercrafts.RowboatOarsLeftForwardDeactivatedNotificationInputId");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URowboatOarsRightForwardNotificationInputId.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URowboatOarsRightForwardNotificationInputId::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Watercrafts.RowboatOarsRightForwardNotificationInputId");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URowboatOarsRightForwardDeactivatedNotificationInputId.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URowboatOarsRightForwardDeactivatedNotificationInputId::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Watercrafts.RowboatOarsRightForwardDeactivatedNotificationInputId");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URowboatOarsLeftBrakingActivatedNotificationInputId.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URowboatOarsLeftBrakingActivatedNotificationInputId::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Watercrafts.RowboatOarsLeftBrakingActivatedNotificationInputId");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URowboatOarsLeftBrakingDeactivatedNotificationInputId.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URowboatOarsLeftBrakingDeactivatedNotificationInputId::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Watercrafts.RowboatOarsLeftBrakingDeactivatedNotificationInputId");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URowboatOarsRightBrakingActivatedNotificationInputId.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URowboatOarsRightBrakingActivatedNotificationInputId::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Watercrafts.RowboatOarsRightBrakingActivatedNotificationInputId");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URowboatOarsRightBrakingDeactivatedNotificationInputId.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URowboatOarsRightBrakingDeactivatedNotificationInputId::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Watercrafts.RowboatOarsRightBrakingDeactivatedNotificationInputId");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScrapeableDamageDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScrapeableDamageDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Watercrafts.ScrapeableDamageDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScrapeableInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScrapeableInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Watercrafts.ScrapeableInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScrapeableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScrapeableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Watercrafts.ScrapeableComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03AEB880
	 * 		Name   -> Function Watercrafts.Watercraft.OnRigidBodyWake
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class FName                                        InBoneName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWatercraft::OnRigidBodyWake(const class FName& InBoneName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Watercrafts.Watercraft.OnRigidBodyWake");
		
		AWatercraft_OnRigidBodyWake_Params params {};
		params.InBoneName = InBoneName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03AEB800
	 * 		Name   -> Function Watercrafts.Watercraft.OnRigidBodySleep
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class FName                                        InBoneName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWatercraft::OnRigidBodySleep(const class FName& InBoneName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Watercrafts.Watercraft.OnRigidBodySleep");
		
		AWatercraft_OnRigidBodySleep_Params params {};
		params.InBoneName = InBoneName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWatercraft.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWatercraft::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Watercrafts.Watercraft");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03AEBA80
	 * 		Name   -> Function Watercrafts.Rowboat.SetAlwaysEnabledInteractables
	 * 		Flags  -> (Final, Native, Protected, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class UChildActorComponent*>                InAlwaysEnabledInteractables                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	 */
	void ARowboat::SetAlwaysEnabledInteractables(TArray<class UChildActorComponent*> InAlwaysEnabledInteractables)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Watercrafts.Rowboat.SetAlwaysEnabledInteractables");
		
		ARowboat_SetAlwaysEnabledInteractables_Params params {};
		params.InAlwaysEnabledInteractables = InAlwaysEnabledInteractables;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03AEB6E0
	 * 		Name   -> Function Watercrafts.Rowboat.OnRep_IsSinking
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ARowboat::OnRep_IsSinking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Watercrafts.Rowboat.OnRep_IsSinking");
		
		ARowboat_OnRep_IsSinking_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARowboat.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARowboat::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Watercrafts.Rowboat");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URowboatPartInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URowboatPartInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Watercrafts.RowboatPartInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URowboatSpawnParamsDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URowboatSpawnParamsDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Watercrafts.RowboatSpawnParamsDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URowingActionStateId.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URowingActionStateId::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Watercrafts.RowingActionStateId");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URowingInputComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URowingInputComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Watercrafts.RowingInputComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStorageSeat.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStorageSeat::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Watercrafts.StorageSeat");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestSinkWatercraftStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestSinkWatercraftStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Watercrafts.TaleQuestSinkWatercraftStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestWatercraftService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestWatercraftService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Watercrafts.TaleQuestWatercraftService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestWatercraftServiceDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestWatercraftServiceDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Watercrafts.TaleQuestWatercraftServiceDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestSinkWatercraftStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestSinkWatercraftStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Watercrafts.TaleQuestSinkWatercraftStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestSpawnWatercraftStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestSpawnWatercraftStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Watercrafts.TaleQuestSpawnWatercraftStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestSpawnWatercraftStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestSpawnWatercraftStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Watercrafts.TaleQuestSpawnWatercraftStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03AEB530
	 * 		Name   -> Function Watercrafts.TaleQuestWatercraftFunctionLibrary.GetFirstSpawnedWatercraft
	 * 		Flags  -> (Final, Native, Public)
	 */
	class AWatercraft* UTaleQuestWatercraftFunctionLibrary::GetFirstSpawnedWatercraft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Watercrafts.TaleQuestWatercraftFunctionLibrary.GetFirstSpawnedWatercraft");
		
		UTaleQuestWatercraftFunctionLibrary_GetFirstSpawnedWatercraft_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03AEB430
	 * 		Name   -> Function Watercrafts.TaleQuestWatercraftFunctionLibrary.FilterPointsByDistanceFromWatercraft
	 * 		Flags  -> (Final, Native, Public, HasOutParms, Const)
	 * Parameters:
	 * 		float                                              MinDistance                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FOrientedPoint>                      Points                                                     (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UTaleQuestWatercraftFunctionLibrary::FilterPointsByDistanceFromWatercraft(float MinDistance, TArray<struct FOrientedPoint>* Points)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Watercrafts.TaleQuestWatercraftFunctionLibrary.FilterPointsByDistanceFromWatercraft");
		
		UTaleQuestWatercraftFunctionLibrary_FilterPointsByDistanceFromWatercraft_Params params {};
		params.MinDistance = MinDistance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Points != nullptr)
			*Points = params.Points;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestWatercraftFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestWatercraftFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Watercrafts.TaleQuestWatercraftFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03AEBB30
	 * 		Name   -> Function Watercrafts.WatercraftBlueprintFunctionLibrary.SpawnWatercraft
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      WatercraftClass                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    Rotation                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class AWatercraft* UWatercraftBlueprintFunctionLibrary::STATIC_SpawnWatercraft(class UObject* WorldContextObject, class UClass* WatercraftClass, const struct FVector& Location, const struct FRotator& Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Watercrafts.WatercraftBlueprintFunctionLibrary.SpawnWatercraft");
		
		UWatercraftBlueprintFunctionLibrary_SpawnWatercraft_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.WatercraftClass = WatercraftClass;
		params.Location = Location;
		params.Rotation = Rotation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWatercraftBlueprintFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWatercraftBlueprintFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Watercrafts.WatercraftBlueprintFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWatercraftServiceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWatercraftServiceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Watercrafts.WatercraftServiceInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWatercraftService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWatercraftService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Watercrafts.WatercraftService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWatercraftSpawnData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWatercraftSpawnData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Watercrafts.WatercraftSpawnData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03AEB900
	 * 		Name   -> Function Watercrafts.WatercraftTrackerComponent.OnWatercraftDestroyed
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AActor*                                      WatercraftActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWatercraftTrackerComponent::OnWatercraftDestroyed(class AActor* WatercraftActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Watercrafts.WatercraftTrackerComponent.OnWatercraftDestroyed");
		
		UWatercraftTrackerComponent_OnWatercraftDestroyed_Params params {};
		params.WatercraftActor = WatercraftActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWatercraftTrackerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWatercraftTrackerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Watercrafts.WatercraftTrackerComponent");
		return ptr;
	}

}


