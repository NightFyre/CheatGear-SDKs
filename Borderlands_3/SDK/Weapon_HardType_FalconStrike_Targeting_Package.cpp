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
	 * 		Name   -> Function Weapon_HardType_FalconStrike_Targeting.Weapon_HardType_FalconStrike_Targeting_C.PlayFeedback
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapon_HardType_FalconStrike_Targeting_C::PlayFeedback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weapon_HardType_FalconStrike_Targeting.Weapon_HardType_FalconStrike_Targeting_C.PlayFeedback");
		
		AWeapon_HardType_FalconStrike_Targeting_C_PlayFeedback_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Weapon_HardType_FalconStrike_Targeting.Weapon_HardType_FalconStrike_Targeting_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapon_HardType_FalconStrike_Targeting_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weapon_HardType_FalconStrike_Targeting.Weapon_HardType_FalconStrike_Targeting_C.UserConstructionScript");
		
		AWeapon_HardType_FalconStrike_Targeting_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Weapon_HardType_FalconStrike_Targeting.Weapon_HardType_FalconStrike_Targeting_C.BndEvt__FalconStrikeTargeting_K2Node_ComponentBoundEvent_0_TargetingUpdateSignature__DelegateSignature_Weapon_HardType_FalconStrike_Targeting
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWeapon_HardType_FalconStrike_Targeting_C::BndEvt__FalconStrikeTargeting_K2Node_ComponentBoundEvent_0_TargetingUpdateSignature__DelegateSignature_Weapon_HardType_FalconStrike_Targeting(class AActor* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weapon_HardType_FalconStrike_Targeting.Weapon_HardType_FalconStrike_Targeting_C.BndEvt__FalconStrikeTargeting_K2Node_ComponentBoundEvent_0_TargetingUpdateSignature__DelegateSignature_Weapon_HardType_FalconStrike_Targeting");
		
		AWeapon_HardType_FalconStrike_Targeting_C_BndEvt__FalconStrikeTargeting_K2Node_ComponentBoundEvent_0_TargetingUpdateSignature__DelegateSignature_Weapon_HardType_FalconStrike_Targeting_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Weapon_HardType_FalconStrike_Targeting.Weapon_HardType_FalconStrike_Targeting_C.BndEvt__BPWeaponFireProjectile_Gunner_FalconStrike_K2Node_ComponentBoundEvent_0_WeaponUsedEvent__DelegateSignature_Weapon_Hardpoint_FalconStrike_DumbFire
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AWeapon_HardType_FalconStrike_Targeting_C::BndEvt__BPWeaponFireProjectile_Gunner_FalconStrike_K2Node_ComponentBoundEvent_0_WeaponUsedEvent__DelegateSignature_Weapon_Hardpoint_FalconStrike_DumbFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weapon_HardType_FalconStrike_Targeting.Weapon_HardType_FalconStrike_Targeting_C.BndEvt__BPWeaponFireProjectile_Gunner_FalconStrike_K2Node_ComponentBoundEvent_0_WeaponUsedEvent__DelegateSignature_Weapon_Hardpoint_FalconStrike_DumbFire");
		
		AWeapon_HardType_FalconStrike_Targeting_C_BndEvt__BPWeaponFireProjectile_Gunner_FalconStrike_K2Node_ComponentBoundEvent_0_WeaponUsedEvent__DelegateSignature_Weapon_Hardpoint_FalconStrike_DumbFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Weapon_HardType_FalconStrike_Targeting.Weapon_HardType_FalconStrike_Targeting_C.ExecuteUbergraph_Weapon_HardType_FalconStrike_Targeting
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWeapon_HardType_FalconStrike_Targeting_C::ExecuteUbergraph_Weapon_HardType_FalconStrike_Targeting(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weapon_HardType_FalconStrike_Targeting.Weapon_HardType_FalconStrike_Targeting_C.ExecuteUbergraph_Weapon_HardType_FalconStrike_Targeting");
		
		AWeapon_HardType_FalconStrike_Targeting_C_ExecuteUbergraph_Weapon_HardType_FalconStrike_Targeting_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapon_HardType_FalconStrike_Targeting_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapon_HardType_FalconStrike_Targeting_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_HardType_FalconStrike_Targeting.Weapon_HardType_FalconStrike_Targeting_C");
		return ptr;
	}

}


