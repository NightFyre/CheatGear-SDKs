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
	 * 		Name   -> PredefinedFunction UAshenLordAshCloudSetupDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAshenLordAshCloudSetupDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NaturalDisasters.AshenLordAshCloudSetupDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function NaturalDisasters.AshenLordAshCloud.UpdatePostSettingsBP
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAshenLordAshCloud::UpdatePostSettingsBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NaturalDisasters.AshenLordAshCloud.UpdatePostSettingsBP");
		
		AAshenLordAshCloud_UpdatePostSettingsBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function NaturalDisasters.AshenLordAshCloud.SetDissipationDensityBP
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              CloudDensity                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAshenLordAshCloud::SetDissipationDensityBP(float CloudDensity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NaturalDisasters.AshenLordAshCloud.SetDissipationDensityBP");
		
		AAshenLordAshCloud_SetDissipationDensityBP_Params params {};
		params.CloudDensity = CloudDensity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03CD2B40
	 * 		Name   -> Function NaturalDisasters.AshenLordAshCloud.OnRep_StateChanged
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AAshenLordAshCloud::OnRep_StateChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NaturalDisasters.AshenLordAshCloud.OnRep_StateChanged");
		
		AAshenLordAshCloud_OnRep_StateChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAshenLordAshCloud.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAshenLordAshCloud::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NaturalDisasters.AshenLordAshCloud");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03CD2290
	 * 		Name   -> Function NaturalDisasters.AshenLordVolcano.Multicast_FireProjectile
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            WeightedVolcanoProjectileIndex                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     AuthoritySpawnLocation                                     (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     LaunchVelocity                                             (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     RotationRate                                               (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void AAshenLordVolcano::Multicast_FireProjectile(int32_t WeightedVolcanoProjectileIndex, const struct FVector& AuthoritySpawnLocation, const struct FVector& LaunchVelocity, const struct FVector& RotationRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NaturalDisasters.AshenLordVolcano.Multicast_FireProjectile");
		
		AAshenLordVolcano_Multicast_FireProjectile_Params params {};
		params.WeightedVolcanoProjectileIndex = WeightedVolcanoProjectileIndex;
		params.AuthoritySpawnLocation = AuthoritySpawnLocation;
		params.LaunchVelocity = LaunchVelocity;
		params.RotationRate = RotationRate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAshenLordVolcano.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAshenLordVolcano::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NaturalDisasters.AshenLordVolcano");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVolcanoSetupDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVolcanoSetupDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NaturalDisasters.VolcanoSetupDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAshenLordVolcanoSetupDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAshenLordVolcanoSetupDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NaturalDisasters.AshenLordVolcanoSetupDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03CD2A60
	 * 		Name   -> Function NaturalDisasters.AshenLordWorldEndCloud.OnRep_CloudStateChange
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AAshenLordWorldEndCloud::OnRep_CloudStateChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NaturalDisasters.AshenLordWorldEndCloud.OnRep_CloudStateChange");
		
		AAshenLordWorldEndCloud_OnRep_CloudStateChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function NaturalDisasters.AshenLordWorldEndCloud.AnimateCloud
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              AdjustedLifetime                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAshenLordWorldEndCloud::AnimateCloud(float AdjustedLifetime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NaturalDisasters.AshenLordWorldEndCloud.AnimateCloud");
		
		AAshenLordWorldEndCloud_AnimateCloud_Params params {};
		params.AdjustedLifetime = AdjustedLifetime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAshenLordWorldEndCloud.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAshenLordWorldEndCloud::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NaturalDisasters.AshenLordWorldEndCloud");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03CD2B00
	 * 		Name   -> Function NaturalDisasters.Geyser.OnRep_GeyserState
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AGeyser::OnRep_GeyserState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NaturalDisasters.Geyser.OnRep_GeyserState");
		
		AGeyser_OnRep_GeyserState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03CD24B0
	 * 		Name   -> Function NaturalDisasters.Geyser.Multicast_TriggerExplosion
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 */
	void AGeyser::Multicast_TriggerExplosion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NaturalDisasters.Geyser.Multicast_TriggerExplosion");
		
		AGeyser_Multicast_TriggerExplosion_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGeyser.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGeyser::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NaturalDisasters.Geyser");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03CD2570
	 * 		Name   -> Function NaturalDisasters.DisableGeyserMechanismAction.OnActionStateChanged
	 * 		Flags  -> (Native, Public)
	 * Parameters:
	 * 		EMechanismActionState                              PreviousState                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EMechanismActionState                              NewState                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      InInstigator                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADisableGeyserMechanismAction::OnActionStateChanged(EMechanismActionState PreviousState, EMechanismActionState NewState, class AActor* InInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NaturalDisasters.DisableGeyserMechanismAction.OnActionStateChanged");
		
		ADisableGeyserMechanismAction_OnActionStateChanged_Params params {};
		params.PreviousState = PreviousState;
		params.NewState = NewState;
		params.InInstigator = InInstigator;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03CD24D0
	 * 		Name   -> Function NaturalDisasters.DisableGeyserMechanismAction.OnActionReset
	 * 		Flags  -> (Native, Public)
	 */
	void ADisableGeyserMechanismAction::OnActionReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NaturalDisasters.DisableGeyserMechanismAction.OnActionReset");
		
		ADisableGeyserMechanismAction_OnActionReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADisableGeyserMechanismAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADisableGeyserMechanismAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NaturalDisasters.DisableGeyserMechanismAction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEarthquakeSetupDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEarthquakeSetupDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NaturalDisasters.EarthquakeSetupDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03CD2A80
	 * 		Name   -> Function NaturalDisasters.Earthquake.OnRep_EarthquakeState
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		EEarthquakeState                                   OldEarthquakeState                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEarthquake::OnRep_EarthquakeState(EEarthquakeState OldEarthquakeState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NaturalDisasters.Earthquake.OnRep_EarthquakeState");
		
		AEarthquake_OnRep_EarthquakeState_Params params {};
		params.OldEarthquakeState = OldEarthquakeState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AEarthquake.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AEarthquake::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NaturalDisasters.Earthquake");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03CD2810
	 * 		Name   -> Function NaturalDisasters.MechanismGeyser.OnMechanismActionStateChanged
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		EMechanismActionState                              PreviousState                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EMechanismActionState                              NewState                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      InInstigator                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMechanismGeyser::OnMechanismActionStateChanged(EMechanismActionState PreviousState, EMechanismActionState NewState, class AActor* InInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NaturalDisasters.MechanismGeyser.OnMechanismActionStateChanged");
		
		AMechanismGeyser_OnMechanismActionStateChanged_Params params {};
		params.PreviousState = PreviousState;
		params.NewState = NewState;
		params.InInstigator = InInstigator;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03CD2770
	 * 		Name   -> Function NaturalDisasters.MechanismGeyser.OnMechanismActionReset
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AMechanismGeyser::OnMechanismActionReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NaturalDisasters.MechanismGeyser.OnMechanismActionReset");
		
		AMechanismGeyser_OnMechanismActionReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMechanismGeyser.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMechanismGeyser::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NaturalDisasters.MechanismGeyser");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeyserManagerSetupDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeyserManagerSetupDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NaturalDisasters.GeyserManagerSetupDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNaturalDisasterRegistryInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNaturalDisasterRegistryInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NaturalDisasters.NaturalDisasterRegistryInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGeyserManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGeyserManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NaturalDisasters.GeyserManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03CD26E0
	 * 		Name   -> Function NaturalDisasters.GeyserItemSpawnComponent.OnGeyserSpawned
	 * 		Flags  -> (Final, Native, Private, HasOutParms, HasDefaults)
	 * Parameters:
	 * 		struct FVector                                     GeyserSpawnLocation                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void UGeyserItemSpawnComponent::OnGeyserSpawned(const struct FVector& GeyserSpawnLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NaturalDisasters.GeyserItemSpawnComponent.OnGeyserSpawned");
		
		UGeyserItemSpawnComponent_OnGeyserSpawned_Params params {};
		params.GeyserSpawnLocation = GeyserSpawnLocation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeyserItemSpawnComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeyserItemSpawnComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NaturalDisasters.GeyserItemSpawnComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeyserSetupDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeyserSetupDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NaturalDisasters.GeyserSetupDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULavaStatus.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULavaStatus::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NaturalDisasters.LavaStatus");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03CD29B0
	 * 		Name   -> Function NaturalDisasters.LavaZone.OnRep_ActorsInZone
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		TArray<class AActor*>                              PreviousActors                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void ALavaZone::OnRep_ActorsInZone(TArray<class AActor*> PreviousActors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NaturalDisasters.LavaZone.OnRep_ActorsInZone");
		
		ALavaZone_OnRep_ActorsInZone_Params params {};
		params.PreviousActors = PreviousActors;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03CD2990
	 * 		Name   -> Function NaturalDisasters.LavaZone.OnRep_Active
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ALavaZone::OnRep_Active()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NaturalDisasters.LavaZone.OnRep_Active");
		
		ALavaZone_OnRep_Active_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALavaZone.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALavaZone::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NaturalDisasters.LavaZone");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVolcanoInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVolcanoInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NaturalDisasters.VolcanoInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVolcanoServiceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVolcanoServiceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NaturalDisasters.VolcanoServiceInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USeatStat_IslandVolcanoActive.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USeatStat_IslandVolcanoActive::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NaturalDisasters.SeatStat_IslandVolcanoActive");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USuperheatedWaterSetupDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USuperheatedWaterSetupDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NaturalDisasters.SuperheatedWaterSetupDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03CD2B20
	 * 		Name   -> Function NaturalDisasters.SuperheatedWater.OnRep_PlayersInZone
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ASuperheatedWater::OnRep_PlayersInZone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NaturalDisasters.SuperheatedWater.OnRep_PlayersInZone");
		
		ASuperheatedWater_OnRep_PlayersInZone_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASuperheatedWater.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASuperheatedWater::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NaturalDisasters.SuperheatedWater");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03CD2B60
	 * 		Name   -> Function NaturalDisasters.Volcano.OnRep_VolcanoState
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		struct FVolcanoStateData                           OldVolcanoState                                            (ConstParm, Parm)
	 */
	void AVolcano::OnRep_VolcanoState(const struct FVolcanoStateData& OldVolcanoState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NaturalDisasters.Volcano.OnRep_VolcanoState");
		
		AVolcano_OnRep_VolcanoState_Params params {};
		params.OldVolcanoState = OldVolcanoState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03CD23D0
	 * 		Name   -> Function NaturalDisasters.Volcano.Multicast_FireProjectile
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private, HasDefaults)
	 * Parameters:
	 * 		struct FVector                                     AuthoritySpawnLocation                                     (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FVolcanoProjectileData>              VolcanoProjectileDataArray                                 (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	 */
	void AVolcano::Multicast_FireProjectile(const struct FVector& AuthoritySpawnLocation, TArray<struct FVolcanoProjectileData> VolcanoProjectileDataArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NaturalDisasters.Volcano.Multicast_FireProjectile");
		
		AVolcano_Multicast_FireProjectile_Params params {};
		params.AuthoritySpawnLocation = AuthoritySpawnLocation;
		params.VolcanoProjectileDataArray = VolcanoProjectileDataArray;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AVolcano.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVolcano::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NaturalDisasters.Volcano");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVolcanoService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVolcanoService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NaturalDisasters.VolcanoService");
		return ptr;
	}

}


