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
	 * 		Name   -> Function Proj_Siren_DLCSkill_WalkingPotato_Attack_8.Proj_Siren_DLCSkill_WalkingPotato_Attack_7_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_Siren_DLCSkill_WalkingPotato_Attack_7_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Siren_DLCSkill_WalkingPotato_Attack_8.Proj_Siren_DLCSkill_WalkingPotato_Attack_7_C.UserConstructionScript");
		
		AProj_Siren_DLCSkill_WalkingPotato_Attack_7_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Siren_DLCSkill_WalkingPotato_Attack_8.Proj_Siren_DLCSkill_WalkingPotato_Attack_7_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AProj_Siren_DLCSkill_WalkingPotato_Attack_7_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Siren_DLCSkill_WalkingPotato_Attack_8.Proj_Siren_DLCSkill_WalkingPotato_Attack_7_C.ReceiveBeginPlay");
		
		AProj_Siren_DLCSkill_WalkingPotato_Attack_7_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Siren_DLCSkill_WalkingPotato_Attack_8.Proj_Siren_DLCSkill_WalkingPotato_Attack_7_C.SirenDLCActionSkill_OnCausedAnyDamage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DamageInstigator                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGbxDamageType*                              DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageSource*                               DamageSource                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamagedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCausedDamageDetails                        Details                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	 */
	void AProj_Siren_DLCSkill_WalkingPotato_Attack_7_C::SirenDLCActionSkill_OnCausedAnyDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Siren_DLCSkill_WalkingPotato_Attack_8.Proj_Siren_DLCSkill_WalkingPotato_Attack_7_C.SirenDLCActionSkill_OnCausedAnyDamage");
		
		AProj_Siren_DLCSkill_WalkingPotato_Attack_7_C_SirenDLCActionSkill_OnCausedAnyDamage_Params params {};
		params.DamageInstigator = DamageInstigator;
		params.Damage = Damage;
		params.DamageType = DamageType;
		params.DamageSource = DamageSource;
		params.DamagedActor = DamagedActor;
		params.Details = Details;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Siren_DLCSkill_WalkingPotato_Attack_8.Proj_Siren_DLCSkill_WalkingPotato_Attack_7_C.FireShotAtEnemy
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AProj_Siren_DLCSkill_WalkingPotato_Attack_7_C::FireShotAtEnemy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Siren_DLCSkill_WalkingPotato_Attack_8.Proj_Siren_DLCSkill_WalkingPotato_Attack_7_C.FireShotAtEnemy");
		
		AProj_Siren_DLCSkill_WalkingPotato_Attack_7_C_FireShotAtEnemy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Siren_DLCSkill_WalkingPotato_Attack_8.Proj_Siren_DLCSkill_WalkingPotato_Attack_7_C.StartFiringShots
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AProj_Siren_DLCSkill_WalkingPotato_Attack_7_C::StartFiringShots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Siren_DLCSkill_WalkingPotato_Attack_8.Proj_Siren_DLCSkill_WalkingPotato_Attack_7_C.StartFiringShots");
		
		AProj_Siren_DLCSkill_WalkingPotato_Attack_7_C_StartFiringShots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Siren_DLCSkill_WalkingPotato_Attack_8.Proj_Siren_DLCSkill_WalkingPotato_Attack_7_C.ExecuteUbergraph_Proj_Siren_DLCSkill_WalkingPotato_Attack_8
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProj_Siren_DLCSkill_WalkingPotato_Attack_7_C::ExecuteUbergraph_Proj_Siren_DLCSkill_WalkingPotato_Attack_8(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Siren_DLCSkill_WalkingPotato_Attack_8.Proj_Siren_DLCSkill_WalkingPotato_Attack_7_C.ExecuteUbergraph_Proj_Siren_DLCSkill_WalkingPotato_Attack_8");
		
		AProj_Siren_DLCSkill_WalkingPotato_Attack_7_C_ExecuteUbergraph_Proj_Siren_DLCSkill_WalkingPotato_Attack_8_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProj_Siren_DLCSkill_WalkingPotato_Attack_7_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProj_Siren_DLCSkill_WalkingPotato_Attack_7_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Proj_Siren_DLCSkill_WalkingPotato_Attack_8.Proj_Siren_DLCSkill_WalkingPotato_Attack_7_C");
		return ptr;
	}

}


