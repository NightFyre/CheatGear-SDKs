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
	 * 		Name   -> Function IBPChar_DigiClone.IBPChar_DigiClone_C.SetIsTeleporting
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsTeleporting                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UIBPChar_DigiClone_C::SetIsTeleporting(bool bIsTeleporting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IBPChar_DigiClone.IBPChar_DigiClone_C.SetIsTeleporting");
		
		UIBPChar_DigiClone_C_SetIsTeleporting_Params params {};
		params.bIsTeleporting = bIsTeleporting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IBPChar_DigiClone.IBPChar_DigiClone_C.StartProvoke
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UIBPChar_DigiClone_C::StartProvoke()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IBPChar_DigiClone.IBPChar_DigiClone_C.StartProvoke");
		
		UIBPChar_DigiClone_C_StartProvoke_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IBPChar_DigiClone.IBPChar_DigiClone_C.OnDigicloneTeleport
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UIBPChar_DigiClone_C::OnDigicloneTeleport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IBPChar_DigiClone.IBPChar_DigiClone_C.OnDigicloneTeleport");
		
		UIBPChar_DigiClone_C_OnDigicloneTeleport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IBPChar_DigiClone.IBPChar_DigiClone_C.UpdateMaxTeleportRange
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UIBPChar_DigiClone_C::UpdateMaxTeleportRange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IBPChar_DigiClone.IBPChar_DigiClone_C.UpdateMaxTeleportRange");
		
		UIBPChar_DigiClone_C_UpdateMaxTeleportRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IBPChar_DigiClone.IBPChar_DigiClone_C.DigiCloneThrowGrenade
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UIBPChar_DigiClone_C::DigiCloneThrowGrenade()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IBPChar_DigiClone.IBPChar_DigiClone_C.DigiCloneThrowGrenade");
		
		UIBPChar_DigiClone_C_DigiCloneThrowGrenade_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IBPChar_DigiClone.IBPChar_DigiClone_C.AutomagicallyRemoveDamageOverride
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UIBPChar_DigiClone_C::AutomagicallyRemoveDamageOverride()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IBPChar_DigiClone.IBPChar_DigiClone_C.AutomagicallyRemoveDamageOverride");
		
		UIBPChar_DigiClone_C_AutomagicallyRemoveDamageOverride_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IBPChar_DigiClone.IBPChar_DigiClone_C.AutomagicallyRegisterDamageOverride
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EOakElementalType                                  ElementalType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Grade                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UIBPChar_DigiClone_C::AutomagicallyRegisterDamageOverride(EOakElementalType ElementalType, int32_t Grade)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IBPChar_DigiClone.IBPChar_DigiClone_C.AutomagicallyRegisterDamageOverride");
		
		UIBPChar_DigiClone_C_AutomagicallyRegisterDamageOverride_Params params {};
		params.ElementalType = ElementalType;
		params.Grade = Grade;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IBPChar_DigiClone.IBPChar_DigiClone_C.ReleaseDigiclone
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UIBPChar_DigiClone_C::ReleaseDigiclone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IBPChar_DigiClone.IBPChar_DigiClone_C.ReleaseDigiclone");
		
		UIBPChar_DigiClone_C_ReleaseDigiclone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IBPChar_DigiClone.IBPChar_DigiClone_C.KillDigiCloneNow
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UIBPChar_DigiClone_C::KillDigiCloneNow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IBPChar_DigiClone.IBPChar_DigiClone_C.KillDigiCloneNow");
		
		UIBPChar_DigiClone_C_KillDigiCloneNow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IBPChar_DigiClone.IBPChar_DigiClone_C.BlowUpDigiClone
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UIBPChar_DigiClone_C::BlowUpDigiClone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IBPChar_DigiClone.IBPChar_DigiClone_C.BlowUpDigiClone");
		
		UIBPChar_DigiClone_C_BlowUpDigiClone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IBPChar_DigiClone.IBPChar_DigiClone_C.StopScalingDigiClone
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UIBPChar_DigiClone_C::StopScalingDigiClone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IBPChar_DigiClone.IBPChar_DigiClone_C.StopScalingDigiClone");
		
		UIBPChar_DigiClone_C_StopScalingDigiClone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IBPChar_DigiClone.IBPChar_DigiClone_C.BeginScalingDigiClone
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UIBPChar_DigiClone_C::BeginScalingDigiClone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IBPChar_DigiClone.IBPChar_DigiClone_C.BeginScalingDigiClone");
		
		UIBPChar_DigiClone_C_BeginScalingDigiClone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IBPChar_DigiClone.IBPChar_DigiClone_C.Get Owners Grenade Projectile Class
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Grenade_Projectile_Class                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UIBPChar_DigiClone_C::Get_Owners_Grenade_Projectile_Class(class UClass** Grenade_Projectile_Class)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IBPChar_DigiClone.IBPChar_DigiClone_C.Get Owners Grenade Projectile Class");
		
		UIBPChar_DigiClone_C_Get_Owners_Grenade_Projectile_Class_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Grenade_Projectile_Class != nullptr)
			*Grenade_Projectile_Class = params.Grenade_Projectile_Class;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIBPChar_DigiClone_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIBPChar_DigiClone_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass IBPChar_DigiClone.IBPChar_DigiClone_C");
		return ptr;
	}

}


