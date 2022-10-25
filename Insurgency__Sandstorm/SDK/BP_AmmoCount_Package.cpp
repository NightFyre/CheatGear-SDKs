/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AmmoCount.BP_AmmoCount_C.AddNewCounter
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bPlus                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Padding                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AmmoCount_C::AddNewCounter(int32_t Index, bool bPlus, float Padding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmmoCount.BP_AmmoCount_C.AddNewCounter");
		
		UBP_AmmoCount_C_AddNewCounter_Params params {};
		params.Index = Index;
		params.bPlus = bPlus;
		params.Padding = Padding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AmmoCount.BP_AmmoCount_C.Get Counters
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Chamber                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<int32_t>                                    Counters                                                   (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UBP_AmmoCount_C::Get_Counters(bool Chamber, int32_t Count, TArray<int32_t>* Counters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmmoCount.BP_AmmoCount_C.Get Counters");
		
		UBP_AmmoCount_C_Get_Counters_Params params {};
		params.Chamber = Chamber;
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Counters != nullptr)
			*Counters = params.Counters;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AmmoCount.BP_AmmoCount_C.HasNotNullCounter
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TArray<int32_t>                                    Counters                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		bool                                               HasNotNull                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_AmmoCount_C::HasNotNullCounter(TArray<int32_t>* Counters, bool* HasNotNull)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmmoCount.BP_AmmoCount_C.HasNotNullCounter");
		
		UBP_AmmoCount_C_HasNotNullCounter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Counters != nullptr)
			*Counters = params.Counters;
		if (HasNotNull != nullptr)
			*HasNotNull = params.HasNotNull;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AmmoCount.BP_AmmoCount_C.HandleGrenadeLauncherType
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CurrentMagIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MagFrac                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EAmmoContainerType                                 ContainerType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsHandled                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            NextMagIndexOut                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AmmoCount_C::HandleGrenadeLauncherType(int32_t CurrentMagIndex, float MagFrac, EAmmoContainerType ContainerType, bool* bIsHandled, int32_t* NextMagIndexOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmmoCount.BP_AmmoCount_C.HandleGrenadeLauncherType");
		
		UBP_AmmoCount_C_HandleGrenadeLauncherType_Params params {};
		params.CurrentMagIndex = CurrentMagIndex;
		params.MagFrac = MagFrac;
		params.ContainerType = ContainerType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsHandled != nullptr)
			*bIsHandled = params.bIsHandled;
		if (NextMagIndexOut != nullptr)
			*NextMagIndexOut = params.NextMagIndexOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AmmoCount.BP_AmmoCount_C.UpdateSingleLoadReserveTextVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_AmmoCount_C::UpdateSingleLoadReserveTextVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmmoCount.BP_AmmoCount_C.UpdateSingleLoadReserveTextVisibility");
		
		UBP_AmmoCount_C_UpdateSingleLoadReserveTextVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AmmoCount.BP_AmmoCount_C.GetTextForContainer
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		EAmmoContainerType                                 Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UBP_AmmoCount_C::GetTextForContainer(EAmmoContainerType Type, class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmmoCount.BP_AmmoCount_C.GetTextForContainer");
		
		UBP_AmmoCount_C_GetTextForContainer_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AmmoCount.BP_AmmoCount_C.OnMagazineScavenged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AINSSoldier*                                 Soldier                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AItemWeapon*                                 Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AmmoCount_C::OnMagazineScavenged(class AINSSoldier* Soldier, class AItemWeapon* Weapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmmoCount.BP_AmmoCount_C.OnMagazineScavenged");
		
		UBP_AmmoCount_C_OnMagazineScavenged_Params params {};
		params.Soldier = Soldier;
		params.Weapon = Weapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AmmoCount.BP_AmmoCount_C.OnUseBegin
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AINSSoldier*                                 Soldier                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      UsingActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EUseItem                                           Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AmmoCount_C::OnUseBegin(class AINSSoldier* Soldier, class AActor* UsingActor, EUseItem Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmmoCount.BP_AmmoCount_C.OnUseBegin");
		
		UBP_AmmoCount_C_OnUseBegin_Params params {};
		params.Soldier = Soldier;
		params.UsingActor = UsingActor;
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AmmoCount.BP_AmmoCount_C.OnSoldierSpawned
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_AmmoCount_C::OnSoldierSpawned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmmoCount.BP_AmmoCount_C.OnSoldierSpawned");
		
		UBP_AmmoCount_C_OnSoldierSpawned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AmmoCount.BP_AmmoCount_C.UpdateLastMagVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_AmmoCount_C::UpdateLastMagVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmmoCount.BP_AmmoCount_C.UpdateLastMagVisibility");
		
		UBP_AmmoCount_C_UpdateLastMagVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AmmoCount.BP_AmmoCount_C.UpdateAmmoCounter
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<int32_t>                                    NewAmmoCounter                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UBP_AmmoCount_C::UpdateAmmoCounter(TArray<int32_t>* NewAmmoCounter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmmoCount.BP_AmmoCount_C.UpdateAmmoCounter");
		
		UBP_AmmoCount_C_UpdateAmmoCounter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewAmmoCounter != nullptr)
			*NewAmmoCounter = params.NewAmmoCounter;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AmmoCount.BP_AmmoCount_C.Update Representative Ammo Count
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<int32_t>                                    NewCounts                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UBP_AmmoCount_C::Update_Representative_Ammo_Count(TArray<int32_t>* NewCounts)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmmoCount.BP_AmmoCount_C.Update Representative Ammo Count");
		
		UBP_AmmoCount_C_Update_Representative_Ammo_Count_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewCounts != nullptr)
			*NewCounts = params.NewCounts;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AmmoCount.BP_AmmoCount_C.UpdateActiveMagAnimation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_AmmoCount_C::UpdateActiveMagAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmmoCount.BP_AmmoCount_C.UpdateActiveMagAnimation");
		
		UBP_AmmoCount_C_UpdateActiveMagAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AmmoCount.BP_AmmoCount_C.UpdateActiveMagazine
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_AmmoCount_C::UpdateActiveMagazine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmmoCount.BP_AmmoCount_C.UpdateActiveMagazine");
		
		UBP_AmmoCount_C_UpdateActiveMagazine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AmmoCount.BP_AmmoCount_C.SetupMagwellRepresentation
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EAmmoContainerType                                 Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSetContainerName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_AmmoCount_C::SetupMagwellRepresentation(EAmmoContainerType Index, bool bSetContainerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmmoCount.BP_AmmoCount_C.SetupMagwellRepresentation");
		
		UBP_AmmoCount_C_SetupMagwellRepresentation_Params params {};
		params.Index = Index;
		params.bSetContainerName = bSetContainerName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AmmoCount.BP_AmmoCount_C.ShouldDisplayRedFlashingMagazine
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Display                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_AmmoCount_C::ShouldDisplayRedFlashingMagazine(bool* Display)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmmoCount.BP_AmmoCount_C.ShouldDisplayRedFlashingMagazine");
		
		UBP_AmmoCount_C_ShouldDisplayRedFlashingMagazine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Display != nullptr)
			*Display = params.Display;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AmmoCount.BP_AmmoCount_C.OnReloadInterrupted
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_AmmoCount_C::OnReloadInterrupted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmmoCount.BP_AmmoCount_C.OnReloadInterrupted");
		
		UBP_AmmoCount_C_OnReloadInterrupted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AmmoCount.BP_AmmoCount_C.UpdateAmmoType
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_AmmoCount_C::UpdateAmmoType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmmoCount.BP_AmmoCount_C.UpdateAmmoType");
		
		UBP_AmmoCount_C_UpdateAmmoType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AmmoCount.BP_AmmoCount_C.MakeFiremodeVisible
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_AmmoCount_C::MakeFiremodeVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmmoCount.BP_AmmoCount_C.MakeFiremodeVisible");
		
		UBP_AmmoCount_C_MakeFiremodeVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AmmoCount.BP_AmmoCount_C.ShouldShowReserveMagCount
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_AmmoCount_C::ShouldShowReserveMagCount(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmmoCount.BP_AmmoCount_C.ShouldShowReserveMagCount");
		
		UBP_AmmoCount_C_ShouldShowReserveMagCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AmmoCount.BP_AmmoCount_C.GetPhysicalMagMagwellVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_AmmoCount_C::GetPhysicalMagMagwellVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmmoCount.BP_AmmoCount_C.GetPhysicalMagMagwellVisibility");
		
		UBP_AmmoCount_C_GetPhysicalMagMagwellVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AmmoCount.BP_AmmoCount_C.GetAmmoCounterColor
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateColor UBP_AmmoCount_C::GetAmmoCounterColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmmoCount.BP_AmmoCount_C.GetAmmoCounterColor");
		
		UBP_AmmoCount_C_GetAmmoCounterColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AmmoCount.BP_AmmoCount_C.GetSingleLoadReserveText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UBP_AmmoCount_C::GetSingleLoadReserveText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmmoCount.BP_AmmoCount_C.GetSingleLoadReserveText");
		
		UBP_AmmoCount_C_GetSingleLoadReserveText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AmmoCount.BP_AmmoCount_C.GetSingleLoadReserveVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_AmmoCount_C::GetSingleLoadReserveVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmmoCount.BP_AmmoCount_C.GetSingleLoadReserveVisibility");
		
		UBP_AmmoCount_C_GetSingleLoadReserveVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AmmoCount.BP_AmmoCount_C.CheckMagEmpty
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_AmmoCount_C::CheckMagEmpty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmmoCount.BP_AmmoCount_C.CheckMagEmpty");
		
		UBP_AmmoCount_C_CheckMagEmpty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AmmoCount.BP_AmmoCount_C.GetMagwellVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_AmmoCount_C::GetMagwellVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmmoCount.BP_AmmoCount_C.GetMagwellVisibility");
		
		UBP_AmmoCount_C_GetMagwellVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AmmoCount.BP_AmmoCount_C.GetCountVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_AmmoCount_C::GetCountVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmmoCount.BP_AmmoCount_C.GetCountVisibility");
		
		UBP_AmmoCount_C_GetCountVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AmmoCount.BP_AmmoCount_C.FadeInDisplayWithTimeout
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_AmmoCount_C::FadeInDisplayWithTimeout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmmoCount.BP_AmmoCount_C.FadeInDisplayWithTimeout");
		
		UBP_AmmoCount_C_FadeInDisplayWithTimeout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AmmoCount.BP_AmmoCount_C.FadeOutDisplay
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_AmmoCount_C::FadeOutDisplay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmmoCount.BP_AmmoCount_C.FadeOutDisplay");
		
		UBP_AmmoCount_C_FadeOutDisplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AmmoCount.BP_AmmoCount_C.FadeInDisplay
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_AmmoCount_C::FadeInDisplay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmmoCount.BP_AmmoCount_C.FadeInDisplay");
		
		UBP_AmmoCount_C_FadeInDisplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AmmoCount.BP_AmmoCount_C.WeaponIsLoaded
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Loaded                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_AmmoCount_C::WeaponIsLoaded(bool* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmmoCount.BP_AmmoCount_C.WeaponIsLoaded");
		
		UBP_AmmoCount_C_WeaponIsLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Loaded != nullptr)
			*Loaded = params.Loaded;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AmmoCount.BP_AmmoCount_C.GetMagazinesToRepresent
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<float>                                      Magazines                                                  (Parm, OutParm, HasGetValueTypeHash)
	 * 		TArray<EAmmoContainerType>                         ContainerTypes                                             (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UBP_AmmoCount_C::GetMagazinesToRepresent(TArray<float>* Magazines, TArray<EAmmoContainerType>* ContainerTypes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmmoCount.BP_AmmoCount_C.GetMagazinesToRepresent");
		
		UBP_AmmoCount_C_GetMagazinesToRepresent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Magazines != nullptr)
			*Magazines = params.Magazines;
		if (ContainerTypes != nullptr)
			*ContainerTypes = params.ContainerTypes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AmmoCount.BP_AmmoCount_C.UpdateVisibleMagazine
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Entry                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Frac                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EAmmoContainerType                                 Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AmmoCount_C::UpdateVisibleMagazine(int32_t Entry, float Frac, EAmmoContainerType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmmoCount.BP_AmmoCount_C.UpdateVisibleMagazine");
		
		UBP_AmmoCount_C_UpdateVisibleMagazine_Params params {};
		params.Entry = Entry;
		params.Frac = Frac;
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AmmoCount.BP_AmmoCount_C.UpdateAmmoRepresentation
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_AmmoCount_C::UpdateAmmoRepresentation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmmoCount.BP_AmmoCount_C.UpdateAmmoRepresentation");
		
		UBP_AmmoCount_C_UpdateAmmoRepresentation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AmmoCount.BP_AmmoCount_C.GetPhysicalMag03Visibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_AmmoCount_C::GetPhysicalMag03Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmmoCount.BP_AmmoCount_C.GetPhysicalMag03Visibility");
		
		UBP_AmmoCount_C_GetPhysicalMag03Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AmmoCount.BP_AmmoCount_C.GetPhysicalMag02Visibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_AmmoCount_C::GetPhysicalMag02Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmmoCount.BP_AmmoCount_C.GetPhysicalMag02Visibility");
		
		UBP_AmmoCount_C_GetPhysicalMag02Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AmmoCount.BP_AmmoCount_C.GetPhysicalMag01Visibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_AmmoCount_C::GetPhysicalMag01Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmmoCount.BP_AmmoCount_C.GetPhysicalMag01Visibility");
		
		UBP_AmmoCount_C_GetPhysicalMag01Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AmmoCount.BP_AmmoCount_C.GetPlusSignVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_AmmoCount_C::GetPlusSignVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmmoCount.BP_AmmoCount_C.GetPlusSignVisibility");
		
		UBP_AmmoCount_C_GetPlusSignVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AmmoCount.BP_AmmoCount_C.Get Ammo Count Text
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	class FText UBP_AmmoCount_C::Get_Ammo_Count_Text()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmmoCount.BP_AmmoCount_C.Get Ammo Count Text");
		
		UBP_AmmoCount_C_Get_Ammo_Count_Text_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AmmoCount.BP_AmmoCount_C.FirearmFire
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     FireOrigin                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     FireDirection                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AmmoCount_C::FirearmFire(const struct FVector& FireOrigin, const struct FVector& FireDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmmoCount.BP_AmmoCount_C.FirearmFire");
		
		UBP_AmmoCount_C_FirearmFire_Params params {};
		params.FireOrigin = FireOrigin;
		params.FireDirection = FireDirection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AmmoCount.BP_AmmoCount_C.ReserveAmmoUpdated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_AmmoCount_C::ReserveAmmoUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmmoCount.BP_AmmoCount_C.ReserveAmmoUpdated");
		
		UBP_AmmoCount_C_ReserveAmmoUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AmmoCount.BP_AmmoCount_C.FirearmReload
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               DryReload                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               SingleReload                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Speed                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AmmoCount_C::FirearmReload(bool DryReload, bool SingleReload, float Speed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmmoCount.BP_AmmoCount_C.FirearmReload");
		
		UBP_AmmoCount_C_FirearmReload_Params params {};
		params.DryReload = DryReload;
		params.SingleReload = SingleReload;
		params.Speed = Speed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AmmoCount.BP_AmmoCount_C.BndEvt__BP_FireMode_K2Node_ComponentBoundEvent_1_UpdateFiremodeContainerVisibility__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_AmmoCount_C::BndEvt__BP_FireMode_K2Node_ComponentBoundEvent_1_UpdateFiremodeContainerVisibility__DelegateSignature(bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmmoCount.BP_AmmoCount_C.BndEvt__BP_FireMode_K2Node_ComponentBoundEvent_1_UpdateFiremodeContainerVisibility__DelegateSignature");
		
		UBP_AmmoCount_C_BndEvt__BP_FireMode_K2Node_ComponentBoundEvent_1_UpdateFiremodeContainerVisibility__DelegateSignature_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AmmoCount.BP_AmmoCount_C.ActiveAmmoUpdated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_AmmoCount_C::ActiveAmmoUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmmoCount.BP_AmmoCount_C.ActiveAmmoUpdated");
		
		UBP_AmmoCount_C_ActiveAmmoUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AmmoCount.BP_AmmoCount_C.FirearmDryFire
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_AmmoCount_C::FirearmDryFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmmoCount.BP_AmmoCount_C.FirearmDryFire");
		
		UBP_AmmoCount_C_FirearmDryFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AmmoCount.BP_AmmoCount_C.FirearmAmmoCheck
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_AmmoCount_C::FirearmAmmoCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmmoCount.BP_AmmoCount_C.FirearmAmmoCheck");
		
		UBP_AmmoCount_C_FirearmAmmoCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AmmoCount.BP_AmmoCount_C.HideAmmoCountInTutorial
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AINSSoldier*                                 Soldier                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AItemBase*                                   Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AmmoCount_C::HideAmmoCountInTutorial(class AINSSoldier* Soldier, class AItemBase* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmmoCount.BP_AmmoCount_C.HideAmmoCountInTutorial");
		
		UBP_AmmoCount_C_HideAmmoCountInTutorial_Params params {};
		params.Soldier = Soldier;
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AmmoCount.BP_AmmoCount_C.BindInventoryEvents
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_AmmoCount_C::BindInventoryEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmmoCount.BP_AmmoCount_C.BindInventoryEvents");
		
		UBP_AmmoCount_C_BindInventoryEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AmmoCount.BP_AmmoCount_C.WeaponChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AItemEquipable*                              NewItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AItemEquipable*                              PreviousItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AmmoCount_C::WeaponChanged(class AItemEquipable* NewItem, class AItemEquipable* PreviousItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmmoCount.BP_AmmoCount_C.WeaponChanged");
		
		UBP_AmmoCount_C_WeaponChanged_Params params {};
		params.NewItem = NewItem;
		params.PreviousItem = PreviousItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AmmoCount.BP_AmmoCount_C.PlayGatherAmmoFeedback
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_AmmoCount_C::PlayGatherAmmoFeedback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmmoCount.BP_AmmoCount_C.PlayGatherAmmoFeedback");
		
		UBP_AmmoCount_C_PlayGatherAmmoFeedback_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AmmoCount.BP_AmmoCount_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_AmmoCount_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmmoCount.BP_AmmoCount_C.Construct");
		
		UBP_AmmoCount_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AmmoCount.BP_AmmoCount_C.ExecuteUbergraph_BP_AmmoCount
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AmmoCount_C::ExecuteUbergraph_BP_AmmoCount(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmmoCount.BP_AmmoCount_C.ExecuteUbergraph_BP_AmmoCount");
		
		UBP_AmmoCount_C_ExecuteUbergraph_BP_AmmoCount_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_AmmoCount_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_AmmoCount_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_AmmoCount.BP_AmmoCount_C");
		return ptr;
	}

}


