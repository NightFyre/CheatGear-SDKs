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
	 * 		Name   -> Function WeaponType_Hardpoints_BearFist_Projectile.WeaponType_Hardpoints_BearFist_Projectile_C.InnerSetHandVisible
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeaponType_Hardpoints_BearFist_Projectile_C::InnerSetHandVisible(bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponType_Hardpoints_BearFist_Projectile.WeaponType_Hardpoints_BearFist_Projectile_C.InnerSetHandVisible");
		
		AWeaponType_Hardpoints_BearFist_Projectile_C_InnerSetHandVisible_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function WeaponType_Hardpoints_BearFist_Projectile.WeaponType_Hardpoints_BearFist_Projectile_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeaponType_Hardpoints_BearFist_Projectile_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponType_Hardpoints_BearFist_Projectile.WeaponType_Hardpoints_BearFist_Projectile_C.UserConstructionScript");
		
		AWeaponType_Hardpoints_BearFist_Projectile_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function WeaponType_Hardpoints_BearFist_Projectile.WeaponType_Hardpoints_BearFist_Projectile_C.OnAnimEnd_7F5D255649D94023774957950F0FEBE1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AWeaponType_Hardpoints_BearFist_Projectile_C::OnAnimEnd_7F5D255649D94023774957950F0FEBE1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponType_Hardpoints_BearFist_Projectile.WeaponType_Hardpoints_BearFist_Projectile_C.OnAnimEnd_7F5D255649D94023774957950F0FEBE1");
		
		AWeaponType_Hardpoints_BearFist_Projectile_C_OnAnimEnd_7F5D255649D94023774957950F0FEBE1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function WeaponType_Hardpoints_BearFist_Projectile.WeaponType_Hardpoints_BearFist_Projectile_C.OnEnd_7F5D255649D94023774957950F0FEBE1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGbxActionEndState                                 EndState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWeaponType_Hardpoints_BearFist_Projectile_C::OnEnd_7F5D255649D94023774957950F0FEBE1(EGbxActionEndState EndState, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponType_Hardpoints_BearFist_Projectile.WeaponType_Hardpoints_BearFist_Projectile_C.OnEnd_7F5D255649D94023774957950F0FEBE1");
		
		AWeaponType_Hardpoints_BearFist_Projectile_C_OnEnd_7F5D255649D94023774957950F0FEBE1_Params params {};
		params.EndState = EndState;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function WeaponType_Hardpoints_BearFist_Projectile.WeaponType_Hardpoints_BearFist_Projectile_C.K2_Initialize
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AWeaponType_Hardpoints_BearFist_Projectile_C::K2_Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponType_Hardpoints_BearFist_Projectile.WeaponType_Hardpoints_BearFist_Projectile_C.K2_Initialize");
		
		AWeaponType_Hardpoints_BearFist_Projectile_C_K2_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function WeaponType_Hardpoints_BearFist_Projectile.WeaponType_Hardpoints_BearFist_Projectile_C.BndEvt__WeaponClipReload_K2Node_ComponentBoundEvent_1_WeaponReloadEndedEvent__DelegateSignature_WeaponType_Hardpoints_BearFist_Projectile
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bCompleted                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeaponType_Hardpoints_BearFist_Projectile_C::BndEvt__WeaponClipReload_K2Node_ComponentBoundEvent_1_WeaponReloadEndedEvent__DelegateSignature_WeaponType_Hardpoints_BearFist_Projectile(bool bCompleted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponType_Hardpoints_BearFist_Projectile.WeaponType_Hardpoints_BearFist_Projectile_C.BndEvt__WeaponClipReload_K2Node_ComponentBoundEvent_1_WeaponReloadEndedEvent__DelegateSignature_WeaponType_Hardpoints_BearFist_Projectile");
		
		AWeaponType_Hardpoints_BearFist_Projectile_C_BndEvt__WeaponClipReload_K2Node_ComponentBoundEvent_1_WeaponReloadEndedEvent__DelegateSignature_WeaponType_Hardpoints_BearFist_Projectile_Params params {};
		params.bCompleted = bCompleted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function WeaponType_Hardpoints_BearFist_Projectile.WeaponType_Hardpoints_BearFist_Projectile_C.SetHandVisible
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeaponType_Hardpoints_BearFist_Projectile_C::SetHandVisible(bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponType_Hardpoints_BearFist_Projectile.WeaponType_Hardpoints_BearFist_Projectile_C.SetHandVisible");
		
		AWeaponType_Hardpoints_BearFist_Projectile_C_SetHandVisible_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function WeaponType_Hardpoints_BearFist_Projectile.WeaponType_Hardpoints_BearFist_Projectile_C.NotifyPlayerLeaving
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeaponType_Hardpoints_BearFist_Projectile_C::NotifyPlayerLeaving()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponType_Hardpoints_BearFist_Projectile.WeaponType_Hardpoints_BearFist_Projectile_C.NotifyPlayerLeaving");
		
		AWeaponType_Hardpoints_BearFist_Projectile_C_NotifyPlayerLeaving_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function WeaponType_Hardpoints_BearFist_Projectile.WeaponType_Hardpoints_BearFist_Projectile_C.ExecuteUbergraph_WeaponType_Hardpoints_BearFist_Projectile
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWeaponType_Hardpoints_BearFist_Projectile_C::ExecuteUbergraph_WeaponType_Hardpoints_BearFist_Projectile(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponType_Hardpoints_BearFist_Projectile.WeaponType_Hardpoints_BearFist_Projectile_C.ExecuteUbergraph_WeaponType_Hardpoints_BearFist_Projectile");
		
		AWeaponType_Hardpoints_BearFist_Projectile_C_ExecuteUbergraph_WeaponType_Hardpoints_BearFist_Projectile_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeaponType_Hardpoints_BearFist_Projectile_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeaponType_Hardpoints_BearFist_Projectile_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeaponType_Hardpoints_BearFist_Projectile.WeaponType_Hardpoints_BearFist_Projectile_C");
		return ptr;
	}

}


