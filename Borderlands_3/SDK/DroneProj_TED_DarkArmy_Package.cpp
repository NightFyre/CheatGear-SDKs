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
	 * 		Name   -> Function DroneProj_TED_DarkArmy.DroneProj_TED_DarkArmy_C.DistanceCHeck
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ADroneProj_TED_DarkArmy_C::DistanceCHeck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroneProj_TED_DarkArmy.DroneProj_TED_DarkArmy_C.DistanceCHeck");
		
		ADroneProj_TED_DarkArmy_C_DistanceCHeck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function DroneProj_TED_DarkArmy.DroneProj_TED_DarkArmy_C.DestroyDrone
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ADroneProj_TED_DarkArmy_C::DestroyDrone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroneProj_TED_DarkArmy.DroneProj_TED_DarkArmy_C.DestroyDrone");
		
		ADroneProj_TED_DarkArmy_C_DestroyDrone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function DroneProj_TED_DarkArmy.DroneProj_TED_DarkArmy_C.FireWeapon
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ADroneProj_TED_DarkArmy_C::FireWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroneProj_TED_DarkArmy.DroneProj_TED_DarkArmy_C.FireWeapon");
		
		ADroneProj_TED_DarkArmy_C_FireWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function DroneProj_TED_DarkArmy.DroneProj_TED_DarkArmy_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADroneProj_TED_DarkArmy_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroneProj_TED_DarkArmy.DroneProj_TED_DarkArmy_C.UserConstructionScript");
		
		ADroneProj_TED_DarkArmy_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function DroneProj_TED_DarkArmy.DroneProj_TED_DarkArmy_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ADroneProj_TED_DarkArmy_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroneProj_TED_DarkArmy.DroneProj_TED_DarkArmy_C.ReceiveBeginPlay");
		
		ADroneProj_TED_DarkArmy_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function DroneProj_TED_DarkArmy.DroneProj_TED_DarkArmy_C.PutDownNotify
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AWeapon*                                     EventWeapon                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADroneProj_TED_DarkArmy_C::PutDownNotify(class AWeapon* EventWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroneProj_TED_DarkArmy.DroneProj_TED_DarkArmy_C.PutDownNotify");
		
		ADroneProj_TED_DarkArmy_C_PutDownNotify_Params params {};
		params.EventWeapon = EventWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function DroneProj_TED_DarkArmy.DroneProj_TED_DarkArmy_C.OnBeginExplode
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ADroneProj_TED_DarkArmy_C::OnBeginExplode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroneProj_TED_DarkArmy.DroneProj_TED_DarkArmy_C.OnBeginExplode");
		
		ADroneProj_TED_DarkArmy_C_OnBeginExplode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function DroneProj_TED_DarkArmy.DroneProj_TED_DarkArmy_C.ReloadStarted
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AWeapon*                                     EventWeapon                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bAutoReload                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADroneProj_TED_DarkArmy_C::ReloadStarted(class AWeapon* EventWeapon, bool bAutoReload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroneProj_TED_DarkArmy.DroneProj_TED_DarkArmy_C.ReloadStarted");
		
		ADroneProj_TED_DarkArmy_C_ReloadStarted_Params params {};
		params.EventWeapon = EventWeapon;
		params.bAutoReload = bAutoReload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function DroneProj_TED_DarkArmy.DroneProj_TED_DarkArmy_C.ExecuteUbergraph_DroneProj_TED_DarkArmy
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADroneProj_TED_DarkArmy_C::ExecuteUbergraph_DroneProj_TED_DarkArmy(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroneProj_TED_DarkArmy.DroneProj_TED_DarkArmy_C.ExecuteUbergraph_DroneProj_TED_DarkArmy");
		
		ADroneProj_TED_DarkArmy_C_ExecuteUbergraph_DroneProj_TED_DarkArmy_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADroneProj_TED_DarkArmy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADroneProj_TED_DarkArmy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DroneProj_TED_DarkArmy.DroneProj_TED_DarkArmy_C");
		return ptr;
	}

}


