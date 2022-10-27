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
	 * 		Name   -> Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.Get Owners Grenade Projectile Class
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Grenade_Projectile_Class                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_DigiClone_Base_C::Get_Owners_Grenade_Projectile_Class(class UClass** Grenade_Projectile_Class)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.Get Owners Grenade Projectile Class");
		
		ABPChar_DigiClone_Base_C_Get_Owners_Grenade_Projectile_Class_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Grenade_Projectile_Class != nullptr)
			*Grenade_Projectile_Class = params.Grenade_Projectile_Class;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.HandleTeleportSwapEnd
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_DigiClone_Base_C::HandleTeleportSwapEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.HandleTeleportSwapEnd");
		
		ABPChar_DigiClone_Base_C_HandleTeleportSwapEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.HandleTeleportSwapStart
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_DigiClone_Base_C::HandleTeleportSwapStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.HandleTeleportSwapStart");
		
		ABPChar_DigiClone_Base_C_HandleTeleportSwapStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.TrySpawnLevelTwoWeapon
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AWeapon*                                     res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_DigiClone_Base_C::TrySpawnLevelTwoWeapon(class AWeapon** res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.TrySpawnLevelTwoWeapon");
		
		ABPChar_DigiClone_Base_C_TrySpawnLevelTwoWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.ConfigureMinMax
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_DigiClone_Base_C::ConfigureMinMax()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.ConfigureMinMax");
		
		ABPChar_DigiClone_Base_C_ConfigureMinMax_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.OnRep_bIsNotUsingMummersWeapon
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_DigiClone_Base_C::OnRep_bIsNotUsingMummersWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.OnRep_bIsNotUsingMummersWeapon");
		
		ABPChar_DigiClone_Base_C_OnRep_bIsNotUsingMummersWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.ApplyOperativeWeaponMaterials
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AWeapon*                                     Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_DigiClone_Base_C::ApplyOperativeWeaponMaterials(class AWeapon* Weapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.ApplyOperativeWeaponMaterials");
		
		ABPChar_DigiClone_Base_C_ApplyOperativeWeaponMaterials_Params params {};
		params.Weapon = Weapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.TryConfigureTrapCard
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_DigiClone_Base_C::TryConfigureTrapCard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.TryConfigureTrapCard");
		
		ABPChar_DigiClone_Base_C_TryConfigureTrapCard_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.ConfigureShield
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_DigiClone_Base_C::ConfigureShield()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.ConfigureShield");
		
		ABPChar_DigiClone_Base_C_ConfigureShield_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.SpawnDefaultWeapon
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class AWeapon* ABPChar_DigiClone_Base_C::SpawnDefaultWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.SpawnDefaultWeapon");
		
		ABPChar_DigiClone_Base_C_SpawnDefaultWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.TryConfigureAbstractGrenades
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_DigiClone_Base_C::TryConfigureAbstractGrenades()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.TryConfigureAbstractGrenades");
		
		ABPChar_DigiClone_Base_C_TryConfigureAbstractGrenades_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.RemoveProvokeFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_DigiClone_Base_C::RemoveProvokeFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.RemoveProvokeFX");
		
		ABPChar_DigiClone_Base_C_RemoveProvokeFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.TryConfigureProvoke
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Provoke_equiped                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPChar_DigiClone_Base_C::TryConfigureProvoke(bool* Provoke_equiped)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.TryConfigureProvoke");
		
		ABPChar_DigiClone_Base_C_TryConfigureProvoke_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Provoke_equiped != nullptr)
			*Provoke_equiped = params.Provoke_equiped;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.TrySpawnMummersWeapon
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AWeapon*                                     Weapon                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_DigiClone_Base_C::TrySpawnMummersWeapon(class AWeapon** Weapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.TrySpawnMummersWeapon");
		
		ABPChar_DigiClone_Base_C_TrySpawnMummersWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Weapon != nullptr)
			*Weapon = params.Weapon;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.GetSizeIncreaseOperand
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_DigiClone_Base_C::GetSizeIncreaseOperand(float* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.GetSizeIncreaseOperand");
		
		ABPChar_DigiClone_Base_C_GetSizeIncreaseOperand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_DigiClone_Base_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.UserConstructionScript");
		
		ABPChar_DigiClone_Base_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.ScaleDigiClone__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABPChar_DigiClone_Base_C::ScaleDigiClone__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.ScaleDigiClone__FinishedFunc");
		
		ABPChar_DigiClone_Base_C_ScaleDigiClone__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.ScaleDigiClone__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABPChar_DigiClone_Base_C::ScaleDigiClone__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.ScaleDigiClone__UpdateFunc");
		
		ABPChar_DigiClone_Base_C_ScaleDigiClone__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.BlowUpDigiCloneTimeLine__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABPChar_DigiClone_Base_C::BlowUpDigiCloneTimeLine__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.BlowUpDigiCloneTimeLine__FinishedFunc");
		
		ABPChar_DigiClone_Base_C_BlowUpDigiCloneTimeLine__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.BlowUpDigiCloneTimeLine__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABPChar_DigiClone_Base_C::BlowUpDigiCloneTimeLine__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.BlowUpDigiCloneTimeLine__UpdateFunc");
		
		ABPChar_DigiClone_Base_C_BlowUpDigiCloneTimeLine__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABPChar_DigiClone_Base_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.ReceiveBeginPlay");
		
		ABPChar_DigiClone_Base_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPCharParent_DigiClone
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DamageReceiver                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_DigiClone_Base_C::BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPCharParent_DigiClone(class AActor* DamageReceiver, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPCharParent_DigiClone");
		
		ABPChar_DigiClone_Base_C_BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPCharParent_DigiClone_Params params {};
		params.DamageReceiver = DamageReceiver;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_0_CauseDeathDelegate__DelegateSignature_BPCharParent_DigiClone
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UDamageComponent*                            Damaged                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCausedDeathDetails                         Details                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABPChar_DigiClone_Base_C::BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_0_CauseDeathDelegate__DelegateSignature_BPCharParent_DigiClone(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_0_CauseDeathDelegate__DelegateSignature_BPCharParent_DigiClone");
		
		ABPChar_DigiClone_Base_C_BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_0_CauseDeathDelegate__DelegateSignature_BPCharParent_DigiClone_Params params {};
		params.Damaged = Damaged;
		params.Details = Details;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.BeginScalingDigiClone
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_DigiClone_Base_C::BeginScalingDigiClone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.BeginScalingDigiClone");
		
		ABPChar_DigiClone_Base_C_BeginScalingDigiClone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.StopScalingDigiClone
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_DigiClone_Base_C::StopScalingDigiClone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.StopScalingDigiClone");
		
		ABPChar_DigiClone_Base_C_StopScalingDigiClone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.BlowUpDigiClone
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_DigiClone_Base_C::BlowUpDigiClone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.BlowUpDigiClone");
		
		ABPChar_DigiClone_Base_C_BlowUpDigiClone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.KillDigiCloneNow
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_DigiClone_Base_C::KillDigiCloneNow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.KillDigiCloneNow");
		
		ABPChar_DigiClone_Base_C_KillDigiCloneNow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.ReleaseDigiclone
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_DigiClone_Base_C::ReleaseDigiclone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.ReleaseDigiclone");
		
		ABPChar_DigiClone_Base_C_ReleaseDigiclone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.OnDigicloneDied
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_DigiClone_Base_C::OnDigicloneDied()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.OnDigicloneDied");
		
		ABPChar_DigiClone_Base_C_OnDigicloneDied_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.DoExplode
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_DigiClone_Base_C::DoExplode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.DoExplode");
		
		ABPChar_DigiClone_Base_C_DoExplode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.AutomagicallyRegisterDamageOverride
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EOakElementalType                                  ElementalType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Grade                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_DigiClone_Base_C::AutomagicallyRegisterDamageOverride(EOakElementalType ElementalType, int32_t Grade)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.AutomagicallyRegisterDamageOverride");
		
		ABPChar_DigiClone_Base_C_AutomagicallyRegisterDamageOverride_Params params {};
		params.ElementalType = ElementalType;
		params.Grade = Grade;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.AutomagicallyRemoveDamageOverride
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_DigiClone_Base_C::AutomagicallyRemoveDamageOverride()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.AutomagicallyRemoveDamageOverride");
		
		ABPChar_DigiClone_Base_C_AutomagicallyRemoveDamageOverride_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.Automagically Deal Bonus Damage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      DamageSource                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_DigiClone_Base_C::Automagically_Deal_Bonus_Damage(class AActor* Actor, class UClass* DamageSource, float Damage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.Automagically Deal Bonus Damage");
		
		ABPChar_DigiClone_Base_C_Automagically_Deal_Bonus_Damage_Params params {};
		params.Actor = Actor;
		params.DamageSource = DamageSource;
		params.Damage = Damage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.DigiCloneThrowGrenade
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_DigiClone_Base_C::DigiCloneThrowGrenade()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.DigiCloneThrowGrenade");
		
		ABPChar_DigiClone_Base_C_DigiCloneThrowGrenade_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.SpawnDigiCloneGrenadeOnDeath
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_DigiClone_Base_C::SpawnDigiCloneGrenadeOnDeath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.SpawnDigiCloneGrenadeOnDeath");
		
		ABPChar_DigiClone_Base_C_SpawnDigiCloneGrenadeOnDeath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.UpdateMaxTeleportRange
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_DigiClone_Base_C::UpdateMaxTeleportRange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.UpdateMaxTeleportRange");
		
		ABPChar_DigiClone_Base_C_UpdateMaxTeleportRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.OnDigicloneTeleport
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_DigiClone_Base_C::OnDigicloneTeleport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.OnDigicloneTeleport");
		
		ABPChar_DigiClone_Base_C_OnDigicloneTeleport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.BndEvt__AICloak_K2Node_ComponentBoundEvent_0_AICloakEvent__DelegateSignature_BPChar_DigiClone_Base
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABPChar_DigiClone_Base_C::BndEvt__AICloak_K2Node_ComponentBoundEvent_0_AICloakEvent__DelegateSignature_BPChar_DigiClone_Base()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.BndEvt__AICloak_K2Node_ComponentBoundEvent_0_AICloakEvent__DelegateSignature_BPChar_DigiClone_Base");
		
		ABPChar_DigiClone_Base_C_BndEvt__AICloak_K2Node_ComponentBoundEvent_0_AICloakEvent__DelegateSignature_BPChar_DigiClone_Base_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.BndEvt__AICloak_K2Node_ComponentBoundEvent_1_AICloakEvent__DelegateSignature_BPChar_DigiClone_Base
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABPChar_DigiClone_Base_C::BndEvt__AICloak_K2Node_ComponentBoundEvent_1_AICloakEvent__DelegateSignature_BPChar_DigiClone_Base()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.BndEvt__AICloak_K2Node_ComponentBoundEvent_1_AICloakEvent__DelegateSignature_BPChar_DigiClone_Base");
		
		ABPChar_DigiClone_Base_C_BndEvt__AICloak_K2Node_ComponentBoundEvent_1_AICloakEvent__DelegateSignature_BPChar_DigiClone_Base_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.OnInventoryEquipped
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      InventoryActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInventorySlotData*                          SlotData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_DigiClone_Base_C::OnInventoryEquipped(class AActor* InventoryActor, class UInventorySlotData* SlotData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.OnInventoryEquipped");
		
		ABPChar_DigiClone_Base_C_OnInventoryEquipped_Params params {};
		params.InventoryActor = InventoryActor;
		params.SlotData = SlotData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.OnInventoryUnequipped
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      InventoryActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInventorySlotData*                          SlotData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_DigiClone_Base_C::OnInventoryUnequipped(class AActor* InventoryActor, class UInventorySlotData* SlotData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.OnInventoryUnequipped");
		
		ABPChar_DigiClone_Base_C_OnInventoryUnequipped_Params params {};
		params.InventoryActor = InventoryActor;
		params.SlotData = SlotData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.OnInventoryPickedUp
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      PickedUpActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Quantity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_DigiClone_Base_C::OnInventoryPickedUp(class AActor* PickedUpActor, int32_t Quantity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.OnInventoryPickedUp");
		
		ABPChar_DigiClone_Base_C_OnInventoryPickedUp_Params params {};
		params.PickedUpActor = PickedUpActor;
		params.Quantity = Quantity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_1_TakeAnyPipelineDamageDelegate__DelegateSignature_BPCharParent_DigiClone_UNIX1536311531
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UDamageComponent*                            DamageReceiver                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGbxDamageType*                              DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageSource*                               DamageSource                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AController*                                 InstigatedBy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageCauserComponent*                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FReceivedDamageDetails                      Details                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	 */
	void ABPChar_DigiClone_Base_C::BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_1_TakeAnyPipelineDamageDelegate__DelegateSignature_BPCharParent_DigiClone_UNIX1536311531(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_1_TakeAnyPipelineDamageDelegate__DelegateSignature_BPCharParent_DigiClone_UNIX1536311531");
		
		ABPChar_DigiClone_Base_C_BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_1_TakeAnyPipelineDamageDelegate__DelegateSignature_BPCharParent_DigiClone_UNIX1536311531_Params params {};
		params.DamageReceiver = DamageReceiver;
		params.Damage = Damage;
		params.DamageType = DamageType;
		params.DamageSource = DamageSource;
		params.InstigatedBy = InstigatedBy;
		params.DamageCauser = DamageCauser;
		params.Details = Details;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.StartProvoke
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_DigiClone_Base_C::StartProvoke()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.StartProvoke");
		
		ABPChar_DigiClone_Base_C_StartProvoke_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.Setup Lives of Others
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_DigiClone_Base_C::Setup_Lives_of_Others()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.Setup Lives of Others");
		
		ABPChar_DigiClone_Base_C_Setup_Lives_of_Others_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.BindDelegates
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_DigiClone_Base_C::BindDelegates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.BindDelegates");
		
		ABPChar_DigiClone_Base_C_BindDelegates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.OnWeaponEquipped
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AWeapon*                                     DetachedWeapon                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AWeapon*                                     AttachedWeapon                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWeaponSlotData*                             AttachedSlot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_DigiClone_Base_C::OnWeaponEquipped(class AWeapon* DetachedWeapon, class AWeapon* AttachedWeapon, class UWeaponSlotData* AttachedSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.OnWeaponEquipped");
		
		ABPChar_DigiClone_Base_C_OnWeaponEquipped_Params params {};
		params.DetachedWeapon = DetachedWeapon;
		params.AttachedWeapon = AttachedWeapon;
		params.AttachedSlot = AttachedSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.OnClientWeaponChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AWeapon*                                     NewWeapon                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AWeapon*                                     LastWeapon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_DigiClone_Base_C::OnClientWeaponChanged(class AWeapon* NewWeapon, class AWeapon* LastWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.OnClientWeaponChanged");
		
		ABPChar_DigiClone_Base_C_OnClientWeaponChanged_Params params {};
		params.NewWeapon = NewWeapon;
		params.LastWeapon = LastWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.OpenTrapCardGate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_DigiClone_Base_C::OpenTrapCardGate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.OpenTrapCardGate");
		
		ABPChar_DigiClone_Base_C_OpenTrapCardGate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_DigiClone_Base_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.ReceiveEndPlay");
		
		ABPChar_DigiClone_Base_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.SetIsTeleporting
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsTeleporting                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPChar_DigiClone_Base_C::SetIsTeleporting(bool bIsTeleporting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.SetIsTeleporting");
		
		ABPChar_DigiClone_Base_C_SetIsTeleporting_Params params {};
		params.bIsTeleporting = bIsTeleporting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.K2_OnMovementModeChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      PrevMovementMode                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EMovementMode                                      NewMovementMode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      PrevCustomMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      NewCustomMode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_DigiClone_Base_C::K2_OnMovementModeChanged(EMovementMode PrevMovementMode, EMovementMode NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.K2_OnMovementModeChanged");
		
		ABPChar_DigiClone_Base_C_K2_OnMovementModeChanged_Params params {};
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
	 * 		Name   -> Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.CheckIfStillFalling
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_DigiClone_Base_C::CheckIfStillFalling()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.CheckIfStillFalling");
		
		ABPChar_DigiClone_Base_C_CheckIfStillFalling_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.ExecuteUbergraph_BPChar_DigiClone_Base
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_DigiClone_Base_C::ExecuteUbergraph_BPChar_DigiClone_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.ExecuteUbergraph_BPChar_DigiClone_Base");
		
		ABPChar_DigiClone_Base_C_ExecuteUbergraph_BPChar_DigiClone_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPChar_DigiClone_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPChar_DigiClone_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_DigiClone_Base.BPChar_DigiClone_Base_C");
		return ptr;
	}

}


