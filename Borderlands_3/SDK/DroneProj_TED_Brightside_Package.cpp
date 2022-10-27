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
	 * 		Name   -> Function DroneProj_TED_Brightside.DroneProj_TED_Brightside_C.DistanceCHeck
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ADroneProj_TED_Brightside_C::DistanceCHeck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroneProj_TED_Brightside.DroneProj_TED_Brightside_C.DistanceCHeck");
		
		ADroneProj_TED_Brightside_C_DistanceCHeck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function DroneProj_TED_Brightside.DroneProj_TED_Brightside_C.NoFriends
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ADroneProj_TED_Brightside_C::NoFriends()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroneProj_TED_Brightside.DroneProj_TED_Brightside_C.NoFriends");
		
		ADroneProj_TED_Brightside_C_NoFriends_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function DroneProj_TED_Brightside.DroneProj_TED_Brightside_C.StopFire
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADroneProj_TED_Brightside_C::StopFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroneProj_TED_Brightside.DroneProj_TED_Brightside_C.StopFire");
		
		ADroneProj_TED_Brightside_C_StopFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function DroneProj_TED_Brightside.DroneProj_TED_Brightside_C.StartFire
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADroneProj_TED_Brightside_C::StartFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroneProj_TED_Brightside.DroneProj_TED_Brightside_C.StartFire");
		
		ADroneProj_TED_Brightside_C_StartFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function DroneProj_TED_Brightside.DroneProj_TED_Brightside_C.FireWeapon
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ADroneProj_TED_Brightside_C::FireWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroneProj_TED_Brightside.DroneProj_TED_Brightside_C.FireWeapon");
		
		ADroneProj_TED_Brightside_C_FireWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function DroneProj_TED_Brightside.DroneProj_TED_Brightside_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADroneProj_TED_Brightside_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroneProj_TED_Brightside.DroneProj_TED_Brightside_C.UserConstructionScript");
		
		ADroneProj_TED_Brightside_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function DroneProj_TED_Brightside.DroneProj_TED_Brightside_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ADroneProj_TED_Brightside_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroneProj_TED_Brightside.DroneProj_TED_Brightside_C.ReceiveBeginPlay");
		
		ADroneProj_TED_Brightside_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function DroneProj_TED_Brightside.DroneProj_TED_Brightside_C.PutDownNotify
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AWeapon*                                     EventWeapon                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADroneProj_TED_Brightside_C::PutDownNotify(class AWeapon* EventWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroneProj_TED_Brightside.DroneProj_TED_Brightside_C.PutDownNotify");
		
		ADroneProj_TED_Brightside_C_PutDownNotify_Params params {};
		params.EventWeapon = EventWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function DroneProj_TED_Brightside.DroneProj_TED_Brightside_C.OnBeginExplode
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ADroneProj_TED_Brightside_C::OnBeginExplode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroneProj_TED_Brightside.DroneProj_TED_Brightside_C.OnBeginExplode");
		
		ADroneProj_TED_Brightside_C_OnBeginExplode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function DroneProj_TED_Brightside.DroneProj_TED_Brightside_C.ExecuteUbergraph_DroneProj_TED_Brightside
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADroneProj_TED_Brightside_C::ExecuteUbergraph_DroneProj_TED_Brightside(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroneProj_TED_Brightside.DroneProj_TED_Brightside_C.ExecuteUbergraph_DroneProj_TED_Brightside");
		
		ADroneProj_TED_Brightside_C_ExecuteUbergraph_DroneProj_TED_Brightside_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADroneProj_TED_Brightside_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADroneProj_TED_Brightside_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DroneProj_TED_Brightside.DroneProj_TED_Brightside_C");
		return ptr;
	}

}


