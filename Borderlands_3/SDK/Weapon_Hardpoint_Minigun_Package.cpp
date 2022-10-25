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
	 * 		Name   -> Function Weapon_Hardpoint_Minigun.Weapon_Hardpoint_Minigun_C.StopOverheatAudio
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapon_Hardpoint_Minigun_C::StopOverheatAudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_Minigun.Weapon_Hardpoint_Minigun_C.StopOverheatAudio");
		
		AWeapon_Hardpoint_Minigun_C_StopOverheatAudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Weapon_Hardpoint_Minigun.Weapon_Hardpoint_Minigun_C.InitAudio
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapon_Hardpoint_Minigun_C::InitAudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_Minigun.Weapon_Hardpoint_Minigun_C.InitAudio");
		
		AWeapon_Hardpoint_Minigun_C_InitAudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Weapon_Hardpoint_Minigun.Weapon_Hardpoint_Minigun_C.SetupMod2
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapon_Hardpoint_Minigun_C::SetupMod2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_Minigun.Weapon_Hardpoint_Minigun_C.SetupMod2");
		
		AWeapon_Hardpoint_Minigun_C_SetupMod2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Weapon_Hardpoint_Minigun.Weapon_Hardpoint_Minigun_C.SetupMod1
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapon_Hardpoint_Minigun_C::SetupMod1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_Minigun.Weapon_Hardpoint_Minigun_C.SetupMod1");
		
		AWeapon_Hardpoint_Minigun_C_SetupMod1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Weapon_Hardpoint_Minigun.Weapon_Hardpoint_Minigun_C.SetupMod3
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapon_Hardpoint_Minigun_C::SetupMod3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_Minigun.Weapon_Hardpoint_Minigun_C.SetupMod3");
		
		AWeapon_Hardpoint_Minigun_C_SetupMod3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Weapon_Hardpoint_Minigun.Weapon_Hardpoint_Minigun_C.GetShellCasingEjectEffect
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class UParticleSystem*                             FX                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWeapon_Hardpoint_Minigun_C::GetShellCasingEjectEffect(class UParticleSystem** FX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_Minigun.Weapon_Hardpoint_Minigun_C.GetShellCasingEjectEffect");
		
		AWeapon_Hardpoint_Minigun_C_GetShellCasingEjectEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FX != nullptr)
			*FX = params.FX;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Weapon_Hardpoint_Minigun.Weapon_Hardpoint_Minigun_C.InitializeBarrelMaterials
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapon_Hardpoint_Minigun_C::InitializeBarrelMaterials()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_Minigun.Weapon_Hardpoint_Minigun_C.InitializeBarrelMaterials");
		
		AWeapon_Hardpoint_Minigun_C_InitializeBarrelMaterials_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Weapon_Hardpoint_Minigun.Weapon_Hardpoint_Minigun_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapon_Hardpoint_Minigun_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_Minigun.Weapon_Hardpoint_Minigun_C.UserConstructionScript");
		
		AWeapon_Hardpoint_Minigun_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Weapon_Hardpoint_Minigun.Weapon_Hardpoint_Minigun_C.BndEvt__HeatComponent_Gunner_Minigun_K2Node_ComponentBoundEvent_0_HeatChangedDelegate__DelegateSignature_Weapon_Hardpoint_Minigun
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AWeapon_Hardpoint_Minigun_C::BndEvt__HeatComponent_Gunner_Minigun_K2Node_ComponentBoundEvent_0_HeatChangedDelegate__DelegateSignature_Weapon_Hardpoint_Minigun()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_Minigun.Weapon_Hardpoint_Minigun_C.BndEvt__HeatComponent_Gunner_Minigun_K2Node_ComponentBoundEvent_0_HeatChangedDelegate__DelegateSignature_Weapon_Hardpoint_Minigun");
		
		AWeapon_Hardpoint_Minigun_C_BndEvt__HeatComponent_Gunner_Minigun_K2Node_ComponentBoundEvent_0_HeatChangedDelegate__DelegateSignature_Weapon_Hardpoint_Minigun_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Weapon_Hardpoint_Minigun.Weapon_Hardpoint_Minigun_C.K2_InitializeMod
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AWeapon_Hardpoint_Minigun_C::K2_InitializeMod()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_Minigun.Weapon_Hardpoint_Minigun_C.K2_InitializeMod");
		
		AWeapon_Hardpoint_Minigun_C_K2_InitializeMod_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Weapon_Hardpoint_Minigun.Weapon_Hardpoint_Minigun_C.K2_Initialize
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AWeapon_Hardpoint_Minigun_C::K2_Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_Minigun.Weapon_Hardpoint_Minigun_C.K2_Initialize");
		
		AWeapon_Hardpoint_Minigun_C_K2_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Weapon_Hardpoint_Minigun.Weapon_Hardpoint_Minigun_C.InitializeHardPointIronCub
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AWeapon_Hardpoint_Minigun_C::InitializeHardPointIronCub()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_Minigun.Weapon_Hardpoint_Minigun_C.InitializeHardPointIronCub");
		
		AWeapon_Hardpoint_Minigun_C_InitializeHardPointIronCub_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Weapon_Hardpoint_Minigun.Weapon_Hardpoint_Minigun_C.ExecuteUbergraph_Weapon_Hardpoint_Minigun
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWeapon_Hardpoint_Minigun_C::ExecuteUbergraph_Weapon_Hardpoint_Minigun(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_Minigun.Weapon_Hardpoint_Minigun_C.ExecuteUbergraph_Weapon_Hardpoint_Minigun");
		
		AWeapon_Hardpoint_Minigun_C_ExecuteUbergraph_Weapon_Hardpoint_Minigun_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapon_Hardpoint_Minigun_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapon_Hardpoint_Minigun_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_Hardpoint_Minigun.Weapon_Hardpoint_Minigun_C");
		return ptr;
	}

}


