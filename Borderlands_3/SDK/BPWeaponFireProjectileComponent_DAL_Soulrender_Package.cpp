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
	 * 		Name   -> Function BPWeaponFireProjectileComponent_DAL_Soulrender.BPWeaponFireProjectileComponent_DAL_Soulrender_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPWeaponFireProjectileComponent_DAL_Soulrender_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_DAL_Soulrender.BPWeaponFireProjectileComponent_DAL_Soulrender_C.ReceiveBeginPlay");
		
		UBPWeaponFireProjectileComponent_DAL_Soulrender_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeaponFireProjectileComponent_DAL_Soulrender.BPWeaponFireProjectileComponent_DAL_Soulrender_C.NotifyUsed_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPWeaponFireProjectileComponent_DAL_Soulrender_C::NotifyUsed_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_DAL_Soulrender.BPWeaponFireProjectileComponent_DAL_Soulrender_C.NotifyUsed_Event");
		
		UBPWeaponFireProjectileComponent_DAL_Soulrender_C_NotifyUsed_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeaponFireProjectileComponent_DAL_Soulrender.BPWeaponFireProjectileComponent_DAL_Soulrender_C.K2_OnActivated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPWeaponFireProjectileComponent_DAL_Soulrender_C::K2_OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_DAL_Soulrender.BPWeaponFireProjectileComponent_DAL_Soulrender_C.K2_OnActivated");
		
		UBPWeaponFireProjectileComponent_DAL_Soulrender_C_K2_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeaponFireProjectileComponent_DAL_Soulrender.BPWeaponFireProjectileComponent_DAL_Soulrender_C.ExecuteUbergraph_BPWeaponFireProjectileComponent_DAL_Soulrender
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPWeaponFireProjectileComponent_DAL_Soulrender_C::ExecuteUbergraph_BPWeaponFireProjectileComponent_DAL_Soulrender(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_DAL_Soulrender.BPWeaponFireProjectileComponent_DAL_Soulrender_C.ExecuteUbergraph_BPWeaponFireProjectileComponent_DAL_Soulrender");
		
		UBPWeaponFireProjectileComponent_DAL_Soulrender_C_ExecuteUbergraph_BPWeaponFireProjectileComponent_DAL_Soulrender_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPWeaponFireProjectileComponent_DAL_Soulrender_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPWeaponFireProjectileComponent_DAL_Soulrender_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPWeaponFireProjectileComponent_DAL_Soulrender.BPWeaponFireProjectileComponent_DAL_Soulrender_C");
		return ptr;
	}

}


