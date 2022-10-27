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
	 * 		Name   -> Function BPWeaponFireProjectile_TheNothing.BPWeaponFireProjectile_TheNothing_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPWeaponFireProjectile_TheNothing_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_TheNothing.BPWeaponFireProjectile_TheNothing_C.ReceiveBeginPlay");
		
		UBPWeaponFireProjectile_TheNothing_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeaponFireProjectile_TheNothing.BPWeaponFireProjectile_TheNothing_C.NotifyUsed_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPWeaponFireProjectile_TheNothing_C::NotifyUsed_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_TheNothing.BPWeaponFireProjectile_TheNothing_C.NotifyUsed_Event");
		
		UBPWeaponFireProjectile_TheNothing_C_NotifyUsed_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeaponFireProjectile_TheNothing.BPWeaponFireProjectile_TheNothing_C.FireProjectiles
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Data_Blueprint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SampleCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPWeaponFireProjectile_TheNothing_C::FireProjectiles(class UClass* Data_Blueprint, int32_t SampleCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_TheNothing.BPWeaponFireProjectile_TheNothing_C.FireProjectiles");
		
		UBPWeaponFireProjectile_TheNothing_C_FireProjectiles_Params params {};
		params.Data_Blueprint = Data_Blueprint;
		params.SampleCount = SampleCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeaponFireProjectile_TheNothing.BPWeaponFireProjectile_TheNothing_C.ExecuteUbergraph_BPWeaponFireProjectile_TheNothing
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPWeaponFireProjectile_TheNothing_C::ExecuteUbergraph_BPWeaponFireProjectile_TheNothing(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_TheNothing.BPWeaponFireProjectile_TheNothing_C.ExecuteUbergraph_BPWeaponFireProjectile_TheNothing");
		
		UBPWeaponFireProjectile_TheNothing_C_ExecuteUbergraph_BPWeaponFireProjectile_TheNothing_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPWeaponFireProjectile_TheNothing_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPWeaponFireProjectile_TheNothing_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPWeaponFireProjectile_TheNothing.BPWeaponFireProjectile_TheNothing_C");
		return ptr;
	}

}


