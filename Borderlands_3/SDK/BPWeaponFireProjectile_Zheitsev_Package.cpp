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
	 * 		Name   -> Function BPWeaponFireProjectile_Zheitsev.BPWeaponFireProjectile_Zheitsev_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPWeaponFireProjectile_Zheitsev_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_Zheitsev.BPWeaponFireProjectile_Zheitsev_C.ReceiveBeginPlay");
		
		UBPWeaponFireProjectile_Zheitsev_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeaponFireProjectile_Zheitsev.BPWeaponFireProjectile_Zheitsev_C.NotifyReloadStart_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AWeapon*                                     EventWeapon                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bCompleted                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPWeaponFireProjectile_Zheitsev_C::NotifyReloadStart_Event(class AWeapon* EventWeapon, bool bCompleted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_Zheitsev.BPWeaponFireProjectile_Zheitsev_C.NotifyReloadStart_Event");
		
		UBPWeaponFireProjectile_Zheitsev_C_NotifyReloadStart_Event_Params params {};
		params.EventWeapon = EventWeapon;
		params.bCompleted = bCompleted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeaponFireProjectile_Zheitsev.BPWeaponFireProjectile_Zheitsev_C.ExecuteUbergraph_BPWeaponFireProjectile_Zheitsev
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPWeaponFireProjectile_Zheitsev_C::ExecuteUbergraph_BPWeaponFireProjectile_Zheitsev(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_Zheitsev.BPWeaponFireProjectile_Zheitsev_C.ExecuteUbergraph_BPWeaponFireProjectile_Zheitsev");
		
		UBPWeaponFireProjectile_Zheitsev_C_ExecuteUbergraph_BPWeaponFireProjectile_Zheitsev_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPWeaponFireProjectile_Zheitsev_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPWeaponFireProjectile_Zheitsev_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPWeaponFireProjectile_Zheitsev.BPWeaponFireProjectile_Zheitsev_C");
		return ptr;
	}

}


