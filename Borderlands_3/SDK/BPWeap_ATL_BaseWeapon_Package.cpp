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
	 * 		Name   -> Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.InitHoming
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPWeap_ATL_BaseWeapon_C::InitHoming()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.InitHoming");
		
		ABPWeap_ATL_BaseWeapon_C_InitHoming_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.InitMarkerGlow
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABPWeap_ATL_BaseWeapon_C::InitMarkerGlow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.InitMarkerGlow");
		
		ABPWeap_ATL_BaseWeapon_C_InitMarkerGlow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.InitBaseGlow
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABPWeap_ATL_BaseWeapon_C::InitBaseGlow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.InitBaseGlow");
		
		ABPWeap_ATL_BaseWeapon_C_InitBaseGlow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.AddHomingTarget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      HomingTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPWeap_ATL_BaseWeapon_C::AddHomingTarget(class AActor* HomingTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.AddHomingTarget");
		
		ABPWeap_ATL_BaseWeapon_C_AddHomingTarget_Params params {};
		params.HomingTarget = HomingTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.RemoveHomingTarget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      HomingTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPWeap_ATL_BaseWeapon_C::RemoveHomingTarget(class AActor* HomingTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.RemoveHomingTarget");
		
		ABPWeap_ATL_BaseWeapon_C_RemoveHomingTarget_Params params {};
		params.HomingTarget = HomingTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPWeap_ATL_BaseWeapon_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.UserConstructionScript");
		
		ABPWeap_ATL_BaseWeapon_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.Initialize Elemental Emissive
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPWeap_ATL_BaseWeapon_C::Initialize_Elemental_Emissive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.Initialize Elemental Emissive");
		
		ABPWeap_ATL_BaseWeapon_C_Initialize_Elemental_Emissive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.NotifySwitchedMode_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPWeap_ATL_BaseWeapon_C::NotifySwitchedMode_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.NotifySwitchedMode_Event");
		
		ABPWeap_ATL_BaseWeapon_C_NotifySwitchedMode_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.SetEmissiveData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                BaseColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                HighlightColor                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                MarkerBaseColor                                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                MarkerHighlightColor                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                HomingOverrideBase                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                NewParamHomingOverrideHighlight                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPWeap_ATL_BaseWeapon_C::SetEmissiveData(const struct FLinearColor& BaseColor, const struct FLinearColor& HighlightColor, const struct FLinearColor& MarkerBaseColor, const struct FLinearColor& MarkerHighlightColor, const struct FLinearColor& HomingOverrideBase, const struct FLinearColor& NewParamHomingOverrideHighlight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.SetEmissiveData");
		
		ABPWeap_ATL_BaseWeapon_C_SetEmissiveData_Params params {};
		params.BaseColor = BaseColor;
		params.HighlightColor = HighlightColor;
		params.MarkerBaseColor = MarkerBaseColor;
		params.MarkerHighlightColor = MarkerHighlightColor;
		params.HomingOverrideBase = HomingOverrideBase;
		params.NewParamHomingOverrideHighlight = NewParamHomingOverrideHighlight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.ReEvaluateEmissive
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPWeap_ATL_BaseWeapon_C::ReEvaluateEmissive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.ReEvaluateEmissive");
		
		ABPWeap_ATL_BaseWeapon_C_ReEvaluateEmissive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABPWeap_ATL_BaseWeapon_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.ReceiveBeginPlay");
		
		ABPWeap_ATL_BaseWeapon_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.Notify_ReloadStarted
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bAutoReload                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPWeap_ATL_BaseWeapon_C::Notify_ReloadStarted(bool bAutoReload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.Notify_ReloadStarted");
		
		ABPWeap_ATL_BaseWeapon_C_Notify_ReloadStarted_Params params {};
		params.bAutoReload = bAutoReload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.Weapon_NotifyPutDown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AWeapon*                                     EventWeapon                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPWeap_ATL_BaseWeapon_C::Weapon_NotifyPutDown(class AWeapon* EventWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.Weapon_NotifyPutDown");
		
		ABPWeap_ATL_BaseWeapon_C_Weapon_NotifyPutDown_Params params {};
		params.EventWeapon = EventWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.ExecuteUbergraph_BPWeap_ATL_BaseWeapon
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPWeap_ATL_BaseWeapon_C::ExecuteUbergraph_BPWeap_ATL_BaseWeapon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.ExecuteUbergraph_BPWeap_ATL_BaseWeapon");
		
		ABPWeap_ATL_BaseWeapon_C_ExecuteUbergraph_BPWeap_ATL_BaseWeapon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPWeap_ATL_BaseWeapon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPWeap_ATL_BaseWeapon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C");
		return ptr;
	}

}


