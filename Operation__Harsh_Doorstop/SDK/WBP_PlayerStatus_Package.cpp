/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_PlayerStatus.WBP_PlayerStatus_C.SetPlayerEffectVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     EffectWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_PlayerStatus_C::SetPlayerEffectVisibility(class UWidget* EffectWidget, bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatus.WBP_PlayerStatus_C.SetPlayerEffectVisibility");
		
		UWBP_PlayerStatus_C_SetPlayerEffectVisibility_Params params {};
		params.EffectWidget = EffectWidget;
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_PlayerStatus.WBP_PlayerStatus_C.SetMedicHealingEffectVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_PlayerStatus_C::SetMedicHealingEffectVisibility(bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatus.WBP_PlayerStatus_C.SetMedicHealingEffectVisibility");
		
		UWBP_PlayerStatus_C_SetMedicHealingEffectVisibility_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_PlayerStatus.WBP_PlayerStatus_C.SetAmmoResupplyEffectVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_PlayerStatus_C::SetAmmoResupplyEffectVisibility(bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatus.WBP_PlayerStatus_C.SetAmmoResupplyEffectVisibility");
		
		UWBP_PlayerStatus_C_SetAmmoResupplyEffectVisibility_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_PlayerStatus.WBP_PlayerStatus_C.OwnerSetHealth
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewValueNorm                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              OldValueNorm                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInitial                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_PlayerStatus_C::OwnerSetHealth(float NewValueNorm, float OldValueNorm, bool bInitial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatus.WBP_PlayerStatus_C.OwnerSetHealth");
		
		UWBP_PlayerStatus_C_OwnerSetHealth_Params params {};
		params.NewValueNorm = NewValueNorm;
		params.OldValueNorm = OldValueNorm;
		params.bInitial = bInitial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_PlayerStatus.WBP_PlayerStatus_C.OwnerSetSprintStamina
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewValueNorm                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              OldValueNorm                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInitial                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_PlayerStatus_C::OwnerSetSprintStamina(float NewValueNorm, float OldValueNorm, bool bInitial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatus.WBP_PlayerStatus_C.OwnerSetSprintStamina");
		
		UWBP_PlayerStatus_C_OwnerSetSprintStamina_Params params {};
		params.NewValueNorm = NewValueNorm;
		params.OldValueNorm = OldValueNorm;
		params.bInitial = bInitial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_PlayerStatus.WBP_PlayerStatus_C.OwnerSetJumpStamina
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewValueNorm                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              OldValueNorm                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInitial                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_PlayerStatus_C::OwnerSetJumpStamina(float NewValueNorm, float OldValueNorm, bool bInitial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatus.WBP_PlayerStatus_C.OwnerSetJumpStamina");
		
		UWBP_PlayerStatus_C_OwnerSetJumpStamina_Params params {};
		params.NewValueNorm = NewValueNorm;
		params.OldValueNorm = OldValueNorm;
		params.bInitial = bInitial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_PlayerStatus.WBP_PlayerStatus_C.OwnerStartSprint
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UWBP_PlayerStatus_C::OwnerStartSprint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatus.WBP_PlayerStatus_C.OwnerStartSprint");
		
		UWBP_PlayerStatus_C_OwnerStartSprint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_PlayerStatus.WBP_PlayerStatus_C.OwnerEndSprint
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UWBP_PlayerStatus_C::OwnerEndSprint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatus.WBP_PlayerStatus_C.OwnerEndSprint");
		
		UWBP_PlayerStatus_C_OwnerEndSprint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_PlayerStatus.WBP_PlayerStatus_C.OwnerUpdateStamina
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		float                                              SprintValueNorm                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              JumpValueNorm                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInitial                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_PlayerStatus_C::OwnerUpdateStamina(float SprintValueNorm, float JumpValueNorm, bool bInitial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatus.WBP_PlayerStatus_C.OwnerUpdateStamina");
		
		UWBP_PlayerStatus_C_OwnerUpdateStamina_Params params {};
		params.SprintValueNorm = SprintValueNorm;
		params.JumpValueNorm = JumpValueNorm;
		params.bInitial = bInitial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_PlayerStatus.WBP_PlayerStatus_C.OwnerSetStanceState
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EHDUICharacterStanceState                          NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EHDUICharacterStanceState                          OldState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInitial                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_PlayerStatus_C::OwnerSetStanceState(EHDUICharacterStanceState NewState, EHDUICharacterStanceState OldState, bool bInitial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatus.WBP_PlayerStatus_C.OwnerSetStanceState");
		
		UWBP_PlayerStatus_C_OwnerSetStanceState_Params params {};
		params.NewState = NewState;
		params.OldState = OldState;
		params.bInitial = bInitial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_PlayerStatus.WBP_PlayerStatus_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWBP_PlayerStatus_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatus.WBP_PlayerStatus_C.Construct");
		
		UWBP_PlayerStatus_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_PlayerStatus.WBP_PlayerStatus_C.OwnerActivatePlayerEffect
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     EffectIndicatorWidget                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_PlayerStatus_C::OwnerActivatePlayerEffect(class UWidget* EffectIndicatorWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatus.WBP_PlayerStatus_C.OwnerActivatePlayerEffect");
		
		UWBP_PlayerStatus_C_OwnerActivatePlayerEffect_Params params {};
		params.EffectIndicatorWidget = EffectIndicatorWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_PlayerStatus.WBP_PlayerStatus_C.OwnerDeactivatePlayerEffect
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     EffectIndicatorWidget                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_PlayerStatus_C::OwnerDeactivatePlayerEffect(class UWidget* EffectIndicatorWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatus.WBP_PlayerStatus_C.OwnerDeactivatePlayerEffect");
		
		UWBP_PlayerStatus_C_OwnerDeactivatePlayerEffect_Params params {};
		params.EffectIndicatorWidget = EffectIndicatorWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_PlayerStatus.WBP_PlayerStatus_C.BPOwnerDeath
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       VictimPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AController*                                 VictimController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              KillingDamage                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDamageEvent                                DamageEvent                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class APawn*                                       InstigatingPawn                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_PlayerStatus_C::BPOwnerDeath(class APawn* VictimPawn, class AController* VictimController, float KillingDamage, const struct FDamageEvent& DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatus.WBP_PlayerStatus_C.BPOwnerDeath");
		
		UWBP_PlayerStatus_C_BPOwnerDeath_Params params {};
		params.VictimPawn = VictimPawn;
		params.VictimController = VictimController;
		params.KillingDamage = KillingDamage;
		params.DamageEvent = DamageEvent;
		params.InstigatingPawn = InstigatingPawn;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_PlayerStatus.WBP_PlayerStatus_C.ExecuteUbergraph_WBP_PlayerStatus
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_PlayerStatus_C::ExecuteUbergraph_WBP_PlayerStatus(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatus.WBP_PlayerStatus_C.ExecuteUbergraph_WBP_PlayerStatus");
		
		UWBP_PlayerStatus_C_ExecuteUbergraph_WBP_PlayerStatus_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_PlayerStatus_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_PlayerStatus_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_PlayerStatus.WBP_PlayerStatus_C");
		return ptr;
	}

}


