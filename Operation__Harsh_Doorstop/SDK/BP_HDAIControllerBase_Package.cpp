/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDAIControllerBase.BP_HDAIControllerBase_C.SetupVocalProfile
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDAIControllerBase_C::SetupVocalProfile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDAIControllerBase.BP_HDAIControllerBase_C.SetupVocalProfile");
		
		ABP_HDAIControllerBase_C_SetupVocalProfile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDAIControllerBase.BP_HDAIControllerBase_C.ResetWeaponBase
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_HDWeaponBase_C*                          Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDAIControllerBase_C::ResetWeaponBase(class ABP_HDWeaponBase_C* Weapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDAIControllerBase.BP_HDAIControllerBase_C.ResetWeaponBase");
		
		ABP_HDAIControllerBase_C_ResetWeaponBase_Params params {};
		params.Weapon = Weapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDAIControllerBase.BP_HDAIControllerBase_C.SetupWeaponBase
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_HDWeaponBase_C*                          Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDAIControllerBase_C::SetupWeaponBase(class ABP_HDWeaponBase_C* Weapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDAIControllerBase.BP_HDAIControllerBase_C.SetupWeaponBase");
		
		ABP_HDAIControllerBase_C_SetupWeaponBase_Params params {};
		params.Weapon = Weapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDAIControllerBase.BP_HDAIControllerBase_C.ClearWeaponSavedValues
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDAIControllerBase_C::ClearWeaponSavedValues()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDAIControllerBase.BP_HDAIControllerBase_C.ClearWeaponSavedValues");
		
		ABP_HDAIControllerBase_C_ClearWeaponSavedValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDAIControllerBase.BP_HDAIControllerBase_C.ResetRecoilHandler
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_HDWeaponBase_C*                          Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDAIControllerBase_C::ResetRecoilHandler(class ABP_HDWeaponBase_C* Weapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDAIControllerBase.BP_HDAIControllerBase_C.ResetRecoilHandler");
		
		ABP_HDAIControllerBase_C_ResetRecoilHandler_Params params {};
		params.Weapon = Weapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDAIControllerBase.BP_HDAIControllerBase_C.SetupRecoilHandler
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_HDWeaponBase_C*                          Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDAIControllerBase_C::SetupRecoilHandler(class ABP_HDWeaponBase_C* Weapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDAIControllerBase.BP_HDAIControllerBase_C.SetupRecoilHandler");
		
		ABP_HDAIControllerBase_C_SetupRecoilHandler_Params params {};
		params.Weapon = Weapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDAIControllerBase.BP_HDAIControllerBase_C.CharacterCleanup
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_HDPlayerCharacterBase_C*                 Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDAIControllerBase_C::CharacterCleanup(class ABP_HDPlayerCharacterBase_C* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDAIControllerBase.BP_HDAIControllerBase_C.CharacterCleanup");
		
		ABP_HDAIControllerBase_C_CharacterCleanup_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDAIControllerBase.BP_HDAIControllerBase_C.UnbindEventsFromCharacter
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_HDPlayerCharacterBase_C*                 Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDAIControllerBase_C::UnbindEventsFromCharacter(class ABP_HDPlayerCharacterBase_C* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDAIControllerBase.BP_HDAIControllerBase_C.UnbindEventsFromCharacter");
		
		ABP_HDAIControllerBase_C_UnbindEventsFromCharacter_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDAIControllerBase.BP_HDAIControllerBase_C.BindEventsToCharacter
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_HDPlayerCharacterBase_C*                 Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDAIControllerBase_C::BindEventsToCharacter(class ABP_HDPlayerCharacterBase_C* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDAIControllerBase.BP_HDAIControllerBase_C.BindEventsToCharacter");
		
		ABP_HDAIControllerBase_C_BindEventsToCharacter_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDAIControllerBase.BP_HDAIControllerBase_C.WarnOfNoRecoilHandler
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_HDWeaponBase_C*                          EquippedWeapon                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDAIControllerBase_C::WarnOfNoRecoilHandler(class ABP_HDWeaponBase_C* EquippedWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDAIControllerBase.BP_HDAIControllerBase_C.WarnOfNoRecoilHandler");
		
		ABP_HDAIControllerBase_C_WarnOfNoRecoilHandler_Params params {};
		params.EquippedWeapon = EquippedWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDAIControllerBase.BP_HDAIControllerBase_C.GetFactionSpecifiedSquadMemberKit
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	class UHDKit* ABP_HDAIControllerBase_C::GetFactionSpecifiedSquadMemberKit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDAIControllerBase.BP_HDAIControllerBase_C.GetFactionSpecifiedSquadMemberKit");
		
		ABP_HDAIControllerBase_C_GetFactionSpecifiedSquadMemberKit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDAIControllerBase.BP_HDAIControllerBase_C.GetFactionSpecifiedSquadLeaderKit
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	class UHDKit* ABP_HDAIControllerBase_C::GetFactionSpecifiedSquadLeaderKit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDAIControllerBase.BP_HDAIControllerBase_C.GetFactionSpecifiedSquadLeaderKit");
		
		ABP_HDAIControllerBase_C_GetFactionSpecifiedSquadLeaderKit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDAIControllerBase.BP_HDAIControllerBase_C.OnOwnerPawnDeath
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       VictimPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AController*                                 VictimController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              KillingDamage                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDamageEvent                                DamageEvent                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class APawn*                                       InstigatingPawn                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDAIControllerBase_C::OnOwnerPawnDeath(class APawn* VictimPawn, class AController* VictimController, float KillingDamage, const struct FDamageEvent& DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDAIControllerBase.BP_HDAIControllerBase_C.OnOwnerPawnDeath");
		
		ABP_HDAIControllerBase_C_OnOwnerPawnDeath_Params params {};
		params.VictimPawn = VictimPawn;
		params.VictimController = VictimController;
		params.KillingDamage = KillingDamage;
		params.DamageEvent = DamageEvent;
		params.InstigatingPawn = InstigatingPawn;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDAIControllerBase.BP_HDAIControllerBase_C.OnOwnerPawnEquippedItemChange
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADFBaseCharacter*                            Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ADFBaseItem*                                 NewEquippedItem                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ADFBaseItem*                                 PrevEquippedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDAIControllerBase_C::OnOwnerPawnEquippedItemChange(class ADFBaseCharacter* Character, class ADFBaseItem* NewEquippedItem, class ADFBaseItem* PrevEquippedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDAIControllerBase.BP_HDAIControllerBase_C.OnOwnerPawnEquippedItemChange");
		
		ABP_HDAIControllerBase_C_OnOwnerPawnEquippedItemChange_Params params {};
		params.Character = Character;
		params.NewEquippedItem = NewEquippedItem;
		params.PrevEquippedItem = PrevEquippedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDAIControllerBase.BP_HDAIControllerBase_C.ReceivePossess
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       PossessedPawn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDAIControllerBase_C::ReceivePossess(class APawn* PossessedPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDAIControllerBase.BP_HDAIControllerBase_C.ReceivePossess");
		
		ABP_HDAIControllerBase_C_ReceivePossess_Params params {};
		params.PossessedPawn = PossessedPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDAIControllerBase.BP_HDAIControllerBase_C.SuppressionEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADFBaseProjectile*                           OtherProjectile                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ADFBasePickup*                               Pickup                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDAIControllerBase_C::SuppressionEvent(class ADFBaseProjectile* OtherProjectile, class ADFBasePickup* Pickup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDAIControllerBase.BP_HDAIControllerBase_C.SuppressionEvent");
		
		ABP_HDAIControllerBase_C_SuppressionEvent_Params params {};
		params.OtherProjectile = OtherProjectile;
		params.Pickup = Pickup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDAIControllerBase.BP_HDAIControllerBase_C.HitDamageEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADFBaseProjectile*                           OtherProjectile                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ADFBasePickup*                               Pickup                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDAIControllerBase_C::HitDamageEvent(class ADFBaseProjectile* OtherProjectile, class ADFBasePickup* Pickup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDAIControllerBase.BP_HDAIControllerBase_C.HitDamageEvent");
		
		ABP_HDAIControllerBase_C_HitDamageEvent_Params params {};
		params.OtherProjectile = OtherProjectile;
		params.Pickup = Pickup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDAIControllerBase.BP_HDAIControllerBase_C.ReceiveUnPossess
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       UnpossessedPawn                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDAIControllerBase_C::ReceiveUnPossess(class APawn* UnpossessedPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDAIControllerBase.BP_HDAIControllerBase_C.ReceiveUnPossess");
		
		ABP_HDAIControllerBase_C_ReceiveUnPossess_Params params {};
		params.UnpossessedPawn = UnpossessedPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDAIControllerBase.BP_HDAIControllerBase_C.ExecuteUbergraph_BP_HDAIControllerBase
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDAIControllerBase_C::ExecuteUbergraph_BP_HDAIControllerBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDAIControllerBase.BP_HDAIControllerBase_C.ExecuteUbergraph_BP_HDAIControllerBase");
		
		ABP_HDAIControllerBase_C_ExecuteUbergraph_BP_HDAIControllerBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_HDAIControllerBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_HDAIControllerBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_HDAIControllerBase.BP_HDAIControllerBase_C");
		return ptr;
	}

}


