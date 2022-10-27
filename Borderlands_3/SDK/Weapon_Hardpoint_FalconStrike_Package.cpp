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
	 * 		Name   -> Function Weapon_Hardpoint_FalconStrike.Weapon_Hardpoint_FalconStrike_C.TryPerformFeedback
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapon_Hardpoint_FalconStrike_C::TryPerformFeedback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_FalconStrike.Weapon_Hardpoint_FalconStrike_C.TryPerformFeedback");
		
		AWeapon_Hardpoint_FalconStrike_C_TryPerformFeedback_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Weapon_Hardpoint_FalconStrike.Weapon_Hardpoint_FalconStrike_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapon_Hardpoint_FalconStrike_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_FalconStrike.Weapon_Hardpoint_FalconStrike_C.UserConstructionScript");
		
		AWeapon_Hardpoint_FalconStrike_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Weapon_Hardpoint_FalconStrike.Weapon_Hardpoint_FalconStrike_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AWeapon_Hardpoint_FalconStrike_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_FalconStrike.Weapon_Hardpoint_FalconStrike_C.ReceiveBeginPlay");
		
		AWeapon_Hardpoint_FalconStrike_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Weapon_Hardpoint_FalconStrike.Weapon_Hardpoint_FalconStrike_C.InitAnimation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBPAnim_IronBear_FalconStrike_C*             Anim                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWeapon_Hardpoint_FalconStrike_C::InitAnimation(class UBPAnim_IronBear_FalconStrike_C* Anim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_FalconStrike.Weapon_Hardpoint_FalconStrike_C.InitAnimation");
		
		AWeapon_Hardpoint_FalconStrike_C_InitAnimation_Params params {};
		params.Anim = Anim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Weapon_Hardpoint_FalconStrike.Weapon_Hardpoint_FalconStrike_C.K2_Initialize1P
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AWeapon_Hardpoint_FalconStrike_C::K2_Initialize1P()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_FalconStrike.Weapon_Hardpoint_FalconStrike_C.K2_Initialize1P");
		
		AWeapon_Hardpoint_FalconStrike_C_K2_Initialize1P_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Weapon_Hardpoint_FalconStrike.Weapon_Hardpoint_FalconStrike_C.K2_InitializeMod1P
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AWeapon_Hardpoint_FalconStrike_C::K2_InitializeMod1P()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_FalconStrike.Weapon_Hardpoint_FalconStrike_C.K2_InitializeMod1P");
		
		AWeapon_Hardpoint_FalconStrike_C_K2_InitializeMod1P_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Weapon_Hardpoint_FalconStrike.Weapon_Hardpoint_FalconStrike_C.K2_InitializeMod
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AWeapon_Hardpoint_FalconStrike_C::K2_InitializeMod()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_FalconStrike.Weapon_Hardpoint_FalconStrike_C.K2_InitializeMod");
		
		AWeapon_Hardpoint_FalconStrike_C_K2_InitializeMod_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Weapon_Hardpoint_FalconStrike.Weapon_Hardpoint_FalconStrike_C.InitializeHardPointIronCub
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AWeapon_Hardpoint_FalconStrike_C::InitializeHardPointIronCub()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_FalconStrike.Weapon_Hardpoint_FalconStrike_C.InitializeHardPointIronCub");
		
		AWeapon_Hardpoint_FalconStrike_C_InitializeHardPointIronCub_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Weapon_Hardpoint_FalconStrike.Weapon_Hardpoint_FalconStrike_C.ExecuteUbergraph_Weapon_Hardpoint_FalconStrike
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWeapon_Hardpoint_FalconStrike_C::ExecuteUbergraph_Weapon_Hardpoint_FalconStrike(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_FalconStrike.Weapon_Hardpoint_FalconStrike_C.ExecuteUbergraph_Weapon_Hardpoint_FalconStrike");
		
		AWeapon_Hardpoint_FalconStrike_C_ExecuteUbergraph_Weapon_Hardpoint_FalconStrike_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapon_Hardpoint_FalconStrike_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapon_Hardpoint_FalconStrike_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_Hardpoint_FalconStrike.Weapon_Hardpoint_FalconStrike_C");
		return ptr;
	}

}


