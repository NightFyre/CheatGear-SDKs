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
	 * 		Name   -> Function BPAmmoItem_AllAmmo.BPAmmoItem_AllAmmo_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 */
	void ABPAmmoItem_AllAmmo_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAmmoItem_AllAmmo.BPAmmoItem_AllAmmo_C.ReceiveBeginPlay");
		
		ABPAmmoItem_AllAmmo_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAmmoItem_AllAmmo.BPAmmoItem_AllAmmo_C.FillAmmo
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AOakCharacter*                               PickupInstigator                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGbxAttributeData*                           CurrentValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGbxAttributeData*                           MaxValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPAmmoItem_AllAmmo_C::FillAmmo(class AOakCharacter* PickupInstigator, class UGbxAttributeData* CurrentValue, class UGbxAttributeData* MaxValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAmmoItem_AllAmmo.BPAmmoItem_AllAmmo_C.FillAmmo");
		
		ABPAmmoItem_AllAmmo_C_FillAmmo_Params params {};
		params.PickupInstigator = PickupInstigator;
		params.CurrentValue = CurrentValue;
		params.MaxValue = MaxValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAmmoItem_AllAmmo.BPAmmoItem_AllAmmo_C.PickedUp
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AOakCharacter*                               PickupInstigator                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPAmmoItem_AllAmmo_C::PickedUp(class AOakCharacter* PickupInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAmmoItem_AllAmmo.BPAmmoItem_AllAmmo_C.PickedUp");
		
		ABPAmmoItem_AllAmmo_C_PickedUp_Params params {};
		params.PickupInstigator = PickupInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAmmoItem_AllAmmo.BPAmmoItem_AllAmmo_C.CanBePickedUp
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class AOakCharacter*                               PickupInstigator                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Quantity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               UsedByInstigator                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AInventoryItemPickup*                        WorldPickupActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ABPAmmoItem_AllAmmo_C::CanBePickedUp(class AOakCharacter* PickupInstigator, int32_t Quantity, bool UsedByInstigator, class AInventoryItemPickup* WorldPickupActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAmmoItem_AllAmmo.BPAmmoItem_AllAmmo_C.CanBePickedUp");
		
		ABPAmmoItem_AllAmmo_C_CanBePickedUp_Params params {};
		params.PickupInstigator = PickupInstigator;
		params.Quantity = Quantity;
		params.UsedByInstigator = UsedByInstigator;
		params.WorldPickupActor = WorldPickupActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPAmmoItem_AllAmmo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPAmmoItem_AllAmmo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPAmmoItem_AllAmmo.BPAmmoItem_AllAmmo_C");
		return ptr;
	}

}


