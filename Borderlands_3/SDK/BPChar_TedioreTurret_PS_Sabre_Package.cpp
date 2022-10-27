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
	 * 		Name   -> Function BPChar_TedioreTurret_PS_Sabre.BPChar_TedioreTurret_PS_Sabre_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_TedioreTurret_PS_Sabre_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_TedioreTurret_PS_Sabre.BPChar_TedioreTurret_PS_Sabre_C.UserConstructionScript");
		
		ABPChar_TedioreTurret_PS_Sabre_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_TedioreTurret_PS_Sabre.BPChar_TedioreTurret_PS_Sabre_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABPChar_TedioreTurret_PS_Sabre_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_TedioreTurret_PS_Sabre.BPChar_TedioreTurret_PS_Sabre_C.ReceiveBeginPlay");
		
		ABPChar_TedioreTurret_PS_Sabre_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_TedioreTurret_PS_Sabre.BPChar_TedioreTurret_PS_Sabre_C.Fired
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AWeapon*                                     EventWeapon                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_TedioreTurret_PS_Sabre_C::Fired(class AWeapon* EventWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_TedioreTurret_PS_Sabre.BPChar_TedioreTurret_PS_Sabre_C.Fired");
		
		ABPChar_TedioreTurret_PS_Sabre_C_Fired_Params params {};
		params.EventWeapon = EventWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_TedioreTurret_PS_Sabre.BPChar_TedioreTurret_PS_Sabre_C.Reload2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bAutoReload                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPChar_TedioreTurret_PS_Sabre_C::Reload2(bool bAutoReload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_TedioreTurret_PS_Sabre.BPChar_TedioreTurret_PS_Sabre_C.Reload2");
		
		ABPChar_TedioreTurret_PS_Sabre_C_Reload2_Params params {};
		params.bAutoReload = bAutoReload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_TedioreTurret_PS_Sabre.BPChar_TedioreTurret_PS_Sabre_C.K2_OnMovementModeChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      PrevMovementMode                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EMovementMode                                      NewMovementMode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      PrevCustomMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      NewCustomMode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_TedioreTurret_PS_Sabre_C::K2_OnMovementModeChanged(EMovementMode PrevMovementMode, EMovementMode NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_TedioreTurret_PS_Sabre.BPChar_TedioreTurret_PS_Sabre_C.K2_OnMovementModeChanged");
		
		ABPChar_TedioreTurret_PS_Sabre_C_K2_OnMovementModeChanged_Params params {};
		params.PrevMovementMode = PrevMovementMode;
		params.NewMovementMode = NewMovementMode;
		params.PrevCustomMode = PrevCustomMode;
		params.NewCustomMode = NewCustomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_TedioreTurret_PS_Sabre.BPChar_TedioreTurret_PS_Sabre_C.ExecuteUbergraph_BPChar_TedioreTurret_PS_Sabre
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_TedioreTurret_PS_Sabre_C::ExecuteUbergraph_BPChar_TedioreTurret_PS_Sabre(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_TedioreTurret_PS_Sabre.BPChar_TedioreTurret_PS_Sabre_C.ExecuteUbergraph_BPChar_TedioreTurret_PS_Sabre");
		
		ABPChar_TedioreTurret_PS_Sabre_C_ExecuteUbergraph_BPChar_TedioreTurret_PS_Sabre_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPChar_TedioreTurret_PS_Sabre_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPChar_TedioreTurret_PS_Sabre_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_TedioreTurret_PS_Sabre.BPChar_TedioreTurret_PS_Sabre_C");
		return ptr;
	}

}


