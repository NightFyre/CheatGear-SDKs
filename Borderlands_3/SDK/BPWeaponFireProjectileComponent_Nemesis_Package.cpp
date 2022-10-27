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
	 * 		Name   -> Function BPWeaponFireProjectileComponent_Nemesis.BPWeaponFireProjectileComponent_Nemesis_C.K2_OnActivated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPWeaponFireProjectileComponent_Nemesis_C::K2_OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_Nemesis.BPWeaponFireProjectileComponent_Nemesis_C.K2_OnActivated");
		
		UBPWeaponFireProjectileComponent_Nemesis_C_K2_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeaponFireProjectileComponent_Nemesis.BPWeaponFireProjectileComponent_Nemesis_C.ElementalSwitch
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPWeaponFireProjectileComponent_Nemesis_C::ElementalSwitch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_Nemesis.BPWeaponFireProjectileComponent_Nemesis_C.ElementalSwitch");
		
		UBPWeaponFireProjectileComponent_Nemesis_C_ElementalSwitch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeaponFireProjectileComponent_Nemesis.BPWeaponFireProjectileComponent_Nemesis_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPWeaponFireProjectileComponent_Nemesis_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_Nemesis.BPWeaponFireProjectileComponent_Nemesis_C.ReceiveBeginPlay");
		
		UBPWeaponFireProjectileComponent_Nemesis_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeaponFireProjectileComponent_Nemesis.BPWeaponFireProjectileComponent_Nemesis_C.ExecuteUbergraph_BPWeaponFireProjectileComponent_Nemesis
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPWeaponFireProjectileComponent_Nemesis_C::ExecuteUbergraph_BPWeaponFireProjectileComponent_Nemesis(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_Nemesis.BPWeaponFireProjectileComponent_Nemesis_C.ExecuteUbergraph_BPWeaponFireProjectileComponent_Nemesis");
		
		UBPWeaponFireProjectileComponent_Nemesis_C_ExecuteUbergraph_BPWeaponFireProjectileComponent_Nemesis_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPWeaponFireProjectileComponent_Nemesis_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPWeaponFireProjectileComponent_Nemesis_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPWeaponFireProjectileComponent_Nemesis.BPWeaponFireProjectileComponent_Nemesis_C");
		return ptr;
	}

}


