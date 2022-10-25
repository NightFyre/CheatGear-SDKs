/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IBPChar_Pet.IBPChar_Pet_C.GetPetJabberIngenuityBarrel
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Barrel                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UIBPChar_Pet_C::GetPetJabberIngenuityBarrel(class AActor** Barrel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IBPChar_Pet.IBPChar_Pet_C.GetPetJabberIngenuityBarrel");
		
		UIBPChar_Pet_C_GetPetJabberIngenuityBarrel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Barrel != nullptr)
			*Barrel = params.Barrel;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IBPChar_Pet.IBPChar_Pet_C.PetSucceededRevive
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UIBPChar_Pet_C::PetSucceededRevive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IBPChar_Pet.IBPChar_Pet_C.PetSucceededRevive");
		
		UIBPChar_Pet_C_PetSucceededRevive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IBPChar_Pet.IBPChar_Pet_C.PetJabbermon_BarrelDrop
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UIBPChar_Pet_C::PetJabbermon_BarrelDrop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IBPChar_Pet.IBPChar_Pet_C.PetJabbermon_BarrelDrop");
		
		UIBPChar_Pet_C_PetJabbermon_BarrelDrop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IBPChar_Pet.IBPChar_Pet_C.PetJabbermon_BarrelThrow
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UIBPChar_Pet_C::PetJabbermon_BarrelThrow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IBPChar_Pet.IBPChar_Pet_C.PetJabbermon_BarrelThrow");
		
		UIBPChar_Pet_C_PetJabbermon_BarrelThrow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IBPChar_Pet.IBPChar_Pet_C.PetJabbermon_BarrelSet
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      NewBarrel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UIBPChar_Pet_C::PetJabbermon_BarrelSet(class AActor* NewBarrel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IBPChar_Pet.IBPChar_Pet_C.PetJabbermon_BarrelSet");
		
		UIBPChar_Pet_C_PetJabbermon_BarrelSet_Params params {};
		params.NewBarrel = NewBarrel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IBPChar_Pet.IBPChar_Pet_C.PetJabbermon_BarrelAlign
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      NewBarrel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UIBPChar_Pet_C::PetJabbermon_BarrelAlign(class AActor* NewBarrel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IBPChar_Pet.IBPChar_Pet_C.PetJabbermon_BarrelAlign");
		
		UIBPChar_Pet_C_PetJabbermon_BarrelAlign_Params params {};
		params.NewBarrel = NewBarrel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IBPChar_Pet.IBPChar_Pet_C.SetEnraged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsEnraged                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UIBPChar_Pet_C::SetEnraged(bool bIsEnraged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IBPChar_Pet.IBPChar_Pet_C.SetEnraged");
		
		UIBPChar_Pet_C_SetEnraged_Params params {};
		params.bIsEnraged = bIsEnraged;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IBPChar_Pet.IBPChar_Pet_C.GetPetEvolutionType
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EOakActionAbilityPetEvolutionType                  EvolutionType                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UIBPChar_Pet_C::GetPetEvolutionType(EOakActionAbilityPetEvolutionType* EvolutionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IBPChar_Pet.IBPChar_Pet_C.GetPetEvolutionType");
		
		UIBPChar_Pet_C_GetPetEvolutionType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EvolutionType != nullptr)
			*EvolutionType = params.EvolutionType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IBPChar_Pet.IBPChar_Pet_C.DoAttackCommand
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     EnemyObject                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UIBPChar_Pet_C::DoAttackCommand(class UObject* EnemyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IBPChar_Pet.IBPChar_Pet_C.DoAttackCommand");
		
		UIBPChar_Pet_C_DoAttackCommand_Params params {};
		params.EnemyObject = EnemyObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IBPChar_Pet.IBPChar_Pet_C.BeginAttackCommand
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UIBPChar_Pet_C::BeginAttackCommand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IBPChar_Pet.IBPChar_Pet_C.BeginAttackCommand");
		
		UIBPChar_Pet_C_BeginAttackCommand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IBPChar_Pet.IBPChar_Pet_C.GetPetType
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EOakActionAbilityPetType                           PetType                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UIBPChar_Pet_C::GetPetType(EOakActionAbilityPetType* PetType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IBPChar_Pet.IBPChar_Pet_C.GetPetType");
		
		UIBPChar_Pet_C_GetPetType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PetType != nullptr)
			*PetType = params.PetType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IBPChar_Pet.IBPChar_Pet_C.PetJabbermon_FireRocket
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UIBPChar_Pet_C::PetJabbermon_FireRocket()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IBPChar_Pet.IBPChar_Pet_C.PetJabbermon_FireRocket");
		
		UIBPChar_Pet_C_PetJabbermon_FireRocket_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IBPChar_Pet.IBPChar_Pet_C.PetJabbermon_ChangeLauncherVis
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewVisibility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UIBPChar_Pet_C::PetJabbermon_ChangeLauncherVis(bool NewVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IBPChar_Pet.IBPChar_Pet_C.PetJabbermon_ChangeLauncherVis");
		
		UIBPChar_Pet_C_PetJabbermon_ChangeLauncherVis_Params params {};
		params.NewVisibility = NewVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IBPChar_Pet.IBPChar_Pet_C.PetJabbermon_ChangeGunVis
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewVisibility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UIBPChar_Pet_C::PetJabbermon_ChangeGunVis(bool NewVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IBPChar_Pet.IBPChar_Pet_C.PetJabbermon_ChangeGunVis");
		
		UIBPChar_Pet_C_PetJabbermon_ChangeGunVis_Params params {};
		params.NewVisibility = NewVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IBPChar_Pet.IBPChar_Pet_C.PetJabbermon_Poop_Hide
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UIBPChar_Pet_C::PetJabbermon_Poop_Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IBPChar_Pet.IBPChar_Pet_C.PetJabbermon_Poop_Hide");
		
		UIBPChar_Pet_C_PetJabbermon_Poop_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IBPChar_Pet.IBPChar_Pet_C.PetJabbermon_Poop_Show
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UIBPChar_Pet_C::PetJabbermon_Poop_Show()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IBPChar_Pet.IBPChar_Pet_C.PetJabbermon_Poop_Show");
		
		UIBPChar_Pet_C_PetJabbermon_Poop_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IBPChar_Pet.IBPChar_Pet_C.PetJabbermon_ChangeMeleeVis
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewWeapVisibility                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UIBPChar_Pet_C::PetJabbermon_ChangeMeleeVis(bool NewWeapVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IBPChar_Pet.IBPChar_Pet_C.PetJabbermon_ChangeMeleeVis");
		
		UIBPChar_Pet_C_PetJabbermon_ChangeMeleeVis_Params params {};
		params.NewWeapVisibility = NewWeapVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IBPChar_Pet.IBPChar_Pet_C.OnPetReleased
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bForced                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EPetReleaseReason                                  Reason                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UIBPChar_Pet_C::OnPetReleased(bool bForced, EPetReleaseReason Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IBPChar_Pet.IBPChar_Pet_C.OnPetReleased");
		
		UIBPChar_Pet_C_OnPetReleased_Params params {};
		params.bForced = bForced;
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IBPChar_Pet.IBPChar_Pet_C.MatchesPetProfile
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOakPlayerCharacterAugmentData_Pet*          InAugment                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UIBPChar_Pet_C::MatchesPetProfile(class UOakPlayerCharacterAugmentData_Pet* InAugment, bool* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IBPChar_Pet.IBPChar_Pet_C.MatchesPetProfile");
		
		UIBPChar_Pet_C_MatchesPetProfile_Params params {};
		params.InAugment = InAugment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IBPChar_Pet.IBPChar_Pet_C.PetSpawnTrapProjectile
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UIBPChar_Pet_C::PetSpawnTrapProjectile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IBPChar_Pet.IBPChar_Pet_C.PetSpawnTrapProjectile");
		
		UIBPChar_Pet_C_PetSpawnTrapProjectile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IBPChar_Pet.IBPChar_Pet_C.GetBeastmasterOwner
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOakCharacter_Player*                        Beastmaster                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UIBPChar_Pet_C::GetBeastmasterOwner(class AOakCharacter_Player** Beastmaster)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IBPChar_Pet.IBPChar_Pet_C.GetBeastmasterOwner");
		
		UIBPChar_Pet_C_GetBeastmasterOwner_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Beastmaster != nullptr)
			*Beastmaster = params.Beastmaster;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIBPChar_Pet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIBPChar_Pet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass IBPChar_Pet.IBPChar_Pet_C");
		return ptr;
	}

}


