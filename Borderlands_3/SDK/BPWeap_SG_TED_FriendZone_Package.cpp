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
	 * 		Name   -> Function BPWeap_SG_TED_FriendZone.BPWeap_SG_TED_FriendZone_C.TedioreThrowWeapon
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ThrownProjectile                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPWeap_SG_TED_FriendZone_C::TedioreThrowWeapon(class AActor** ThrownProjectile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_SG_TED_FriendZone.BPWeap_SG_TED_FriendZone_C.TedioreThrowWeapon");
		
		ABPWeap_SG_TED_FriendZone_C_TedioreThrowWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ThrownProjectile != nullptr)
			*ThrownProjectile = params.ThrownProjectile;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_SG_TED_FriendZone.BPWeap_SG_TED_FriendZone_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPWeap_SG_TED_FriendZone_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_SG_TED_FriendZone.BPWeap_SG_TED_FriendZone_C.UserConstructionScript");
		
		ABPWeap_SG_TED_FriendZone_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_SG_TED_FriendZone.BPWeap_SG_TED_FriendZone_C.SpawnTurret
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPWeap_SG_TED_FriendZone_C::SpawnTurret()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_SG_TED_FriendZone.BPWeap_SG_TED_FriendZone_C.SpawnTurret");
		
		ABPWeap_SG_TED_FriendZone_C_SpawnTurret_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_SG_TED_FriendZone.BPWeap_SG_TED_FriendZone_C.ExecuteUbergraph_BPWeap_SG_TED_FriendZone
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPWeap_SG_TED_FriendZone_C::ExecuteUbergraph_BPWeap_SG_TED_FriendZone(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_SG_TED_FriendZone.BPWeap_SG_TED_FriendZone_C.ExecuteUbergraph_BPWeap_SG_TED_FriendZone");
		
		ABPWeap_SG_TED_FriendZone_C_ExecuteUbergraph_BPWeap_SG_TED_FriendZone_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPWeap_SG_TED_FriendZone_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPWeap_SG_TED_FriendZone_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPWeap_SG_TED_FriendZone.BPWeap_SG_TED_FriendZone_C");
		return ptr;
	}

}


