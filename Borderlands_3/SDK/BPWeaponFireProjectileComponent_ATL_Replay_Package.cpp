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
	 * 		Name   -> Function BPWeaponFireProjectileComponent_ATL_Replay.BPWeaponFireProjectileComponent_ATL_Replay_C.GetLockedTarget
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	class AActor* UBPWeaponFireProjectileComponent_ATL_Replay_C::GetLockedTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_ATL_Replay.BPWeaponFireProjectileComponent_ATL_Replay_C.GetLockedTarget");
		
		UBPWeaponFireProjectileComponent_ATL_Replay_C_GetLockedTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeaponFireProjectileComponent_ATL_Replay.BPWeaponFireProjectileComponent_ATL_Replay_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPWeaponFireProjectileComponent_ATL_Replay_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_ATL_Replay.BPWeaponFireProjectileComponent_ATL_Replay_C.ReceiveBeginPlay");
		
		UBPWeaponFireProjectileComponent_ATL_Replay_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeaponFireProjectileComponent_ATL_Replay.BPWeaponFireProjectileComponent_ATL_Replay_C.Notify_WeaponFired
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPWeaponFireProjectileComponent_ATL_Replay_C::Notify_WeaponFired()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_ATL_Replay.BPWeaponFireProjectileComponent_ATL_Replay_C.Notify_WeaponFired");
		
		UBPWeaponFireProjectileComponent_ATL_Replay_C_Notify_WeaponFired_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeaponFireProjectileComponent_ATL_Replay.BPWeaponFireProjectileComponent_ATL_Replay_C.ExecuteUbergraph_BPWeaponFireProjectileComponent_ATL_Replay
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPWeaponFireProjectileComponent_ATL_Replay_C::ExecuteUbergraph_BPWeaponFireProjectileComponent_ATL_Replay(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_ATL_Replay.BPWeaponFireProjectileComponent_ATL_Replay_C.ExecuteUbergraph_BPWeaponFireProjectileComponent_ATL_Replay");
		
		UBPWeaponFireProjectileComponent_ATL_Replay_C_ExecuteUbergraph_BPWeaponFireProjectileComponent_ATL_Replay_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPWeaponFireProjectileComponent_ATL_Replay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPWeaponFireProjectileComponent_ATL_Replay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPWeaponFireProjectileComponent_ATL_Replay.BPWeaponFireProjectileComponent_ATL_Replay_C");
		return ptr;
	}

}


