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
	 * 		Name   -> Function BPWeaponFireProjectileComponent_Torgue_RoisensThorns.BPWeaponFireProjectileComponent_Torgue_RoisensThorns_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPWeaponFireProjectileComponent_Torgue_RoisensThorns_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_Torgue_RoisensThorns.BPWeaponFireProjectileComponent_Torgue_RoisensThorns_C.ReceiveBeginPlay");
		
		UBPWeaponFireProjectileComponent_Torgue_RoisensThorns_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeaponFireProjectileComponent_Torgue_RoisensThorns.BPWeaponFireProjectileComponent_Torgue_RoisensThorns_C.NotifyUseStarted_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPWeaponFireProjectileComponent_Torgue_RoisensThorns_C::NotifyUseStarted_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_Torgue_RoisensThorns.BPWeaponFireProjectileComponent_Torgue_RoisensThorns_C.NotifyUseStarted_Event");
		
		UBPWeaponFireProjectileComponent_Torgue_RoisensThorns_C_NotifyUseStarted_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeaponFireProjectileComponent_Torgue_RoisensThorns.BPWeaponFireProjectileComponent_Torgue_RoisensThorns_C.ExecuteUbergraph_BPWeaponFireProjectileComponent_Torgue_RoisensThorns
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPWeaponFireProjectileComponent_Torgue_RoisensThorns_C::ExecuteUbergraph_BPWeaponFireProjectileComponent_Torgue_RoisensThorns(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_Torgue_RoisensThorns.BPWeaponFireProjectileComponent_Torgue_RoisensThorns_C.ExecuteUbergraph_BPWeaponFireProjectileComponent_Torgue_RoisensThorns");
		
		UBPWeaponFireProjectileComponent_Torgue_RoisensThorns_C_ExecuteUbergraph_BPWeaponFireProjectileComponent_Torgue_RoisensThorns_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPWeaponFireProjectileComponent_Torgue_RoisensThorns_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPWeaponFireProjectileComponent_Torgue_RoisensThorns_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPWeaponFireProjectileComponent_Torgue_RoisensThorns.BPWeaponFireProjectileComponent_Torgue_RoisensThorns_C");
		return ptr;
	}

}


