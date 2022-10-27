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
	 * 		Name   -> Function BP_DevPerks.BP_DevPerks_C.UnlimitedAmmo
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_DevPerks_C::UnlimitedAmmo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DevPerks.BP_DevPerks_C.UnlimitedAmmo");
		
		UBP_DevPerks_C_UnlimitedAmmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_DevPerks.BP_DevPerks_C.UnlockAllCustomizations
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_DevPerks_C::UnlockAllCustomizations()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DevPerks.BP_DevPerks_C.UnlockAllCustomizations");
		
		UBP_DevPerks_C_UnlockAllCustomizations_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_DevPerks.BP_DevPerks_C.KillEnemies
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_DevPerks_C::KillEnemies()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DevPerks.BP_DevPerks_C.KillEnemies");
		
		UBP_DevPerks_C_KillEnemies_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_DevPerks.BP_DevPerks_C.SpawnAwesomeItems
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_DevPerks_C::SpawnAwesomeItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DevPerks.BP_DevPerks_C.SpawnAwesomeItems");
		
		UBP_DevPerks_C_SpawnAwesomeItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_DevPerks.BP_DevPerks_C.GiveGoldenKeys
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_DevPerks_C::GiveGoldenKeys()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DevPerks.BP_DevPerks_C.GiveGoldenKeys");
		
		UBP_DevPerks_C_GiveGoldenKeys_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_DevPerks.BP_DevPerks_C.GiveEridium
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_DevPerks_C::GiveEridium()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DevPerks.BP_DevPerks_C.GiveEridium");
		
		UBP_DevPerks_C_GiveEridium_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_DevPerks.BP_DevPerks_C.GiveCash
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_DevPerks_C::GiveCash()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DevPerks.BP_DevPerks_C.GiveCash");
		
		UBP_DevPerks_C_GiveCash_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_DevPerks.BP_DevPerks_C.GiveLevels
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_DevPerks_C::GiveLevels()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DevPerks.BP_DevPerks_C.GiveLevels");
		
		UBP_DevPerks_C_GiveLevels_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_DevPerks.BP_DevPerks_C.OnDeveloperPerkActivated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		unsigned char                                      Perk                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DevPerks_C::OnDeveloperPerkActivated(unsigned char Perk)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DevPerks.BP_DevPerks_C.OnDeveloperPerkActivated");
		
		UBP_DevPerks_C_OnDeveloperPerkActivated_Params params {};
		params.Perk = Perk;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_DevPerks.BP_DevPerks_C.ExecuteUbergraph_BP_DevPerks
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DevPerks_C::ExecuteUbergraph_BP_DevPerks(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DevPerks.BP_DevPerks_C.ExecuteUbergraph_BP_DevPerks");
		
		UBP_DevPerks_C_ExecuteUbergraph_BP_DevPerks_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_DevPerks_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_DevPerks_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DevPerks.BP_DevPerks_C");
		return ptr;
	}

}


